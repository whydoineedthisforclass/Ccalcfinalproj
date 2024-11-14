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
//Square and Maximum for giggles
float maximum(float a, float b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
float squ(float a,float b){
    int e,f;
    printf("What type of exponential function would you like? Ex: Square is 2 while cube is 3\n");
    scanf("%d", &e);
    for(int c=1; c<e; c++){
        b=b*a;
    }
    return b;
}
int main(){
    float num1, num2,z;
    char type;
    printf("Enter what you want to do...*, /, +, or -\nexponential is e.\n");
    printf(" Whatever you do...do not press x\n");
    scanf("%c",&type);
    printf("Enter number(s) you want to work with\n");
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
        case 'e':
            scanf("%f",&num1);
            z= squ(num1,num1);
            printf("Answer is %f\n", z);
            break;
        case 'm':
            scanf("%f%f",&num1, &num2);
            z= maximum(num1,num2);
            printf("Answer is %f\n", z);
            break;
    }
    return 0;
}
