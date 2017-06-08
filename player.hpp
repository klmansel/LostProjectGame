/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Player Header
*********************************************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Game.hpp"
#include <string>
using std::string;

class Room;
class Player {
private:
  Room* currRoom = NULL;
  int chances; //number of turns decrement every move
public:
  Player();
  // ~Player(); //fix this
  void increaseChances(int item);
  int getChances();
  void setCurrLocation(Room*);
//  void getCurrLocation();
};
#endif



//int player turns == 15 Can be increased by magic pill
//currLocation(Room* r){ currRoom = r}
