#ifndef ROOK_H
#define ROOK_H

#include <vector> 
#include <map>
#include <string>
#include "BasePiece.h"

//class Rook inherits from the superclass BasePiece
class Rook : public BasePiece{

 public:
  //Constructor for Rook
  Rook();

  //Deconstructor for Rook
  ~Rook();

  //Function that checks whether the Rook move is valid
  //Returns true if it is not
  //Else returns false
  bool checkValid(string start, string end, map<string, BasePiece*> &currentBoard);

  //Helper function for check valid that checks whether the move by the rook is in an L shape                                                                   
  //Returns true if it is not                                                              
  //Else returns false
  bool checkLShape(string start, string end);

};

#endif
