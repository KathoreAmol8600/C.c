#include<stdio.h>
int count=0;
int i=0
int count_Alphbet_wi_spa(char arr[])
{
    count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++; 
    }
   return count;
}
int count_Alphbet_wiout_spa(char arr[])
{
     count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]!=' ')
        {
        count++;
        }
    }
   return count;
}
int Total_space(char arr[])
{
    count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        {
        count++;
        }
    }
   return count;
}
int Vowels_string(char arr[])
{
    count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]!=' ')
       {
            if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
            {
                        count++;
            }
       }    
    }
   return count;
} 
void Rivrs_string(char arr[])
{
    int count=0,l=1;
    char temp='\0';
    count=count_Alphbet_wi_spa(arr);
    for(int j=0;j<=count/2;j++)
    {
       temp=arr[j];
       arr[j]=arr[count-l];
       arr[count-l]=temp;
       l++;
    }
    printf("Reverse string is %s",arr);
}
void coppey_strimg(char arr[])
{
    int count=0,l=1;
    count=count_Alphbet_wi_spa(arr);
    // printf("%d",count);
    char cpystr[count];
     for(int i=0;arr[i]!='\0';i++)
    {
        cpystr[i]=arr[i];
    }
        // printf("%s",cpystr);
        cpystr[count]='\0';

    printf("coppeyed string%s",cpystr);
    // Rivrs_string(arr);
}
void Camper_String(char arr[],char arr2[])
{
    int count1=0;
    count1=count_Alphbet_wi_spa(arr);
    // printf("string one %d",count1);

    int count2=0;
    count2=count_Alphbet_wi_spa(arr2);
    // printf("\nstring two%d",count2);
    int dif=0;
    // if(count1-count2!=0)
    // {
    //   printf("\nstring Cherecrecter is not Same.. string is Difrent..");
    // }else
    // {
       for(int i=0;i<=count1&&i<=count2;i++)
       {
        dif=arr[i]-arr2[i];
        if(dif!=0)
        {
            break;
        }
       }
        // }else{
            if(dif>0)
            {
                // printf("arr1>arr2")
                printf(" string 1 is Greter then string2");
            }else if(dif<0)
            {
                 printf("string 2  smoller than string 1");
            }else{
                printf("string 1 one or string 2 are same ");
            }
        }
    //    }
      
    // }
  

// }
void Concate_string(char arr[],char arr2[])
{
int count1=0;
count1=count_Alphbet_wi_spa(arr);
// printf("\nstring two%d",count1);

int count2=0;
count2=count_Alphbet_wi_spa(arr2);
// printf("\nstring two%d",count2);
int count3=0;
for(int i=0,j=count;i<count1;i++,j++)
{

        arr2[j]=arr[i];
        count3;
}
    
//  arr2[count3+1]='\0';
printf("%s",arr2);
}  

int main()
{
    int ret=0;
    char Arr[20];
    char Arr2[20];
    // scanf("%s",Arr);
    gets(Arr);
    gets(Arr2);

    // ret=count_Alphbet_wi_spa(Arr);
    // printf("count is %d\n",ret);

    // ret=count_Alphbet_wiout_spa(Arr);
    // printf("without space alphbet is %d\n",ret);

    // ret=Total_space(Arr);
    // printf("total space count is %d\n",ret);

    // ret=Vowels_string(Arr);
    // printf("Total oVeles are%d\n",ret);

    //    Rivrs_string(Arr);
    //    coppey_strimg(Arr);

    // Camper_String(Arr,Arr2);

      Concate_string(Arr,Arr2);
       
    


    
}