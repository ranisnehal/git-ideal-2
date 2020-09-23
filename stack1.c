#include<stdio.h>
#include<stdlib.h>
#define max 20

void push(int x ,int *top,int stack_arr[])
{
    if(*top == (max-1))
    printf("stack is full..");
    else
    {
      *top == *top+1;
        stack_arr[*top]= x;
    } 
}
int pop(int stack_arr[],int *top)
{
    int x;
    if(*top== -1)
        printf("stack is empty...");
     else 
     {
         x == stack_arr[*top];
        *top = *top-1;
     }
        return x;
    }

    int main()
    {
        int stack[max], top= -1,rem,n;
        int dn=45;
        while(n!=0)
        {
          rem=(n%3);
          push(rem,&top,stack);
            n/=3;
        }
         while (top!=-1)
                  printf( "%d" ,pop(&top , stack));
         printf("\n...");
    }

