#include<stdio.h>
#include<string.h>
void main ()
{
    char name[20];
    printf("Enter your name:");
    gets(name);
    printf("Reverse String is %s",strrev(name));
    int length=0;
    int h=strlen(name)-1;
  // Keep Comparing Character 
  //while They Are same
  while (h>length)
  {
    if (name[length++] != name [h--])
    {
        printf("\n%s is not a palindrome\n",name);
        return 0;
        // will return from here 
    }
  }
  printf("\n%s is a palindrom\n",name);
}