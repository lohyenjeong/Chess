#ifndef KNIGHT_H
#define KNIGHT_H

#include <vector> 
#include <map>
#include <string>
#include "BasePiece.h"


//class Knight inherits from the superclass BasePiece
class Knight : public BasePiece{

 public:
  //Constructor for the Knight class
  Knight();

  //Destructor for the Knight class
  ~Knight();

  //Checks that the move to be made by the Knight is valid
  //Returns true if the move is invalid
  //Else returns false  
  bool checkValid(string start, string end, map<string, BasePiece*> &currentBoard);

  //Helper function for checkValid that checks that the move is of the correct shape
  //Returns true if invalid
  //Else returns false  
  bool checkLShape(string start, string end);

};

#endif
