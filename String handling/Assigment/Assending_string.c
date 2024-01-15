#include<stdio.h>
void main()
{
 char str[20];
 gets(str);
 for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
        }      
        
    }
char temp='\0';
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=i+1;str[j]!='\0';j++)
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
}