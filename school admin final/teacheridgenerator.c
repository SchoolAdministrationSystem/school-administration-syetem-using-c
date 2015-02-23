#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
void error_message(void);
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
void transfer(void);

void contact(unsigned int,char*);
void teachid_validator();
void teacheditor();
void checkerteach();


struct common{
char name[50];
char father_name[50];
char mother_name[50];
unsigned int age;
char caste[20];
char gender[10];
char blood_group[3];
char landline_no[10];
char mobile_no[15];
char email[50];
char adhaar_no[20];
}com;

struct date{
char day[3];
char month[3];
char year[3];
}date;

struct notify{

struct local_address{
char street1[100];
char street2[100];
char street3[100];
char city[100];
char state[100];
char pincode[9];
}lcad;

struct permanent_address{
char street1[100];
char street2[100];
char street3[100];
char city[100];
char state[100];
char pincode[9];
}ptad;

struct contact{
struct father{
char mobile_no[15];
char office_no[15];
char email_id[50];
}cont_fath;

struct mother{
char  mobile_no[15];
char office_no[15];
char home_no[15];
char email_id[50];
}cont_mot;

}cont;
}noty;

struct student{

unsigned int classes;
unsigned int classes_marks;
unsigned int id;
unsigned int password[50];
}stud;

struct teacher{

char specialised_subject[20];
unsigned int id;
unsigned int password[50];
char degree[20];
char assigned_class[5];

}teach;








struct dateob{
    unsigned int dob_day;
    unsigned int dob_month;
    unsigned int dob_year;
    }dob;





void idgeneratorteach(unsigned int classes){
//stud.classes=10;
checkerteach();
teachid_validator();


teacheditor();
            printf("YOUR ID IS\n");_sleep(500);
            printf(" \t%d\n",stud.id);
            sprintf(stud.password,"%d",stud.id);
            printf("YOUR PASSWORD IS\n");_sleep(500);
            printf(" \t%s\n",stud.password);

}




void checkerteach(){
    //printf("class in checkerteach is %d",stud.classes);
    FILE *stud_id;
    char takechar,id[20];
    unsigned int index=0,id_int=1;

    stud_id = fopen("regteach.dll", "r+"); // error check this!




    // this while-statement assigns into c, and then checks against EOF:
    takechar=fgetc(stud_id);

        while(takechar!= 'a') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';









    if(stud.classes==2){
        while(takechar!= '@') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '#') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 2nd


      if(stud.classes==3){
        while(takechar!= '#') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '$') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 3rd
        //puts(id);
     if(stud.classes==4){
        while(takechar!= '$') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '!') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 4th
    if(stud.classes==5){
        while(takechar!= '!') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '^') {
        takechar= fgetc(stud_id);
        id[index]=takechar;//putchar(takechar);
        index++;    }id[index]='\0';
        }//end of class 5th

    if(stud.classes==6){
        while(takechar!= '^') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '&') {
        takechar= fgetc(stud_id);
        id[index]=takechar;       //putchar(takechar);
        index++;    }id[index]='\0';
            }//end of class 6th


    if(stud.classes==7){
        while(takechar!= '&') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '*') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 7th
    if(stud.classes==8){
        while(takechar!= '*') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }id[index]='\0';
        while(takechar!= '-') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 8th

    if(stud.classes==9){
        while(takechar!= '-') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '_') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 9th

    if(stud.classes==10){
        while(takechar!= '_') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '+') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 10th


    if(stud.classes==11){
        while(takechar!= '+') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '=') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 11th

    if(stud.classes==12){
        while(takechar!= '=') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= EOF) {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 12th
       fclose(stud_id);
    stud.id=atoi((id));

}


