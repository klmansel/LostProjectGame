/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Base Class of object Room. Rooms have a name, a piece
of furniture, and a closet. Rooms do not have a key by default, but change
be assigned a key in the Game class at random. 
*********************************************************************/
#include "Room.hpp"

Room::Room(){
  roomName = "Hallway";
}

Room::~Room(){}

string Room::getRoomName(){
  return roomName;
}

bool Room::hasKey(){
  key = true;

  return key;
}
