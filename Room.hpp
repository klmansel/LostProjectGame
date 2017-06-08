/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Header file for Room
Base Class of a Room object. Rooms have a name, a piece
of furniture, and a closet. Rooms do not have a key by default, but change
be assigned a key in the Game class at random.
*********************************************************************/
#ifndef ROOM_HPP
#define ROOM_HPP
#include "Game.hpp"
#include <string>

using std::string;

// class Player; //circular dependency issue
class Room {
protected:
  //piece of furniture
  //need 4 pointers UP, DOWN, LEFT, RIGHT??
  // Room* Bathroom; //pointer to BR object
  // Room* MediaRoom; //pointer to MR object
  // Room* Office; //pointer to Office object
  // Room* GuestRoom; //pointer to GR object
  // Room* Playroom; //pointer to PR object
  // Room* Master; //pointer to MBR object
  string roomName;
  bool key = false;
  string furnitureName;
public:
  Room();
  virtual ~Room();
  // virtual void checkCloset(Player*);//fix circular dependency issue
  // virtual void checkFurniture(Player*);
  string getRoomName();
  bool hasKey();  //depending on range of placeKey key is placed in room
};
#endif
