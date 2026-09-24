#include<stdio.h>
#include<conio.h>

#define MAX 5

int Stack[MAX];
int Top = 0;

void Push(int No)
{
    if(Top == MAX)
    {
        printf("\nStack is Full...");
    }
    else
    {
        Stack[Top] = No;
        Top++;
    }
}

void Pop()
{
    if(Top == 0)
    {
        printf("\nStack is Empty...");
    }
    else
    {
        printf("\nDeleted Element = %d", Stack[Top-1]);
        Top--;
    }
}

void Display()
{
    int i;

    if(Top == 0)
    {
        printf("\nStack is Empty...");
    }
    else
    {
        printf("\nStack Elements are:\n");

        for(i = Top-1; i >= 0; i--)
        {
            printf("%d\n", Stack[i]);
        }
    }
}

int main()
{
    Push(10);
    Push(20);
    Push(30);

    Display();

    Pop();

    Display();

    getch();
    return 0;
}
