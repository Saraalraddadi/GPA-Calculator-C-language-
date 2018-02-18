#include <stdio.h>
#include <stdlib.h>
/**
* QUT GPA Calcultor. 
* @author Sara Alraddadi
**/

int main(){

	float gpa = 0;
	float numberOfUnits = 0; 
	float unitWight = 12; //each unit worth 12 points.
	float gradeEntered = 0; //Score that entered by user.
	float SemesterGPA = 0; // the final gpa the user got.
	float sum = 0; 
	char response;
	char quit; //to quit the program 

	printf("Would like to continue on your previous GPA?\n Enter (Y) for Yes or (N) No:\n");
	scanf("%c", &response);

	// If the user entered yes
	if (response == 'y' || response == 'Y'){
		printf("\n When you are done enter (d) \n\n");

		printf("\n Enter your last semester/final GPA: ");
		scanf(" %f", &SemesterGPA); // get final gpa input from the user
		gpa = SemesterGPA;

	do{
		printf("numberOfUnits: %.0f  GPA: %.2f \n", numberOfUnits, gpa);
		printf("\n Enter your Grade: ");
		scanf(" %f", &gradeEntered); // get units grade from the user
		scanf("%c", &quit); // get input from the user in order to quit the program

		//start calculation
		if(quit != 'd'){
			gradeEntered *= unitWight;
			sum += gradeEntered + SemesterGPA;
			numberOfUnits++;
			gpa =  sum / (numberOfUnits * 12);
		}

	}while(quit != 'd');

		printf("\nYour final GPA is: %.2f \n\n", gpa);

	return 0;

	}

	// If the user entered No
	else if(response == 'n' || response == 'N') {

		printf("\nWhen you done enter 'd' \n\n");

	do{
		printf("numberOfUnits: %.0f  GPA: %.2f \n", numberOfUnits, gpa);
		printf("\n Enter your Grade: ");
		scanf(" %f", &gradeEntered); // get units grade from the user
		scanf("%c", &quit); // get input from the user in order to quit the program

		//start calculation
		if(quit != 'd'){
			gradeEntered *= unitWight;
			sum += gradeEntered;
			numberOfUnits++;
			gpa =  sum / (numberOfUnits * 12);
		}

	}while(quit != 'd');

		printf("\nYour final GPA is: %.2f \n\n", gpa);

	return 0;
	}
}

