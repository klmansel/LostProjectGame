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

#include "Player.hpp"
#include "InputVal.hpp"

#include <string>

using std::string;

class Player;
class Room {
protected:
  //Pointers to Rooms:

  Room* left;
  Room* right;
  Room* upstairs;
  Room* downstairs;

  string roomName;
  string furnitureName;
  bool key = false;
  bool visited = false;

public:
  //constructor and destructor (virtual)
  Room();
  virtual ~Room();
  //virtual functions
  virtual void checkFurniture(Player*);
  virtual Room* moveToRoom();
  //getters for identification
  string getRoomName();
  string getFurnitureName();
  Room* getRight();
  Room* getLeft();
  Room* getUpstairs();
  Room* getDownstairs();
  
};
#endif
