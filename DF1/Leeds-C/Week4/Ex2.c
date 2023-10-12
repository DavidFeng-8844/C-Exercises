#include <stdio.h>
#include <stdbool.h>
int main(){
    //debugging

    double a = 0, b = 0;
    char op;
    for(;;){
        printf("Enter a number:");
        scanf("%lf", &a);
        // Consume the newline character left in the input buffer
        //while (getchar() != '\n');
        printf("Enter a operator:");
        scanf(" %c", &op);
        switch (op)
        {
        case ('+'):
            printf("=%f\n", a + b);  
            b = a + b; 
            break;  
        case ('-'):
            printf("=%f\n", b - a);
            b = b - a;
            break;
        case ('*'):
            printf("=%f\n", a * b);
            b = a * b;
            break;
        case ('/'):
            printf("=%f\n", b / a);
            b = b / a;
            break;
        case ('S'):
            b = a;
            printf("Set Accumulator to %lf\n", b);
            break;
        case ('E'):
            
            break;
        
        default:
            printf("Invalid operator\n");
            break;
        }
    if(op == 'E'){
        printf("End of Program");
        break;
    }

    }

    
    

}