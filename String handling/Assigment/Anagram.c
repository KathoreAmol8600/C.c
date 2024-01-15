#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    gets(str);
    char str2[20];
     gets(str2);
    int len=0;
    int len2=0;
    for(int i=0;str[i]!='\0';i++)
    {    
              len++;
    }

    int flag=0;
    for(int i=0;str2[i]!='\0';i++)
    {    
              len2++;
    }

        if(len==len2)
        {
            for(int i=0;str[i]!='\0';i++)
            {
                flag=0;
                for(int j=0;str2[j]!='\0';j++)
                {
                    if(str[i]==str2[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    break;
                }
            }

            if(flag==1)
            {
                printf("Anaegram");
            }else{
                printf("not Anaegram");
            }
        }
        else
        {
            printf("not anagrma....");
        }
        
}