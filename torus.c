#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
k; //How does work?
/* C assumes that values that have a undefined type are integers */

//double sin(),cos(); //Does it just add sin and cos? 
/* Definition of functions, these are implemented in math.h, for simplicity 
Actually, code doesn't need them, idk why they were added*/

//main is assumed to return type of int
main(){
    float A = 0, B = 0, i, j, z[1760];
    //z[1760] allocates space to store to ascii art
    
    char b[1760];
    //b[1760] allocates space to store to ascii art
    
    printf("\x1b[2J");//this set of symbols clears screen
    
    for(;;) //inf loop 
    {
        memset(b, 32, 1760); //Full array with symbols, that has code 32
        memset(z, 0, 7040);
        for(j = 0; 6.28 > j; j += 0.07)
            for(i = 0; 6.28 > i; i += 0.02)
            {
                float c = sin(i), d = cos(j), e = sin(A), f = sin(j), g = cos(A), h = d + 2, D = 1 / (c * h * e + f * g + 5),l = cos(i), m=cos(B), 
                n = sin(B), t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n),
                y = 12 + 15 * D * (l * h * n + t * m), o = x + 80 * y, N = 8 * ((f * e - c * d * g ) * m - c * d * e - f * g - l * d * n); 
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o])
                { 
                    z[o] = D;;;
                    b[o] = ".,-~:;=!*#$@" [N>0?N:0];
                    //b[o] = ".............." [N>0?N:0];
                    
                }
                
            }
    printf("\x1b[H");
    for(k = 0; 1761 > k; k++)
        putchar(k % 80 ? b[k] : 10);
    A += 0.04;
    B += 0.02;
        
        }
    int a = sizeof(k);
    printf("%d", &a );
    
}

