
//
//  main.cpp
//  TicTacTo
//
//  Created by Tarek Abdelrahman on 2019-06-07.
//  Modified by Tarek Abdelrahman on 2020-09-17.
//  Copyright © 2019-2020 Tarek Abdelrahman. All rights reserved.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.
//
//  ECE244 Student: Complete the skeletal code of the main function in this file


#include <iostream>
#include <string>
using namespace std;

#include "globals.h"
#include "GameState.h"

// Function prototype for playMove
void playMove(GameState&);

// The main function
int main() {

    /**********************************************************************************/
    /* Create an initialized game state object                                        */
    /**********************************************************************************/
    GameState game_state;

    // Read two integers from the user that represent the row and column
    // the player would like to place an X or an O in
    // You can assume there will be no formatting errors in the input

    int row;
    int col;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            game_state.set_gameBoard(i,j,0);
        }
    }
    
    
    
    while (!game_state.get_gameOver()) 
    {
        cout << "Enter row and column of a grid cell: ";
        cin >> row >> col;
        
        // Check that the read row and column values are valid grid coordinates
        if ( (row < 0) || (row > 2) || (col < 0) || (col > 2) ) 
        {
            cout << "Invalid board coordinates " << row << " " << col << endl << endl;
           continue;
        }
        else
        {
            game_state.set_selectedRow(row);
            game_state.set_selectedColumn(col);
            
        }
        // The coordinates are valid; set the selectedRow and selectedColumn
        // members of the game state to the read values
        // Again, the corresponding mutators of GameState must be first
        // implemented before this works
        cout << "Selected row "<<row<<" and column "<<col<<endl;
        playMove(game_state);
        cout << "Game state after playMove:"<<endl;
        cout<<"Board:"<<endl;
        
        
        
        for(int brian=0;brian<3;brian++)
        {
            cout<<"   ";
            for(int nelson=0;nelson<3;nelson++)
            {
               
                if(game_state.get_gameBoard(brian,nelson)== 0)
                {
                    cout<<"B ";
                }
                else if(game_state.get_gameBoard(brian,nelson)== 1)
                {
                    cout<<"X ";
                }
                else if(game_state.get_gameBoard(brian,nelson)== 2)
                {
                    cout<<"O ";
                }
            }
            cout << "\n";
        }
        bool x;
        bool y;
        int z;
        
         std::cout <<  std::boolalpha;
        x=game_state.get_moveValid();
       
        y=game_state.get_gameOver();
        z=game_state.get_winCode();
        
        
        cout <<"moveValid: "<<x<<endl;
        cout<<"gameOver: "<<y<<endl;
        cout<<"winCode: "<<z<<endl;
        
        
        
        
            
        // ECE244 Student: add your code here
            
        // Call playMove
            
        // ECE244 Student: add your code here
            
        // Print the GameState object, as prescribed in the handout
            
        // ECE244 Student: add your code here
            
    }
    

    return 0;
}

