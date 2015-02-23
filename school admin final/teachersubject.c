

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void sub_database(unsigned int);

struct teacher{
char specialised_subject[20];
unsigned int id;
unsigned int password[50];
char degree[20];
char assigned_class[5];

}teach;







void teacher_first_review()
{ char verify[6];
unsigned int loopbreaker=0;
/*THE JOB OF THIS FUNCTION IS TO REVIEW DETAIL WHICH IS YET FLILLEDBY A FACULTY*/
    puts("****REVIEW UR DETAIL");
    printf("DEGREE: %s\nSPECIALISED SUBJECT: %s\n WANTED CLASS: %s\n",teach.degree,teach.specialised_subject,teach.assigned_class);
    while(loopbreaker==0){
        puts("\nPRESS V TO VERIFY E TO EXIT AND A TO FILL PERSONAL DETAIL AGAIN");
        fgets(verify,4,stdin);

        if(strcmp(verify,"v\n")==0||strcmp(verify,"V\n")==0){loopbreaker=1;//puts("UNDER MAINTENANCE");_sleep(1000);teacheradmissionmodule();
        teach_id_generator();}
        else if(strcmp(verify,"e\n")==0||strcmp(verify,"E\n")==0){loopbreaker=1;transfer();}
        else if(strcmp(verify,"a\n")==0||strcmp(verify,"A\n")==0){loopbreaker=1;teacheradmissionmodule();}
        else {puts("PRESS 'v','a' or 'e'");_sleep(1000); }
}}


/*subjects*/
void literature(unsigned int priority){
    char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
    teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
    puts("ENTER YOUR DESIRED SUBJECT");
    puts("1. ENGLISH");
    puts("2. HINDI");
    puts("3. SANSKRIT");
    fgets(sub_choice,7,stdin);fflush(stdin); /*if exit then*/    if(strcmp(sub_choice,"e\n")==0||(strcmp(sub_choice,"E\n")==0)) continue_choice(1);
   if(strcmp(sub_choice,"1\n")==0){strcpy(teach.specialised_subject,"ENGLISH");}
else if(strcmp(sub_choice,"2\n")==0){strcpy(teach.specialised_subject,"HINDI");}
else if(strcmp(sub_choice,"3\n")==0){strcpy(teach.specialised_subject,"SANSKRIT");}
else literature(priority);
   teacher_first_review();

}



void science(unsigned int priority){
    char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
    //teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
    puts("ENTER YOUR DESIRED SUBJECT");
    puts("1. BIOLOGY");
    puts("2. PHYSICS");
    puts("3. CHEMISTRY");
    fgets(sub_choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(sub_choice,"e\n")==0||(strcmp(sub_choice,"E\n")==0)) continue_choice(1);
   if(strcmp(sub_choice,"1\n")==0){strcpy(teach.specialised_subject,"BIOLOGY");}
else if(strcmp(sub_choice,"2\n")==0){strcpy(teach.specialised_subject,"PHYSICS");}
else if(strcmp(sub_choice,"3\n")==0){strcpy(teach.specialised_subject,"CHEMISTRY");}
else science(priority);
    teacher_first_review();


/*                   takechar=fgetc(teaidgenerator);



while(takechar!= '*') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);
   puts("your id is");
        puts(id);

    /*if(priority==4){



    }
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }*/

    }
