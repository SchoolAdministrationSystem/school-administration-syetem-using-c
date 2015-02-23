

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void continue_choice(unsigned int);
/*classes*/


void nursery(unsigned int priority){
char    choices[5];unsigned int choice;
    puts("welcome in nursery class");


    printf("select ");_sleep(50);printf("your ");_sleep(50);printf("specialised ");_sleep(50);printf("subject\n");_sleep(50);
    puts("1.Literature");_sleep(100);puts("2.Science");_sleep(100);puts("3.Moral Education");_sleep(100);
    puts("4.Commerce");_sleep(100);puts("5.Maths");_sleep(100);puts("6.Sociology");_sleep(100);
    puts("7.Computer");_sleep(100);puts("8.Physical/Games");_sleep(100);puts("9.Arts");_sleep(100);puts("10.CULTURAL");_sleep(100);puts("11.EXIT");_sleep(100);

        fgets(choices,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choices,"e\n")==0||(strcmp(choices,"E\n")==0)) continue_choice(1);

        //puts(choices);
        choice=atoi(choices);
        //printf("choice is %d",choice);

    if(choice==1){

        literature(priority);
                                }
    else if(choice==2||choice==4||choice==7||choice==8||choice==9){
        puts("NO SUBJECT FOR YOU HERE");_sleep(500);admissionmodule();
    }
    else if(choice==3){
        moralscience(priority);
    }
    else if(choice==5){
        maths(priority);
    }
    else if(choice==6){
        sociology(priority);
    }

    else if(choice==10){
    cultural(priority);
    }
    else if(choice==11){
        admissionmodule(priority);
    }
    else{
        puts("\n\t******ERROR******\nENTER NUMBER ONLY\n\n\n");
        nursery(priority);
            }}




void primary(unsigned int priority){
char choices[5];unsigned int choice;
    printf("priority in primary =%d",priority);

    puts("ENTER YOUR SPECIALISED SUBJECT");_sleep(200);
    puts("1.Literature");_sleep(100);puts("2.Science");_sleep(100);puts("3.Moral Education");_sleep(100);
    puts("4.Commerce");_sleep(100);puts("5.Maths");_sleep(100);puts("6.Sociology");_sleep(100);
    puts("7.Computer");_sleep(100);puts("8.Physical/Games");_sleep(100);puts("9.Arts");_sleep(100);puts("10.CULTURAL");_sleep(100);puts("11.EXIT");_sleep(100);
    fgets(choices,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choices,"e\n")==0||(strcmp(choices,"E\n")==0)) continue_choice(1);
    choice=atoi(choices);

    if(choice==1){
        literature(priority);
    }
    else if(choice==2){
        science(priority);
    }
    else if(choice==3){
        moralscience(priority);
    }
    else if(choice==4||choice==9){
        puts("NO SUBJECT FOR YOU HERE");_sleep(500);admissionmodule();
    }
    else if(choice==5){
        maths(priority);
    }
    else if(choice==6){
        sociology(priority);
    }
    else if(choice==7){
        computer(priority);
    }
    else if(choice==8){
        physical(priority);
    }
    else if(choice==10){
    cultural(priority);
    }
    else if(choice==11){
        admissionmodule(priority);
    }
    else{
        puts("\n\t******ERROR******\nENTER NUMBER ONLY\n\n\n");
        primary(priority);

    }}





