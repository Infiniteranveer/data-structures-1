# include<stdio.h>
# include<malloc.h>

static int top = -1;

void push(int data, int *ar, int size)
{
    int n = size - 1;
    if(top == n)
        printf("Stack Overflow!!");
    else
    {
        top++;
        ar[top] = data;   
    }
}

void pop(int *arr) // erroneous function need to be corrected
{
    int t = top;
    int item;

    if(t == -1)
        printf("Stack UnderFlow!!");
    else
    {
        arr[t] = arr[t+1];
        t--;
    }
}

void display(int *ar)
{
    int current = top;
    while(current != -1)
    {
        printf("top = %d %d\n",current, ar[current]);
        current--;
    }
}

int main(int argc, char const *argv[])
{
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size of stack = %d \n",size);

    push(94, arr, size);
    push(34, arr, size);
    push(54, arr, size);
    push(24, arr, size);
    // push(74, arr, size);
    display(arr);
    pop(arr);
    display(arr);
    
    return 0;
}


