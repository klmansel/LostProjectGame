/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Player Header
*********************************************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Room.hpp"
#include <string>
#include <queue>
using std::string;
using std::queue;

class Room;
class Player {
private:
  Room* currRoom = NULL;
  int chances; //number of turns decrement every move
  //queue of objects
  queue<string>furnitureList;
public:
  Player();
  ~Player();
  void increaseChances(int item);
  int getChances();
  void setMoves(int);
  void setCurrLocation(Room*);
  Room* getCurrLocation();
  void decreaseChances(int item);
  void addStuffToBackPack(string);

};
#endif
