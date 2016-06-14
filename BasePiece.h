#ifndef BASEPIECE_H
#define BASEPIECE_H

#include<vector>
#include <map>

//Superclass for the subclasses - King, Queen, Rook, Knight, Bishop and Pawn
class BasePiece{
 protected:
  //Bool that represents the colour of the piece 
  //White is false and black is true
  bool coloured;

  //String that stores the type of the piece
  //Specified during the construction of each piece in the child classes 
  string type;

  //Bool that stores whether it is the first move for the object
  //Is true if it is the first move
  bool firstMove;

 public:
  //Constructor for the BasePiece
  BasePiece();

  //Destructor for the BasePiece that is overridden in every child class
  virtual ~BasePiece() {};

  //Sets the bool coloured property of the object to true
  void setBlack();

  //Returns the bool coloured property of the object
  bool getColour();

  //Returns the string type property of the object
  string getType();

  //Returns the bool firstMove property of the object
  bool getFirstMove();

  //Sets the bool firstMove property of the object to false
  void setFirstMove();

  //Checks whether the piece will remain stationary
  //Returns true if stationary
  //Else returns false
  bool checkStationary(string start, string end);

  //Checks whether the piece is moving vertically
  //Returns false if it does
  //Else returns true
  bool checkVertical(string start, string end);

  //Checks whether the piece is moving horizontally
  //Returns false if it doe
  //Else returns true
  bool checkHorizontal(string start, string end);

  //Checks whether the piece is moving diagonally
  //Returns false if it does
  //Else returns true
  bool checkDiagonal(string start, string end);

  //Checks whether the piece is only moving one square
  //Used by the child classes King and Pawn only
  //Returns false if it does
  //Else returns true
  bool checkOneSquare(string start, string end);

  //Stores the positions that the piece has to go through to get to the destination
  vector<string> path(string start, string end);

  //Checks that the path between the piece's current position to the final position is clear
  //Returns false if it is clear
  //Else returns true
  bool checkPath(string start, string end, map<string, BasePiece*> &currentBoard);

  //Checks that the landing position is occupied by a member of the piece's own team
  //Returns false if it is not
  //Else returns true
  bool checkLandingPosition(string start, string end, map<string, BasePiece*> &currentBoard);

  //Stores all the possible moves of the piece at the position end
  vector<string> findAllMoves(string end, map<string, BasePiece*> &currentBoard);

  //Virtual function that checks the validity of the piece's move
  //Overridden in all child classes
  virtual bool checkValid(string start, string end, map<string, BasePiece*> &currentBoard) = 0;


};

#endif
