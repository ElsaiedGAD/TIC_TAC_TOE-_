#include <stdio.h>
#include <stdlib.h>

#include "header.h"




int main()
{

    uint_8 response =' ' ;


    do{
        welcome ();
        uint_32 Mood = Select_mood();
        if (Mood == 1){
        Single_Mood();
        }
        else if ( Mood == 2){
            Multi_Mood() ;
        }
        else if ( Mood == 0){
            printf("SEE YOU LATER !!!!");
            break ;
        }


      printf("\nWould you like to play again? (Y/N): ");
      fflush(stdin);
      scanf("%c", &response);
      fflush(stdin);
      response = toupper(response);
   } while (response == 'Y');



    printf ("\nThanks for your playing ");
    return 0;
}
