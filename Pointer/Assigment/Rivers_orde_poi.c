   #include<stdio.h>
   void main()
   {
    int arr[5]={1,2,3,5,6};
    int *ptr=NULL;
    ptr=arr;
    for(int i=5-1;i>=0;i--)
    {
        printf("%d\n",ptr[i]);
    }

   }