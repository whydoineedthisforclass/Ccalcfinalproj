#include <stdio.h>
//Basic calculator
int multi(int a, int b){
    return a*b;
}
int div(int a, int b){
    return a/b;
}
int sub(int a, int b){
    return a-b;
}
int ad(int a, int b){
    return a+b;
}
//Square and Maximum for giggles
int maximum(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int squ(int a,int b){
    int e,f;
    printf("What type of exponential function would you like? Ex: Square is 2 while cube is 3\n");
    scanf("%d", &e);
    for(int c=1; c<e; c++){
        b=b*a;
    }
    return b;
}
//Do not press x....
void sentence(){
    printf("\nSave me I'm stuck in a laptop!!!!!!\n\n");
}
int main(){
    int num1, num2,z;
    char type;
    printf(" Welcome to the baby calculator!\n");
    printf("Enter what you want to do...*, /, +, or -\nexponential is e, Maximum is m.\n");
    printf(" Whatever you do...do not press x\n");
    scanf("%c",&type);
    printf("Enter number(s) you want to work with\n");
    switch(type){
        case '*':
            scanf("%d%d",&num1, &num2);
            z= multi(num1,num2);
            printf("Answer is %d\n", z);
            break;
        case '/':
            scanf("%d%d",&num1, &num2);
            z= div(num1,num2);
            printf("Answer is %d\n", z);
            break;
        case '-':
            scanf("%d%d",&num1, &num2);
            z= sub(num1,num2);
            printf("Answer is %d\n", z);
            break;
        case '+':
            scanf("%d%d",&num1, &num2);
            z= ad(num1,num2);
            printf("Answer is %d\n", z);
            break;
        case 'e':
            scanf("%d",&num1);
            z= squ(num1,num1);
            printf("Answer is %d\n", z);
            break;
        case 'm':
            scanf("%d%d",&num1, &num2);
            z= maximum(num1,num2);
            printf("Answer is %d\n", z);
            break;
        case 'x':
            sentence();
            break;
    }
    return 0;
    //proof that I merged the thingy..
}
