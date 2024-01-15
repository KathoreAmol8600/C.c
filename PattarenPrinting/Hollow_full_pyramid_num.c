//              1
//           1     2
//        1           3
//     1                 4
//  1     2     3     4     5

#include<stdio.h>
void main()
{
    int ino=1;
    int ino2=2;
    for(int i=1;i<=5;i++)
    {
        ino=1;
        
        for(int j=1;j<=9;j++)
        {
            // printf(" * ");
            if(j==6-i)
            {
                 printf(" %d ",ino);
            }
             else if(j==4+i)
            {
                // printf(" * ");
                printf(" %d ",i);
                
            }else if(i==5)
            {
                // printf(" * ");
        
                if(j%2!=0)
                {
                //    printf(" * "); 
          
                    printf(" %d ",ino2); 
                    ino2++;
                }else{
                   printf("   ");
                }
            }
            else{
                printf("   ");
            }
           
        }
        printf("\n");
    }
}