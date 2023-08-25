// Write a program which checks whether number is divisible by 3 and 5

#include<stdio.h>
#include<stdbool.h>
bool Check(int ino)
{
    
    if(((ino%3)==0)&&((ino%5)==0))
    {
        return true;
    }else{
        return false;
    }
}
int main()
{

    bool iret=true;
    int no=0;
    printf("Enter the Numbar that want you check:");
    scanf("%d",&no);
    iret=Check(no);
    if(iret==true)
    {
        printf("the number is divisibal by 3 and 5");
    }else if(iret==false)
    {
        printf("the numbaris not Divisibal 3 and 5:");
    }
    return 0;
}