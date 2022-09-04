#include<stdio.h>
// add the two numbers using pointers, program in C
int main () {
    int fno, sno, *ptr1, *ptr2, sum;

    printf("enter the first number:");
    scanf("%d" , &fno);
    printf("Enter the second number :");
    scanf("%d" , &sno);

    ptr1 = &fno;
    ptr2 = &sno;

sum = *ptr1 + *ptr2;

printf("the sum of the entred number :%d\n" , sum);




return 0;
}

