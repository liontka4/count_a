#include <stdio.h>

int s = 0;

int acounter(void)
{
	unsigned char n;
	scanf("%c", &n);
	if (n == '.')
		{
		return s;
		}
	else if	(n == 'a')
		{
		s += 1;
		return acounter();
		}
	else
		{
		return acounter();
		}
}

int main(void)
{
	printf("%d", acounter());
	
	return 0;
}
