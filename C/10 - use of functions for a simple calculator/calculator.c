#include <stdio.h>

/*
calculator
piersilvio spicoli - uniba informatica
*/

//declaration of functions
void add();
void sub();
void mul();
void div();
void square ();

void sel_func (int);

int main(){
	
    int choise; //choise
    
    do{
    	Input:
           printf("Input a number [ +(1), -(2), *(3), /(4), ^(5), exit(6)]: ");
           scanf("%d",&choise);
         
           if (choise > 6 || choise < 1){
           	
                  printf("Please input again\n");
                  
                  goto Input; //if true, exit the condition and return to 'input'
           }
           
           sel_func (choise);
           
	}while(choise != 6);
	
	return 0;  
}

void sel_func (int choise){
	
        void (*fptr)(void); //pointer: it is a function that allows us to assign each operation and then execute it
        
        switch (choise){
	        case 1:
	                fptr = add; //to assign void functions there is no need to put round brackets
	                break;
	        case 2:
	                fptr = sub;
	                break;
	        case 3:
	                fptr = mul;
	                break;
	        case 4:
	                fptr = div;
	                break;
	        case 5:
	                fptr = square;
	                break;        
        }
    
        fptr(); //focus on the function we want to use
}

void add(){
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a + b);
}

void sub(){
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n" , a - b);
}

void mul(){
        int a, b;
      
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a * b);
}

void div(){
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a / b);
}

void square(){
	
        int exp, base, i;
        int result = 1;
    
        printf("Input base : ");
        scanf("%d",&base);
        
        printf("Input exp : ");
        scanf("%d",&exp);
    
        for (i = 0; i < exp; i++){ result = result * base; }
                
    
        printf("%d^%d = %d\n", base,exp,result);
}


