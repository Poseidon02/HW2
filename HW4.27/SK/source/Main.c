#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i, j,t,s,g,h;



	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			for (t = 1; t <= 500; t++)
			{
				if (i < j)
				{
					s = i * i;
					g = j * j;
					h = t * t;
					if (s + g == h)
						printf("%d %d %d \n", i, j, t);
				}
				
			}
		}
	}
	
	
	system("pause");
	return 0;
}