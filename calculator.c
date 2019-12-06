#include<stdio.h>
int main(){
    int a,b,ch;
    do{
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        printf("Press 1.Addition\n");
        printf("Press 2.Subtraction\n");
        printf("Press 3.Multiplication\n");
        printf("Press 4.Division\n");
        printf("Press 5.exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("%d\n",a+b);
                    break;
            case 2:printf("%d\n",a-b);
                    break;
            case 3:printf("%d\n",a*b);
                    break;
            case 4:printf("%f\n",(1.0*a)/b);
                    break;
            case 5:break;
            default:printf("Wrong choice\n");
        }
    }while(ch!=5);
}