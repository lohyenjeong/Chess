#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <map>
#include <string>
#include <vector>
#include "King.h"
#include "Queen.h"
#include "Bishop.h"
#include "Knight.h"
#include "Rook.h"
#include "Pawn.h"

class ChessBoard{

  //Map for the ChessBoard that stores the position of individual pieces
  int turnCount;

  //Displays the colour of the current team in play
  //False is white
  //True is black
  bool teamInPlay;

  //Stores the location of the two kings at the currrent state of play
  string whiteKingPosition, blackKingPosition;

  //Creates a new ChessBoard where all pieces are at their correct starting positions
  void createBoard();

  //Clears the board of all pointers to pieces previously created
  void clearBoard();

  //Checks whether the move is valid
  //If it is not, returns true
  //Else returns false
  bool checkMove(string start, string end);

  //Checks whether the position specified is in the correct format
  //If it is not, return true and prints out relevant error message
  //Else returns false  
  bool checkFormat(string position);

  //Checks that the square is occupied
  //Returns true if it is not
  //Else returns false
  bool checkOccupied(string position);

  //Checks that the chesspiece in question is on the same team as the team in possession
  //Returns true if it is not
  //Else returns false   
  bool checkDifferentTeam(string position);

  //Makes move if this does not cause your team to be in check
  //Returns true if the move is not possible
  //Else returns false
  bool makeMove(string start, string end);

  //Checks whether the move causes the team to be checkmate
  //Returns true if it does
  //Else returns false
  bool checkCheckMate(string attacker, string kingPosition);

  //Checks whether the piece at positionAttacked can be attacked by the opposite team
  //Returns true if it does
  //Else returns false
  bool checkAttackable(string positionAttacked, bool positionAttackedColour);

  //Checks whether there is an escape path for the king
  //Returns true is there is none
  //Else returns false
  bool checkNoEscape(string kingPosition);

  //Checks whether any of the king's team mate can remove the threat
  //Returns true if there is none
  //Else returns false
  bool checkNoHelper(string attacker);

  //Checks whether any of the king's teammates can block the move
  //Returns true if there is none
  //Else returns false
  bool checkNoBlocker(string attacker, string kingPosition);

  //Checks whether there is a stalemate
  //Returns true if there is
  //Else returns false
  bool checkStaleMate();

  //Helper function for check stalemate
  //Checks whether the purported move causes the king to be checked
  //Returns true if it does
  //Else returns false   
  bool checkStaleMateHelper(string start, string end, bool teamChecked);

 public:
  //Stpres the current state of play
  map <string, BasePiece*> currentBoard;

  //Constructor for ChessBoard that initialises all the pieces at their correct starting positions  
  ChessBoard();

  //Destructor for the ChessBoard object
  ~ChessBoard();

  //Moves the piece at the position "start" to the new position "end" if the move is valid
  //Calls the functions that checks for checkmate and stalemate
  void submitMove(const char* start, const char* end);

  //Clears the currentBoard of its information and restarts it with all pieces at their starting positions
  void resetBoard();
};

#endif
