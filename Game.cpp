/*********************************************************************
** Author: Kara Mansel
** Date: 6/7/2017
** Description: The Game engine for OSU Mansion: A text based Game
The user has to locate their project in one of 6 rooms before their
chances run out.
*********************************************************************/
#include "Game.hpp"
#include "Room.hpp"
#include "Bathroom.hpp"
#include "MediaRoom.hpp"
#include "Office.hpp"
#include "MasterBedroom.hpp"
#include "GuestBedroom.hpp"
#include "Playroom.hpp"
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
Function: Key Num
Description: Generates a random number to place key in a room
*********************************************************************/
int Game::keyNum(){
  int randNum = rand() % 120 + 1;
  return randNum;
}
/*********************************************************************
Function: Start Menu
Description: Gives intro to game and starts gameplay
*********************************************************************/
void Game::startMenu(){
  InputVal checkInput;
  int startGame;
  cout << "\n****** WELCOME TO THE OSU MANSION ******\n"<< endl;
  cout << "You are stuck inside the OSU Mansion doomed to repeat CS 162";
  cout << " unless you find your missing project to get out!\n\n";
  cout << "The project is hidden in one of 6 rooms.\n\n";
  cout << "Your goal is to successfully retrieve the project from it's hiding";
  cout << " place so that you can leave this mansion filled with memories ";
  cout << "of CS 162!\n\n";
  cout << "Press 1 to start on your journey to find your project.";

  startGame = checkInput.validIntMinMax(1,1);
  cout << endl;
  if(startGame == 1){
    play();
  }
}

/*********************************************************************
Function: Place Key (Key = Project)
Description: Gives intro to game and starts gameplay
*********************************************************************/
string Game::placeKey(int keyNum){
  string keyRoom;
  if(keyNum <= 5){
    keyRoom = "Bathroom";
  }else if(keyNum > 5 && keyNum <= 40){
    keyRoom = "Media Room";
  }else if(keyNum > 40 && keyNum <=60){
    keyRoom = "Office";
  }else if(keyNum > 60 && keyNum <=80){
    keyRoom = "Master Bedroom";
  }else if(keyNum > 80 && keyNum <= 100){
    keyRoom = "Guest Room";
  }else if(keyNum > 100 && keyNum <= 120){
    keyRoom = "Playroom";
  }
  return keyRoom;
}

/*********************************************************************
Function: Play
Description: Begins Haunted Mansion game. Places Key, and calls
function to change Rooms for # of player turns remaining
*********************************************************************/
void Game::play(){
  string keyRoom = placeKey(keyNum());

//start in the Hallway-default Room
  Room* currRoom = new Room();
  currPlayer->setMoves(5);
  int numMoves;
  numMoves = currPlayer->getChances();

  cout << "(HINT: The project is in the " << keyRoom << ")" << endl;

  cout << "You are currently in the " << currRoom->getRoomName() << endl;
  cout << "Let's start searching in the Bathroom" << endl;

  currRoom = new Bathroom();

  /*GAMEPLAY LOOP*/
  do{
    cout << "\nYou have " << numMoves << " chances to find your project.\n" << endl;

    bool foundKey = wonGame(keyRoom, currRoom);

      if(foundKey){
        numMoves = 0;
      }else{
        currRoom->checkFurniture(currPlayer);
        //choose another room
        Room* newRoom = currRoom->moveToRoom();
        currPlayer->setCurrLocation(newRoom);
        currRoom = currPlayer->getCurrLocation();
        //Decrement chances to find key each room change
        numMoves--;
        //Retrieve number of remaining chances
        numMoves = currPlayer->getChances();
      }
      if (numMoves <= 0 && foundKey == false){
        lostGame();
      }
  }while(numMoves > 0);

  delete currRoom;
}

/*WON GAME*/
bool Game::wonGame(string keyRoom, Room* current){
  string currRoomName = current->getRoomName();
  if(keyRoom == currRoomName){
    cout << "You've found the USB drive with your project!! It was in the ";
    cout << current->getFurnitureName() << " all along!" << endl;
    cout << "\n\nNow you can turn it in and enjoy your summer.";
    cout << " Thanks for playing!" << endl;
    return true;
  }else{
    return false;
  }

}
/*LOST GAME*/
void Game::lostGame(){
  cout << "GAME OVER! No more chances. You are doomed to repeat CS162.";
  cout << "Better luck next quarter!" << endl;
}
