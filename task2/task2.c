#include <stdio.h>
#include <stdlib.h>

typedef int (*Operation) (int a, int b);

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  Operation operators[4];
  char operands[10];
  int operation;
  operators[0] = &add;
  operators[1] = &subtract;
  operators[2] = &multiply;
  operators[3] = &divide;
  
  int a = 12;
  int b = 3;
  int res;
  while(1){
    printf("Operand 'a': %d | Operand 'b' : %d Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):", a, b);
    scanf("%s", operands);
    operation = atoi(operands);
    while(operation>4){
      printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
      scanf("%s", operands);
      operation = atoi(operands);
      
    }
    if(operation == 4){
      printf("Quit.\n");
      break;
    }
    res = (*operators[operation])(a,b);
    printf("x = %d\n", res);
  }
  
  
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
  printf ("Adding 'a' and 'b'\n"); 
  return a + b; }
int subtract (int a, int b) { 
  printf ("Subtracting 'a' and 'b'\n"); 
  return a - b; }
int multiply (int a, int b) { 
  printf ("Multiplying 'a' and 'b'\n"); 
  return a * b; }
int divide (int a, int b) { 
  printf ("Dividing 'a' and 'b'\n"); 
  return a / b; }