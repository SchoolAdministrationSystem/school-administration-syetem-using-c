
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*void error_message(void);
void mainmenu(void);
void dotdelay(void);
void heading(void);
void admissionmodule(void);
void studentadmissionmodule(void);
void teacheradmissionmodule(void);
void error_correction(void);
unsigned int validateage(void);
void idgenerator(void);
void studentadmissionmodule(void);
void student_personal_details(void);
*/

/*THE STRUCTURE USE HERE WAS USED TO STORE DATA OF STUDENT
BUT
HERE THE DATA WHICH IS COMMON BETWEEN STUDENT AND TEACHER WAS ONLY DESCRIBED HERE
THE OTHER DATA WAS DESCRIBED LATER
I.E. WE DESCRIBED THE SHARED VARIABLE OF STUDENT AND FACULTY
SO THAT WE DOES NOT HAVE TO MAKE COPY OF THIS VARIABLE WHEN THE ADMISSION PROCESS OF TEACHER HAS BEEN GOING ON*/
struct common{
char name[50];
char father_name[50];
char mother_name[50];
unsigned int age;
char caste[20];
char gender[10];
}com;

/*struct date{
unsigned int date;
unsigned int month;
unsigned int year;
}date;

struct notify{

struct local_address{
char street1[100];
char street2[100];
char street3[100];
char city[100];
char state[100];
unsigned int pincode;
}lcad;

struct permanent_address{
char street1[100];
char street2[100];
char street3[100];
char city[100];
char state[100];
unsigned int pincode;
}ptad;

struct contact{
struct father{
unsigned int mobile_no;
unsigned int office_no;
char email_id[50];
}cont_fath;

struct mother{
unsigned int mobile_no;
unsigned int office_no;
unsigned int home_no;
char email_id[50];
}cont_mot;

}cont;
}noty;
*/












void studentadmissionmodule(){
printf("\n\n\t\t\tPRESS E OR e ANYTIME TO EXIT\n\n");_sleep(250);
//to validate age
com.age=validateage();
/*to check error
printf("age return by  validating in comentadmissionmodule is %d\n",stud.age);
*/
//to validate class and prev class marks
class_eligibility();
idgenerator();
admissionmodule();}
