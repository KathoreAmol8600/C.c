/////////////////////////////////////////////////
//  Displey numbar;
//1,2,3,4......n
// N for user defiend:
//Using loop ex for loop 
//using Update for nigetiv numbar:
///////////////////////////////////////////////

#include<stdio.h>

void Displey(int ino)
{
    if(ino==0)     //Filter      
    {
        printf("ERERR; enter the nub as Positive integer:");
        return ;
    }
    
    if(ino<0)   //Updetor
    {
        ino=-ino;
    }
    for(int icnt =1;icnt<=ino;icnt++)
    {
        printf("%d\n",icnt);
    }
}
int main()
{
    int ino=0;
    printf("Enter the numbar:");
    scanf("%d",&ino);
    Displey(ino);
    return 0;
}