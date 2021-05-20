/////////////////////////////////////// 
//             Cpp homework 3        //    
//              made by Lurk         //     
//              gedit + gcc          //      
/////////////////////////////////////// 
#include <stdio.h>
#include <stdlib.h>

extern int a_ext, b_ext, c_ext, d_ext;

int main () {
const int a = 4, b = 5, c = 19, d = 9;
double e;
printf("\nPart1\n");
printf("\ne = a*(b + (c/d)) = %d * (%d + (%d / %d)) = %f\n", a, b, c, d, a*(b + ((double)c/d)));

printf("\nPart2\n\n");
int var;
printf("Please enter integer number:");
scanf("%d", &var);
printf("difference between your number and 21 is: %d\n", var - 21);
printf("output: %d\n", (var > 21) ? 2*(var - 21) : (var - 21));

printf("\nPart3\n");

printf("\ne = a_ext*(b_ext + (c_ext/d_ext)) = %d * (%d + (%d / %d)) = %f\n", a_ext, b_ext, c_ext, d_ext, a_ext*(b_ext + ((double)c_ext/d_ext)));
printf("\nPart4\n\n");

int array [3][3][3] = {111, 112, 113, 121, 122, 123, 131, 132, 133,
                       211, 212, 213, 221, 222, 223, 231, 232, 233,
                       311, 312, 313, 321, 322, 323, 331, 332, 333};

//int* p1 = &array[1][1][1];
//printf("Direct appeal to [1][1][1] cell of array: %d\n", *p1);
printf("Direct appeal with *: %d\n", *(&array[1][1][1]));     

//int* p2 = &array[0][0][0];       
//printf("Bias appeal to [1][1][1] cell of array: %d\n", *(p2+13));  
printf("Bias appeal with *: %d\n", *(&array[0][0][0] + 13));  
               
return 0;
};
