// swap first and last digit 
// first amd last digit  sum 
// calculate sum of didgit 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int ino=0;
    printf("Enter the Number");
    scanf("%d",&ino);
    int *ptr=&ino;
    int sum=0;
    int value=0;
    // while(ino>0)
    // {
    //  value=ino%10;
    //  sum=sum+value;
    //  ino=ino/10; 
    // }
    for(int i=ino;i>0;i=i/10)
    {
        value=i%10;
        sum=sum+value;
        // i=i/10;
    }
    
    printf("addition is  %d\n",sum);
  free(ptr);
  ptr=NULL;

}