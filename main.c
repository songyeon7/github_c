#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    
    int question_try = 1;
    int num1, num2;

    num1 = rand()%10;
    num2 = rand()%10;

    int calculate = rand()%4;
    char sign;
    switch (calculate)
    {
    case 1: sign = '+';break;
    case 2: sign = '-';break;
    case 3: sign = '*';break;
    case 4: sign = '/';break;
    }
    
}