/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description:
*********************************************************************/
#ifndef ROOM_HPP
#define ROOM_HPP
#include <string>
using std::string;

class Room {
private:
  //piece of furniture
  string roomName;
  bool key = false;
public:
  Room();
  virtual ~Room();
  // virtual void checkCloset();
  // virtual void checkFurniture();
  string getRoomName();
  bool hasKey();  //depending on range of placeKey key is placed in room
};
#endif
