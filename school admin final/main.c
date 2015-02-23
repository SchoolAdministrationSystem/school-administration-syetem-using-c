
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


void error_message(void);
void mainmenu(void);












/*related structure which is used for storing information*/

//common data between faculty and student
struct common{
char name[50];
char father_name[50];
char mother_name[50];
unsigned int age;
char caste[20];
char gender[10];
}com;
//curent time and date
struct date{
unsigned int date;
unsigned int month;
unsigned int year;
}date;


//address and contacting related structure
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

//other student personal details useful for school

struct student{

unsigned int classes;

}stud;
//other faculty personal details useful for school

struct teacher{
char specialised_subject[40];
unsigned int id;
unsigned int password[50];
char degree[40];
char assigned_class[20];

}teach;


/*end of structures*/






void main(){
/*unsigned int loopbreakertemp=0;
while(loopbreakertemp!=11){puts("\n\n\nNURSERY CLASS TURN");
        strcpy(teach.specialised_subject,"ENGLISH");strcpy(teach.assigned_class,"NURSERY CLASSES");_sleep(1000); teach_id_generator();
puts("\n\n\nPRIMARY CLASS TURN");
_sleep(1000);

strcpy(teach.assigned_class,"PRIMARY CLASSES");teach_id_generator();_sleep(1000);
/*puts("\n\n\n SECONDARY CLASS TURN");_sleep(1000);
strcpy(teach.assigned_class,"SECONDARY CLASSES");teach_id_generator();_sleep(1000);
puts("\n\n\nHIGHER SECONDARY CLASS TURN");
_sleep(1000);
strcpy(teach.assigned_class,"HIGHER SECONDARY CLASSES");teach_id_generator();_sleep(1000);loopbreakertemp++;}
*/

/*
THE AIM OF THIS FUNCTION IS TO CALL THE MAINMENU FUNCTION WHICH GONNA BE SHOW
THE MAIN MENU FURTHER BY WHICH RESPECTIVE ADMIN PERFORM ITS OWN TASK
here all application related file was checked if any1 missed then appropriate error message was appeared
if no1 missing then app started by deleting setup file so that no1 can be able to reset modification done
    however u can reset data by using main menu now.
*/


//long l=2552;
unsigned int status;
FILE*check_database_stability_and_existence;
//printf("%l",l);
if((check_database_stability_and_existence=fopen("1410001.dll","r"))==NULL) {error_message();
    printf("1410001.dll is missing");
 }


else if((check_database_stability_and_existence=fopen("lit.dll","r"))==NULL){error_message();
   printf("lit.dll is missing");
}
else if((check_database_stability_and_existence=fopen("sci.dll","r"))==NULL){error_message();
    printf("sci.dll is missing");
}

else if((check_database_stability_and_existence=fopen("morsci.dll","r"))==NULL){error_message();
    printf("morsci.dll is missing");
}



else if((check_database_stability_and_existence=fopen("cmrc.dll","r"))==NULL){error_message();
    printf("cmrc.dll is missing");
}

else if((check_database_stability_and_existence=fopen("maths.dll","r"))==NULL){error_message();
     printf("maths.dll is missing");
}

else if((check_database_stability_and_existence=fopen("soc.dll","r"))==NULL){error_message();
    printf("soc.dll is missing");
}

else if((check_database_stability_and_existence=fopen("comp.dll","r"))==NULL){error_message();
    printf("comp.dll is missing");
}

else if((check_database_stability_and_existence=fopen("phys.dll","r"))==NULL){error_message();
    printf("phys.dll is missing");
}



else if((check_database_stability_and_existence=fopen("arts.dll","r"))==NULL){error_message();
    printf("arts.dll is missing");
}





else if((check_database_stability_and_existence=fopen("dbattempt.dll","r"))==NULL){error_message();
    printf("dbattempt.dll is missing");
}

else if((check_database_stability_and_existence=fopen("1420001.dll","r"))==NULL){error_message();
    printf("1420001.dll is missing");
}

else if((check_database_stability_and_existence=fopen("regstud.dll","r"))==NULL) {error_message();
    printf("regstud.dll is missing");
 }

else if((check_database_stability_and_existence=fopen("23081994as.dll","r"))==NULL) {error_message();
    printf("23081994as.dll  is missing");}


else if((check_database_stability_and_existence=fopen("26091994mb.dll","r"))==NULL) {error_message();
    printf("26091994mb.dll  is missing");}

else if((check_database_stability_and_existence=fopen("23111994pa.dll","r"))==NULL) {error_message();

    printf("23111994pa.dll  is missing");}
else if((check_database_stability_and_existence=fopen("01011994ab.dll","r"))==NULL) {error_message();

    printf("01011994ab.dll  is missing");}
else{
        status=remove("school_administration_system_setup.exe" );
        if( status == 0 )
      printf(" THE SETUP FILE IS DELETED FOR SECURITY PURPOSES\n");



 dotdelay();
heading();
dotdelay();


    mainmenu();
}
_sleep(5000);
}//end of main}






