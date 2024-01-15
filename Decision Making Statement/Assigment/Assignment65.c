// Enter the Indian classicsl Musical Notes
// Print the Westan notes

#include<stdio.h>
void main()
{
    printf("Enter the Musical Notes");
    char Notes;
    scanf("%c",&Notes);
   switch(Notes)
   {
    case 'C':
          printf("Western Nots Is DO");
          break;
          
    case 'D':
          printf("Western Nots Is RE");
          break;
    case 'E':
          printf("Western Nots Is MI");
          break;
    case 'F':
          printf("Western Nots Is FA");
          break;
    case 'G':
          printf("Western Nots Is SO");
          break;
    case 'A':
          printf("Western Nots Is LA");
          break;
    case 'B':
          printf("Western Nots Is TI");
          break;
    default:
          printf("Invaileed Alphabet....");

   }

}