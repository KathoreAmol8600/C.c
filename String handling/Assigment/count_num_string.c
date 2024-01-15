#include<stdio.h>
void main()
{
    int sum=0,fact=1,count=0,lc=0,valu=0;                             //decleration veriabal

    char str[20];                                                     //string arrey
    gets(str);                                                        //input string

    for(int i=0;str[i]!='\0';i++)                                     //loop for sum of oll number
    {
        count=0;
        fact=1;

        if(str[i]>='A'&&str[i]<='Z')                                   // upper case to lower case
        str[i]+=32;

        if(str[i]>='0'&&str[i]<='9'&&str[i+1]>='0'&&str[i+1]<='9')      // condition multipal digit handal
        {
            for(int j=i;str[j]>='0'&&str[j]<='9';j++)                   // count fact && count num
            {
                fact=fact*10;
                count++;
            }        
            fact=fact/10;
            // printf("count is %d",count);
            lc=i;
            for(int k=0;k<count;k++)                                          // loop for create number cheracter to number
            {
                valu=str[lc]-48;
                // printf("%d",valu);
                sum=sum+valu*fact;
                fact=fact/10;
                lc++;
            }
            i=i+count;
        }else{                                                             // condition for one digit handal 
            if(str[i]>='0'&&str[i]<='9')                              
            {
            sum=sum+str[i]-48;
            }  
        }
    }

    printf("\nSum of numb in strinf is ..%d",sum);                         // displey sum of oll numberr in string
}