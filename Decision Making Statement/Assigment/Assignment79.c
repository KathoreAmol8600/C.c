//prime numbar
#include<stdio.h>
void main()
{
    printf("Enter the Numbar");
    int ino=0;
    scanf("%d",&ino);
    int i=2;
    int j=2;
    int count=0;
    if(ino==1||ino==0)
    {
        printf("");
    }else if(ino==2)
    {
        printf("2");
    }else
    {
    while(i<=ino)
    {
        // printf("1 st=%d\n",i);
        j=2;
        count=0;
        while(j<i)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
            // printf("2 nd =%d\n",j);
            j++;
        }
        //   printf("count = %d\n",count);
       if(count==0)
       {
        printf("%d\n",i);
       }
       i++;
       
    }
    
    }
}