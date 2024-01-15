#include<stdio.h>
void main()
{
    char str[20];
    char str2[20];

    gets(str);
    gets(str2);
    int count1=0;
    int count2=0;
    for(int i=0;str[i]!='\0';i++ )
    {
        count1++;
    }
    // printf("%d",count1);
    for(int i=0;str2[i]!='\0';i++ )
    {
        count2++;
    }
//  printf("%d\n",count2);
    for(int i=0,j=count2;i<count1;i++,j++)
    {

            str2[j]=str[i];
            count2++;
    }
    str2[count2]='\0';
    printf("%s",str2);


}