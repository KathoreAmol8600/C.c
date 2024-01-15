//  *                       * 
//  *  *                 *  *
//  *  *  *           *  *  *
//  *  *  *  *     *  *  *  *
//  *  *  *  *  *  *  *  *  *
//  *  *  *  *     *  *  *  * 
//  *  *  *           *  *  *
//  *  *                 *  *
//  *                       *

#include<stdio.h>
void main()
{
    int ino=0;
	printf("Ente the Mumbaer * buterfley....(Odd number...)");
	scanf("%d",&ino);
   
    for(int i=1;i<=ino;i++)
    {
        for(int j=1;j<=ino;j++)
        {
            // printf(" * ");
            if((j<=i&&i<=(ino+1)/2)||(j<=ino+1-i&&i>(ino+1)/2)||(j>=ino+1-i&&i<=(ino+1)/2)||(j>=i&&i>(ino+1)/2))
            {
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}