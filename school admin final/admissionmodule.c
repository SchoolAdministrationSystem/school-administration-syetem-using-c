#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


struct useful{
    /*any useful info of this function which might be used further*/
unsigned int mainmenu_login_choice;
unsigned int next_choice;
}ufo;

void admissionmodule(){
/*the job of this function is to make a system which admit student as well as faculty in school
by doing so
firstly the gave option to choose admission of school and faculty
then perform validation and verification of data
then perform respective admission
but all of these task was divided in different function according to their work as follow*/

    char getchoice[10];
    /*choice to choose from menu*/
        puts("\t\tWELCOME ADMIN\n");_sleep(500);
        puts("$elect any Option");_sleep(500);
        puts("\t\t1. Admit STUDENT");_sleep(100);
        puts("\t\t2. Admit TEACHER");_sleep(100);
      // testing puts("\t\t3. ERROR-CORRECTION");_sleep(100);
        puts("\t\t3. LOGOUT");_sleep(100);
    fgets(getchoice,10,stdin);
    fflush(stdin);
    if((strcmp(getchoice,"1\n"))==0){ufo.next_choice=1;
        studentadmissionmodule();}

    else if((strcmp(getchoice,"2\n"))==0){ufo.next_choice=2;
        teacheradmissionmodule();}

    /*else if((strcmp(getchoice,"3\n"))==0)
        error_correction();*/

    else if((strcmp(getchoice,"3\n"))==0)
        login(1);
    else{
        puts("****ERROR****");_sleep(200);
        puts("\t\tyou enter a wrong keyword");_sleep(500);
        puts("\t\t   please enter the digits only");_sleep(500);
        puts("\ttry again");_sleep(500);
        admissionmodule();
        }

}

