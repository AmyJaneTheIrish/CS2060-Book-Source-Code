// Fig. 7.28: fig07_28.c
// Demonstrating an array of pointers to functions.
#include <stdio.h>

// prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(void)
{
   // initialize array of 3 pointers to functions that each take an
   // int argument and return void                              
   double (*f[4])(double, double) = {add, subtract, multiply, divide};

   printf("%s", "Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide. (4 to quit)");
   size_t choice; // variables to hold user's choice
   double num1 = 0;
   double num2 = 0;
   scanf("%llu", &choice);

   // process user's choice
   while (choice >= 0 && choice < 4) {
       // Asking user for 2 numbers        
       printf("%s", "Enter the first number: ");
       scanf("%lf", &num1);
       printf("%s", "Enter the second number: ");
       scanf("%lf", &num2);
       // invoke function at location choice in array f and pass
       // choice as an argument  
       double result = (*f[choice])(num1, num2);
       printf("You chose %llu and the result is: %lf\n\n", choice, result);
     

       printf("%s", "Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide. (4 to quit)");
       scanf("%llu", &choice);
   } 

   puts("Program execution completed.");
} 

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}




/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