void dotdelay(void){
    unsigned int next_dot;
for(next_dot=0;next_dot<10;next_dot++){
    printf(".");
    _sleep(20);
}}





void heading(void){
/*printf("*"); _sleep(35); printf("*");printf("*"); _sleep(35); printf("*");printf("*"); _sleep(35); printf("*");
printf("S"); _sleep(35); printf("C"); _sleep(35); printf("H"); _sleep(35); printf("O"); _sleep(35);
printf("O"); _sleep(35); printf("L ");_sleep(35);printf(" A"); _sleep(35); printf("D"); _sleep(35);
printf("M"); _sleep(35); printf("I"); _sleep(35); printf("N"); _sleep(35); printf("I"); _sleep(35);
printf("S"); _sleep(35); printf("T"); _sleep(35); printf("R"); _sleep(35);printf("A"); _sleep(35); printf("T"); _sleep(35); printf("I"); _sleep(35); printf("O"); _sleep(35);
printf("N ");_sleep(35); printf(" S");_sleep(35); printf("Y"); _sleep(35); printf("S"); _sleep(35); printf("T"); printf("E"); _sleep(35); printf("M"); _sleep(35); printf("*"); _sleep(35); printf("*"); _sleep(35);printf("*"); _sleep(35); printf("*");
*/
printf("*"); _sleep(35); printf("*"); _sleep(35);printf("*"); _sleep(35); printf("*");
printf("S");_sleep(35); printf("C");_sleep(35); printf("H"); _sleep(35); printf("O"); _sleep(35); printf("O"); printf("L "); _sleep(35);
printf("A"); _sleep(35);printf("D"); _sleep(35);printf("M"); _sleep(35);printf("I"); _sleep(35);printf("S"); _sleep(35);printf("S"); _sleep(35);printf("I"); _sleep(35);printf("O"); _sleep(35);printf("N"); _sleep(35);
printf(" S"); _sleep(35);printf("Y"); _sleep(35);printf("S"); _sleep(35);printf("T"); _sleep(35);printf("E"); _sleep(35);printf("M"); _sleep(35);



 printf("*"); _sleep(35); printf("*"); _sleep(35);printf("*"); _sleep(35); printf("*");

}




void error_message(void){
    _sleep(50);
    printf("*"); _sleep(50); printf("*"); _sleep(50); printf("*"); _sleep(50);
    printf("E"); _sleep(50); printf("R"); _sleep(50); printf("R"); _sleep(50);
    printf("O"); _sleep(50); printf("R"); _sleep(50); printf("  "); _sleep(50);
    printf("M"); _sleep(50); printf("E"); _sleep(50); printf("S"); _sleep(50);
    printf("S"); _sleep(50); printf("A"); _sleep(50); printf("G"); _sleep(50);
     printf("E"); _sleep(50); printf("*"); _sleep(50); printf("*"); _sleep(50); printf("*");
_sleep(1000);
printf("\nPlease first open the file\n");
_sleep(250);
printf("\t\"school_administration_system_setup.exe\" ");
_sleep(4000);
puts("\nthen only\n");
_sleep(500);
puts("\t you are able to use this application \n");
_sleep(900);
puts("\t\t So\n");
_sleep(1000);
puts("\t\t\ttry agin later\n");
_sleep(3000);
exit(0);
}//end of error function





