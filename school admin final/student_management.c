

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>













student_management(){
char choice[10];
   unsigned int loopbreaker=0,student_id;
        puts("\n\n$elect any Option");_sleep(500);

        puts("\n\t\t\t1.)VIEW STUDENT DATA");_sleep(50);
        puts("\n\t\t\t2.)EDIT STUDENT DATA");_sleep(50);
        puts("\n\t\t\t3.)DELETE STUDENT DATA");_sleep(50);
        puts("\n\t\t\t4.)MANAGEMENT DEPARTMENT");_sleep(50);


/*selecting desired choice*/
            fgets(choice,20,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choice,"e\n")==0||(strcmp(choice,"E\n")==0)) transfer();


            //TESTING printf("ufo.mainmenu_login_choice: %d",ufo.mainmenu_login_choice);_sleep(1000);
        /*mapping the choice*/
            if(strcmp(choice,"1\n")==0)
            {
                puts("\n\t\tENTER STUDENT ID");
                fgets(choice,20,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choice,"e\n")==0||(strcmp(choice,"E\n")==0)) transfer();
                student_id=atoi(choice);
                if(student_id>1000000&&student_id<10000000)
                    view_student_data(student_id);
                student_management();
            }
            if(strcmp(choice,"4\n")==0)
            management();
}
