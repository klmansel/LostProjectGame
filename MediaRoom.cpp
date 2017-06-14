/*********************************************************************
** Author: Kara Mansel
** Date: 6/8/2017
** Description: Implementation Class for Media Room.
Derived from Room Class. A Media Room has furniture type
recliner which has a lucky coin inside the cushions to increase
chances by 7.
*********************************************************************/
#include "MediaRoom.hpp"
#include "Room.hpp"
#include <string>

using std::string;
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
Function: Media Room constructor
*********************************************************************/
MediaRoom::MediaRoom(){
  roomName = "Media Room";
  furnitureName = "Recliner";
}
/*********************************************************************
Function: Check Furniture
*********************************************************************/
void MediaRoom::checkFurniture(Player* p){
  cout << "You checked inside the recliner and found a lucky coin!\n";
  cout << "You have added 7 more chances to find your project!" << endl;
  p->increaseChances(luckyCoin); //add 7 moves to player chances
}

/*********************************************************************
Function: Move to Room
Description: Returns a Room object depending on the choice the user enters
*********************************************************************/
Room* MediaRoom::moveToRoom(){
  Room* currentRoom = NULL;
  InputVal checkInput;
  int whichRoom;

  cout << "\nThere is no project in here though." << endl;
  cout << "Which room would you like to explore next?" << endl;
  cout << "1.\tUpstairs and Left\n2.\tUpstairs and Right\n3.\tUpstairs" << endl;
  whichRoom = checkInput.validIntMinMax(1,3);

  if(whichRoom == 1){
    left = new GuestBedroom();
    currentRoom = left;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 2){
    right = new MasterBedroom();
    currentRoom = right;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 3){
    upstairs = new Bathroom();
    currentRoom = upstairs;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }
  return currentRoom;
}
