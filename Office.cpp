/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Header Class for Office.
Derived from Room Class. An Office has furniture type
file cabinet which has a pill inside to decrease player chances by 5.
*********************************************************************/
#include "Office.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*********************************************************************
Function: Office constructor
*********************************************************************/
Office::Office(){
  roomName = "Office";
  furnitureName = "File Cabinet";
}
/*********************************************************************
Function: Check Furniture
*********************************************************************/
void Office::checkFurniture(Player* p){
  cout << "You checked inside the file cabinet and found a missing\n";
  cout << " test grade. It's a D.\n";
  cout << "You have lost 5 chances to find your project!" << endl;
  p->decreaseChances(lostGrade); //subtract 5 moves to player chances
}

/*********************************************************************
Function: Move to Room
Description: Returns a Room object depending on the choice the user enters
*********************************************************************/
Room* Office::moveToRoom(){
  Room* currentRoom = NULL;
  InputVal checkInput;
  int whichRoom;

  cout << "\nThere is no project in here though." << endl;
  cout << "Which room would you like to explore next?" << endl;
  cout << "1.\tDownstairs and Left\n2.\tDownstairs and Right\n3.\tDownstairs" << endl;
  whichRoom = checkInput.validIntMinMax(1,3);

  if(whichRoom == 1){
    left = new Playroom();
    currentRoom = left;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 2){
    right = new MasterBedroom();
    currentRoom = right;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 3){
    downstairs = new Bathroom();
    currentRoom = downstairs;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }
  return currentRoom;
}
