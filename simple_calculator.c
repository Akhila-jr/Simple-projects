//BUILDING A SIMPLE CALCULATOR//
//Problem statement - 2 values are taken from user input and a single arithmetic operation should be performed//

#include<stdio.h>

int main(){
  int a,b;
  printf("Enter 2 numbers:\n");
  scanf("%d %d",&a,&b);
  printf("Enter A for add,S for sub, M for product & D for integer division :\n");
  char operator;
  scanf("%c",&operator);
  switch (operator){
    case 'A':
      printf("%d",a+b);
      break;
    case 'S':
      printf("%d",a-b);
      break;
    case 'M':
      printf("%d",a*b);
      break;
    case 'D':
      printf("%d",a/b);
      break;
  }
  return 0;}
  
  
  
  
  
  
  
  
  
  
