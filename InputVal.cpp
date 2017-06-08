#include <cstdlib>
#include <iostream>
#include <limits>
#include "InputVal.hpp"
using std::cout;
using std::cin;
using std::endl;
//reference: http://www.cplusplus.com/reference/limits/numeric_limits/
int InputVal::validInt(){
  int userInt = 0;
  while(!(cin >> userInt)){
    cout << "Please enter a valid integer." << endl;
    cin.clear();
    cin.ignore(100, '\n');
  }
  return userInt;
}

int InputVal::validIntMinMax(const int LO, const int HI){
  int userInt;
  bool valid = false;

  do{
    //first confirm valid integer
    userInt = validInt();
    //upper and lower limits passed from parameters
    if(userInt > HI || userInt < LO){
      cout << "Please enter an integer between " << LO << " and " << HI << endl;
    }else{
      valid = true;
    }
  }while(!valid);

  return userInt;
}
