#include<stdio.h>
void main()
{
    char str[5];
    gets(str);
    int len=0;
    int count=1;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    // printf("%d",len);
    char temp;
     for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }

    printf("%s",str);

    for(int i=0;str[i]!='\0';i++)
       {
        // count=0;
            if(str[i]==str[i+1])
            {
                count++;
            }
            else
            {
                printf("cheracter is %c  count is    %d\n",str[i],count);
                count=0;
            }
       }

}