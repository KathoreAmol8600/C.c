// Additon of nth prime numbar

#include<stdio.h>
void main()
{
    int ino=0,i=2,j=2,count=0,sum=0;
    printf("Enter the numbar");
    scanf("%d",&ino);
    if(ino==1||ino==0)
    {
        printf(" ");
    }
    if(ino==2)
    {
        printf("Adiition is = 2");
    }
    while(i<=ino)
    {
        j=2;
        count=0;
       while(j<i)
       {
        if(i%j==0)
        {
           count++;
        //    printf("cou%d\n",count);
           break;
        }
            j++;
       }

       if(count==0)
       {
       printf(" prime num= %d Facoter is 1 and %d\n",i,i);
       }
        i++;
    }
    // printf("Addition is %d",sum);
} 