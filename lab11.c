#include<stdio.h>
int btod(int); // Prototype of btod() function

int main()
{
int binary,decimal;
// Accept input in binary format
printf("Enter binary input :");
scanf("%d",&binary);

// Invoke btod() to convert binary to decimal
decimal=btod(binary);

// Print the decimal equivalent of binary
printf("Decimal equivalent = %d\n", decimal);
return 0;
}
// Function Definition of btod() function
int btod(int binary)
{
if (binary==0)
{
return 0;
}
else
{
    return (binary%10 + btod(binary/10) * 2);
}
}