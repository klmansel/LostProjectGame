/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Header Class for Bathroom.
Derived from Room Class. A bathroom has furniture type
cabinet which has a pill inside to increase player turns by 10.
*********************************************************************/
#ifndef BATHROOM_HPP
#define BATHROOM_HPP
#include "Player.hpp"
#include "Room.hpp"
#include <string>

using std::string;

class Bathroom : public Room{
private:
  int magicPill = 5; //located in medicine cabinet
public:
  Bathroom();
  void checkCloset(Player*);
  void checkFurniture(Player*); // magicPill in cabinet player turns +=10
};
#endif
