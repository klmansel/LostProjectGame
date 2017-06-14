#Author: Kara Mansel
#Date: 6/7/2017
#Project Name: FINAL PROJECT CS 162

CC=g++ -std=c++0x
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp InputVal.cpp Room.cpp Bathroom.cpp Game.cpp Player.cpp \
MediaRoom.cpp Office.cpp GuestBedroom.cpp MasterBedroom.cpp Playroom.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=OSUMansion

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.PHONY: clean

clean:
	rm *.o $(EXECUTABLE)

run:
	./$(EXECUTABLE)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
