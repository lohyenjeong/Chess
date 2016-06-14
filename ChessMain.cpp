#include <iostream>

using namespace std;
#include <map>
#include "BasePiece.h"
#include "ChessBoard.h"
#include "Constants.h"
int main() {

    cout << "===========================" << endl;
    cout << "Testing the Chess Engine" << endl;
    cout << "===========================" << endl;
    cout << endl;

    ChessBoard cb;
    //cout << "ChessBoard was created" <<endl;
    cout << endl;

    
    //Not black's turn
    cb.submitMove("D7", "D6");
    cout << endl;

    //No piece at D4
    cb.submitMove("D4", "H6");
    cout << endl;

    //White Pawn moves
    cb.submitMove("D2", "D4");
    cout << endl;

    //Black Bishop cannot move
    cb.submitMove("F8", "B4");
    cout << endl;

    //Self created from here on
    //Too many characters

    cb.submitMove("A7", "A6");
    cout << endl;

    cb.submitMove("D4", "D5");
    cout << endl;


    cb.submitMove("F1D", "D2");
    cout << endl;

    // Not upper case
    cb.submitMove("12", "23");
    cout << endl;

    //Seond character not digit
    cb.submitMove("DD", "WD");
    cout << endl;

    // No position
    cb.submitMove("D2", "");
    cout<< endl;

    //Position is outside the file
    cb.submitMove("D2", "K2");
    cout<< endl;

    // Position is outside the rank
    cb.submitMove("D9", "D2");
    cout << endl;

    //Second position lower alphabet
    cb.submitMove("D2", "a8");
    cout << endl;

    //Black King cannot move because landing position is occupied by same team
    cb.submitMove("E8", "E7");
    cout << endl;

    //Black King cannot move because ending move is diagonal
    cb.submitMove("E8", "D7");
    cout << endl;

    //Black pawn moves two spaces ahead on first move
    cb.submitMove("A7", "A5");
    cout << endl;

    //Getting pawn in front of white king out of the way
    cb.submitMove("E2", "E4");
    cout << endl;

    //Moving black pawn in front of Queen
    cb.submitMove("D7", "D5");
    cout << endl;

    //Moving white king into unoccupied space but two spaces away
    cb.submitMove("E1", "E3");
    cout << endl;

    //Moving white king into correct space one step ahead
    cb.submitMove("E1", "E2");
    cout << endl;

    //Moving Black's Bishop to occupied position
    cb.submitMove("C8", "B7");
    cout << endl;

    //Moving Black's Queen to the same position
    cb.submitMove("D8", "D8");
    cout << endl;

    //Moving Black's Queen to position occupied by same team
    cb.submitMove("D8", "E7");
    cout << endl;

    //Black's knight cannot be moved because it is on the same square
    cb.submitMove("G8", "G8");
    cout << endl;

    //Black's Knight cannot be moved because it is an invalid shape
    cb.submitMove("G8", "G6");
    cout << endl;

    //Black's knight cannot be moved because of occupied position
    cb.submitMove("G8", "E7");
    cout << endl;

    //Black's knight move to valid position
    cb.submitMove("G8", "H6");
    cout << endl;

    //White's Rook cannot move diagonally
    cb.submitMove("H1", "F3");
    cout << endl;

    //White's Rook cannot move to occupied position
    cb.submitMove("H1", "H2");
    cout << endl;

    //White's Rook cannot move over uncleared path 
    cb.submitMove("H1", "H3");
    cout << endl;

    //Moves white pawn in front of rook away
    cb.submitMove("H2" , "H4");
    cout << endl;

    //Moves black pawn at D5 vertically one step to palce occupied by white pawn
    cb.submitMove("D5", "D4");
    cout << endl;

    //Moves black pawn diagonally to empty spot
    cb.submitMove("D5", "C4");
    cout << endl;

    //Moves black pawn for one step for the first move
    cb.submitMove("B7", "B6");
    cout << endl;

    //Moves white rook 
    cb.submitMove("H1", "H5");
    cout << endl;

    //Moves white rook 
    cb.submitMove("H1", "H3");
    cout << endl;

    //Moves black pawn for second time for two steps
    cb.submitMove("B6", "B4");
    cout << endl;

    //Moves black pawn for the second time for one step
    cb.submitMove("B6", "B5");
    cout << endl;

    //Moves white rook 
    cb.submitMove("H3", "G3");
    cout << endl;

    //Moves black pawn
    cb.submitMove("B5", "B4");
    cout << endl;

    //Moves white rook
    cb.submitMove("G3", "G6");
    cout << endl;

    //Black pawn eats rook
    cb.submitMove("H7", "G6");
    cout << endl;

    cout << "===========================" << endl;
    cout << "Alekhine vs. Vasic (1931)" << endl;
    cout << "===========================" << endl;
    cout << endl;

    cb.resetBoard();
    cout << endl;

    cb.submitMove("E2", "E4");
    cb.submitMove("E7", "E6");
    cout << endl;

    cb.submitMove("D2", "D4");
    cb.submitMove("D7", "D5");
    cout << endl;

    cb.submitMove("B1", "C3");
    cb.submitMove("F8", "B4");
    cout << endl;

    cb.submitMove("F1", "D3");
    cb.submitMove("B4", "C3");
    cout << endl;

    cb.submitMove("B2", "C3");
    cb.submitMove("H7", "H6");
    cout << endl;

    cb.submitMove("C1", "A3");
    cb.submitMove("B8", "D7");
    cout << endl;

    cb.submitMove("D1", "E2");
    cb.submitMove("D5", "E4");
    cout << endl;

    cb.submitMove("D3", "E4");
    cb.submitMove("G8", "F6");
    cout << endl;

    cb.submitMove("E4", "D3");
    cb.submitMove("B7", "B6");
    cout << endl;

    cb.submitMove("E2", "E6");
    cb.submitMove("F7", "E6");
    cout << endl;

    cb.submitMove("D3", "G6");
    cout << endl;


    cout << "===========================" << endl;
    cout << "A game that should end with white in checkmate!" << endl;
    cout << "===========================" << endl;
    cout << endl;
    
    cb.resetBoard();
    cout << endl;
    
    cb.submitMove("C2","C4");
    cb.submitMove("B7","B5");
    cout << endl;
    
    cb.submitMove("C4","B5");
    cb.submitMove("G7","G5");
    cout << endl;
    
    cb.submitMove("E2","E3");
    cb.submitMove("H7","H5");
    cout << endl;
    
    cb.submitMove("F1","E2");
    cb.submitMove("G8","F6");
    cout << endl;
    
    cb.submitMove("B2","B3");
    cb.submitMove("F8","G7");
    cout << endl;
    
    cb.submitMove("C1","B2");
    cb.submitMove("G5","G4");
    cout << endl;
    
    cb.submitMove("H2","H3");
    cb.submitMove("C8","B7");
    cout << endl;
    
    cb.submitMove("H1","H2");
    cb.submitMove("A7","A6");
    cout << endl;
    
    cb.submitMove("B5","A6");
    cb.submitMove("B8","A6");
    cout << endl;
    
    cb.submitMove("B1","C3");
    cb.submitMove("D8","B8");
    cout << endl;
    
    cb.submitMove("H3","G4");
    cb.submitMove("C7","C5");
    cout << endl;
    
    cb.submitMove("G2","G3");
    cb.submitMove("H5","H4");
    cout << endl;
    
    cb.submitMove("F2","F4");
    cb.submitMove("H4","G3");
    cout << endl;
    
    cb.submitMove("H2","H8");
    cb.submitMove("G7","H8");
    cout << endl;
    
    cb.submitMove("G4","G5");
    cb.submitMove("F6","E4");
    cout << endl;
    
    cb.submitMove("D1","C2");
    cb.submitMove("A6","B4");
    cout << endl;
    
    cb.submitMove("C2","B1");
    cb.submitMove("E4","F2");
    cout << endl;
    
    cb.submitMove("B1","H7");
    cb.submitMove("D7","D6");
    cout << endl;
    
    cb.submitMove("H7","H8");
    cb.submitMove("E8","D7");
    cout << endl;
    
    cb.submitMove("H8","B8");
    cb.submitMove("A8","B8");
    cout << endl;
    
    cb.submitMove("A1","B1");
    cb.submitMove("B8","H8");
    cout << endl;
    
    cb.submitMove("E2","F3");
    cb.submitMove("B4","C2");
    cout << endl;
    
    cb.submitMove("E1","E2");
    cb.submitMove("B7","A6");
    cout << endl;
    
    cb.submitMove("D2","D3");
    cb.submitMove("H8","H2");
    cout << endl;
    
    cb.submitMove("F3","G4");


    cb.submitMove("F2","G4");
    cout << endl;
    
    cb.submitMove("E2","F3");
    cb.submitMove("C2","E3");
    cout << endl;
    
    cb.submitMove("B2","C1");
    cb.submitMove("A6","B7");
    cout << endl;
    
    cb.submitMove("F3","G3");
    cb.submitMove("H2","G2");
    cout << endl;
    
    cb.submitMove("G3","H3");
    cb.submitMove("G4","F2");
    cout << endl;
    
    cb.submitMove("H3","H4");
    cb.submitMove("E3","F5");
    cout << endl;
    
    cb.submitMove("H4","H5");
    cb.submitMove("G2","H2");
    cout << endl;
 
    cb.submitMove("G1","H3");
    cb.submitMove("H2","H3");
    cout << endl;

    /*    
    string position = firstSquare;
    map<string, BasePiece*>:: iterator it;
    for(position[0]=fileFirst; position[0]<=fileLast; position[0]++){
      for(position[1]=rankFirst; position[1]<=rankLast; position[1]++){
	it = cb.currentBoard.find(position);
	if(it != cb.currentBoard.end()){
	cout << "at position " << position << " the chesspiece is " << cb.currentBoard[position]->getColour() << " " << cb.currentBoard[position]->getType() << endl;
	}
      }
    }
    */
    

    
    cout << "============================" << endl;
    cout << "        Katie's Tests       " << endl;
    cout << "============================" << endl;
    cout << endl;

    cb.resetBoard();
    cout << endl;
    
    /*
    cb.submitMove("A1", "A4"); // can w rook jump?
    cout << endl;

    cb.submitMove("A1", "B1"); // can w rook take a piece of it's own color?
    cout << endl;
    */
    cb.submitMove("B2", "B4"); // move w pawn two spaces
    cout << endl;
    
    /*
    cb.submitMove("D8", "D6"); // can b queen jump a pawn?
    cout << endl;

    cb.submitMove("E8", "E7"); // can b king take a piece of it's own color?
    cout << endl;
    
    cb.submitMove("D8", "C8"); // can b queen take a piece of it's own color?
    cout << endl;
    */

    cb.submitMove("B8", "C6"); // move b knight
    cout << endl;

    /*
    cb.submitMove("A1", "C3"); // can w rook move diagonally?
    cout << endl;
    
    cb.submitMove("C1", "E3"); // can w bishop jump the pawn?
    cout << endl;

    cb.submitMove("C1", "D2"); // can w bishop take a piece of it's own color?
    cout << endl;
    */

    cb.submitMove("C1", "A3"); // move w bishop 2 spaces
    cout << endl;
    
    cb.submitMove("E7", "E5"); // move b pawn two spaces
    cout << endl;

    cb.submitMove("B1", "C3"); // move w knight
    cout << endl;

    cb.submitMove("D8", "F6"); // move b queen diagonally
    cout << endl;
    
    cb.submitMove("A1", "B1"); // move w rook horizontally
    cout << endl;

    cb.submitMove("F6", "D6"); // move b queen horizontally
    cout << endl;

    cb.submitMove("B1", "B2"); // move w rook vertically
    cout << endl;
    
    cb.submitMove("D6", "D2");// capture w pawn with b queen
    cout << endl;// CHECK!!! (but not checkmate)
    
    cb.submitMove("E1", "D2"); // capture b queen with w king diagonally
    cout << endl;

    /*    
    cb.submitMove("E5", "E3"); // try to move b pawn two spaces when it can't
    cout << endl;
    
    cb.submitMove("E5", "E6"); // try to move b pawn backwards
    cout << endl;
    
    cb.submitMove("E5", "F4"); // try to "capture" nothing with b pawn
    cout << endl;
    */

    cb.submitMove("E5", "E4"); // move b pawn one space
    cout << endl;
    
    cb.submitMove("F2", "F3"); // move w pawn one space
    cout << endl;
    
    cb.submitMove("E4", "F3"); // b pawn captures w pawn
    cout << endl;
    
    cb.submitMove("E2", "F3"); // capture b pawn with w pawn
    cout << endl;
    
    cb.submitMove("F8", "B4"); // capture w pawn with b bishop 
    cout << endl;
    /*    
    cb.submitMove("C3", "D5"); // attempt to move knight, putting king in check
    cout << endl;
    
    cb.submitMove("B2", "B5"); // check if w rook can jump b bishop
    cout << endl;
    */
    cb.submitMove("B2", "B4"); // take bishop with w rook
    cout << endl;
    
    cb.submitMove("C6", "B4"); // take w rook with b knight
    cout << endl;
    
    cb.submitMove("A3", "B4"); // take b knight with w bishop 
    cout << endl;

    cb.submitMove("B7", "B5"); // move b pawn 2 spaces
    cout << endl;
    
    cb.submitMove("D1", "E2"); // w queen to E2, check!
    cout << endl;
    
    cb.submitMove("G8", "E7"); // put b knight in the way
    cout << endl;
    
    cb.submitMove("B4", "E7"); // take b knight with w bishop
    cout << endl;
    
    cb.submitMove("A8", "B8"); // move b rook horizontally one space
    cout << endl;
    
    cb.submitMove("E2", "B5"); // take b pawn with w queen
    cout << endl;
    
    cb.submitMove("F7", "F6"); // move b pawn one space
    cout << endl;
    
    cb.submitMove("B5", "B8"); // take b rook with w queen
    cout << endl;
    
    cb.submitMove("F6", "F5"); // move b pawn one space
    cout << endl;
    
    cb.submitMove("B8", "C8"); // take b bishop with w queen, check!
    cout << endl;
    
    cb.submitMove("E8", "F7"); // move b king out of the way
    cout << endl;
    
    cb.submitMove("C8", "H8"); // take b rook with w queen
    cout << endl;
    
    cb.submitMove("F5", "F4"); // move b pawn one space
    cout << endl;
    
    cb.submitMove("G2", "G4"); // move w pawn two spaces
    cout << endl;
    
    cb.submitMove("G7", "G5"); // move b pawn two spaces
    cout << endl;
    
    cb.submitMove("H2", "H4"); // move w pawn two spaces
    cout << endl;
    
    cb.submitMove("H7", "H6"); // move b pawn one space
    cout << endl;
    
    cb.submitMove("H4", "H5"); // move w pawn one space
    cout << endl;
    
    cb.submitMove("D7", "D5"); // move b pawn two spaces
    cout << endl;
    
    cb.submitMove("C3", "D5"); // take b pawn with w knight
    cout << endl;
    
    cb.submitMove("A7", "A5"); // move b pawn two spaces
    cout << endl;
    
    cb.submitMove("D5", "C7"); // take b pawn with w knight
    cout << endl;
    
    /*
    cb.submitMove("F7", "G6"); // try to move the b king
    cout << endl;
    */
    cb.submitMove("A5", "A4"); // move b pawn one space
    cout << endl;
    
    cb.submitMove("E7", "B4"); // move w bishop
    cout << endl;
    
    cb.submitMove("A4", "A3"); // move b pawn one space
    cout << endl;
    
    cb.submitMove("B4", "A3"); // move w bishop, stalemate!
    cout << endl;
    




    cout << "===========================" << endl;

    cout << "A game that should end in stalemate!" << endl;

    cout << "===========================" << endl;

    cout << endl;



    cb.resetBoard();

    cout << endl;



    cb.submitMove("C2","C4");

    cb.submitMove("H7","H5");

    cout << endl;

    

    cb.submitMove("H2","H4");

    cb.submitMove("A7","A5");

    cout << endl;

    

    cb.submitMove("D1","A4");

    cb.submitMove("A8","A6");

    cout << endl;

    

    cb.submitMove("A4","A5");

    cb.submitMove("A6","H6");

    cout << endl;

    

    cb.submitMove("A5","C7");

    cb.submitMove("F7","F6");

    cout << endl;

    

    cb.submitMove("C7","D7");

    cb.submitMove("E8","F7");

    cout << endl;

    

    cb.submitMove("D7","B7");

    cb.submitMove("D8","D3");

    cout << endl;

    

    cb.submitMove("B7","B8");

    cb.submitMove("D3","H7");

    cout << endl;

    

    cb.submitMove("B8","C8");

    cb.submitMove("F7","G6");

    cout << endl;

    

    cb.submitMove("C8","E6");

    cout << endl;

    



    cout << "===========================" << endl;

    cout << "A game that should end with black in checkmate!" << endl;

    cout << "===========================" << endl;

    cout << endl;



    cb.resetBoard();

    cout << endl;



    cb.submitMove("B1","C3");

    cb.submitMove("B8","C6");

    cout << endl;

    

    cb.submitMove("D2","D3");

    cb.submitMove("G8","F6");

    cout << endl;

    

    cb.submitMove("C1","G5");

    cb.submitMove("F6","G4");

    cout << endl;

    

    cb.submitMove("E2","E3");

    cb.submitMove("G4","E3");

    cout << endl;

    

    cb.submitMove("F2","E3");

    cb.submitMove("B7","B5");

    cout << endl;

    

    cb.submitMove("D1","H5");

    cb.submitMove("G7","G6");

    cout << endl;

    

    cb.submitMove("H5","H4");

    cb.submitMove("H7","H6");

    cout << endl;

    

    cb.submitMove("G5","H6");

    cb.submitMove("H8","H6");

    cout << endl;

    

    cb.submitMove("H4","H6");

    cb.submitMove("F8","H6");

    cout << endl;

    

    cb.submitMove("G1","F3");

    cb.submitMove("H6","E3");

    cout << endl;

    

    cb.submitMove("H2","H4");

    cb.submitMove("G6","G5");

    cout << endl;

    

    cb.submitMove("H4","G5");

    cb.submitMove("A8","B8");

    cout << endl;

    

    cb.submitMove("H1","H8");











    return 0;
}
