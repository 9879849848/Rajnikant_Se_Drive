//WAP to find reverse of string using recursion
#include<stdio.h>
#include<string.h>
 void function(char name[])
 {
    return function(strrev(name));
 }
  int main ()
  {
    char name[20],r;
    printf("Enter your Name:");
    scanf("%s",&name[r]);
    printf("This Is your Reverse string:%s",strrev(name));
    function(name);
  }