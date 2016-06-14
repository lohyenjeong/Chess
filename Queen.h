#ifndef QUEEN_H
#define QUEEN_H

#include <vector> 
#include <map>
#include <string>
#include "BasePiece.h"

//class Queen inherits from the superclass BasePiece
class Queen : public BasePiece{

 public: 
  //Constructor for the Queen class
  Queen();

  //Destructor for the Queen class
  ~Queen();

  //Checks that the move to be made by the Queen piece is valid 
  //Returns true if invalid  
  //Else returns false 
  bool checkValid(string start, string end, map<string, BasePiece*> &currentBoard);
};

#endif