void teachid_validator(){

if(stud.classes==1){

    if(stud.id<1410001||stud.id>1410081){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==2){
    if(stud.id<1410081||stud.id>1410161){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==3){
    if(stud.id<1410161||stud.id>1410241){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==4){
    if(stud.id<1410241||stud.id>1410321){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==5){
    if(stud.id<1410321||stud.id>1410401){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==6){
    if(stud.id<1410401||stud.id>1410481){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==7){
    if(stud.id<1410481||stud.id>1410561){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==8){
    if(stud.id<1410561||stud.id>1410641){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==9){
    if(stud.id<1410641||stud.id>1410721){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==10){
    if(stud.id<1410721||stud.id>1410801){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==11){
    if(stud.id<1410801||stud.id>1410901){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}
if(stud.classes==12){
    if(stud.id<1410901||stud.id>1411001){
    puts("CLASSES ARE FULL WE SAVE YOUR DETAILS ");continue_choice(1);}}

}





















void teacheditor(){
FILE *teacheditor;
char takechar,id[20];
unsigned int index=0;
teacheditor=fopen("regstud.dll", "r+");


    // this while-statement assigns into c, and then checks against EOF:
    takechar=fgetc(teacheditor);
    if(stud.classes==1){
        while(takechar!= 'a') {
                puts("hello");
                putchar(takechar);
                            takechar=getc(teacheditor);}

                        fseek( teacheditor,0,SEEK_CUR );                       fprintf(teacheditor,"%d",stud.id+1);}//end of class 1st




        //printf("class in teacheditor is %d",stud.classes);
        while(takechar!= 'a') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '@') {

                    //putchar(takechar);
                            takechar=getc(teacheditor);
        }fseek( teacheditor,0,SEEK_CUR );    // printf("\nstud_id is %d\nstud id +1 is %d",stud.id,stud.id+1);
           fprintf(teacheditor,"%d",stud.id+1);//end of class 2nd


      if(stud.classes==3){
        while(takechar!= '@') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '#') {

                        //putchar(takechar);
                            takechar=getc(teacheditor);
        }fseek( teacheditor,0,SEEK_CUR );                       fprintf(teacheditor,"%d",stud.id+1);}//end of class 3rd

     if(stud.classes==4){
        while(takechar!= '#') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '$') {

                      //putchar(takechar);
                            takechar=getc(teacheditor);
        }fseek( teacheditor,0,SEEK_CUR );                       fprintf(teacheditor,"%d",stud.id+1);}//end of class 4th
    if(stud.classes==5){
        while(takechar!= '$') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '!') {
                       //putchar(takechar);
                            takechar=getc(teacheditor);  }fseek( teacheditor,0,SEEK_CUR );                       fprintf(teacheditor,"%d",stud.id+1);
        }//end of class 5th

    if(stud.classes==6){
        while(takechar!= '!') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '^') {
                      //putchar(takechar);
                            takechar=getc(teacheditor);   }fseek( teacheditor,0,SEEK_CUR );                       fprintf(teacheditor,"%d",stud.id+1);
            }//end of class 6th


    if(stud.classes==7){
        while(takechar!= '^') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '&') {
                      //putchar(takechar);
                            takechar=getc(teacheditor);   }fseek( teacheditor,0,SEEK_CUR );
                                                  fprintf(teacheditor,"%d",stud.id+1);
            }//end of class 7th



    if(stud.classes==8){
        while(takechar!= '&') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '*') {
                      //putchar(takechar);
                            takechar=getc(teacheditor);   }fseek( teacheditor,0,SEEK_CUR );
                                                  fprintf(teacheditor,"%d",stud.id+1);
            }//end of class 8th


    if(stud.classes==9){
        while(takechar!= '*') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '-') {
                      //putchar(takechar);
                            takechar=getc(teacheditor);   }fseek( teacheditor,0,SEEK_CUR );
                                                  fprintf(teacheditor,"%d",stud.id+1);
            }//end of class 9th


    if(stud.classes==10){
        while(takechar!= '-') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '_') {
                      //putchar(takechar);
                            takechar=getc(teacheditor);   }fseek( teacheditor,0,SEEK_CUR );
                                                  fprintf(teacheditor,"%d",stud.id+1);
            }//end of class 10th

if(stud.classes==11){
        while(takechar!= '_') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '+') {
                      //putchar(takechar);
                            takechar=getc(teacheditor);   }fseek( teacheditor,0,SEEK_CUR );
                                                  fprintf(teacheditor,"%d",stud.id+1);
            }//end of class 11th

if(stud.classes==12){

        while(takechar!= '+') {
        takechar= fgetc(teacheditor);
        //putchar(takechar);
        }
        while(takechar!= '=') {
                       //putchar(takechar);
                            takechar=getc(teacheditor);   }
        fseek( teacheditor,0,SEEK_CUR );
        fprintf(teacheditor,"%d",stud.id+1);
            }//end of class 12th
            }






