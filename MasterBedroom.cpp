/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Implemetation file for Master Bedroom object
Derived from Room Class. A  Master Bedroom has furniture type
King Sized Bed which has an energy bar in the sheets. Eat it and get 5
chances.
*********************************************************************/
#include "MasterBedroom.hpp"
#include "Player.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*********************************************************************
Function: Master Bedroom constructor
*********************************************************************/
MasterBedroom::MasterBedroom(){
  roomName = "Master Bedroom";
  furnitureName = "King Sized Bed";
}
/*********************************************************************
Function: Check Furniture
*********************************************************************/
void MasterBedroom::checkFurniture(Player* p){
  cout << "You sit on the unmade bed and an unopened energy bar\n";
  cout << " falls onto the floor. You eat it and feel great!\n";
  cout << "You have 5 additional chances to find your project!" << endl;
  p->increaseChances(energyBar); //add 5 moves to player chances
}

/*********************************************************************
Function: Move to Room
Description: Returns a Room object depending on the choice the user enters
*********************************************************************/
Room* MasterBedroom::moveToRoom(){
  Room* currentRoom = NULL;
  InputVal checkInput;
  int whichRoom;

  cout << "\nThere is no project in here though." << endl;
  cout << "Which room would you like to explore next?" << endl;
  cout << "1.\tLeft\n2.\tRight\n3.\tUpstairs\n4.\tDownstairs" << endl;
  whichRoom = checkInput.validIntMinMax(1,4);

  if(whichRoom == 1){
    left = new Bathroom();
    currentRoom = left;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 2){
    right = new GuestBedroom();
    currentRoom = right;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 3){
    upstairs = new Office();
    currentRoom = upstairs;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 4){
    downstairs = new MediaRoom();
    currentRoom = downstairs;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }
  return currentRoom;
}
