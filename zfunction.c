#include <stdio.h>
//Basic calculator
float multi(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}
float sub(float a, float b){
    return a-b;
}
float ad(float a, float b){
    return a+b;
}
//Square and percent for giggles
float squ(float a,float b){
    float e;
    printf("What type of exponential function would you like? Ex: Square is 2 while cube is 3\n");
    scanf("%f", &e);
    for(int c=1; c<e; c++){
        b=b*a;
    }
    return b;
}
float per(float a){
    float e,b;
    printf("What percent off are you looking for ex: 80%% is 80 not 0.8\n");
    scanf("%f", &e);
    e=e/100;
    b=a*e;
    return b;
}
int main(){
    float num1, num2,z;
    char type;
    printf("Enter what you want to do...,%%,*, /, +, or -\n Exponential is e.\n");
    scanf("%c",&type);
    printf("Enter numbers you want to work with\n");
    switch(type){
        case '*':
            scanf("%f%f",&num1, &num2);
            z= multi(num1,num2);
            printf("Answer is %f\n", z);
            break;
        case '/':
            scanf("%f%f",&num1, &num2);
            z= div(num1,num2);
            printf("Answer is %f\n", z);
            break;
        case '-':
            scanf("%f%f",&num1, &num2);
            z= sub(num1,num2);
            printf("Answer is %f\n", z);
            break;
        case '+':
            scanf("%f%f",&num1, &num2);
            z= ad(num1,num2);
            printf("Answer is %f\n", z);
            break;
        case '%':
            scanf("%f",&num1);
            z= per(num1);
            printf("Answer is %f\n", z);
            break;
        case 'e':
            scanf("%f",&num1);
            z= squ(num1,num1);
            printf("Answer is %f\n", z);
            break;
    }
    return 0;
}
