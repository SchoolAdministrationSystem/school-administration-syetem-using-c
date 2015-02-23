
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void mainmenu(void);
void login(unsigned int);
void transfer();


struct useful{
    /*any useful info of this function which might be used further*/
unsigned int mainmenu_login_choice;
unsigned int next_choice;
}ufo;




void mainmenu(){
/*show main menu where admin choose which task he want to perform
   the main job of this unction is to call login mainly in most cases for further authentiation
*/
   char choice[10];
   unsigned int loopbreaker=0;
        puts("\n\n$elect any Option");_sleep(500);
        puts("\n\n\t\tMAIN MENU");_sleep(50);
        puts("\n\t\t\t1.)Admission Process");_sleep(50);
        puts("\n\t\t\t2.)report_generation process");_sleep(50);
        puts("\n\t\t\t3.)Fee Status");_sleep(50);
        puts("\n\t\t\t4.)Management process");_sleep(50);
        puts("\n\t\t\t5.)About us");_sleep(50);
        puts("\n\t\t\t6.)RESET DATABASE");_sleep(50);
        puts("\n\t\t\t7.)Exit");_sleep(50);

        /*selecting desired choice*/
            fgets(choice,20,stdin);
            fflush(stdin);
            ufo.mainmenu_login_choice=atoi(choice);
            //TESTING printf("ufo.mainmenu_login_choice: %d",ufo.mainmenu_login_choice);_sleep(1000);
        /*mapping the choice*/
            if(strcmp(choice,"1\n")==0||strcmp(choice,"1.\n")==0||strcmp(choice,"1.)\n")==0||strcmp(choice,"1.)Admission\n")==0||strcmp(choice,"1.)Admission Process\n")==0||strcmp(choice,"1.)ADMISSION\n")==0||strcmp(choice,"1.)admission\n")==0||strcmp(choice,"1.)admission process\n")==0||strcmp(choice,"1.)admission Process\n")==0)
                /*first module is admission module where student and teacher admit in school*/
                login(1);

            else if(strcmp(choice,"2\n")==0||strcmp(choice,"2.\n")==0||strcmp(choice,"2.)Report_generation\n")==0||strcmp(choice,"2.)report_generation\n")==0||strcmp(choice,"2.)report_genertaion process\n")==0||strcmp(choice,"2.)REPORT\n")==0||strcmp(choice,"2.)REPORT_GENERATION PROCESS\n")==0||strcmp(choice,"2.)Report_generation Process\n")==0)
                {printf("2nd module");mainmenu();}

            else if(strcmp(choice,"3\n")==0||strcmp(choice,"3.\n")==0||strcmp(choice,"3.)Fee Status\n")==0||strcmp(choice,"3.)fee status\n")==0||strcmp(choice,"3.)FEE STATUS\n")==0||strcmp(choice,"3.)FEE\n")==0||strcmp(choice,"3.)fee\n")==0||strcmp(choice,"3.)fee Status\n")==0)
                {printf("3rd module");mainmenu();}

            else if(strcmp(choice,"4\n")==0||strcmp(choice,"4.\n")==0||strcmp(choice,"4.)Management Process\n")==0||strcmp(choice,"4.)management process\n")==0||strcmp(choice,"4.)MANAGEMENT PROCESS\n")==0||strcmp(choice,"4.)MANAGEMENT\n")==0||strcmp(choice,"4.)management\n")==0||strcmp(choice,"4.)management PROCESS\n")==0)
                {management();}

            else if(strcmp(choice,"5\n")==0||strcmp(choice,"5.")==0||strcmp(choice,"5.)")==0||strcmp(choice,"5.)About")==0||strcmp(choice,"5.)ABOUT")==0||strcmp(choice,"5.)About Us")==0||strcmp(choice,"5.)about us")==0||strcmp(choice,"5.)ABOUT US")==0)
                {/*about the developrs*/
                printf("5TH MODULE");
                puts("\n*******press any key to continue*****\n");
                getch();
                fflush(stdin);
                mainmenu();
                           }//end of 5th module call
            else if(strcmp(choice,"6\n")==0||strcmp(choice,"6.\n")==0||strcmp(choice,"6.)\n")==0||strcmp(choice,"6.)Reset Database\n")==0||strcmp(choice,"6.)RESET DATABASE\n")==0||strcmp(choice,"6.)reset database\n")==0)
                {  /*you cannot easily reset database
                    the process describe in login function*/

                    /*just for testing*   printf("6th module");*/
                    while(loopbreaker==0){
                   printf("\nARE YOU SURE");_sleep(250);printf("\nTO RESET DATABASE TO NULL?y/n");_sleep(250);
                    fgets(choice,5,stdin);
                   if(strcmp(choice,"y\n")==0||strcmp(choice,"Y\n")==0||strcmp(choice,"YES\n")==0||strcmp(choice,"yes")==0)
                    login(6);
                    }

                   }

            else if(strcmp(choice,"7\n")==0||strcmp(choice,"7.\n")==0||strcmp(choice,"7.)\n")==0||strcmp(choice,"7.)Exit\n")==0||strcmp(choice,"7.)EXIT\n")==0||strcmp(choice,"7.)exit\n")==0)
                {/*just for testing*   printf("7th module");*/

                   printf("thank you for using this software");
                   _sleep(1900);
                   exit(1);}

            else{
                puts("**************TRY AGAIN*******************");
                mainmenu();}}


