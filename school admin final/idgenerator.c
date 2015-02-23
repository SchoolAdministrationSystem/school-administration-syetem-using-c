
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

/*
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

/*/
struct student{
char classes[10];
unsigned int marks_prev_class;
unsigned int id;
unsigned int password[50];
}stud;







struct dateob{
    unsigned int dob_day;
    unsigned int dob_month;
    unsigned int dob_year;
    }dob;





void idgenerator(){
    int return_choice;
    /*The job of this function is to create id automatically for students
    to do so it use 3 function
    1.) checker:- checks the required id in regstud.dll who store all informaation of reg of stuent id and help to generate new id using validator automatically
    2.) validate the limit of the id fr eg let there is 40 students allow in 1st class
    then after 141001 to 1410041 the 1410042 id was not allowed in class 1st
    and the error messsage comes that  there is no seats for students in our school.
    3.) editors after getting id
    it`s job is to write the next id onto regstud.dll
    */
    //TESTING puts("idgenerator");

checker();
id_validator();
return_choice= student_personal_details();
//testing printf("return choice at idgenerator is %d",return_choice);_sleep(1000);
if(!return_choice)
    puts("Something went wrong contact to developer");
else{
   editors();
            printf("YOUR ID IS\n");_sleep(500);
            printf(" \t%d\n",stud.id);
            sprintf(stud.password,"%d",stud.id);
            printf("YOUR PASSWORD IS\n");_sleep(500);
            printf(" \t%s\n",stud.password);

}}




