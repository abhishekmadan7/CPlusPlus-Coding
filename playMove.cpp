//
//  playMove.cpp
//  TicTacToe
//
//  Created by Tarek Abdelrahman on 2019-06-07.
//  Modified by Tarek Abdelrahman on 2020-09-17.
//  Copyright © 2019-2020 Tarek Abdelrahman. All rights reserved.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.
//
//  ECE244 Student: write your code for playMove in this file

#include "globals.h"
#include "GameState.h"

void playMove(GameState& game_state) 
{
    int row;
    int col;
    bool turn;
    int i;
    
    i=0;
    
    row=game_state.get_selectedRow();
    col=game_state.get_selectedColumn();
    turn=game_state.get_turn();
    
    //X=1 O=2
    
    if(game_state.get_gameBoard(row,col)== 0)
    {
        game_state.set_moveValid(true);
        if(turn==true)
        {
            game_state.set_gameBoard(row,col,1);
            i=1;
            game_state.set_turn(false);
        }
        else
        {
            game_state.set_gameBoard(row,col,2);
            i=2;
            game_state.set_turn(true);
        }
    }
    
    else
    {
        game_state.set_moveValid(false);
        return;
    }
    






    
    if((game_state.get_gameBoard(2,0)==i)&& (game_state.get_gameBoard(1,1)==i)&&(game_state.get_gameBoard(0,2)==i))
    {
        game_state.set_gameOver(true);
        game_state.set_winCode(8);
    }
    else if((game_state.get_gameBoard(0,0)==i)&& (game_state.get_gameBoard(1,1)==i)&&(game_state.get_gameBoard(2,2)==i))
    {
        game_state.set_gameOver(true);
        game_state.set_winCode(7);
    }
        else if((game_state.get_gameBoard(0,2)==i)&& (game_state.get_gameBoard(1,2)==i)&&(game_state.get_gameBoard(2,2)==i))
    {
        game_state.set_gameOver(true);
        game_state.set_winCode(6);
    }
    else if((game_state.get_gameBoard(0,1)==i)&& (game_state.get_gameBoard(1,1)==i)&&(game_state.get_gameBoard(2,1)==i))
    {
        game_state.set_gameOver(true);
        game_state.set_winCode(5);
    }
        else if((game_state.get_gameBoard(0,0)==i)&& (game_state.get_gameBoard(1,0)==i)&&(game_state.get_gameBoard(2,0)==i))
    {
        game_state.set_gameOver(true);
        game_state.set_winCode(4);
    }
        else if((game_state.get_gameBoard(2,0)==i)&& (game_state.get_gameBoard(2,1)==i)&&(game_state.get_gameBoard(2,2)==i))
    {
        game_state.set_gameOver(true);
        game_state.set_winCode(3);
    }
        else if((game_state.get_gameBoard(1,0)==i)&& (game_state.get_gameBoard(1,1)==i)&&(game_state.get_gameBoard(1,2)==i))
    {
        game_state.set_gameOver(true);
        game_state.set_winCode(2);
    }
    else if((game_state.get_gameBoard(0,0)==i)&& (game_state.get_gameBoard(0,1)==i)&&(game_state.get_gameBoard(0,2)==i))
    {
        game_state.set_gameOver(true);
        game_state.set_winCode(1);
    }
    
    bool ellen;
    
    ellen=true;
    
    for(int j=0;j<3;j++)
    {
        for(int k=0;k<3;k++)
        {
            if(game_state.get_gameBoard(j,k)==0)
            {
                ellen=false;
            }
        }
    }
    
    if(ellen==true)
    {
        game_state.set_gameOver(true);
    }
}

