/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Implementation of Bathroom.
Derived from Room Class. A bathroom has furniture type
cabinet which has a pill inside to increase player turns by 10.
*********************************************************************/
#include "Bathroom.hpp"

#include "Player.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*********************************************************************
Function: Bathroom constructor
*********************************************************************/
Bathroom::Bathroom(){
  roomName = "Bathroom";
  furnitureName = "Medicine Cabinet";
  visited = false;
}
/*********************************************************************
Function: Check Furniture
*********************************************************************/
void Bathroom::checkFurniture(Player* p){
  // string addStuff = getFurnitureName();
  //   cout << "Great! I found a " << addStuff << " to take back with me." << endl;
  //   p->addStuffToBackPack(addStuff);
    // cout << "You have already checked this room. Try a different one." << endl;
    cout << "You checked inside the medicine cabinet and found magic pills!\n";
    cout << "You have added 2 more chances to find your project!" << endl;
    p->increaseChances(magicPill); //add 5 moves to player chances

}

/*********************************************************************
Function: Move to Room
Description: Returns a Room object depending on the choice the user enters
*********************************************************************/
Room* Bathroom::moveToRoom(){
  visited = true;
  Room* currentRoom = NULL;
  InputVal checkInput;
  int whichRoom;

  cout << "\nThere is no project in here though." << endl;
  cout << "Which room would you like to explore next?" << endl;
  cout << "1.\tLeft\n2.\tRight\n3.\tUpstairs\n4.\tDownstairs" << endl;
  whichRoom = checkInput.validIntMinMax(1,4);

  if(whichRoom == 1){
    left = new GuestBedroom();
    currentRoom = left;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 2){
    right = new MasterBedroom();
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
