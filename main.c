#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 0;
	int len2 = 0;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
    
    
    /*printf("\n-----------------------\n");
    printf("\n\nCasos de prueba para CHARS:\n\n");

    len = _printf("%c", 'a');
    printf("el valor de len es = %d\n", len);
    printf("\n");
    _printf("%c%c", 'm', 'a');
    printf("\n");
    len = _printf("hola %c\n", 'h');
    printf("el valor de len es = %d\n", len);
    printf("\n\nCasos de prueba para STRINGS:\n\n");
    len = _printf("%s\n", "mayte");
    printf("el valor de len es = %d\n", len);
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("probando\n");
    printf("\n");
    len = _printf("%\n");
    len2 = printf("%\n");
    printf("el valor de len es = %d\n", len, len2);

_printf("\nEste es un ejemplo con solo un %% y nada después:%");
		printf("\n");*/

    return (0);
}
