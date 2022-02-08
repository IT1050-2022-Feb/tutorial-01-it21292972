/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int sum=0;
  int number=0,n;
  printf("enter the number :");
    scanf("%d",&n);
  while(number!=n){
    number++;

    sum=sum+number;
    
  }
  printf("sum=%d",sum);
  
  return 0;
}

