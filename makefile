chess: ChessMain.o ChessBoard.o BasePiece.o Bishop.o King.o Knight.o Queen.o Pawn.o Rook.o
	g++ -g ChessMain.o ChessBoard.o BasePiece.o Bishop.o King.o Knight.o Queen.o Pawn.o Rook.o -o ChessBoard

Chessmain.o: ChessMain.cpp ChessBoard.h Constants.h
	g++ -Wall -g -c ChessMain.cpp

ChessBoard.o: ChessBoard.cpp ChessBoard.h BasePiece.h Bishop.h King.h Knight.h Rook.h Pawn.h Queen.h Constants.h
	g++ -Wall -g -c ChessBoard.cpp

BasePiece.o: BasePiece.cpp BasePiece.h Constants.h
	g++ -Wall -g -c BasePiece.cpp

King.o: King.cpp King.h BasePiece.h Constants.h
	g++ -Wall -g -c King.cpp

Queen.o: Queen.cpp Queen.h BasePiece.h Constants.h 
	g++ -Wall -g -c Queen.cpp

Bishop.o: Bishop.cpp Bishop.h BasePiece.h Constants.h
	g++ -Wall -g -c Bishop.cpp

Knight.o: Knight.cpp Knight.h BasePiece.h Constants.h
	g++ -Wall -g -c Knight.cpp

Rook.o: Rook.cpp Rook.h BasePiece.h Constants.h
	g++ -Wall -g -c Rook.cpp

Pawn.o: Pawn.cpp Pawn.h BasePiece.h Constants.h
	g++ -Wall -g -c Pawn.cpp

clean:
	rm *.o

