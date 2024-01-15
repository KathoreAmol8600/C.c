#include<stdio.h>
void main()
{
     char str[20];
     gets(str);
     int vovel=0;
     int con=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
            else{
            str[i]-=32; 
            } 
        }      
        
    }
    printf("%s",str);

}
