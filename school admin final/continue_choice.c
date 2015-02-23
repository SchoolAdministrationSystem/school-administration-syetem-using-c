#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


struct useful{
    /*any useful info of this function which might be used further*/
unsigned int mainmenu_login_choice;
unsigned int next_choice;
}ufo;

void continue_choice(unsigned int login_choice){
char choice[5];
if(login_choice==1){
    strcpy(choice,"n\n");
}
if(login_choice!=1){
        printf("DO ");_sleep(50);printf("YOU ");_sleep(50);printf("WANT ");_sleep(50);printf("TO ");_sleep(50);printf("CONTINUE\n");_sleep(50);
    fgets(choice,5,stdin);
    if(strcmp(choice,"y\n")==0||strcmp(choice,"Y\n")==0||strcmp(choice,"yes\n")==0||strcmp(choice,"YES\n")==0||strcmp(choice,"Yes\n")==0)
           return 1;}
else if(strcmp(choice,"no\n")==1||strcmp(choice,"NO\n")==1||strcmp(choice,"No\n")==1||strcmp(choice,"N\n")==1||strcmp(choice,"n\n")==1){
    printf("DO ");_sleep(50);printf("YOU ");_sleep(50);printf("WANT ");_sleep(50);printf("TO ");_sleep(50);printf("LOGOUT\n");_sleep(50);
    fgets(choice,5,stdin);fflush(stdin);
    if(strcmp(choice,"y\n")==0||strcmp(choice,"Y\n")==0||strcmp(choice,"yes\n")==0||strcmp(choice,"YES\n")==0||strcmp(choice,"Yes\n")==0){
        login(ufo.mainmenu_login_choice);}
    else if(strcmp(choice,"no\n")==1||strcmp(choice,"NO\n")==1||strcmp(choice,"No\n")==1||strcmp(choice,"N\n")==1||strcmp(choice,"n\n")==1){
        if(login_choice==1){
            admissionmodule();}
        else
        {printf("ENTER ");_sleep(50);printf("Y/N");_sleep(50);printf("ONLY\n");_sleep(50);
            continue_choice(login_choice);
        }

    }//end of else if


    }
else{
        printf("ENTER ");_sleep(50);printf("Y/N");_sleep(50);printf("ONLY\n");_sleep(50);continue_choice(login_choice);
}

}


