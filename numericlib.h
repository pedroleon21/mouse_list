#ifndef BINARYLIB_H
#define BINARYLIB_H

#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif

#ifndef MATH_H
#define MATH_H
#include <math.h>
#endif

#ifndef STRING_H
#define STRING_H
#include<string.h>
#endif
//prototipação de funções
void print_dtob(int numero, int base);
//end
void print_dtob(int numero, int base)
{
    while (numero >= 0)
    {
        if((numero % base) < 10){
            printf("%d",numero % base);
            numero = numero/base;
        }
        else
        {
            printf("%c",find_letter(numero % base));
            numero = numero/base;
        }
        
    }
    
}
char find_letter(int number)
{
    
}
#endif