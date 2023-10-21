
/**************includes****************/

#include "STD_TYPES.h"

/**************Macros****************/
#define GAMEROWS     3
#define GAMECOLUMNS  3

/**************functions declaration****************/

void set_Board() ;
void print_Board ();
uint_32  Check_empty();
void Player1_move() ;
void Player2_move() ;
void Computer_move () ;
uint_8 Check_Winner () ;
void Print_winner (uint_8 Winner_Name) ;
void welcome () ;
uint_32 Select_mood();
void Single_Mood() ;
void Multi_Mood() ;
