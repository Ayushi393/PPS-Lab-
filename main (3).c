/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main ()
    {
      int aravspeed, aaronspeed, speeddiff;
      scanf ("%d%d", &aravspeed, &aaronspeed);
      if (aravspeed > aaronspeed)
        {
          speeddiff = aravspeed - aaronspeed;
          printf ("%d", speeddiff);
        }
      else
        {
          speeddiff = aaronspeed - aravspeed;
          printf ("%d", speeddiff);
        }
      return 0;
    }
