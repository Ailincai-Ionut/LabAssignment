#include "DynamicArrayTest.h"
#include "DynamicArray.h"
#include "Offer.h"
#include <cassert>
#include <iostream>

int DynamicArrayTest::test_create() {
  DynamicArray<Offer> a;
  assert(a.getCapacity() == 100);
  assert(a.getLength() == 0);

  a = DynamicArray<Offer>(10);
  assert(a.getCapacity() == 10);
  assert(a.getLength() == 0);
  return 0;
}

int DynamicArrayTest::test_getLength() {
  DynamicArray<Offer> a = DynamicArray<Offer>(10);
  DynamicArray<Offer> b(a);
  assert(a.getLength() == 0);
  assert(b.getLength() == 0);

  a.append(Offer());
  assert(a.getLength() == 1);

  for (int i = 0; i < 99; ++i)
    a.append(Offer());
  assert(a.getLength() == 100);
  DynamicArray<Offer> c;
  c = a;
  assert(c.getLength() == 100);
  a = a;
  DynamicArray<Offer> d(c);
  assert(d.getLength() == 100);
  return 0;
}

int DynamicArrayTest::test_getCapacity() {
  DynamicArray<Offer> a = DynamicArray<Offer>(1);
  assert(a.getCapacity() == 1);

  a.append(Offer());
  assert(a.getCapacity() == 1);

  a.append(Offer());
  assert(a.getCapacity() == 2);

  for (int i = 0; i < 999; ++i)
    a.append(Offer());
  assert(a.getCapacity() == 1024);

  return 0;
}

int DynamicArrayTest::test_append() {
  DynamicArray<Offer> a = DynamicArray<Offer>(1);
  a.append(Offer());
  a.append(Offer("2", "d1", "d1", "t1", 2, Date()));
  a.append(Offer("2", "d1", "d1", "t1", 2, Date()));
  assert(a.get(0).getId() == "0");
  assert(a.get(1).getId() == "2");
  return 0;
}

int DynamicArrayTest::test_popBack() {
  DynamicArray<Offer> a = DynamicArray<Offer>(1);
  a.append(Offer());
  a.append(Offer("2", "d1", "d1", "t1", 2, Date()));
  a.append(Offer("3", "d2", "d2", "t2", 44, Date()));
  a.popBack();
  assert(a.get(a.getLength() - 1).getId() == "2");
  a.popBack();
  assert(a.get(a.getLength() - 1).getId() == "0");
  a.popBack();
  try {
    a.popBack();
  } catch (int x) {
    if (x == -1)
      assert(true);
  }
  return 0;
}

int DynamicArrayTest::test_remove() {
  DynamicArray<Offer> a = DynamicArray<Offer>(1);
  a.append(Offer());
  a.append(Offer("2", "d1", "d1", "t1", 2, Date()));
  a.append(Offer("3", "d2", "d2", "t2", 44, Date()));
  a.remove(0);
  assert(a.get(0).getId() == "2");
  a.remove(1);
  assert(a.get(0).getId() == "2");
  assert(a.getLength() == 1);
  a.remove(0);
  assert(a.getLength() == 0);
  try {
    a.remove(5);
  } catch (int x) {
    if (x == -1)
      assert(true);
  }
  return 0;
}

int DynamicArrayTest::test_get() {
  DynamicArray<Offer> a = DynamicArray<Offer>(1);
  a.append(Offer());
  a.append(Offer("2", "d1", "d1", "t1", 2, Date()));
  a.append(Offer("3", "d2", "d2", "t2", 44, Date()));
  assert(a.get(0).getId() == "0");
  assert(a.get(1).getId() == "2");
  assert(a.get(2).getId() == "3");
  try {
    a.get(100);
  } catch (int x) {
    if (x == -1)
      assert(true);
  }
  return 0;
}

int DynamicArrayTest::test_show() {
  DynamicArray<Offer> a;
  cout << a;
  a.append(Offer());
  cout << a;
}

void DynamicArrayTest::runAllTests() {
  test_create();
  test_getLength();
  test_getCapacity();
  test_append();
  test_popBack();
  test_remove();
  test_get();
  test_show();
}
