// Student Grade Calculator:

#include <stdio.h>

int main(){
    int a;
    printf("Enter the percentage of marks scored by the student:\n");
    scanf("%d", &a);

    if(a>100){
        printf("Invalid! Student can't score more than 100%% marks!");
    }

    else if((a>=90) && (a<=100)){
        printf("The Student scored A Grade!\n");
    }

    else if((a>=80) && (a<90)){
        printf("The Student scored B Grade!\n");
    }

    else if((a>=70) && (a<80)){
        printf("The Student scored C Grade!\n");
    }

    else if((a>=60) && (a<70)){
        printf("The Student scored D Grade!\n");
    }

    else if((a>=50) && (a<60)){
        printf("The Student scored E Grade!\n");
    }

    else if((a>=0) && (a<50)){
        printf("The Student scored F Grade!\n");
    }

    else if(a<0){
        printf("Invalid! Student can't score less than 0%%!\n");
    }

    return 0;
}