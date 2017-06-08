/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description:
*********************************************************************/
#include "Game.hpp"
#include "Room.hpp"
#include "InputVal.hpp"
#include <string>
#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*********************************************************************
Function: Game constructor
*********************************************************************/
Game::Game(){
  srand(time (NULL)); //to create random placement of key
}
/*********************************************************************
Function: Game destructor
*********************************************************************/
// ~Game(){}
/*********************************************************************
Function: Key Num
Description: Generates a random number to place key in a room
*********************************************************************/
int Game::keyNum(){
  int randNum = rand() % 100 + 1;
  return randNum;
}
/*********************************************************************
Function: Start Menu
Description: Gives intro to game and starts gameplay
*********************************************************************/
void Game::startMenu(){
  InputVal checkInput;
  int startGame;
  cout << "Welcome to the Haunted Mansion\n"<< endl;
  cout << "You are stuck inside the Haunted Mansion doomed to repeat CS 162";
  cout << " unless you find the key to get out.\n";
  cout << "The key is hidden in one of many rooms.\n\n";
  cout << "Press 1 to start on your journey to find the key.";

  startGame = checkInput.validIntMinMax(1,1);
  if(startGame == 1){
    play();
  }
}
void Game::moveToRoom(){
  cout << "Which room would you like to visit first?" << endl;

}
/*********************************************************************
Function: Place Key
Description: Gives intro to game and starts gameplay
*********************************************************************/
Room* Game::placeKey(int keyNum){
  Room* keyRoom = NULL;
  if(keyNum <= 100){
    cout << "Rand Key Num : " << keyNum << endl;
    //generate room
    keyRoom = new Room();
  }
  return keyRoom;
}
/*********************************************************************
Function: Play
Description: Begins Haunted Mansion game. Places Key, and calls
function to change Rooms (CREATE THIS FUNCTION)
*********************************************************************/
void Game::play(){
  Room* keyRoom = placeKey(keyNum());
  cout << "Great setup Kara!!" << endl;
  cout << "The key is placed in: " << keyRoom->getRoomName() << endl;
  cout << "Does this room have the key? " << keyRoom->hasKey() << endl;

  delete keyRoom; //this worked to freed the memory leak
}
