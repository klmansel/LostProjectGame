/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Header Class for Playroom object
Derived from Room Class. A Playroom has furniture type
rocking chair which breaks when the player sits down to decrease player chances by 5.
*********************************************************************/
#ifndef PLAYROOM_HPP
#define PLAYROOM_HPP
#include "Room.hpp"
#include "GuestBedroom.hpp"
#include "Office.hpp"

class Playroom : public Room{
private:
  int rockingChair = 5;
public:
  Playroom();
  void checkFurniture(Player*);
  Room* moveToRoom();
};
#endif
