/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Base Class of object Room. Rooms have a name, a piece
of furniture, and a closet. Rooms do not have a key by default, but change
be assigned a key in the Game class at random.
*********************************************************************/
#include "Room.hpp"

/*********************************************************************
Function: Room constructor
*********************************************************************/
Room::Room(){
  roomName = "Hallway";
  furnitureName = "None";
  // Room* Bathroom = NULL; //pointer to BR object
  // Room* MediaRoom = NULL; //pointer to MR object
  // Room* Office = NULL; //pointer to Office object
  // Room* GuestRoom = NULL; //pointer to GR object
  // Room* Playroom = NULL; //pointer to PR object
  // Room* Master = NULL; //pointer to MBR object
}
/*********************************************************************
Function: Room destructor
*********************************************************************/
Room::~Room(){}
/*********************************************************************
Function: Get Room Name
*********************************************************************/
string Room::getRoomName(){
  return roomName;
}
/*********************************************************************
Function: Has Key
*********************************************************************/
bool Room::hasKey(){
  key = true;

  return key;
}
