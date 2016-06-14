#ifndef BISHOP_H
#define BISHOP_H

#include <vector> 
#include <map>
#include <string>
#include "BasePiece.h"

// Bishop class that inherits from the superclass BasePiece
class Bishop : public BasePiece{

 public:

  //Constructor for Bishop
  Bishop();

  //Destructor for Bishop
  ~Bishop();

  //Checks that the move to be made by the Bishop is valid
  //Returns true if invalid
  //Else returns false
  bool checkValid(string start, string end, map<string, BasePiece*> &currentBoard);
};

#endif
