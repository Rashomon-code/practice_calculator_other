#include <stdio.h>
#include "get_input.h"
#include "calculator.h"

int main(void){
    double num1, num2;
    char operator;
    int check;

    for(;;){
        check = get_input(&num1, &operator, &num2);
        if(check == 1){
            return 1;
        }

        switch(operator){
            case '+':
            case '-':
            case '*':
            case '/':
        }
    }

    return 0;
}