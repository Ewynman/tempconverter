#include <stdio.h>

int main(){
	double Celsius;
	double Kelvin;
	double Fahrenheit;
	int numofSamples;
	
	//Requets the amount of samples that will be tested by the user
	printf("Enter the number of samples you will be testing: ");
	scanf("%d", &numofSamples);
	
	//Requests the expected melting tempature from the user
	double MeltingTempinF;
	printf("Enter the tempature at which you expect the samples to melt in Fahrenheit: ");
	scanf("%lf", &MeltingTempinF);

	printf("FOr your %d samples enter the observed melting point temerature in Fahrenheit: ", numofSamples);

	double error = 0;
	double sampleTemp;
	double samplescompleted = 0;
	//While loop to ask for each sample temp and complete the conversions based on the amount ofsamples specfied
	while (samplescompleted < numofSamples)
	{
		//Requests the tempature of the sample from the user
		printf("To start add the tempature of your sample in Fahrenheit with three decimal percsion: ");
		scanf("%lf" , &sampleTemp);

		//sets the values equal based on the given input and computes the calculations
		Fahrenheit = (sampleTemp);
		Celsius =((sampleTemp - 32) * 5)/9;
		Kelvin = (Celsius + 273);

		//prints out the sample number and the conversions on their own lines
		printf("-------------------Sample %d-------------------\n", samplescompleted);
		printf("The sample in Fahrenheit is: %0.3lf\n", Fahrenheit);
		printf("The sample in Celsius is: %0.3lf\n", Celsius);
		printf("The sample in Kelvin is: %0.3lf\n", Kelvin);

		//Clculates the average in the sample group and prints it out
		double averageTmp;
		averageTmp = (Celsius + Kelvin + Fahrenheit)/3;
		printf("The Average Tempature is: %.03lf\n", averageTmp);

		//Calculates the overall average of all samples tested so far and prints it out
		double overallAvg;
		overallAvg += averageTmp/numofSamples;
		printf("The overall average of all samples is: %0.3lf\n", overallAvg);
		
		//Calculates the diffrence from the expected melting point and the actual
		double differenceinFtemp;
		differenceinFtemp = MeltingTempinF - sampleTemp;

		/*
		if and else if sstatemnets for the diffrence in tempature to tell if the sample is
	        good, bad, or needs a retest. Uses or in the conditional so less else if statements
		are used and an error condition for the fial eorro stement
		*/


		if (differenceinFtemp >= 1 || differenceinFtemp <= -1)
		{
			printf("This sample is BAD and is off by %.03lf\n", differenceinFtemp);
			error += 1;
		}else if(differenceinFtemp == 0.5 || differenceinFtemp == -0.5) {
			printf("Plrese retest this sample\n");
		}else{
			printf("This Sample is GOOD\n");
		}
		printf("-------------------------------------------------\n");
		samplescompleted ++;
	}
	//if statemnt for error message at end of code
        if (error >= 1){
                printf("There were erros in your samples\n");
        }else if (error ==0){
   		printf("There were no errors in your samples all were GOOD\n");
        }
	
	//Ends program by saying all samples have been tested
	printf("You have tested all samples\n");
}
