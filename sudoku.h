#ifndef _SUDOKU_PUZZLE_H
#define _SUDOKU_PUZZLE_H

class SudokuPuzzle {
  private:
  	short int board[9][9];
  	bool debug;

  	void printTracerTryingValue(int x_cord, int y_cord);
  	bool solve(int x_cord, int y_cord);
  	bool verifyValue(int x_cord, int y_cord);

  public:
    // Constructor
	  SudokuPuzzle();
  
    void print();
	
	  void setBoardValue(int x_cord, int y_cord, int value);
  
	  int getBoardValue(int x_cord, int y_cord);
		bool solve();
};

#endif
