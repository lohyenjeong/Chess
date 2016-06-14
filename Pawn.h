#ifndef PAWN_H
#define PAWN_H

#include <vector>
#include <map>
#include <string>
#include "BasePiece.h"
#include "ChessBoard.h"

class Pawn : public BasePiece{

 public:
  //Constructor for the pawn class
  Pawn();

  //Destructor for the pawn class
  ~Pawn();

  //Checks that the move to be made by the pawn piece is valid
  //Returns true if it is invalid
  //Else returns false   
  bool checkValid(string start, string end, map<string, BasePiece*> &currentBoard);

  //Helper function for checkValidWithoutTaking
  //Checks whether the move is vertically forward
  //Returns true if invalid
  //Else returns false 
  bool checkVerticalForward(string start, string end, map<string, BasePiece*> &currentBoard);

  //Helper function for checkValid
  //Checks validity of move when the Pawn will be landing on a space not occupied by the opposite team
  //Returns true if invalid
  //Else returns false
  bool checkValidWithoutTaking(string start, string end, map<string, BasePiece*> &currentBoard);

  //Helper function for checkValid
  //Checks validity of move when the Pawn will be landing on a space occupied by the opposite team
  //Returns true if invalid
  //Else returns false   
  bool checkValidWhileTaking(string start, string end);

  //Helper function for checkValidWithoutTaking
  //Checks that the move is two spaces forward
  //Returns true if invalid
  //Else returns false 
  bool checkTwoSquare(string start, string end);

  //Helper function for checkValidWhileTaking
  //Checks that the move is one space diagonal
  //Returns true if invalid
  //Else returns false  
  bool checkOneSquareDiagonal(string start, string end);
};

#endif

