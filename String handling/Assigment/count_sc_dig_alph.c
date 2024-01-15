#include<stdio.h>
void main()
{
    char str[20];
    gets(str);
    int alph=0;
    int digit=0;
    int Spche=0;
    int i=0;
    for(int i=0;str[i]!='\0';i++)
    {
       if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
       {
          alph++;    
       }else if(str[i]>='0'&&str[i]<='9')
       {
          digit++;
       }else
       {
        Spche++;
       }
        
    }
    printf("%d\n",alph);
    printf("%d\n",digit);
    printf("%d\n",Spche);
}