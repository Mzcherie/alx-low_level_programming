#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
* main - This is where the whole process begins
* Return: This returns an exit code of 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf(%d is positive\n", n);
}
else if (n == 0)
{
print(%d is zero\n", n);
}
else
{
printf(%d is negative\n", n);
}
return (0);
}
