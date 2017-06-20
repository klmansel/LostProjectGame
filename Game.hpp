/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description:The Game engine for OSU Mansion: A text based Game
The user has to locate their project in one of 6 rooms before their
chances run out. 
*********************************************************************/
#ifndef GAME_HPP
#define GAME_HPP
#include "Room.hpp"
#include "Player.hpp"
#include <string>
#include <iostream>

using std::string;

class Player;
class Room;
class Game {
private:
  Player* currPlayer;
public:
  Game();
  // ~Game(); //do I need this?? Not a pointer
  int keyNum();
  void startMenu();
  void play();
  string placeKey(int);
  // Room* moveToRoom(Player* p);
  bool wonGame(string, Room* current);
  void lostGame();
};
#endif
