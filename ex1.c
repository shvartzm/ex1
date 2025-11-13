/******************
Name: Moar Shvartz
ID: 216763235
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    int a;
    printf("Please enter a character \n");
    a = getchar();
    printf("Its numerical value is: %d\n",a);
    a = a & 1; // 1 is represented by series of 0 and lsb 1, if a is odd then 1 stay, else (even) equation will turn into 0000...
    printf("0 for even, 1 for odd: %d\n",a);

    // 2's complement and other representations
    printf("\n2’s Complement to Other Representations:\n");
    int c;
    printf("Please enter a negative integer \n");
    scanf("%d", &c);
    printf("1's complement: %d\n", 0- ~c); //flipping the bits 
    printf("unsigned: %u", c);

    // Shifting right and left
    printf("\nShifting Right and Left:\n");
    int n,right,left;
    printf("Please enter 3 integers \n");
    scanf("%d%d%d", &n, &right, &left);
    printf("After shifting right and left: %d", (n >> right) << left);  

    // Even - Odd
    printf("\nEven - Odd:\n");
    int x,y,z,answer;
    printf("Please enter 3 integers \n");
    scanf("%d%d%d", &x, &y, &z); 
    answer = ((x&1&y)) | ((x&z&1)) | ((y&z&1)); /*also equal to - ((x&1) & (y&1)) | ((x&1) & (z&1)) | ((y&1) & (z&1))- 
                                                 because of associativity and idempotence in discrete maths */ 
    printf("0 - most of them are even, 1 - most of them are odd: %d", answer);

    // Different Bases
    printf("\nDifferent Bases:\n");
    int octa,hexad;
    scanf("%o%x", &octa, &hexad);
    printf("LSBs: %d %d\n", (octa& 1 ), (hexad & 1) ); // if even then lsb is 0, else 1
    printf("MSBs: %d %d\n", ((octa >> 31) & 1), ((hexad >> 31) & 1) ); // number is 32 bits, we shift 31 to get last one
    printf("Bye!\n");

    return 0;
}

