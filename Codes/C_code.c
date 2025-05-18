*******************1*******************
#include<stdio.h>//insert library
int main(){
	printf("Hello World!\n");
	return 0;
}

/*Output
[2021ict56@fedora ~]$ vi first.c
[2021ict56@fedora ~]$ gcc first.c -o first
[2021ict56@fedora ~]$ ./first
Hello World!
*/


/*
%d / %i - integers
%f / %F - float
%lf - double
%c - char
%s - string*/
***************************************

*******************2*******************
#include<stdio.h>
int main(){
        int age=25;
        printf("%d\n",age);
        age=31;
        printf("\nNew age:%d\n",age);
        return 0;
}

/*Output
[2021ict56@fedora ~]$ vi age.c
[2021ict56@fedora ~]$ gcc age.c -o age
[2021ict56@fedora ~]$ ./age
25

New age:31
*/
***************************************

*******************3*******************
#include<stdio.h>
int main(){
	int firstNumber=25;
	printf("First number:%d\n",firstNumber);
	
	int secondNumber=firstNumber;
	printf("Second number:%d\n",secondNumber);
	
	return 0;
}

/*Output
[2021ict56@fedora ~]$ vi numbers.c
[2021ict56@fedora ~]$ gcc numbers.c -o numbers
[2021ict56@fedora ~]$ ./numbers
First number:25
Second number:25
*/
***************************************

*******************4*******************
#include<stdio.h>
int main(){
	int firstNumber,secondNumber=25;//initialize multiple variables in singal line
	printf("First number:%d\n",firstNumber);
	printf("Second number:%d\n",secondNumber);
	return 0;
}

/*Output
[2021ict56@fedora ~]$ vi numbers2.c
[2021ict56@fedora ~]$ gcc numbers2.c -o numbers2
[2021ict56@fedora ~]$ ./numbers2
First number:1
Second number:25
*/
***************************************

*******************5*******************
#include<stdio.h>
int main(){
	int age=10;
	printf("%d\n",age);
	printf("Size: %zu\n",sizeof(age));
	
	double number=12.45;
    printf("%.2lf\n",number);//%.2lf to print 2 decimals
	
	return 0;
}

/*Output
[2021ict56@fedora ~]$ vi age2.c
[2021ict56@fedora ~]$ gcc age2.c -o age2
[2021ict56@fedora ~]$ ./age2
10
Size: 4//size of a integer 4 bytes
12.45
*/
***************************************

*******************6*******************
#include<stdio.h>
int main(){
	
	float number=10.9f;
    printf("%f\n",number);
    printf("%.1f\n",number);
	
	return 0;
}

/*Output
[2021ict56@fedora ~]$ vi numbers3.c
[2021ict56@fedora ~]$ gcc numbers3.c -o numbers3
[2021ict56@fedora ~]$ ./numbers3
10.900000
10.9
*/
***************************************

*******************7*******************
#include<stdio.h>
int main(){
	
	char character='z';
    printf("%c\n",character);//print the character
    printf("%d\n",character);//print the integer value of character
	
	return 0;
}

/*Output
[2021ict56@fedora ~]$ vi character.c
[2021ict56@fedora ~]$ gcc character.c -o character
[2021ict56@fedora ~]$ ./character
z
122
*/
***************************************

*******************8*******************
#include<stdio.h>
int main(){

        int age;
        printf("Enter your age:");
        scanf("%d", &age);
        printf("Age=%d\n",age);
		
		double number;
		printf("Enter number:");
        scanf("%lf", &number);
        printf("Your double input is:%.2lf\n",number);
		
		char character;
		printf("Enter a character:");
        scanf(" %c", &character);
        printf("Character is: %c\n",character);

        return 0;
}


/*Output
[2021ict56@fedora ~]$ vi ageUserInput.c
[2021ict56@fedora ~]$ gcc ageUserInput.c -o ageUserInput
[2021ict56@fedora ~]$ ./ageUserInput
Enter your age:12
Age=12
Enter number:23.23
Your double input is:23.23
Enter a character:c
Character is: c
*/
***************************************

*******************9*******************
#include<stdio.h>
int main(){
	int number1,number2;
    printf("Enter number1:");
    scanf("%d", &number1);
	
	printf("Enter number2:");
    scanf("%d", &number2);
	
	printf("Addition(number1+number2)=%d\n",number1+number2);
	printf("Substraction(number1-number2)=%d\n",number1-number2);
	printf("Multiplication(number1*number2)=%d\n",number1*number2);
	
	if (number2 != 0) {
        printf("Division (number1/number2)=%d\n", number1/number2);
        printf("Modulus (number1%%number2)=%d\n",number1%number2);
    } else {
        printf("Division and Modulus not allowed (number1 is zero).\n");
    }
	
	return 0;
}

/*Output
[2021ict56@fedora ~]$ vi calc.c
[2021ict56@fedora ~]$ gcc calc.c -o calc
[2021ict56@fedora ~]$ ./calc
Enter number1:45
Enter number2:10
Addition(number1+number2)=55
Substraction(number1-number2)=35
Multiplication(number1*number2)=450
Division (number1/number2)=4
Modulus (number1%number2)=5
*/
***************************************