/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main ()
    {
      char ID;
      scanf ("%c", &ID);
      if (ID == 'B' || ID == 'b')
        printf ("BattleShip");
      else if (ID == 'C' || ID == 'c')
        printf ("Cruiser");
      else if (ID == 'D' || ID == 'd')
        printf ("Destroyer");
      else
        printf ("Frigate");
      return 0;
    }
