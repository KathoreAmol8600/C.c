//  *  _  _  _  _  _  _  * 
//  *  *  _  _  _  _  *  *
//  *  *  *  _  _  *  *  *
//  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *
//  *  *  *  _  _  *  *  * 
//  *  *  _  _  _  _  *  *
//  *  _  _  _  _  _  _  *

#include<stdio.h>
int main()
{
	int ino=0;
	printf("Ente the Mumbaer * buterfley....(Even number...)");
	scanf("%d",&ino);
	for(int i=1;i<=ino;i++)
	{
		for(int j=1;j<=ino;j++)
		{
			// printf(" * ");
            if((j<=i&&i<=ino/2)||(j<=(ino+1)-i&&i>=(ino/2))||(j>=(ino+1)-i&&i<=(ino/2))||(j>=i&&i>=(ino/2)))
           { 
                printf(" * ");
           }else{
            printf(" _ ");
           }
   			
		}
		printf("\n");
	}
	return 0;
}