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

  // Room* left = NULL;
  // Room* right = NULL;
  // Room* upstairs = NULL;
  // Room* downstairs = NULL;
}

Room* Room::getRight(){
  return right;
}
Room* Room::getLeft(){
  return left;
}
Room* Room::getUpstairs(){
  return upstairs;
}
Room* Room::getDownstairs(){
  return downstairs;
}

/*********************************************************************
Function: Get Room Name
*********************************************************************/
string Room::getRoomName(){
  return roomName;
}
/*********************************************************************
Function: Get Furniture Name
*********************************************************************/
string Room::getFurnitureName(){
  return furnitureName;
}

/*********************************************************************
Function: Check Furniture
*********************************************************************/
void Room::checkFurniture(Player*){
//virtual function
}

/*********************************************************************
Function: Move to Room
Description: Virtual Function that returns the next room the user can
visit
*********************************************************************/
Room* Room::moveToRoom(){
 return NULL;
}
/*********************************************************************
Function: Room destructor
*********************************************************************/
Room::~Room(){

}
