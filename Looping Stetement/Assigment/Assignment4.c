#include<stdio.h>
void main()
{
    printf("Enter the Numbar 1,2,3\n");
    int ino=0;
    scanf("%d",&ino);

    printf("Enter the Numbar\n");
    int num=0;
    scanf("%d",&num);

    int count=0;
    int sum=0;
    switch(ino)
    {
        case 1:
        while(num!=0)
        {
            count++;
            num=num/10;
        }
        printf("%d",count);
        break;

        case 2:
        {
         while(num!=0)
         {
            printf("%d",num%10);
            num=num/10;
         }
         
        }
        break;
       case 3:
       {
          while(num!=0)
        {
            sum=sum+num%10;
            num=num/10;
        }
         printf("%d",sum);
       }
       break;
   }
}