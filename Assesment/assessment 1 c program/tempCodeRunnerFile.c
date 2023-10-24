#include<stdio.h> 
int main() 
{ 
 int num,p,b,d,i,amount,total_amount,secondamount;
 char choice; 
 printf("1.pizza   price=180 rs/pcs\n2.burger   price=100rs/pcs\n3.dosa  price=120rs/pcs\n4.idli   price=50rs/pcs"); 
 printf("\nselect item"); 
 scanf("%d",&num); 
 switch (num) 
 { 
  case 1: 
   printf("you have selected pizza "); 
   printf("\nEnter the Qty"); 
   scanf("%d",&p); 
   amount=p*180; 
   printf("amount:%d",amount); 
   total_amount=amount; 
   printf("\ntotal amount is=%d",total_amount); 
   break; 
   case 2: 
   printf("\nyou have selected burger "); 
   printf("\nEnter the Qty"); 
   scanf("%d",&b); 
   amount=b*100; 
   printf("amount:%d",amount); 
   total_amount=amount; 
   printf("\ntotal amount is=%d",total_amount); 
   break; 
   case 3: 
   printf("you have selected dosa "); 
   printf("\nEnter the Qty"); 
   scanf("%d",&d); 
   amount=d*120; 
   printf("amount:%d",amount); 
   total_amount=amount; 
   printf("\ntotal amount is=%d",total_amount); 
   break; 
   case 4: 
   printf("you have selected idli "); 
   printf("\nEnter the Qty"); 
   scanf("%d",&i); 
   amount=i*50; 
   printf("amount:%d",amount); 
   total_amount=amount; 
   printf("\ntotal amount is=%d",total_amount); 
   break; 
   } 
    printf("\nDo you want to place more orders? (y/n): ");
        scanf(" %c", &choice);     
   if(choice =='y') 
   { 
    printf("1.pizza   price=180 rs/pcs\n2.burger   price=100rs/pcs\n3.dosa  price=120rs/pcs\n4.idli   price=50rs/pcs"); 
 printf("\nselect item"); 
 scanf("%d",&num); 
 switch (num) 
 { 
  case 1: 
   printf("you have selected pizza "); 
   printf("\nEnter the Qty"); 
   scanf("%d",&p); 
   secondamount=p*180; 
   printf("amount:%d",secondamount); 
   total_amount=amount+secondamount; 
   printf("\ntotal amount is=%d",total_amount); 
   break; 
   case 2: 
   printf("you have selected burger "); 
   printf("\nEnter the Qty"); 
   scanf("%d",&b); 
   secondamount=b*100; 
   printf("amount:%d",secondamount); 
   total_amount=amount+secondamount; 
   printf("\ntotal amount is=%d",total_amount); 
   break; 
   case 3: 
   printf("you have selected dosa "); 
   printf("\nEnter the Qty"); 
   scanf("%d",&d); 
   secondamount=d*120; 
   printf("amount:%d",secondamount); 
   total_amount=amount+secondamount; 
   printf("\ntotal amount is=%d",total_amount); 
   break; 
   case 4: 
   printf("you have selected idli "); 
   printf("\nEnter the Qty"); 
   scanf("%d",&i); 
   secondamount=i*50; 
   printf("amount:%d",secondamount); 
   total_amount=amount+secondamount; 
   printf("\ntotal amount is=%d",total_amount); 
   break; 
   } 
   printf("do you want place more Order ? y/n:"); 
   scanf("%c",&choice); 
     } 
    else if(choice=='n')
   { 
    printf("thank you visit Again"); 
   } 
   
   return 0;
}


