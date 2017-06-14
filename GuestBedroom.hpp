/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Header Class for Guest Bedroom.
Derived from Room Class. A Guest Bedroom has furniture type
nightstand which has a pill inside the drawer to decrease player chances by 5.
*********************************************************************/
#ifndef GUESTBEDROOM_HPP
#define GUESTBEDROOM_HPP
#include "Room.hpp"
#include "MasterBedroom.hpp"
#include "Playroom.hpp"
#include "MediaRoom.hpp"
#include "Bathroom.hpp"

class GuestBedroom : public Room{
private:
  int digThroughDrawer = 2; //located in nightstand
public:
  GuestBedroom();
  void checkFurniture(Player*); // messy waste of time in nightstand player turns +=10
  Room* moveToRoom();
};
#endif
