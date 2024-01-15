#include<stdio.h>
#include<conio.h>
int Size_Emp=0;
struct Emploey
{

  int E_id;
  char E_Name[30];
  char E_email[30];
  char E_g;
  long long int E_cont;
  long long int E_Sal;

};

void Add_Empoley(struct Emploey obj2[],int size)                         //01
{
  for(int i=0;i<size;i++)
  {
    printf("Enter the Inform Emploey-->%d\n",i+1);
    printf("Enter the Empoley Id\n");                 // id
    scanf("%d",&obj2[i].E_id);
    printf("Enter the name\n");                       // name
    fflush(stdin);
    gets(obj2[i].E_Name);
    printf("Enter the E_mail_Id\n");                  // email
    fflush(stdin);
    gets(obj2[i].E_email);
    printf("Enter the E+Gender(M,F)\n");               //Gender
    fflush(stdin);    
    scanf("%c",&obj2[i].E_g);
    printf("Enter the Empoley contect\n");                   // contect
    scanf("%lld",&obj2[i].E_cont);
    printf("Enter the Empoley Sailery\n");                   // Sailery
    scanf("%lld",&obj2[i].E_Sal);
    printf("\n");
  }

}

void Displey_All_Emploey(struct Emploey obj2[],int size)                 //02
{
  for(int i=0;i<size;i++)
  {
    printf("the Inform Emploey-->%d\n",i+1);
    printf("id\t-> %d\nName\t-> %s\nGender\t-> %c\nE_email\t-> %s\nE_cont\t--> %lld\nE_Sailery\t-> %lld\n",obj2[i].E_id,obj2[i].E_Name,obj2[i].E_g,obj2[i].E_email
    ,obj2[i].E_cont,obj2[i].E_Sal);
    printf("\n"); 
  }
}

int found_Emploey_id(int id,struct Emploey obj2[],int size)              //03
{
  int flag=0;
  for(int i=0;i<size;i++)
    {
      if(id==obj2[i].E_id)
      {
        flag=1;
        break;
      }
    }
return flag;
}

int Update_Ditels_Empoley(int id,struct Emploey obj2[],int size)         //04
{
  int flag=0;
  for(int i=0;i<size;i++)
  {
    if(id==obj2[i].E_id)
    {
      
      printf("Enter the Inform Emploey-->%d\n",i+1);
      printf("Enter the Empoley Id\n");                 // id
      scanf("%d",&obj2[i].E_id);
      printf("Enter the name\n");                       // name
      fflush(stdin);
      gets(obj2[i].E_Name);
      printf("Enter the E_mail_Id\n");                  // email
      fflush(stdin);
      gets(obj2[i].E_email);
      printf("Enter the E+Gender(M,F)\n");               //Gender
      fflush(stdin);    
      scanf("%c",&obj2[i].E_g);
      printf("Enter the Empoley contect\n");                   // contect
      scanf("%lld",&obj2[i].E_cont);
      printf("Enter the Empoley Sailery\n");                   // Sailery
      scanf("%lld",&obj2[i].E_Sal);
      printf("\n");
      flag=1;
      break;
   }
 }
return flag;
}

void Displey_list_employ(struct Emploey obj2[],int size)                  //05
{
 printf("Id\tName\n");
  for(int i=0;i<size;i++)
  {
    printf("id-> %d\tName->%s",obj2[i].E_id,obj2[i].E_Name);
    printf("\n"); 
  }
}

