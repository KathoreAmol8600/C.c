#include<stdio.h>
void main()
{
    char str[100];
    gets(str);
    int count=1;
    int Scount=0;
    int k=0;
    int temp=0;
    for(int i=0;str[i]!='\0';i++)     //        djdjd   dkdkd   dkdkd     dk dkd dkd   
    {    
         if(str[i]>='A'&&str[i]<='Z')                                   // upper case to lower case
          str[i]+=32;

        Scount=0;
           if(str[i]==' '&&str[i+1]==' ')
            {
                for(int j=i;str[j]==' ';j++)
                {
                    Scount++;
                }
                i=i+Scount;
                 count++;
                // printf("%d",Scount);
            }
            else if(str[i]==' ')
            {
                if(str[i]==' ')
                {
                    count++;
                }
                 if(str[i]==' '&&str[i+1]=='\0')
                {
                    count--;
                }
            }
            // else
            // { 
            //    if(str[i]==' '&&str[i+1]=='\0')
            //     {
            //         count--;
            //     }
            // }
    }
    printf("%d",count);
}
    //    djdjd   dkdkd   dkdkd     dk dkd dkd

    //  else if(str[i]==' '&&str[i+1]=='\0')
    //         {
    //                 count--;
    //         }