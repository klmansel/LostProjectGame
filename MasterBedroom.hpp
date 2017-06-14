/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Header Class for Master Bedroom.
Derived from Room Class. A  Master Bedroom has furniture type
King Sized Bed which has an energy bar in the sheets. Eat it and get 5
chances.
*********************************************************************/
#ifndef MASTERBEDROOM_HPP
#define MASTERBEDROOM_HPP
#include "Room.hpp"
#include "Bathroom.hpp"
#include "MediaRoom.hpp"
#include "Office.hpp"
#include "GuestBedroom.hpp"

class MasterBedroom : public Room{
private:
  int energyBar = 5; //located in bed sheets
public:
  MasterBedroom();
  void checkFurniture(Player*);
  Room* moveToRoom();
};
#endif
