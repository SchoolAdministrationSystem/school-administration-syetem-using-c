#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

unsigned int validateage(){
/*THIS FUNCTION IS DESIGNED TO VALIDATE ELIGIBILITY OF A STUDENT
THE ONLY ELIGIBILITY CHECKED HERE WAS VALIDATING AGE LIMIT
HERE ANY STUDENT WHOSE AGE IS 3 TO 20 YEARS CAN TAKE ADMISSION IN OUR SCHOOL
THATS ALL WE DONE HERE :)

*/

char age_string[5];
unsigned int age_int;


puts("\n\nENTER YOUR AGE");
fgets(age_string,5,stdin);fflush(stdin);/*if exit then*/        if(strcmp(age_string,"e\n")==0||(strcmp(age_string,"E\n")==0))        transfer();
age_int=atoi(age_string);/*if exit then*/if(strcmp(age_string,"e\n")==0||(strcmp(age_string,"E\n")==0))    transfer();
if(strlen(age_string)<1||strlen(age_string)>3)
    age_int=21;
if(age_int<3||age_int>20){

        /*UNELIGIBLE MESSAGE DISPLAY TO THOSE WHO ARE NOT IN AGE OF 3 TO 20 YEARS */
    printf("SORRY");_sleep(150);   printf(" YOU ");_sleep(150);printf(" ARE ");_sleep(150);   printf(" NOT ");_sleep(150);
    printf(" ELIGIBLE ");_sleep(150);   printf(" \n\tTO ");_sleep(150);printf(" TAKE ");_sleep(150);   printf(" ADMISSION ");_sleep(150);
    printf(" IN ");_sleep(150);   printf(" OUR ");_sleep(150);printf(" SCHOOL ");_sleep(150);
    printf(" \nT");_sleep(100);printf("H");_sleep(100);printf("A");_sleep(100);printf("N");_sleep(100);
    printf("K");_sleep(100);printf(" Y");_sleep(100);printf("O");_sleep(100);printf("U\n");_sleep(100);
    admissionmodule();}
else
    return age_int;

}
