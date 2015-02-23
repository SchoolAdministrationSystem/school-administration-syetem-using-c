#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*THIS STRUCTURE STORE BASIC INFO OF STUDENT WHICH IS USEFUL FOR VALIDATION OF TAKING ADMISSION*/
struct student
{
    char classes[10];
    unsigned int marks_prev_class;
    unsigned int id;
    unsigned int password[50];
} stud;




void class_eligibility()
{
    /*THIS FUNCTION VALIDATE THE PREV YEARS MAARKS OF A STUDENT IS GREATHER THAN 50% OR NOT
    THIS IS THE 2nd MOST MAIN ELIGIBILTY TO TAKE ADMISSION IN SCHOOL*/

    char temporary_prev_class[5];
    char temporary_class[12];
    unsigned int int_classes,loopbreaker=1;
    while(loopbreaker>=1) //LOOPBREAKER IS USED TO ASK CLASS IF THE ANSWER i.e. INPUT WAS NOT ACCORDING AS INSTRUCTED
    {
        puts("AVAILABLE CLASSES IS \n\tNURSERY\n\tLKG\n\tUKG\n\t1ST TO 12TH");
        _sleep(1000);
        puts("\n\tENTER THE CLASS ");
        fgets(temporary_class,10,stdin);/*if exit then */if(strcmp(temporary_class,"e\n")==0||(strcmp(temporary_class,"E\n")==0))    transfer();
        fflush(stdin);
//TESTIING puts(temporary_class);
        int_classes=atoi(temporary_class);
        strcpy(stud.classes,temporary_class);
        /*NOW IF CLASSES ARE UKG LKG NURSERY OR 1 TO 12
          THEN ONLY THE STUDENT ARE ELIGIBLE TO TAKE ADMISSION
          WITH STORING WHAT IS THE PREV CLASS IF PRESENT CLASS IS THIS
        */
        if(strcmp(stud.classes,"LKG\n")==0||strcmp(stud.classes,"lkg\n")==0)
        {
            strcpy(temporary_prev_class,"NURSERY");
            loopbreaker=0;
        }
        else if(strcmp(stud.classes,"ukg\n")==0||strcmp(stud.classes,"UKG\n")==0)
        {
            strcpy(temporary_prev_class,"LKG");
            loopbreaker=0;
        }
        else if(strcmp(stud.classes,"nursery\n")==0||strcmp(stud.classes,"nursery\n")==0)  loopbreaker=0;
        else if(int_classes==1)
        {
            strcpy(temporary_prev_class,"UKG");
            loopbreaker=0;
        }
        else if(int_classes<13&&int_classes>1)
        {
            snprintf(temporary_prev_class,10,"%d",int_classes-1);
            loopbreaker=0;
        }
        else
        {
            puts("Try again Later");
            if(loopbreaker>5) puts("\t\t###Exceeding Limit###");
            _sleep(1000);
            if(loopbreaker==10)
            {
                puts("****Limit Exceeded ***\n\n\n");
                _sleep(2000);
                admissionmodule();
            }
            loopbreaker++;
        }

        /*IF USER ENTER VALID CLASS THEN LOOPBREAKER VALUE BECOME 0 AND THEN WE ARE CHECKING THAT EITHER THE PERSON marks IS MORE THAN 50% OR NOT
        if not then better luck next time*/
        if(loopbreaker==0)
        {

            if(strcmp(stud.classes,"nursery\n")!=0||strcmp(stud.classes,"nursery\n")!=0)
            {
                printf("\nEnter your marks in %s class",temporary_prev_class);
                fgets(temporary_class,5,stdin);
                fflush(stdin);/*if exit then */if(strcmp(temporary_class,"e\n")==0||(strcmp(temporary_class,"E\n")==0))    transfer();
                stud.marks_prev_class=atoi(temporary_class);
                if(stud.marks_prev_class<50||stud.marks_prev_class>100)
                {
                    puts("SORRY YOU ARE NOT ELIGIBLE");
                    _sleep(1000);
                    puts("BETTER LUCK NEXT TIME\nGOODBYE");
                    _sleep(1500);
                    admissionmodule();
                }
            }
        }
    }


}
