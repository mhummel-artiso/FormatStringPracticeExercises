#include <stdio.h>

int main (int argc, char const *argv[])
{
// Aufgabe 4: Sorry, die ist schwierig.
// Schreibe 3 in die target-Variable.
// Tipp: Entscheide dich für den richtigen Format Identifier und finde die Adresse.

long int target = 5;
long int *ptr = &target;

printf(argv[1]);
printf("\ntarget: %d\n", target);

return 0;
}