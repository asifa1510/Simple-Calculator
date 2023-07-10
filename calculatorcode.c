#include<stdio.h>
#include<math.h>
int main(){
    int ch;
    do{
        printf("1.Add\n");
        printf("2.Subtract\n");
        printf("3.Multiply\n");
        printf("4.Divide\n");
        printf("5.Square\n");
        printf("6.Square root\n");
        printf("0.EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:
            float a,b;
            printf("enter any 2 numbers:");
            scanf("%f %f", &a,&b);
            float add;
            add=a+b;
            printf("Ans=%f\n",add);
            break;
            case 2:
            float c,d;
            printf("enter any 2 numbers:");
            scanf("%f %f", &c,&d);
            float sub;
            sub= c-d;
            printf("Ans=%f\n",sub);
            break;
            case 3:
            float e,f;
            printf("enter any 2 numbers:");
            scanf("%f %f", &e,&f);
            float mul;
            mul= e*f;
            printf("Ans=%f\n",mul);
            break;
            case 4:
            float g,h;
            printf("enter any 2 numbers:");
            scanf("%f %f", &g,&h);
            float divi;
            divi= g/h;
            printf("Ans=%f\n",divi);
            break;
            case 5:
            float i;
            printf("enter any number:");
            scanf("%f", &i);
            float sq;
            sq= i*i;
            printf("Ans=%f\n",sq);
            break;
            case 6:
            float j;
            printf("enter number:");
            scanf("%f", &j);
            float sqt;
            sqt= sqrt(j);
            printf("Ans=%f\n",sqt);
            break;
            case 0:
            printf("Exiting...");
            break;
            }

        }while(ch!=0);
        return 0;
}
