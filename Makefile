OBJS	= Date.o Offer.o OfferTest.o DynamicArray.o DynamicArrayTest.o FilteringCriteria.o FilteringTest.o FilterPrice.o FilterType.o FilteringCriteriaTypeAndPrice.o main.o
OUT	= main
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 =

all: clean $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)
	rm -f $(OBJS) *.gch

Date.o:Date.cpp
	$(CC) $(FLAGS) Date.cpp

Offer.o:Offer.cpp
	$(CC) $(FLAGS) Offer.cpp

OfferTest.o:OfferTest.cpp
	$(CC) $(FLAGS) OfferTest.cpp

DynamicArray.o:DynamicArray.cpp
	$(CC) $(FLAGS) DynamicArray.cpp

DynamicArrayTest.o:DynamicArrayTest.cpp
	$(CC) $(FLAGS) DynamicArrayTest.cpp

FilteringCriteria.o:FilteringCriteria.cpp
	$(CC) $(FLAGS) FilteringCriteria.cpp

FilteringTest.o:FilteringTest.cpp
	$(CC) $(FLAGS) FilteringTest.cpp

FilterType.o:FilterType.cpp
	$(CC) $(FLAGS) FilterType.cpp

FilterPrice.o:FilterPrice.cpp
	$(CC) $(FLAGS) FilterPrice.cpp

FilteringCriteriaTypeAndPrice.o:FilteringCriteriaTypeAndPrice.cpp
	$(CC) $(FLAGS) FilteringCriteriaTypeAndPrice.cpp

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

clean:
	rm -f $(OBJS) $(OUT) *.gch

smt.o:smt.cpp
	$(CC) $(FLAGS) smt.cpp