int Update_By_Name(char Name[],struct Emploey obj2[],int size)            //06
 {
  int len=0,flag=0,index=0;
  char *ptr=NULL;
  for(int i=0;Name[i]!='\0';i++)
    {
      len++;
    }

  for(int i=0;i<size;i++)
  {
    index++;
    ptr=obj2[i].E_Name;
    for(int i=0;i<=len;i++)
    {
      if(Name[i]!=ptr[i])
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
   Update_Ditels_Empoley(index,obj2,size);
   return flag;
 }

void Delate_Empoley_E_mail(char U_mail[],struct Emploey obj2[],int size)  //07
{
  struct Emploey obj3[size],temp;
  int len=0;
  int flag=0;
  char *ptr=NULL;
  int index=0;

  for(int i=0;U_mail[i]!='\0';i++)
    {
      len++;
    }

  for(int i=0;i<size;i++)
    {
      index++;
      ptr=obj2[i].E_email;
      for(int i=0;i<=len;i++)
        {
          if(U_mail[i]!=ptr[i])
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
    for(int i=index;i<size;i++)
      {
        temp=obj2[i];
        for(int j=i+1;j<size;j++)
          {
            obj2[i]=obj2[i+1];
            obj2[i]=temp;
          }
      }
    Size_Emp--;
}

int count_Emploey(struct Emploey obj2[],int size)                         //08
{
  int count=0;
  for(int i=0;i<size;i++)
    {
         count++;
    }
  return count;
}

void Heigest_E_sailery(struct Emploey obj2[],int size)                     //09
{
   int index=0;
   long long int Temp=0;;
  for(int i=0;i<size;i++)
    { 
      Temp=obj2[i].E_Sal;
      for(int j=i+1;j<size;j++)
        {
          if(obj2[j].E_Sal>Temp)
            {
              index++;
              Temp=obj2[j].E_Sal;
            }
        }
    }
      printf("Empoley have max Sailery Inform Emploey-->\n");
      printf("id\t-> %d\nName\t-> %s\nGender\t-> %c\nE_email\t-> %s\nE_cont\t--> %lld\nE_Sailery\t-> %lld\n",obj2[index].E_id,obj2[index].E_Name,obj2[index].E_g,obj2[index].E_email
      ,obj2[index].E_cont,obj2[index].E_Sal);
      printf("\n"); 
}

void _10000_to60000_E_sailery(struct Emploey obj2[],int size)
{
  for(int i=0;i<size;i++)
    {  
      if(obj2[i].E_Sal>=10000&&obj2[i].E_Sal<=60000)
      {
          printf("Empoley have max Sailery Inform Emploey-->%d\n",i+1);
          printf("id\t-> %d\nName\t-> %s\nGender\t-> %c\nE_email\t-> %s\nE_cont\t--> %lld\nE_Sailery\t-> %lld\n",obj2[i].E_id,obj2[i].E_Name,obj2[i].E_g,obj2[i].E_email
          ,obj2[i].E_cont,obj2[i].E_Sal);
          printf("\n"); 
      }
    }
}
void main()
{
    int ret=0,d_num=0,lc=0,iopt=1,id_num=0;
    char Name[10];
    char UEmail[20];
    printf("\n\n''''''''''>>>>>>>>>>>>>>....Welocome in Sof_T Empoley....<<<<<<<<<<<<<<<<<''''''''''\n\n");
    printf("ENter the Total No of Emploey");
    scanf("%d",&Size_Emp);
   struct Emploey obj1[Size_Emp];
    do 
    {
      if(lc==0)
      {
          printf(" 1--> Add_Emploeyee_Detalls_\n");
          printf(" 2--> Displey_All_Emploey\n");
          printf(" 3--> found_Emploey_id\n");
          printf(" 4--> Update_Ditels_Empoley\n");
          printf(" 5--> Displey_list_employ\n");
          printf(" 6--> Update_By_Name\n");
          printf(" 7--> Delate_Empoley_E_mail\n");
          printf(" 8--> Displey_Diteles_bit_10000_60000\n");
          printf(" 9--> Heigest_E_sailery\n");
          printf(" 10-->_10000_to60000_E_sailery\n");
          lc++;
      }
      printf("Enter the option\n");
      scanf("%d",&iopt);
      switch(iopt)
      {
          case 1:
          Add_Empoley(obj1,Size_Emp);
          printf("Deteals enter the Secseesfulley........thanks\n\n");
          break;

          case 2:
          Displey_All_Emploey(obj1,Size_Emp);
          break;

          case 3:
          printf("Enter Emploey Id ");
          scanf("%d",&id_num);
          ret=found_Emploey_id(id_num,obj1,Size_Emp);
          if(ret==1)
          printf("%d-->found\n",id_num);
          else
          printf("E_Id %d-->Not found..!!!\n",id_num);
          break;

          case 4:
            printf("Enter Emploey Id for Change Detels ");
          scanf("%d",&id_num);
          ret=Update_Ditels_Empoley(id_num,obj1,Size_Emp);
          if(ret==1)
          printf("-->Secssefuleey Update <--\n",id_num);
          else
          printf("-->Name Not found..!!..not update!<--\n",id_num);
          break;

          case 5:
          Displey_list_employ(obj1,Size_Emp);
          break;

          case 6:
          printf("Enter the Nmae of Empoley");
          fflush(stdin);
          gets(Name);
          ret=Update_By_Name(Name,obj1,Size_Emp);
          if(ret==1)
          printf("");
          else
          printf("");
          break;

          case 7:
          printf("Enter the Email of Empoley");
          fflush(stdin);
          gets(UEmail);
          Delate_Empoley_E_mail(UEmail,obj1,Size_Emp);
          break;

          case 8:
          ret=count_Emploey(obj1,Size_Emp);
          printf("\nTotal Empoley of Componey %d\n",ret);
          break;
          

          case 9:
          Heigest_E_sailery(obj1,Size_Emp);
          break;

          case 10:
          _10000_to60000_E_sailery(obj1,Size_Emp);
          break;

          default:
          printf("Exsit hear.......");
      }
    }
    while(iopt!=0);                                   
}
