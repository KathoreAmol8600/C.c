
//  0  1  1  1  1 
//  0  0  1  1  1
//  0  0  0  1  1
//  0  0  0  0  1
//  0  0  0  0  0
 #include<stdio.h>
void main()
{
    
   
    for(int i=1;i<=5;i++)
    {
       
        for(int j=1;j<=5;j++)
        {
         if(i==j||i>j)
         {
            printf(" 0 ");
         }
         else{
            printf(" 1 "); 
         }
        }
        printf("\n");
    }
        printf("\n");
}
