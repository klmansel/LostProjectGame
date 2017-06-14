/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Header Class for Playroom object
Derived from Room Class. A Playroom has furniture type
rocking chair which breaks when the player sits down to decrease player chances by 5.
*********************************************************************/
#include "Playroom.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*********************************************************************
Function: Playroom constructor
*********************************************************************/
Playroom::Playroom(){
  roomName = "Playroom";
  furnitureName = "Rocking Chair";
}
/*********************************************************************
Function: Check Furniture
*********************************************************************/
void Playroom::checkFurniture(Player* p){
  cout << "You sat in the rocking chair...and it broke!\n";
  cout << "You have lost 5 chances to find your project!" << endl;
  p->decreaseChances(rockingChair); //subtract 5 moves to player chances
}

/*********************************************************************
Function: Move to Room
Description: Returns a Room object depending on the choice the user enters
*********************************************************************/
Room* Playroom::moveToRoom(){
  Room* currentRoom = NULL;
  InputVal checkInput;
  int whichRoom;

  cout << "\nThere is no project in here though." << endl;
  cout << "Which room would you like to explore next?" << endl;
  cout << "1.\tRight\n2.\tDownstairs" << endl;
  whichRoom = checkInput.validIntMinMax(1,2);

  if(whichRoom == 1){
    right = new Office();
    currentRoom = right;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }else if(whichRoom == 2){
    downstairs = new GuestBedroom();
    currentRoom = downstairs;
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
  }
  return currentRoom;
}
