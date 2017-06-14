/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: Header Class for Office.
Derived from Room Class. An Office has furniture type
file cabinet which has a lost bad grade inside to decrease player chances by 5.
*********************************************************************/
#ifndef OFFICE_HPP
#define OFFICE_HPP

#include "Room.hpp"
#include "Bathroom.hpp"
#include "Playroom.hpp"
#include "MasterBedroom.hpp"


class Office : public Room{
private:
  int lostGrade = 5; //located in file cabinet
public:
  Office();
  void checkFurniture(Player*); // bad grade in cabinet player turns +=5
  Room* moveToRoom();
};
#endif
