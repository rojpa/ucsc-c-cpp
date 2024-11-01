/* Converting Fahrenheit to Celcius
C/5 = (F-32)/9
*/

#include <stdio.h>
int main(void)
{
	int Fahrenheit, Celcius;
	printf("input Fahrenheit: ");
	scanf("%d", &Fahrenheit);
	Celcius = 0.56*(Fahrenheit-32);
	printf("Celcius: %d\n", Celcius);
	return 0;
}
