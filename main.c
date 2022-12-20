#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    
    int question_try = 1;
    while(1){
        int num1, num2;
        int realresult = 0, myresult = 0;

        num1 = rand()%10;
        num2 = rand()%10;

        int calculate = rand()%4;
        char sign;
        switch (calculate)
        {
        case 1: sign = '+';
            realresult = num1 + num2;
            break;
        case 2: sign = '-';
            realresult = num1 - num2;
            break;
        case 3: sign = '*';
            realresult = num1 * num2;
            break;
        case 0: sign = '/';
            realresult = num1 / num2;
            break;
        }

        printf("[%d/10] %d %c %d = ",question_try, num1, sign, num2);
        scanf("%d", &myresult);

        if(realresult == myresult){
            printf("Correct\n");
            question_try++;
            
        }
        if(realresult != myresult){
            printf("Wrong! Answer is %d\n", realresult);
        }

        if(question_try == 11){
            break;
        }
    }
}