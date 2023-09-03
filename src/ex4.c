#include <stdio.h>

int main (int argc, char const *argv[])
{
long int target = 5;
long int *ptr = &target;

printf(argv[1]);
printf("\ntarget: %d\n", target);

return 0;
}