void secondary(unsigned int priority){
char choices[5];unsigned int choice;
    puts("ENTER YOUR SPECIALISED SUBJECT");_sleep(200);
    puts("1.Literature");_sleep(100);puts("2.Science");_sleep(100);puts("3.Moral Education");_sleep(100);
    puts("4.Commerce");_sleep(100);puts("5.Maths");_sleep(100);puts("6.Sociology");_sleep(100);
    puts("7.Computer");_sleep(100);puts("8.Physical/Games");_sleep(100);puts("9.Arts");_sleep(100);puts("10.CULTURAL");_sleep(100);puts("11.EXIT");_sleep(100);
    fgets(choices,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choices,"e\n")==0||(strcmp(choices,"E\n")==0)) continue_choice(1);
    choice=atoi(choices);
    if(choice==1){
        literature(priority);
    }
    else if(choice==2){
        science(priority);
    }
    else if(choice==3){
        moralscience(priority);
    }
    else if(choice==4||choice==9){
        puts("NO SUBJECT FOR YOU HERE");_sleep(500);admissionmodule();
    }
    else if(choice==5){
        maths(priority);
    }
    else if(choice==6){
        sociology(priority);
    }
    else if(choice==7){
        computer(priority);
    }
    else if(choice==8){
        physical(priority);
    }
    else if(choice==10){
    cultural(priority);
    }
    else if(choice==11){
        admissionmodule();
    }
    else{
        puts("\n\t******ERROR******\nENTER NUMBER ONLY\n\n\n");
        secondary(priority);
    }
}
void highersecondary(unsigned int priority){
char choices[5];unsigned int choice;
    puts("ENTER YOUR SPECIALISED SUBJECT");_sleep(200);
    puts("1.Literature");_sleep(100);puts("2.Science");_sleep(100);puts("3.Moral Education");_sleep(100);
    puts("4.Commerce");_sleep(100);puts("5.Maths");_sleep(100);puts("6.Sociology");_sleep(100);
    puts("7.Computer");_sleep(100);puts("8.Physical/Games");_sleep(100);puts("9.Arts");_sleep(100);puts("10.CULTURAL");_sleep(100);puts("11.EXIT");_sleep(100);
    fgets(choices,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choices,"e\n")==0||(strcmp(choices,"E\n")==0)) continue_choice(1);
    choice=atoi(choices);
    if(choice==1){
        literature(priority);

    }
    else if(choice==2){
        science(priority);
    }
    else if(choice==3||choice==10){
        puts("NO SUBJECT FOR YOU HERE");_sleep(500);admissionmodule();
    }
    else if(choice==4){
        commerce(priority);
     }
    else if(choice==5){
        maths(priority);
    }
    else if(choice==6){
        sociology(priority);
    }
    else if(choice==7){
        computer(priority);
    }
    else if(choice==8){
        physical(priority);
    }
    else if(choice==9){
        arts(priority);
    }

    else if(choice==11){
        admissionmodule(priority);
    }
    else{
        puts("\n\t******ERROR******\nENTER NUMBER ONLY\n\n\n");
        secondary(priority);
    }
}
void teachmanagement(unsigned int priority){
char choices[5];unsigned int choice;
    puts("ENTER YOUR FIELD OF INTEREST");_sleep(200);
    puts("1.MANAGEMENT");_sleep(100);puts("2.FEE MANAGEMENT");_sleep(100);puts("3.OPERATOR");_sleep(100);
    fgets(choices,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choices,"e\n")==0||(strcmp(choices,"E\n")==0)) continue_choice(1);
    choice=atoi(choices);
    if(choice==1){
        teachmanagement(priority);
    }
    else if(choice==2){
        feemanagement();
    }
    else if(choice==3){
        operator_mgmt();
    }
    else {
        puts("\n\t******ERROR******\nENTER NUMBER ONLY\n\n\n");
     }

}
void principal(){

 char takechar,id[20];unsigned int index=0,id_int;
    FILE *teaidgenerator;
    teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
id_int=atoi(id);
if (id_int>1420150){
    puts("no space for principal");
    puts("try again later");
    admissionmodule();;
}
   // fgets(sub_choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(sub_choice,"e\n")==0||(strcmp(sub_choice,"E\n")==0)) continue_choice(1);
           takechar=fgetc(teaidgenerator);

        while(takechar!= '$') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);
        puts("your id is");
        puts(id);}
void feemanagement(){
 char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
    teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;

//fgets(sub_choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(sub_choice,"e\n")==0||(strcmp(sub_choice,"E\n")==0)) continue_choice(1);
           takechar=fgetc(teaidgenerator);

        while(takechar!= '-') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);
        puts("your id is");
        puts(id);
}
void operator_mgmt(){
 char takechar,id[20];unsigned int index=0;
    FILE *teaidgenerator;
    teaidgenerator=fopen("regteach.dll","r+");
    char choice[5],sub_choice[5];unsigned int choice_int;
           takechar=fgetc(teaidgenerator);

        while(takechar!= '!') {
        takechar= fgetc(teaidgenerator);
        //putchar(takechar);
        id[index]=takechar;
        index++;    }id[index]='\0';

        fclose(teaidgenerator);
        puts("your id is");
        puts(id);
}


