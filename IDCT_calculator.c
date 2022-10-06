#include	<stdio.h>
#include	<math.h>
#define	M_PI	3.1415926535897

int	main(void)
{
int	x,y,u,v;
double idct,sum,Cu,Cv;
float	in[8][8]=	
{{-496,-11,10,0,0,0,0,0},
				{-24,12,14,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{18,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0}}
                ;
float	out[8][8], greyLevel;

for (u = 0; u < 8; u++) {
    for (v = 0; v < 8; ++v) { 
        sum = 0.0;  
        for (x = 0; x < 8; x++) {
            for (y = 0; y < 8; y++) {
            if (u == 0)
                Cu = 1.0 / sqrt(2.0);
            else
                Cu = 1.0;
            if (v == 0)
                Cv = 1.0 / sqrt(2.0);
            else
                Cv = (1.0);
            // Level around 0
            greyLevel = in[x][y];
            idct = (greyLevel * cos(((2 * x + 1) * u * M_PI) / 16.0) *
                    cos(((2 * y + 1) * v * M_PI) / 16.0));
            sum += idct;
            }               
        }

        out[u][v] = 0.25 * Cu * Cv * sum;
        printf("%8.0f ", out[u][v]);         
    }
   printf("\n"); 
}
printf("\n");
}