void management(){
   char choice[10];
   unsigned int loopbreaker=0;
        puts("\n\n$elect any Option");_sleep(500);
        puts("\n\n\t\tMANAGEMENT DEPARTMENT");_sleep(50);
        puts("\n\t\t\t1.)Student");_sleep(50);
        puts("\n\t\t\t2.)teacher");_sleep(50);
        puts("\n\t\t\t3.)logout");_sleep(50);

        /*selecting desired choice*/
            fgets(choice,20,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choice,"e\n")==0||(strcmp(choice,"E\n")==0)) transfer();


            //TESTING printf("ufo.mainmenu_login_choice: %d",ufo.mainmenu_login_choice);_sleep(1000);
        /*mapping the choice*/
            if(strcmp(choice,"1\n")==0)
            student_management();
}
































/*the new function named transfer was used
it`s main job is to transfer cursor anytime to appropriate menu
it gave on functionality that is you can exit anytime by pressing E
this function is used frequently many time
*/


void transfer(){

    //TESTING printf("ufo.mainmenu_login_choice: %d",ufo.mainmenu_login_choice);_sleep(1000);


    char string_choice[5];
    /*If u press  E or e anytime then u r welcomed in this function which may ask u corresponding job*/
        printf("\nARE");printf(" YOU ");_sleep(100);printf("SURE  ");printf("TO  ");printf("EXIT??\n"); _sleep(200);
        printf("\n\tif ");printf(" you ");printf(" press ");printf("yes/y ");_sleep(250);
        printf("\tthen");_sleep(250);printf("\n  your");    printf(" data");_sleep(250);    printf(" wasn`t");printf(" saved\n");_sleep(200);
        printf("\tyes");printf("/no\n");_sleep(250);
        fgets(string_choice,5,stdin);

                    if(ufo.mainmenu_login_choice==1){
                       if(ufo.next_choice==1){
                            /*As selecting main menu choice saved ur choice onto "useful" structure
                            here it`s use began
                            if ur choice is 1 then after login anytime if u press E
                            this function send cursor to the desired location*/
                        if((strcmp(string_choice,"Y\n")==0)||(strcmp(string_choice,"y\n")==0)||(strcmp(string_choice,"YES\n")==0)||(strcmp(string_choice,"YEs\n")==0)||(strcmp(string_choice,"YeS\n")==0)||(strcmp(string_choice,"yES\n")==0)||(strcmp(string_choice,"yeS\n")==0)||(strcmp(string_choice,"yes\n")==0)||(strcmp(string_choice,"yEs\n")==0))
                            continue_choice(1);
                        else if((strcmp(string_choice,"n\n")==0)||(strcmp(string_choice,"N\n")==0)||(strcmp(string_choice,"no\n")==0)||(strcmp(string_choice,"NO\n")==0)||(strcmp(string_choice,"No\n")==0)||(strcmp(string_choice,"nO\n")==0))
                            return;
                            else
                            {
                                printf("\nHEY! TYPE CORRECTLY");_sleep(200);
                                transfer();
                            }
                    }
                    else if(ufo.next_choice==2){
                     if((strcmp(string_choice,"Y\n")==0)||(strcmp(string_choice,"y\n")==0)||(strcmp(string_choice,"YES\n")==0)||(strcmp(string_choice,"YEs\n")==0)||(strcmp(string_choice,"YeS\n")==0)||(strcmp(string_choice,"yES\n")==0)||(strcmp(string_choice,"yeS\n")==0)||(strcmp(string_choice,"yes\n")==0)||(strcmp(string_choice,"yEs\n")==0))
                            continue_choice(1);
                    else if((strcmp(string_choice,"n\n")==0)||(strcmp(string_choice,"N\n")==0)||(strcmp(string_choice,"no\n")==0)||(strcmp(string_choice,"NO\n")==0)||(strcmp(string_choice,"No\n")==0)||(strcmp(string_choice,"nO\n")==0))
                    return;
                    }

                    }
                    else mainmenu();


}



