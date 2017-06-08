/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description:
*********************************************************************/
#ifndef GAME_HPP
#define GAME_HPP
#include "Room.hpp"
#include <string>
using std::string;

class Game {
private:
  // Player currPlayer; //may not need this
  //need 4 pointers UP, DOWN, LEFT, RIGHT??
  // Room* Bathroom; //pointer to BR object
  // Room* MediaRoom; //pointer to MR object
  // Room* Office; //pointer to Office object
  // Room* GuestRoom; //pointer to GR object
  // Room* Playroom; //pointer to PR object
  // Room* Master; //pointer to MBR object
public:
  Game();
  // ~Game(); //do I need this?? Not a pointer
  int keyNum();
  void startMenu();
  void play();
  Room* placeKey(int);
  void moveToRoom();
};
#endif