void checker(){
    //printf("class in checker is %d",strcmp(stud.classes,"1\n"));
    FILE *stud_id;
    char takechar,id[20];
    unsigned int index=0,id_int=1;

    if((stud_id = fopen("regstud.dll", "r"))==NULL)
    {puts("ERROR");
    admissionmodule();}
//TESTING printf("class is %s",stud.classes);

    // this while-statement assigns into c, and then checks against EOF:
    takechar=fgetc(stud_id);
    if(strcmp(stud.classes,"1\n")==0){
//TESTING            puts("1st class");
        while(takechar!= '@') {
        takechar= fgetc(stud_id);
//TESTINGputchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';



    }//end of class 1st

//TESTINGputs("id string");
//TESTINGputs(id);


    if(strcmp(stud.classes,"2\n")==0){
        while(takechar!= '@') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '#') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 2nd


      if(strcmp(stud.classes,"3\n")==0){
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
     if(strcmp(stud.classes,"4\n")==0){
        while(takechar!= '$') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '!') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 4th
    if(strcmp(stud.classes,"5\n")==0){
        while(takechar!= '!') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '^') {
        takechar= fgetc(stud_id);
        id[index]=takechar;//putchar(takechar);
        index++;    }id[index]='\0';
        }//end of class 5th

    if(strcmp(stud.classes,"6\n")==0){
        while(takechar!= '^') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '&') {
        takechar= fgetc(stud_id);
        id[index]=takechar;       //putchar(takechar);
        index++;    }id[index]='\0';
            }//end of class 6th


    if(strcmp(stud.classes,"7\n")==0){
        while(takechar!= '&') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '*') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 7th
    if(strcmp(stud.classes,"8\n")==0){
        while(takechar!= '*') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }id[index]='\0';
        while(takechar!= '-') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 8th

    if(strcmp(stud.classes,"9\n")==0){
        while(takechar!= '-') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '_') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 9th

    if(strcmp(stud.classes,"10\n")==0){
        while(takechar!= '_') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '+') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 10th


    if(strcmp(stud.classes,"11\n")==0){
        while(takechar!= '+') {
        takechar= fgetc(stud_id);
        //putchar(takechar);
        }
        while(takechar!= '=') {

        takechar=fgetc(stud_id);//putchar(takechar);
        id[index]=takechar;
        index++;
        }id[index]='\0';}//end of class 11th

    if(strcmp(stud.classes,"12\n")==0){
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
     //TESTINGputs("ID IN STRING IS");puts(id);
     //TESTING
//     printf("ID IN INT IS %d",stud.id);
}


void id_validator(){

if(strcmp(stud.classes,"1\n")==0){

    if(stud.id<1410001||stud.id>1410080){
    //TESTING puts("validator class 1st");_sleep(1000);
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}

if(strcmp(stud.classes,"2\n")==0){
    if(stud.id<1410081||stud.id>1410160){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}
if(strcmp(stud.classes,"3\n")==0){
    if(stud.id<1410161||stud.id>1410240){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}
if(strcmp(stud.classes,"4\n")==0){
    if(stud.id<1410241||stud.id>1410320){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}
if(strcmp(stud.classes,"5\n")==0){
    if(stud.id<1410321||stud.id>1410400){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}
if(strcmp(stud.classes,"6\n")==0){
    if(stud.id<1410401||stud.id>1410480){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}
if(strcmp(stud.classes,"7\n")==0){
    if(stud.id<1410481||stud.id>1410560){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}
if(strcmp(stud.classes,"8\n")==0){
    if(stud.id<1410561||stud.id>1410640){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}
if(strcmp(stud.classes,"9\n")==0){
    if(stud.id<1410641||stud.id>1410720){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}
if(strcmp(stud.classes,"10\n")==0){
    if(stud.id<1410721||stud.id>1410800){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}
if(strcmp(stud.classes,"11\n")==0){
    if(stud.id<1410801||stud.id>1410900){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}
if(strcmp(stud.classes,"12\n")==0){
    if(stud.id<1410901||stud.id>1411000){
    puts("***ERROR MESSAGE****\n\tCLASSES ARE FULL BUT WE SAVE YOUR DETAILS AND CONTACT YOU LATER");_sleep(2000);continue_choice(1);}}

}













void editors(){
FILE *edit_data;
char takechar;
                    /*edit_data=fopen("regstud.dat","w+");
                    fputs("akshat is a amazing",edit_data);fclose(edit_data);*/
            /*
            I*/
            /** FIRSTLY TO MODIFY DATA OF REGSTUD.DLL
             * OPEN THE FILE
             * read the id let it is 1410001
             * modify the id and now save it back as 1410002
             *that`s all this function do
             *
             */

                    edit_data=fopen("regstud.dll","r+");

                    takechar=getc(edit_data);
            if(strcmp(stud.classes,"1\n")==0){
                        while(takechar!='a'){

                            //putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 1st class generator

            if(strcmp(stud.classes,"2\n")==0){
                        while(takechar!='@'){

                           // putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 2nd class generator

            if(strcmp(stud.classes,"3\n")==0){
                        while(takechar!='#'){

                            //putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 3rd class generator
            if(strcmp(stud.classes,"4\n")==0){
                        while(takechar!='$'){

                            //putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 4th class generator

            if(strcmp(stud.classes,"5\n")==0){
                                while(takechar!='!'){

                           // putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 5th class generator

                        if(strcmp(stud.classes,"6\n")==0){
                        while(takechar!='^'){

                      //      putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 6th class generator

                        if(strcmp(stud.classes,"7\n")==0){
                        while(takechar!='&'){

                        //    putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 7th class generator

                        if(strcmp(stud.classes,"8\n")==0){
                        while(takechar!='*'){


                          //  putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 8th class generator

                        if(strcmp(stud.classes,"9\n")==0){
                        while(takechar!='-'){

                            //putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 9th class generator

                        if(strcmp(stud.classes,"10\n")==0){
                        while(takechar!='_'){

                   //         putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 10th class generator

                        if(strcmp(stud.classes,"11\n")==0){
                        while(takechar!='+'){

                     //       putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 11th class generator

                        if(strcmp(stud.classes,"12\n")==0){
                        while(takechar!='='){

                       //     putchar(takechar);
                            takechar=getc(edit_data);}

                        fseek( edit_data,0,SEEK_CUR );

                        fprintf(edit_data,"%d",stud.id+1);}
                        //end of 12th class generator
fclose(edit_data);

}






