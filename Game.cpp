/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description:
*********************************************************************/
#include "Game.hpp"
#include "Room.hpp"
#include "Bathroom.hpp"
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
Function: Game destructor //may not need
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
  cout << "Your goal is to successfully retrieve the key from it's hiding";
  cout << " place so that you can leave this mansion haunted with memories ";
  cout << "of CS 162!\n";
  cout << "Press 1 to start on your journey to find the key.";

  startGame = checkInput.validIntMinMax(1,1);
  if(startGame == 1){
    play();
  }
}
/*********************************************************************
Function: Move to Room
Description:
*********************************************************************/
void Game::moveToRoom(){
  Room* currentRoom = NULL;
  InputVal checkInput;
  int whichRoom;
  cout << "Which room would you like to visit first?" << endl;
  cout << "1.\tBathroom\n2.\tMediaRoom\n3.\tOffice\n4.\tGuestRoom\n";
  cout << "5.\tPlayroom\n6.Master" << endl;
  whichRoom = checkInput.validIntMinMax(1,5);

  if(whichRoom == 1){
    currentRoom = new Bathroom();
    currPlayer->setCurrLocation(currentRoom);
    cout << "You are now in the " << currentRoom->getRoomName() << endl;
    //do stuff in room (function for this-pass room)
  }
}
/*********************************************************************
Function: Place Key
Description: Gives intro to game and starts gameplay
*********************************************************************/
Room* Game::placeKey(int keyNum){
  Room* keyRoom = NULL;
  if(keyNum <= 50){
    cout << "Rand Key Num : " << keyNum << endl;
    //generate room
    keyRoom = new Room();
  }else if(keyNum > 50){
    cout << "Rand Key Num : " << keyNum << endl;
    //generate room
    keyRoom = new Bathroom();
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
