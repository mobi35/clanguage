#include "stdio.h"
#include "string.h"
#include <stdlib.h>
#include <conio.h>


// BY MALIGRO
// PROGRAMMING
// C LANGUAGE

char * print(char *p)
{
	
				 
char userInput[25];
char title[25];

	int x = 0;
	int num = 0;
	size_t length = 0;
	int index = 0;
	int flag = 0;
	
	
	while(*p != '\0')
	{
	
		title[x] = *p;
		p++;
		x++;
	}
	
		while( num == 0 ) {
		int alphabet = 0;
		length = 0;
		flag = 0;
		num = 0;
	
		printf("%s\n",title);		
		fgets(userInput, 63, stdin);
	
		length = strlen(userInput);

	
		if( length < 3 || length > 26) {
			printf("Invalid Length\n");
			continue;			
		}
		
		length--;
			 char* pArr;
		pArr = malloc (sizeof (char) * 15);
				 
		for(index = 0; index < length; ++index) {
			
			if(isalpha(userInput[index]) != 0) 
				alphabet++;
				
		if( ! ((userInput[index]>='a' && userInput[index]<='z' ) || (userInput[index]>='A' && userInput[index]<='Z'))){
				flag += 1;
			
			}
			
		if(userInput[index] == ' ' ){
			flag -= 1;
		}
}

		if( flag) {
			printf("Invalid character %i \n",flag);
			continue;			
		}else if(alphabet <= 3){
				printf("Write your name please \n");
				
			continue;
		}else {
				//printf("All okay %s \n",userInput);
			  strcpy(pArr, userInput);
				return pArr;
					num = 1;
				continue;			
		}
	
	}
	
}

int CheckAge(){
	
	int num = 0;
    while( num == 0 ) {
    	
	int flag = -1;
		size_t length = 0;
			int index = 0;
	printf("What is your age\n");
	char userInput[64];
	fgets(userInput, 63, stdin);

		length = strlen(userInput);
		for(index = 0; index < length; ++index) {
	
		if(  !isdigit(userInput[index])){
				flag += 1;
			}

	}	

		if( length <= 1 || length > 3) {
			printf("Invalid Length\n");
			continue;			
		}
		
		length--;
		
	if( flag) {
			printf("Invalid character %i \n",flag);
			continue;			
		}
		int age = 0;
		age = atoi(userInput);
		return age;

	}

}

int CheckPassword(){
	
	int num = 0;

    while( num == 0 ) {
    		int flag = -1;
	printf("What is your Password\n");
	char userInput[64];
	fgets(userInput, 63, stdin);
	
		size_t length = 0;
	int index = 0;
		length = strlen(userInput);
		for(index = 0; index < length; ++index) {
	
		if(  !isdigit(userInput[index])){
				flag += 1;
			
			}

	}
	
		if( length != 7) {
			printf("Invalid Length\n");
			continue;			
		}
		
		length--;
		
	if( flag) {
			printf("Invalid character %i \n",flag);
			continue;			
		}
		int age = 0;
		age = atoi(userInput);
		return age;
		
	
	}
}

int main() {


int whatChoose = 1;

while(whatChoose == 1){



char *FirstName;
char *LastName;
char *MiddleName;
int Age;
char Birthday[50];
int PassCode;

FirstName = print("Write your First Name..");
MiddleName = print("Write your Middle Name");
LastName = print("Write your Last Name..");
Age = CheckAge();
PassCode = CheckPassword();

int bdateCount = 0;

while(bdateCount == 0){


printf("Please write your birthdate\n");
fgets(Birthday,63,stdin);


if(strlen(Birthday )< 0){
	printf("This field can't be empty'\n");
	continue;
}else {
	bdateCount = 1;
}

}

system("cls");
 system("COLOR 2");

printf("Here's your Details\n");
printf("Thank you for filling up my form\n\n");

printf("First Name:%s", FirstName);
printf("Middle Name: %s", MiddleName);
printf("Last Name: %s", LastName);
printf("Age:%i \n", Age); 
printf("Your Birthday is %s",Birthday);


char firstFix[25];
memcpy( firstFix, &FirstName[0], 3);
 firstFix[24] ='\0';

 char firstFix2[25];
memcpy( firstFix2, &LastName[0], 3);
 firstFix2[24] ='\0';

 printf("Your Auto Generated Username : %s%s",firstFix,firstFix2);

 
 printf("\n\n\nWrite 1 if you want to fill up a new user. \n");
 printf("Write 0 if you want exit. \n");
 printf("Developed by John Russel Maligro \n");
 scanf("%i",&whatChoose);
 
 if(whatChoose == 1){
 	system("cls");
 system("COLOR 7");
 fflush(stdin);
 	continue;
 }else {
 	break;
 }
 
 }
 
return 0;
}







