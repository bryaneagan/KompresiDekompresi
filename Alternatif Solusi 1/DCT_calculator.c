#include	<stdio.h>
#include	<math.h>
#define	PI	3.1415926535897

int	main(void)
{
int	x,y,u,v;
float	in[8][8]=	
				{{-64,-63,-66,-67,-67,-67,-63,-60},
				{-59,-63,-71,-74,-73,-71,-73,-64},
				{-65,-63,-66,-67,-67,-64,-65,-56},
				{-56,-60,-67,-73,-68,-61,-63,-55},
				{-62,-65,-65,-61,-52,-58,-59,-61},
				{-63,-65,-65,-61,-55,-60,-59,-63},
				{-64,-63,-63,-60,-56,-60,-58,-58},
				{-61,-59,-60,-58,-55,-56,-53,-51}}
				;
float	out[8][8],sum,Cu,Cv;

	for (u=0;u<8;u++)
	{
		for (v=0;v<8;v++)
		{
			sum=0;
			for (x=0;x<8;x++)
				for (y=0;y<8;y++)
				{
					sum=sum+in[x][y]*cos(((2.0*x+1)*u*PI)/16.0)*
						cos(((2.0*y+1)*v*PI)/16.0);
				}
			if (u==0) Cu=1/sqrt(2); else Cu=1;
			if (v==0) Cv=1/sqrt(2); else Cv=1;

			out[u][v]=1/4.0*Cu*Cv*sum;
			printf("%8.1f ",out[u][v]);
		}
		printf("\n");
	}
	printf("\n");
	return(0);
}

