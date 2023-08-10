#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE];
int value;
int front = -1, rear = -1;

void insert();
void del();
void disp();

int main() {
    x:
        printf("\n\nEnter 1 to insert element:\n");
        printf("Enter 2 to delete element:\n");
        printf("Enter 3 to exit:\n");
        printf("Enter you choice: ");
        scanf("%d",&value);

        switch (value)
        {
        case 1:
            insert();
            disp();
            goto x;

        case 2:
            del();
            disp();
            goto x;

        case 3:
            exit;
        
        default:
            printf("Invalid Number");
            goto x;
        }
}

void insert() {
    if(front == -1)
        front++;

    if(rear == SIZE-1) {
        printf("\n\nQueue Overflow\n\n");
    }else{
        printf("Enter value you want to enter: ");
        scanf("%d",&queue[++rear]);
    }
}

void del() {
    if(front == -1){
        printf("\n\nQueue Underflow\n\n");
        return;
    }else{
        printf("%d deleted\n",queue[front]);
        queue[front++] = 0;
        if(front > rear) {
            front = rear = -1;
        }
    }
}

void disp() {
    int i;
    for(i=0; i<SIZE; i++) {
        printf("%d ",queue[i]);
    }
}