/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Header Class for Guest Bedroom.
Derived from Room Class. A Guest Bedroom has furniture type
nightstand which has a pill inside the drawer to decrease player chances by 5.
*********************************************************************/
#include "GuestBedroom.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*********************************************************************
Function: Guest Room constructor
*********************************************************************/
GuestBedroom::GuestBedroom(){
  roomName = "Guest Room";
  furnitureName = "NightStand";
}

/*********************************************************************
Function: Check Furniture
*********************************************************************/
void GuestBedroom::checkFurniture(Player* p){
  cout << "You checked inside the nightstand and spent\n";
  cout << " 20 minutes searching the messy drawer. What a waste of time!\n";
  cout << "You have lost 2 chances to find your project!" << endl;
  p->decreaseChances(digThroughDrawer); //subtract 5 moves to player chances
}

/*********************************************************************
Function: Move to Room
Description: Returns a Room object depending on the choice the user enters
*********************************************************************/
Room* GuestBedroom::moveToRoom(){
  Room* currentRoom = NULL;
  InputVal checkInput;
  int whichRoom;

  cout << "\nThere is no project in here though." << endl;
  cout << "Which room would you like to explore next?" << endl;
  cout << "1.\tLeft\n2.\tRight\n3.\tUpstairs\n4.\tDownstairs" << endl;
  whichRoom = checkInput.validIntMinMax(1,4);

  if(whichRoom == 1){
    left = new MasterBedroom();
    currentRoom = left;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 2){
    right = new Bathroom();
    currentRoom = right;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 3){
    upstairs = new Playroom();
    currentRoom = upstairs;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 4){
    downstairs = new MediaRoom();
    currentRoom = downstairs;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }
  return currentRoom;
}