void maths(unsigned int priority){
     char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
    //teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
      strcpy(teach.specialised_subject,"MATHEMATICS");

      teacher_first_review();
/*


       /*takechar=fgetc(teaidgenerator);

        while(takechar!= '/') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);
   puts("your id is");
        puts(id);



    /*if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }*/
}
void moralscience(unsigned int priority){
        char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
    //teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
      strcpy(teach.specialised_subject,"MORAL EDUCATION");
      teacher_first_review();
/*


      /*     takechar=fgetc(teaidgenerator);

        while(takechar!= '+') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);
   puts("your id is");
        puts(id);

    /*if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }*/
}
void commerce(unsigned int priority){
         char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
    //teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
    puts("ENTER YOUR DESIRED SUBJECT");
    puts("1. ACCOUNTANCY");
    puts("2. ECONOMICS");
    puts("3. BUSINESS");
    puts("4. MANAGEMENT");
    fgets(sub_choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(sub_choice,"e\n")==0||(strcmp(sub_choice,"E\n")==0)) continue_choice(1);
      if(strcmp(sub_choice,"1\n")==0){strcpy(teach.specialised_subject,"ACCOUNTANCY");}
else if(strcmp(sub_choice,"2\n")==0){strcpy(teach.specialised_subject,"ECONOMICS");}
else if(strcmp(sub_choice,"3\n")==0){strcpy(teach.specialised_subject,"BUSINESS");}
else if(strcmp(sub_choice,"4\n")==0){strcpy(teach.specialised_subject,"MANAGEMENT");}
else commerce(priority);
      teacher_first_review();
/*
           takechar=fgetc(teaidgenerator);

        while(takechar!= '-') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);

puts("your id is");
        puts(id);



  /*  if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }*/
}
void sociology(unsigned int priority){
         char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
  //  teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
    puts("ENTER YOUR DESIRED SUBJECT");
    puts("1. GEOGRAPHY");
    puts("2. CIVICS");
    puts("3. HISTORY");
    fgets(sub_choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(sub_choice,"e\n")==0||(strcmp(sub_choice,"E\n")==0)) continue_choice(1);
      if(strcmp(sub_choice,"1\n")==0){strcpy(teach.specialised_subject,"GEOGRAPHY");}
else if(strcmp(sub_choice,"2\n")==0){strcpy(teach.specialised_subject,"CIVICS");}
else if(strcmp(sub_choice,"3\n")==0){strcpy(teach.specialised_subject,"HISTORY");}

else sociology(priority);
      teacher_first_review();
/*

           takechar=fgetc(teaidgenerator);

        while(takechar!= '=') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);
   puts("your id is");
        puts(id);

    /*if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }*/
}
void computer(unsigned int priority){

         char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
    teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
    puts("ENTER YOUR DESIRED SUBJECT");
    puts("1. LANGUAGE");
    puts("2. BASIC COMPUTER");
    fgets(sub_choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(sub_choice,"e\n")==0||(strcmp(sub_choice,"E\n")==0)) continue_choice(1);
      if(strcmp(sub_choice,"1\n")==0){strcpy(teach.specialised_subject,"LANGUAGE");}
else if(strcmp(sub_choice,"2\n")==0){strcpy(teach.specialised_subject,"BASIC COMPUTER");}
else computer(priority);
      teacher_first_review();
/*         takechar=fgetc(teaidgenerator);

        while(takechar!= '!') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);

        //puts("your id is");
        //puts(id);

  /*  if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }
}
void physical(unsigned int priority){
    if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }*/
}
void arts(unsigned int priority){
        char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
    teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
    puts("ENTER YOUR DESIRED SUBJECT");
    puts("1. HOME SCIENCE");
    puts("2. HISTORY");
    puts("3. GEOGRAPHY");
    fgets(sub_choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(sub_choice,"e\n")==0||(strcmp(sub_choice,"E\n")==0)) continue_choice(1);
      if(strcmp(sub_choice,"1\n")==0){strcpy(teach.specialised_subject,"HOME SCIENCE");}
else if(strcmp(sub_choice,"2\n")==0){strcpy(teach.specialised_subject,"HISTORY");}
else if(strcmp(sub_choice,"3\n")==0){strcpy(teach.specialised_subject,"GEOGRAPHY");}

else arts(priority);
      teacher_first_review();
/*
           takechar=fgetc(teaidgenerator);

        while(takechar!= '#') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);

        puts("your id is");
        puts(id);
/*if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }
}
void cultural(unsigned int priority){
    if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }*/
}


void cultural(unsigned int priority){
        char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
  //  teaidgenerator=fopen("regteach.dll","r+");
  char choice[5],sub_choice[5];unsigned int choice_int;
    strcpy(teach.specialised_subject,"CULTURAL");
      teacher_first_review();
/*
    fgets(sub_choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(sub_choice,"e\n")==0||(strcmp(sub_choice,"E\n")==0)) continue_choice(1);
  /*         takechar=fgetc(teaidgenerator);

        while(takechar!= '=') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);

        puts("your id is");
        puts(id);
/*if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }
}
void cultural(unsigned int priority){
    if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }*/
}

void physical(unsigned int priority){
        char takechar,id[20];unsigned int index=0,int_id;
    FILE *teaidgenerator;
    //teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
    strcpy(teach.specialised_subject,"PHYSICAL EDUCATION");
      teacher_first_review();
/*
           takechar=fgetc(teaidgenerator);

        while(takechar!= '^') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);

        puts("your id is");
        int_id=atoi(id);
        printf("id is %d",int_id);
        //puts(id);
/*if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }
}
void cultural(unsigned int priority){
    if(priority==4){}
    else if(priority==3){}
    else if(priority==2){}
    else if(priority==1){}
    else {
        puts("***ERROR***");_sleep(250);
        puts("\t\tENTER NUMBER ONLY");
    }*/
}





