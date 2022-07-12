#include <stdio.h>

int main()
{
	double Celsius;
	double Kelvin;
	double Fahrenheit;
	int numofSamples;

	// Requests the expected melting tempature from the user
	double temp;
	printf("Enter the tempature at which you want to convert: ");
	scanf("%lf", &temp);

	// sets the values equal based on the given input and computes the calculations
	Fahrenheit = (temp);
	Celsius = ((temp - 32) * 5) / 9;
	Kelvin = (Celsius + 273);

	// prints out the sample number and the conversions on their own lines
	printf("-------------------Sample %d-------------------\n", samplescompleted);
	printf("The sample in Fahrenheit is: %0.3lf\n", Fahrenheit);
	printf("The sample in Celsius is: %0.3lf\n", Celsius);
	printf("The sample in Kelvin is: %0.3lf\n", Kelvin);

	// Clculates the average in the sample group and prints it out
	double averageTmp;
	averageTmp = (Celsius + Kelvin + Fahrenheit) / 3;
	printf("The Average Tempature is: %.03lf\n", averageTmp);

	// Calculates the overall average of all samples tested so far and prints it out
	double overallAvg;
	overallAvg += averageTmp / numofSamples;
	printf("The overall average of all samples is: %0.3lf\n", overallAvg);
}
