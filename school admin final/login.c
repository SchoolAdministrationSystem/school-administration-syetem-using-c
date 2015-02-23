#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


void login(unsigned int);
void management();
void reportgeneration();
void feemodule();


void login(unsigned int login_choice){
/*login choice is used for selecting one module*/

char choice[5];
/*puts("login choice");
printf("%d",login_choice);*/
puts("1. login");_sleep(100);puts("2. mainmenu");_sleep(100);
fgets(choice,5,stdin);fflush(stdin);

if(strcmp(choice,"1\n")==0)
{ //testingputs("choice");puts(choice);
    if(login_choice<8){

        if(login_choice==1){
            admissionmodule();
                            }
        else if(login_choice==2){

            reportgeneration();
                                }
        else if(login_choice==3){}
        else if(login_choice==4){}

        else if(login_choice==6){
                //TESTING
                       puts("LOGGED IN");
            /*reset database verification
            here  if u want to reset database it transfer pointer to database function*/
            puts("ARE YOU SURE\n\tTO DELETE DATABASE");_sleep(150);
            fgets(choice,5,stdin);fflush(stdin);
            if(strcmp(choice,"y\n")==0||strcmp(choice,"YES\n")==0||strcmp(choice,"Y\n")==0||strcmp(choice,"yes\n")==0){
                database();
                                                                                                                    }
            else if(strcmp(choice,"n\n")==0||strcmp(choice,"NO\n")==0||strcmp(choice,"N\n")==0||strcmp(choice,"no\n")==0){
                puts("choose another option or \"e\" any time to exit");
                login(login_choice);
                                                                                                                        }
        else {
            puts("INVALID CHOICE TRY AGAIN");
            login(login_choice);
             }
                                }//choice is 6=database
    }//lofinchoice<8
    else{
        puts("Something went Wrong");_sleep(200);puts("Try again latere");_sleep(200);}



}//end of "1\n"
else if(strcmp(choice,"2\n")==0)
{
puts(choice);
mainmenu();}
else{
puts("press\n 1 or 2");_sleep(250);
login(login_choice);
}}

