/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Player Implementation; A Player object has 15
chances to enter the room with the key to leave the Haunted Mansion
*********************************************************************/
#include "Player.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
Function: Player constructor
*********************************************************************/
Player::Player(){
  chances = 10;
}

void Player::setMoves(int c){
  chances = c;
}

void Player::addStuffToBackPack(string p){
  furnitureList.push(p);
}
/*********************************************************************
Function: Increase Chances
Description: Increments chances player has to enter rooms
Parameter: item, an integer from a Room
*********************************************************************/
void Player::increaseChances(int item){
  chances += item;
}
/*********************************************************************
Function: Decrease Chances
Description: Decrements chances player has to enter rooms
Parameter: item, an integer from a Room
*********************************************************************/
void Player::decreaseChances(int item){
  chances -= item;
}
/*********************************************************************
Function: Get Chances
Description: Returns number of chances player
*********************************************************************/
int Player::getChances(){

  return chances;
}
/*********************************************************************
Function: Set Current Location
Description: Increments chances player has to enter rooms
Parameter: item, an integer from a Room
*********************************************************************/
void Player::setCurrLocation(Room* r){
  currRoom = r;
}

Room* Player::getCurrLocation(){
  return currRoom;
}
/*********************************************************************
Function: Player destructor
*********************************************************************/
Player::~Player(){}
