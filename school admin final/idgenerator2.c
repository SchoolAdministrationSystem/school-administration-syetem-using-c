
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void filecreatoronstartup();
void writeteacherdata();
void teacheridgenerator();
int idgenerator();
int teacheradmissionmodule();
int writeonfile(int,int);
int studentadmissionmodule();
int validateage();
int admissionmodule();
void mainmenu();
void verify_logout(int);
typedef struct student
{
 char name[30];
 char age[2];
 int enrollclass[3];
 char enrollid[15];
 char fathers_name[30];
 char mothers_name[30];
 char address[150];
 char phone_number[15];
}stud;

int idgenerator1(){
    /*here the id generation of student take place
    1. it search for the id in registerstudent data file
    2. it retrieve id from file by using a specialized symbol for each class
    3. display the id
    4. increment the id of registerstudent.dat file
    5. thats it! now if u run it again the next incremented id was displayed and according to the rule of mathematics
        after incrementing any number the respective no. doesn`t repeat
        so the id of the person is also not repeat upto you clear the database again*/

    char filecharacter,str[15],classes1[5];
    unsigned int i=0,classes,datasaveornot;unsigned int loopbreaker=1,intclasses1;
        //char temmp[10]='\0';
        FILE *studentidfile,*studentidfile1;





                /*FOR CLASS 1ST*/
            if((strcmp(classes1,"1")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of 'a'
                    while(filecharacter!='a')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210001||writenewstudentidonfile>1210040){
                    printf("\nclass %s is overloaded\n",classes1);
                    continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/
                        fclose(studentidfile);

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);

                        while(filecharacter!='a'){

                            putchar(filecharacter);
                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);
                        }//end of 1st class generator




                /*FOR CLASS 2nd*/
            if((strcmp(classes1,"2")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of '@'
                    while(filecharacter!='@')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210041||writenewstudentidonfile>1210080){
                        printf("\nclass %s is overloaded\n",classes1);
                        continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/
            fclose(studentidfile);

                    studentidfile=fopen("registerstudent.txt","r+");



                    filecharacter=getc(studentidfile);


                        while(filecharacter!='@'){


                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 2nd class generator





                /*FOR CLASS 3rd*/
            if((strcmp(classes1,"3")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of '#'
                    while(filecharacter!='#')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210081||writenewstudentidonfile>1210120){
                    printf("\nclass %s is overloaded\n",classes1);
                    continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);


                        while(filecharacter!='#'){

                     //for testing        putchar(filecharacter);
                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 3rd class generator




                /*FOR CLASS 4th*/
            if((strcmp(classes1,"4")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of '@'
                    while(filecharacter!='$')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210121||writenewstudentidonfile>1210160){
                        printf("\nclass %s is overloaded\n",classes1);
                        continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);


                        while(filecharacter!='#'){

                     //for testing        putchar(filecharacter);
                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 4th class generator








                /*FOR CLASS 5th*/
            if((strcmp(classes1,"5")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of '+'
                    while(filecharacter!='+')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210161||writenewstudentidonfile>1210200){
                    printf("\nclass %s is overloaded\n",classes1);
                    continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);


                        while(filecharacter!='+'){

                            putchar(filecharacter);
                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 5th class generator




                /*FOR CLASS 6th*/
            if((strcmp(classes1,"6")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of '^'
                    while(filecharacter!='^')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210201||writenewstudentidonfile>1210240){
                        printf("\nclass %s is overloaded\n",classes1);
                        continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);


                        while(filecharacter!='^'){


                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 6th class generator





                /*FOR CLASS 7th*/
            if((strcmp(classes1,"7")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of '&'
                    while(filecharacter!='&')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210241||writenewstudentidonfile>1210280){
                    printf("\nclass %s is overloaded\n",classes1);
                    continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);


                        while(filecharacter!='&'){

                     //for testing        putchar(filecharacter);
                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 7th class generator




                /*
                *********************FOR CLASS 8th***************************
                */
            if((strcmp(classes1,"8")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of '*'
                    while(filecharacter!='*')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210281||writenewstudentidonfile>1210320){
                        printf("\nclass %s is overloaded\n",classes1);
                        continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);


                        while(filecharacter!='*'){

                     //for testing        putchar(filecharacter);
                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 8th class generator












                /*FOR CLASS 9th*/
            if((strcmp(classes1,"9")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of '%'
                    while(filecharacter!='%')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210321||writenewstudentidonfile>1210360){
                    printf("\nclass %s is overloaded\n",classes1);
                    continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);


                        while(filecharacter!='%'){

                            putchar(filecharacter);
                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 9th class generator








                /*
                *************FOR CLASS 10th****************************************
                */
            if((strcmp(classes1,"10")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of '<'
                    while(filecharacter!='<')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210361||writenewstudentidonfile>1210400){
                        printf("\nclass %s is overloaded\n",classes1);
                        continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);


                        while(filecharacter!='<'){


                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 10th class generator







                /*
                *******************************FOR CLASS 11th******************
                */
            if((strcmp(classes1,"11")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of '>'
                    while(filecharacter!='>')
                        filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != '\n') {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
               /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210401||writenewstudentidonfile>1210450){
                    printf("\nclass %s is overloaded\n",classes1);
                    continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);


                        while(filecharacter!='>'){

                     //for testing        putchar(filecharacter);
                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 11th class generator







                /*
                *************************FOR CLASS 12th****************************
                */



            if((strcmp(classes1,"12")==0)){
                printf("\t\t\tHELLO STUDENT\n\t\t\t WELCOME TO OUR SCHOOL");

                /*here id is find from registration txt file*/
                studentidfile=fopen("registerstudent.txt","r");
                filecharacter=getc(studentidfile);


                    //find id with the help of 's'
                    while(filecharacter!='s')
           filecharacter=getc(studentidfile);




                    while ((filecharacter= fgetc(studentidfile)) != EOF) {


                        stud.enrollid[i] = filecharacter;
                        i=i+1;}//end of while

                    stud.enrollid[i] = '\0';//to end string with null character
                    fclose(studentidfile);


                    //to convert the string id into a respective integer form
                    writenewstudentidonfile=atoi(stud.enrollid);
                        /*warning:-for testing printf("roll no is%u",writenewstudentidonfile);*/

                if(writenewstudentidonfile<1210451||writenewstudentidonfile>1210500){
                    printf("\nclass %s is overloaded\n",classes1);
                    continue_choice(1);}
                    /*warning:- for testing printf("%u\n\n",writenewstudentidonfile);*/
                    printf("your id is:\t%d\nAnd password is(which may have further use):\t%d\n\n\tNOTE:\Tplease note down it safely to avoid inconvenience\n",writenewstudentidonfile,writenewstudentidonfile);
                    writenewstudentidonfile=writenewstudentidonfile+1;

                    sprintf(stud.enrollid,"%d",writenewstudentidonfile);

                    /*for testing puts(stud.enrollid);
                        strcat(temmp,stud.enrollid);*/

                    studentidfile=fopen("registerstudent.txt","r+");
                    filecharacter=getc(studentidfile);


                        while(filecharacter!='s'){

                     //for testing        putchar(filecharacter);
                            filecharacter=getc(studentidfile);}

                        fseek( studentidfile,0,SEEK_CUR );

                        fputs(stud.enrollid,studentidfile);}//end of 12th class generator



























      fclose(studentidfile);
      /*for verify error
      puts("\nyour id in idgenerator module is: ");
puts(stud.enrollid);
puts("age is");
printf("%d",studen_age);*/
    intclasses1=atoi(classes1);
    return intclasses1;}

