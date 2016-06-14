#ifndef KING_H
#define KING_H

#include <vector> 
#include <map>
#include <string>
#include "BasePiece.h"

//class King inherits from the superclass BasePiece
class King : public BasePiece{

 public:
  //Constructor for the King class
  King();

  //Destructor for the King class
  ~King();

  //Checks whether the move to be made by the king is valid
  //Returns true if invalid
  //Else returns false
  bool checkValid(string start, string end, map<string, BasePiece*> &currentBoard);
  
};

#endif
