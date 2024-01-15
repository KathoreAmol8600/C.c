// A
// A  B  A
// A  B  C  B  A
// A  B  C  D  C  B  A        
// A  B  C  D  E  D  C  B  A
#include<stdio.h>
void main()
{
    char A='A';
    int N=1;
    for(int i=1;i<=5;i++)
    {
                  A='A';                //1
        for(int j=1;j<=9;j++)
        {
            // printf(" * ");           //
            if(j<=N)                    //1
            {
                printf("%c  ",A);
                // A++;
                if(j<i)
                {
                    A++;
                }
                else{
                    A--;
                }
            }else{
                printf("   ");
            }

        }
        printf("\n");
        N=N+2;
        // printf("%d",N);
      
    }
}