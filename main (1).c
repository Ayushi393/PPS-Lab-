/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int billamt,amtgiven;
    int quo,rem;
    scanf("%d%d",&billamt,&amtgiven);
    quo=billamt/amtgiven;
    rem=billamt%amtgiven;
    printf("Quotient:%d\n",quo);
    printf("Remainder:%d\n",rem);
	return 0;
}