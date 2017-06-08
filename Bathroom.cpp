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
}
/*********************************************************************
Function: Check Furniture
*********************************************************************/
void Bathroom::checkFurniture(Player* p){
  cout << "You checked inside the medicine cabinet and found magic pills!\n";
  cout << "You have added 5 more chances to find the key!" << endl;
  p->increaseChances(magicPill); //add 5 moves to player chances
}
/*********************************************************************
Function: Check Closet
*********************************************************************/
void Bathroom::checkCloset(Player* p){
  while(!key){
  cout << "Bathroom Closet: insert cool thing here" << endl;
  }
  if(key)
  cout << "This shows up if you win" << endl;
}
