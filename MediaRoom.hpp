/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Implementation Class for Media Room.
Derived from Room Class. A Media Room has furniture type
recliner which has a lucky coin inside the cushions to increase
chances by 7.
*********************************************************************/
#ifndef MEDIAROOM_HPP
#define MEDIAROOM_HPP
#include "Player.hpp"
#include "Room.hpp"
#include "Bathroom.hpp"
#include "GuestBedroom.hpp"
#include "MasterBedroom.hpp"

#include <string>

using std::string;

class MediaRoom : public Room{
private:
  int luckyCoin = 7; //located in recliner cushions
public:
  MediaRoom();
  void checkFurniture(Player*); // magicPill in cabinet player turns +=10
  Room* moveToRoom();
};
#endif
