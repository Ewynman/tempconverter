#include <stdio.h>

int main()
{
	double Celsius;
	double Kelvin;
	double Fahrenheit;
	int numofSamples;
	char UserChoice;
	double temp;

	printf("What will your orginal tempature be in?\n");
	printf("1 for Fahrenheit, 2 for Celsius, 3 for Kelvin\n");
	scanf("%c", &UserChoice);

	switch (UserChoice)
	{
	case '1':

		printf("Enter the tempature at which you want to convert: ");
		scanf("%lf", &temp);

		// sets the values equal based on the given input and computes the calculations
		Fahrenheit = (temp);
		Celsius = ((temp - 32) * 5) / 9;
		Kelvin = (Celsius + 273);

		// prints out the Orginal number and the conversions on their own lines
		printf("The Orginal in Fahrenheit is: %0.3lf\n", Fahrenheit);
		printf("The Orginal in Celsius is: %0.3lf\n", Celsius);
		printf("The Orginal in Kelvin is: %0.3lf\n", Kelvin);
		break;
	case '2':
		printf("Enter the tempature at which you want to convert: ");
		scanf("%lf", &temp);

		// sets the values equal based on the given input and computes the calculations
		Fahrenheit = ((temp) * 9/5) + 32;
		Celsius = (temp);
		Kelvin = (Celsius + 273);

		// prints out the Orginal number and the conversions on their own lines
		printf("The Orginal in Fahrenheit is: %0.3lf\n", Fahrenheit);
		printf("The Orginal in Celsius is: %0.3lf\n", Celsius);
		printf("The Orginal in Kelvin is: %0.3lf\n", Kelvin);
		break;
	case '3':
		printf("Enter the tempature at which you want to convert: ");
		scanf("%lf", &temp);

		// sets the values equal based on the given input and computes the calculations
		Fahrenheit = (1.8*(temp-273)+32);
		Celsius = (temp -273);
		Kelvin = (temp);

		// prints out the Orginal number and the conversions on their own lines
		printf("The Orginal in Fahrenheit is: %0.3lf\n", Fahrenheit);
		printf("The Orginal in Celsius is: %0.3lf\n", Celsius);
		printf("The Orginal in Kelvin is: %0.3lf\n", Kelvin);
		break;
	}
}
