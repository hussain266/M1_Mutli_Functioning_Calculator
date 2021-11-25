#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "maze mat lo, enter the valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void square();
void cube();
void squareroot();
int main(){
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\n******* Press 0 to quit the program ********\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for Factorial \n");
    printf("Enter 7  for square \n");
    printf("Enter 8  for cube \n");
    printf("Enter 9 for squareroot\n\n");
    
    while(1){    
    printf("\n\nEnter the operation you want to do: ");
    
    scanf("%d",&choice);
            
    switch(choice)
    {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    factorial();
                    break;
                case 7:
                    square();
                    break;
                case 8:
                    cube();
                    break;
                case 9:
                    squareroot();
                    break;
                case 0:
                    exit(0);
                default:
                    printf("\n********** %s ***********\n",note);
        }
    
    }
    return 0;
}

void addition(){
    int a,n,i=0,sum=0;
    printf("How many values u want to add ");
    scanf("%d",&n);
    while(i<n){
        printf("Enter the value");
        scanf("%d",&a);
        sum+=a;
        i++;
    }
    printf("The sum of Entered values is=%d\n",sum);
    
}
void subtraction(){
    printf("Enter the numbers you want to subtract: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The subtraction of a and b is %d\n",a-b);
}
void multiplication(){
    printf("Enter the numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is %d\n",a*b);
}
void division(){
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division of a and b is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial(){
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}

void square(){
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=b*b;
    printf("The square of %lf is %lf",b,p);
}
void cube(){
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=b*b*b;
    printf("The cube of %lf is %lf",b,p);
}
void squareroot(){
    double b;
    float temp, sqrt;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    sqrt = b/2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( b/temp + temp) / 2;
    printf("The square root of %lf is %lf",b,sqrt);
}
}
