/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Player Implementation
*********************************************************************/
#include "Player.hpp"
#include <iostream>

Player::Player(){
  chances = 15;
}
// ~Player(){}
void Player::increaseChances(int item){
  chances += item;
}
int Player::getChances(){
  return chances;
}
void Player::setCurrLocation(Room* r){
  currRoom = r;
}
