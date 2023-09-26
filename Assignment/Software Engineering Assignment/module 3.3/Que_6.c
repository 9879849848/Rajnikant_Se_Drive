/* Write a program of structure employee that provides the following
information -print and display empno, empname, address and age  */
 #include<stdio.h>
 #include<string.h>
  struct Employ{
    int employnum,employage;
    char employname[20],address[100];

  }e1;
  void main ()
  {
    char employname[20],address[100];
    printf("Enter your Employ Number");
    scanf("%d",&e1.employnum);
    printf("Enter your Employ name:");
    scanf("%s",&employname);
    strcpy(e1.employname,employname);
    printf("Enter your address:");
    scanf("%s",&address);
    strcpy(e1.address,address);
    printf("Enter your Age:");
    scanf("%d",&e1.employage);
    
    printf("Your Employ number is a:%d\n",e1.employnum);
    printf("Your Employ Name is a:%s\n",e1.employname);
    printf("Your Adress is a:%s\n",e1.address);
    printf("Your Employage is a:%d\n",e1.employage);

  }
