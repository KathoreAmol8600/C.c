#include<stdio.h>
void main()
{
    char str[20];
    gets(str);
     int vovel=0;
     int con=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        str[i]+=32;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      //  if(str[i]==('a'||'e'||'i'||'o'||'u'))
        {
                 printf("\n%c--->this is Vowels\n",str[i]);
        }else{
                printf("\n%c--->this is consta\n",str[i]);
        } 
    }
       // printf("vovels %d constatb is %d",vovel,con);
}