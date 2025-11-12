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
    int x;
    printf("Please enter a character \n");
    x = getchar();
    printf("Its numerical value is: %d\n",x);
    x = x & 1;
    printf("0 for even, 1 for odd: %d\n",x);

    // 2's complement and other representations
    printf("\n2’s Complement to Other Representations:\n");
    printf("Ascii:\n");
    int x;
    printf("Please enter a negetive integer \n");
    scanf("%d", &x);
    printf("1's complement: %d\n", 0- ~x);
    printf("unsigned: %u", x);

    // Shifting right and left
    printf("\nShifting Right and Left:\n");
    int x,right,left;

    printf("Please enter 3 integers \n");
    scanf("%d%d%d", &x, &right, &left);
    printf("After shifting right and left: %d", (x >> right) << left);

    // Even - Odd
    printf("\nEven - Odd:\n");
    int x,y,z,answer;
    printf("Please enter 3 integers \n");
    scanf("%d%d%d", &x, &y, &z); 
    //answer = ((x&1) & (y&1)) | ((x&1) & (z&1)) | ((y&1) & (z&1));
    answer = ((x&1&y)) | ((x&z&1)) | ((y&z&1)); /*also equal to - ((x&1) & (y&1)) | ((x&1) & (z&1)) | ((y&1) & (z&1))- 
                                                 because of associativity and idempotence in discrete maths */ 
    printf("0 - most of them are even, 1 - most of them are odd: &d", answer);

    // Different Bases
    printf("\nDifferent Bases:\n");
    int octa,hexad;
    scanf("%o%x", &octa, &hexad);
    printf("LSBs: %d %d\n", (octa& 1 ), (hexad & 1) );
    printf("MSBs: %d %d\n", ((octa >> 31) & 1), ((hexad >> 31) & 1) );
    printf("Bye!\n");

    return 0;
}

