 #include<stdio.h>
 int main()
 {

   // 3 poianter poainting dif file
    FILE *feptr=NULL;
    FILE *foptr=NULL;
    FILE *fpptr=NULL;

    char ch;
    char Name[30];
    // char Data;
    FILE *fptr=NULL;
    printf("Enter thr which file have data ..\n");                         // Enter file name// addresthat olredey create for read data
    scanf("%s",&Name);
    fptr=fopen(Name,"r");                                     
    if(fptr!=NULL)
    printf("Secssefuley oppan\n");
    else
    printf("not Secssefuly open\n");
    
    int even=0,odd=0,prime=0;
    int ino=0,count=0;
    char num,spa=' ';
    while(ch=fgetc(fptr))                                      // loop for red data // fun for fgetc( refranse or file poainter)
    {
        if(ch=='\0')
        {
            break;
        }

       ino=ch-48;                                              // logic for cher to int  

       count=0;
       for(int i=2;i<ino;i++)                                  // logic for prime num     
       {
         if(ino%i==0)
         {
            // printf("%d",ino);
           count++;
         }
       }
       if(count==0)
       {
         
          fpptr=fopen("_3prime.txt","a");                      // _3prime.txt name of wher we want store prime num (olredey created) open for write data               
          num=ino+48;;                                         // logic for int to chsr convertion
          // printf(" %c ",num);
          fputc(num,fpptr);                                    // function coll for data write in _3prime.txt, fpptr->ref of file _3prime.txt
          fputc(spa,fpptr);                                    // ading spase bit two char
       }
      
       
       if(ino%2==0)                                            // logic for Even num
       {
           feptr=fopen("_1Even.txt","a");                      //F coll for open Even file  (olredey created)file _1Even.txt
           num=ino+48;
          //  printf("%c",num);
           fputc(num,feptr);
           fputc(spa,feptr);
             
       }else if(ino%2!=0)
       {
          foptr=fopen("_2Odd.txt","a");                      // //F coll for open Even file  (olredey created)file _2Odd.txt
           num=ino+48;;
          //  printf("%c",num);
          fputc(num,foptr);
          fputc(spa,foptr);                                  //aadding space in file
       }
    } 
    // close oll firl ref
   fclose(feptr);                
   fclose(foptr);
   fclose(fpptr);
   fclose(fptr);
   return 0;
 }
 