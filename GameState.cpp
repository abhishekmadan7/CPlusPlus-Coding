









#include "globals.h"
#include "GameState.h"

GameState :: GameState()
{
     selectedRow=0;    
     selectedColumn=0; 
     moveValid=true;     
     gameOver=false;      
     winCode=0;        
     turn=true;          
     gameBoard[Empty][Empty]; 
    
}

    // Return the selected row (in the range 0..boardSize-1)
    int GameState :: get_selectedRow()     
    {
        return selectedRow;
    }

    // Return the selected column (in the range 0..boardSize-1)
    int GameState :: get_selectedColumn()  
    {
        return selectedColumn;
    }
    
    // Set the selected row to value in the range (in the range 0..boardSize-1)
    // An out of range value is ignored and the function just returns
    void GameState :: set_selectedRow(int value) 
    {
        this->selectedRow=value;
    }    

    // Set the selected column in the range (in the range 0..boardSize-1)
    // An out of range value is ignored and the function just returns
    void GameState :: set_selectedColumn(int value) 
    {
        this->selectedColumn=value;
    }
    
    // Get the moveValid value
    bool GameState :: get_moveValid()
    {
        return moveValid;
    }

    // Set the moveValid variable to value
    void GameState :: set_moveValid(bool value)
    {
        this->moveValid=value;
    }

    // Get the gameOver value
    bool GameState :: get_gameOver()
    {
        return gameOver;
    }

    // Set the gameOver variable to value
    void GameState :: set_gameOver(bool value)
    {
        this->gameOver=value;
    }

    // Get the winCode [0..8]
    int GameState :: get_winCode()
    {
        return winCode;
    }
    
    // Set the winCode to value in the range (0..8)
    // An out of range value is ignored and the function just returns
    void GameState :: set_winCode(int value)
    {
        this->winCode=value;     
    }
    
    // Get the value of turn
    bool GameState :: get_turn()
    {
        return turn;
    }

    // Set the value of turn
    void GameState :: set_turn(bool value)
    {
        this->turn=value;
    }
    
    // Get the game board value at the board location at row and col
    // This method checks that row, col and value are in range/valid
    // and if not it returns Empty
    int GameState :: get_gameBoard(int row, int col) 
    {
        return gameBoard[row][col];
    }

    // Set the game board value at the board location at row and col to value
    // This method checks that row, col and value are in range/valid and if not it
    // just returns
    void GameState :: set_gameBoard(int row, int col, int value)
    {
        this->gameBoard[row][col]=value;
    }
