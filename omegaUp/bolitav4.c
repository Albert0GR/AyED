#include <stdio.h>
#include <math.h>

int main()
{
	int pos = 0, m = 0;
	scanf("%i", &pos);
	scanf("%i", &m);
	int muv = 0;
	for(int y = 1; y <= m; y++)
	{
		scanf("%i", &muv);
		switch(muv)
		{
			case 1: pos = ((pos == 1) ? 2 : ((pos == 2) ? 1 : pos)); break;
			case 2: pos = ((pos == 1) ? 3 : ((pos == 3) ? 1 : pos)); break;
			case 3: pos = ((pos == 1) ? 4 : ((pos == 4) ? 1 : pos)); break;
			case 4: pos = ((pos == 2) ? 3 : ((pos == 3) ? 2 : pos)); break;
			case 5: pos = ((pos == 2) ? 4 : ((pos == 4) ? 2 : pos)); break;
			case 6: pos = ((pos == 3) ? 4 : ((pos == 4) ? 3 : pos)); break;		
		}
	}
	printf("%i\n", pos);
}