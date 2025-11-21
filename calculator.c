#include<stdio.h>
int main() {
    int x, y, result;
    char operation;

    printf("Enter two numbers and operation to be performed: ");
    scanf("%d %d %c", &x,&y,&operation);

    switch(operation) {
        case '+':
            result = x + y;
            printf("%d %c %d = %d\n", x,operation,y,result);
            break;
        case '-':
            result = x - y;
            printf("%d %c %d = %d\n", x, operation, y, result);
            break;
        case '*':
            result = x * y;
            printf("%d %c %d = %d\n", x, operation, y, result);
            break;
        case '/':
            if(y != 0) {
                result = x / y;
                printf("%d %c %d = %d\n", x, operation, y, result);
            } else {
                printf("Error! Division by zero is infinity \n");
            }
            break;
        case '=':
            if(x == y) {
                printf("%d is equal to %d\n", x, y);
            } else {
                printf("%d is not equal to %d\n", x, y);
            }
            break;
        default:
            printf("Invalid operation! Please try again.\n");
            break;
    }

    return 0;
}


