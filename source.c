
#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

uint_8 Board[GAMEROWS][GAMECOLUMNS] ;
const uint_8 PLAYER = 'x' ;
const uint_8 PLAYER2 = 'Z' ;
const uint_8 COMPUTER = 'o' ;


void set_Board() {
    for(uint_32 i = 0 ; i<GAMEROWS ; i++){
        for(uint_32 j = 0 ; j<GAMECOLUMNS ; j++){
            Board[i][j] = ' ' ;
        }
    }
}
/***********************************/
void print_Board (){

    printf(" %c | %c | %c ", Board[0][0], Board[0][1], Board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", Board[1][0], Board[1][1], Board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", Board[2][0], Board[2][1], Board[2][2]);

   printf("\n");

}
/***********************************/
uint_32 Check_empty(){

    uint_32 emptySpace = 9 ;
    for(uint_32 i = 0 ; i<GAMEROWS ; i++){
        for(uint_32 j = 0 ; j<GAMECOLUMNS ; j++){
            if (Board[i][j] != ' ' )
            {
                emptySpace -- ;
            }
        }
    }
    return emptySpace ;
}
/***********************************/

void Player1_move() {

    uint_32 rownumber ;
    uint_32 columnnumber ;

    do {

        printf ("Player Move ::::\n") ;

        printf ("ROW NUMBER # (1 TO 3 ) = ") ;
        scanf("%d",&rownumber);
        rownumber -- ;

        printf ("COLUMN NUMBER # (1 TO 3 ) = ") ;
        scanf("%d",&columnnumber);
        columnnumber -- ;


        if (Board[rownumber][columnnumber]!= ' '){
            printf("Invalid !!!!!\n");

        }
        else {
            Board[rownumber][columnnumber] = PLAYER ;
            break ;
        }


    }while(Board[rownumber][columnnumber] != ' ');

}
/************************************************/
void Computer_move () {

      srand(time(0));
        uint_32 x;
        uint_32 y;
   if(Check_empty() > 0)
   {
      do

      {
         x = rand() % 3;
         y = rand() % 3;

      } while (Board[x][y] != ' ');

        Board[x][y] = COMPUTER;
   }

   else
   {
      Print_winner(' ');

   }
}


/****************************/
uint_8 Check_Winner ()  {

    for(uint_32 rows = 0 ; rows <3 ; rows++){
        if ((Board[rows][0]==Board[rows][1]) && (Board[rows][0]==Board[rows][2]) ){
            return Board[rows][0] ;
        }
    }
    for(uint_32 column = 0 ; column <3 ; column++){
        if ((Board[0][column]==Board[1][column]) && (Board[0][column]==Board[2][column]) ){
            return Board[0][column] ;
        }
    }

    if ( (Board[0][0] == Board[1][1]) && (Board[0][0] == Board[2][2]) ){
        return Board[0][0] ;
    }


    if ( (Board[0][2] == Board[1][1]) && (Board[0][2] == Board[2][0]) ){

        return Board[0][2] ;
    }


    return ' ' ;
}

/****************************/

void Print_winner (uint_8 Winner_Name){
    if (Winner_Name == PLAYER)
        printf ("PLAYER 1 is THE WINNER .\n") ;
   else if (Winner_Name == PLAYER2)
        printf ("PLAYER 2 is THE WINNER .\n") ;
    else if ( Winner_Name == COMPUTER)
        printf ("SORRY YOU LOSE !!!!!\n") ;

    else
        printf ("IT IS TIE \n") ;
}
/**********************************/
void welcome (){
    printf("WELCOME TO TIC-TAC-TOE GAME :\n") ;
    printf("please select the GAME-MOOD :\n") ;
    printf("(1-) SINGLE-MOOD PRESS   1 :\n");
    printf("(2-) MULTI-MOOD  PRESS   2 :\n");
    printf("(3-) EXIT                0 :\n");
    printf("\n");
}
/***********************************/
uint_32 Select_mood(){
    uint_32 x ;
    printf("Enter the MOOD : ");
    scanf("%d",&x);

    return x ;
}
/************************************************/
void Single_Mood(){

        uint_8 winner = ' ';

          set_Board();
          uint_32 ret = Check_empty() ;

        while(winner == ' ' && ret!= 0)
        {
             print_Board();
             Player1_move();

             winner = Check_Winner();
             if(winner != ' ' || ret == 0)
             {
                    break;
             }

         Computer_move();
         winner = Check_Winner();
         if(winner != ' ' || ret == 0)
         {
            break;
         }
      }

      print_Board();
      Print_winner(winner);

}
/*************************************************/
void Multi_Mood() {

       uint_8 Winner = ' ';

            set_Board() ;
            while ( Winner == ' ' && Check_empty() !=0){
            print_Board() ;
            Player1_move() ;
            Winner = Check_Winner ();
            if ( (Winner !=' ') || (Check_empty() == 0) ) {
                break ;
            }

            print_Board() ;
            Player2_move() ;
            Winner = Check_Winner ();
            if ((Winner !=' ') || (Check_empty() == 0)){
                  break ;
                    }

                }
            print_Board() ;
            Print_winner(Winner) ;

}
/******************************************/
void Player2_move() {

    uint_32 rownumber ;
    uint_32 columnnumber ;

    do {

        printf ("Second Player Move ::::\n") ;
        printf ("ROW NUMBER # (1 TO 3 ) = ") ;
        scanf("%c") ;
        scanf("%d",&rownumber);
        rownumber -- ;

        printf ("COLUMN NUMBER # (1 TO 3 ) = ") ;
        scanf("%c") ;
        scanf("%d",&columnnumber);
        columnnumber -- ;

        if (Board[rownumber][columnnumber]!= ' '){
            printf("Invalid !!!!!\n");


        }
        else {
            Board[rownumber][columnnumber] = PLAYER2 ;
            break ;
        }

    }while(Board[rownumber][columnnumber] != ' ');

}

