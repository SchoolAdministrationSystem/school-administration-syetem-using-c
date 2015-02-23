#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
/*void error_message(void);
void mainmenu(void);
void dotdelay(void);
void heading(void);
void admissionmodule(void);
void studentadmissionmodule(void);
void teacheradmissionmodule(void);
void error_correction(void);
unsigned int validateage(void);
void idgenerator(void);
void studentadmissionmodule(void);
void student_personal_details(void);
void transfer(void);
int common_details();
void contact(unsigned int,char*);
/*/

struct useful{
    /*any useful info of this function which might be used further*/
unsigned int mainmenu_login_choice;
unsigned int next_choice;
}ufo;

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

struct student
{
    char classes[10];
    unsigned int marks_prev_class;
    unsigned int id;
    unsigned int password[50];
} stud;



struct teacher{
char specialised_subject[20];
unsigned int id;
unsigned int password[50];
char degree[20];
char assigned_class[5];

}teach;



struct teacher_id{
int fetched_id;
unsigned
}teaid;





struct dateob{
    unsigned int dob_day;
    unsigned int dob_month;
    unsigned int dob_year;
    }dob;



void permadd();
void localadd();
void guardcont();







typedef struct tm tm;

int student_personal_details(){
    unsigned int return_choice;
//printf("student id is %d\n",stud.id);
    //stud.id=1420001;
    //strcpy(stud.password,"1420001");
    return_choice=common_details();
    //printf("return choice at student_personal_details is %d",return_choice);_sleep(1000);
if(return_choice!=1)
{

    puts("Something Went Wrong");
    studentadmissionmodule();
}
else return 1;

}








            /*PERSONAL DETAILS*/


int common_details(){
    FILE *write_on_file;
    char dob_string[15],verify[5],time_string[40];    unsigned int loopbreaker=0,return_choice;
    time_t date_of_admission;   time(&date_of_admission);

    /*ASK FOR COMMON DETAIL`S WHICH MAY CALL OTHER DETAIL FOR THEIR COMPLETION */
      //for testing  printf("ID IS %d\n",id);printf("password is");puts(password);*/
      puts("****PERSONAL DETAILS****");_sleep(500);
        printf(" \tNAME:");_sleep(100);   fgets(com.name,50,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(com.name,"e\n")==0||(strcmp(com.name,"E\n")==0)) transfer();
        printf(" \tFATHER`S NAME:");_sleep(100);  fgets(com.father_name,50,stdin);_sleep(50); fflush(stdin);/*if exit then*/    if(strcmp(com.father_name,"e\n")==0||(strcmp(com.father_name,"E\n")==0))        transfer();
        printf(" \tMOTHER`S NAME:");_sleep(100);   fgets(com.mother_name,50,stdin);_sleep(50); fflush(stdin);/*if exit then*/    if(strcmp(com.mother_name,"e\n")==0||(strcmp(com.mother_name,"E\n")==0))        transfer();
        printf(" \tcaste:");_sleep(100);   fgets(com.caste,20,stdin);_sleep(50); fflush(stdin);/*if exit then*/    if(strcmp(com.caste,"e\n")==0||(strcmp(com.caste,"E\n")==0))        transfer();
       /*blood group*/
        while(loopbreaker<10){
          if(loopbreaker>5){
                    printf("*");_sleep(100);printf("*");_sleep(100);printf("W");_sleep(100);printf("A");_sleep(100);printf("R");_sleep(100);printf("N");_sleep(100);printf("I");_sleep(100);printf("N");_sleep(100);printf("G");_sleep(100);printf("*");_sleep(100);printf("*");_sleep(100);
                    printf("PRESS \n\tA RhD positive (A+)\n\tA RhD negative (A-)\n\tB RhD positive (B+)\n\tB RhD negative (B-)\n\tO RhD positive (O+)\n\tO RhD negative (O-)\n\tAB RhD positive (AB+)\n\tAB RhD negative (AB-)\n");_sleep(250);
                    printf("PRESS E TO EXIT\n\n");_sleep(250);

          }
          if(loopbreaker==9){
                    puts("limit cross");_sleep(100);transfer();
          }
          printf(" \tBLOOD GROUP:");_sleep(100);
          printf(" \tA+\n");_sleep(50);printf(" \tB+\n");_sleep(50);printf(" \tO+\n");_sleep(100);printf(" \tAB+\n");_sleep(50);
          printf(" \tA-\n");_sleep(50);printf(" \tB-\n");_sleep(50);printf(" \tO-\n");_sleep(100);printf(" \tAB-\n");_sleep(50);
          fgets(com.blood_group,4,stdin);_sleep(50); fflush(stdin);/*if exit then*/    if(strcmp(com.blood_group,"e\n")==0||(strcmp(com.blood_group,"E\n")==0))        transfer();
            if(strcmp(com.blood_group,"A+\n")==0||strcmp(com.blood_group,"B+\n")==0||strcmp(com.blood_group,"AB+")==0||strcmp(com.blood_group,"O+\n")==0||strcmp(com.blood_group,"a+\n")==0||strcmp(com.blood_group,"b+\n")==0||strcmp(com.blood_group,"ab+")==0||strcmp(com.blood_group,"o+\n")==0||strcmp(com.blood_group,"A-\n")==0||strcmp(com.blood_group,"B-\n")==0||strcmp(com.blood_group,"AB-")==0||strcmp(com.blood_group,"O-\n")==0||strcmp(com.blood_group,"a-\n")==0||strcmp(com.blood_group,"b-\n")==0||strcmp(com.blood_group,"ab-")==0||strcmp(com.blood_group,"o-\n")==0)
                loopbreaker=50;
          loopbreaker++;
        }loopbreaker=0;

    /*gender of a person*/
        while(loopbreaker<10){
            printf(" \tgender MALE:M\n\tFEMALE:F\n\tOTHER:O\n\t");_sleep(100);   fgets(com.gender,2,stdin);_sleep(50); fflush(stdin);
            if(strcmp(com.gender,"F")==0||strcmp(com.gender,"M")==0||strcmp(com.gender,"O")==0||strcmp(com.gender,"f")==0||strcmp(com.gender,"m")==0||strcmp(com.gender,"o")==0)
                loopbreaker=11;
            else if(strcmp(com.gender,"e")==0||(strcmp(com.gender,"E")==0))
                transfer();
            else if(loopbreaker>=5&&loopbreaker<=8){
                    printf("*");_sleep(100);printf("*");_sleep(100);printf("W");_sleep(100);printf("A");_sleep(100);printf("R");_sleep(100);printf("N");_sleep(100);printf("I");_sleep(100);printf("N");_sleep(100);printf("G");_sleep(100);printf("*");_sleep(100);printf("*");_sleep(100);
                    printf("ENTER ");_sleep(50);printf("A ");_sleep(50);printf("SINGLE ");_sleep(50);printf("WORD ");_sleep(50);printf("ONLY ");_sleep(50);
                    printf("M ");_sleep(50);printf("OR ");_sleep(50);printf("F ");_sleep(50);printf("OR ");_sleep(50);printf("O\n");_sleep(150);
                    printf("PRESS E TO EXIT");_sleep(250);    }
            else if(loopbreaker==9){
                    printf("\tlimit exceed\n");_sleep(250);
                    printf("       try ");_sleep(200);printf("again ");_sleep(200);printf(" later\n\n\n");_sleep(200);        transfer();    }

            loopbreaker++; //TESTING printf("loopbreaker value=%d",loopbreaker);
            }
            loopbreaker=0;
    while(loopbreaker==0){
            printf(" \tDATE OF BIRTH");_sleep(100);printf(" \n\t\tDATE");_sleep(100);   fgets(date.day,3,stdin);_sleep(3); fflush(stdin);/*if exit then*/            if(strcmp(date.day,"e\n")==0||(strcmp(date.day,"E\n")==0))               transfer();
            printf(" \n\t\tMONTH");_sleep(100);   fgets(date.month,3,stdin);_sleep(50); fflush(stdin);/*if exit then*/        if(strcmp(date.month,"e\n")==0||(strcmp(date.month,"E\n")==0))        transfer();
            printf(" \n\t\tYEAR: ");_sleep(100);   fgets(date.year,5,stdin);_sleep(50); fflush(stdin);/*if exit then*/    if(strcmp(date.year,"e\n")==0||(strcmp(date.year,"E\n")==0))        transfer();
            /**/
            //printf("length of month string is %s",date.month );
            strtok(date.month, "\n");
           //printf("\nlength of month string is %s\n",date.month );
            dob.dob_day=atoi(date.day);
            dob.dob_month=atoi(date.month);
            dob.dob_year=atoi(date.year);
            if(ufo.mainmenu_login_choice==1&&ufo.next_choice==1){
            if(dob.dob_day<1||dob.dob_day>31||dob.dob_month<1||dob.dob_month>12||dob.dob_year<1990||dob.dob_year>2100)
            {    printf("INVALID ");_sleep(500);printf("DATE");_sleep(500);}
            else
                loopbreaker=1;}
            if(ufo.mainmenu_login_choice==1&&ufo.next_choice==2) {
            if(dob.dob_day<1||dob.dob_day>31||dob.dob_month<1||dob.dob_month>12||dob.dob_year<1950||dob.dob_year>2100)
            {    printf("INVALID ");_sleep(500);printf("DATE");_sleep(500);}
            else
                loopbreaker=1;
            }
                        }loopbreaker=0;
    sprintf(dob_string,"%0.2d/%0.2d/%0.2d",dob.dob_day,dob.dob_month,dob.dob_year);
    fflush(stdin);
    /*FOR TESTING ERROR
    puts("date of birth is:");

    puts(dob_string);
    */
    tm *time_date_of_admission=localtime(&date_of_admission);
    printf("*****PERSONAL DETAILS*****");_sleep(500);
    printf("\n\t\tNAME: %s",com.name);_sleep(500);printf("\n\t\tFATHER`S NAME: %s",com.father_name);_sleep(500);printf("\n\t\tMOTHER`S NAME: %s",com.mother_name);_sleep(500);
    printf("\n\t\tDOB: %s",dob_string);if(ufo.mainmenu_login_choice==1&&ufo.next_choice==1){printf("\n\t\tAGE: %u",com.age);_sleep(500);}
    printf("\n\t\tCASTE:%s",com.caste);_sleep(500);printf("\n\t\tGENDER:%s",com.gender);_sleep(500);
   if(ufo.mainmenu_login_choice==1&&ufo.next_choice==1) {
    printf("\n\t\tCLASS: %s",stud.classes);printf("\n\t\tCLASS RECORD: %d",stud.marks_prev_class);}
    if(ufo.mainmenu_login_choice==1&&ufo.next_choice==2){
    printf("\nASSIGNED CLASS: %s\n",teach.assigned_class);_sleep(500);printf("YOUR DEGREE: %s\n",teach.degree);_sleep(500);
    printf("SPECIALISED SUBJECT: %s\n",teach.specialised_subject);_sleep(500);    }
    printf("\n\tDATE");_sleep(100);printf("\n\tOF");_sleep(100);printf("\n\tADMISSION: ");_sleep(100);
    printf("\n\t\tDAY: %d",time_date_of_admission->tm_mday);
    printf("\n\t\tMONTH: %d",time_date_of_admission->tm_mon+1);
    printf("\n\t\tYEAR: %d",time_date_of_admission->tm_year+1900);
    printf("\n\t\tTIME: %.2d:%.2d:%.2d",time_date_of_admission->tm_hour,time_date_of_admission->tm_min,time_date_of_admission->tm_sec);
sprintf(time_string,"\n\t\tTIME: %.2d:%.2d:%.2d",time_date_of_admission->tm_hour,time_date_of_admission->tm_min,time_date_of_admission->tm_sec);
   while(loopbreaker==0){
        puts("\nPRESS V TO VERIFY E TO EXIT AND A TO FILL PERSONAL DETAIL AGAIN");
        fgets(verify,4,stdin);

        if(strcmp(verify,"v\n")==0||strcmp(verify,"V\n")==0){
            write_on_file=fopen("temporary.dll","w+");
            fputs(com.name,write_on_file);
            fputs(com.father_name,write_on_file);
            fputs(com.mother_name,write_on_file);

            if(ufo.mainmenu_login_choice==1&&ufo.next_choice==1)       fprintf(write_on_file,"%d\n%s\n%d\n",com.age,stud.classes,stud.marks_prev_class);
            if(ufo.mainmenu_login_choice==1&&ufo.next_choice==2)       fprintf(write_on_file,"%s\n%s\n%s\n",teach.assigned_class,teach.degree,teach.specialised_subject);

            fprintf(write_on_file,"%s\n%s\n%s\n%s",dob_string,com.gender,com.blood_group,com.caste);
            fputs(time_string,write_on_file);
/*            fputs(dob_string,write_on_file);
            fputs(com.blood_group,write_on_file);
            fputs(com.caste,write_on_file);*/
            fclose(write_on_file);
            /*printf("\n\nPRESS ANY KEY TO CONTINUE\n");
            getch();*/

            loopbreaker=1;}
        else if(strcmp(verify,"e\n")==0|strcmp(verify,"E\n")==0)
            transfer();
        else if(strcmp(verify,"a\n")==0|strcmp(verify,"A\n")==0)
           //puts("hye");
            common_details();
        else
            printf("\ntry again\n");
        }loopbreaker=0;
return_choice=    contact();              /*/call contact function to save contact details*/
    //printf("return choice at common details is %d",return_choice);_sleep(1000);
    if(return_choice==1){
    printf("\nCOMPLETED");_sleep(1000);
    printf("\npress any key to continue\n");
    getch();
                      }
    else{

        puts("Something went wrong");
        studentadmissionmodule();
    }

    return 1;}










                    /*CONTACT DETAILS*/






int contact(){


    FILE *write_on_file;
       /*for testing  printf("ID IS %d\n",id);printf("password is");puts(password);*/
        unsigned int loopbreaker=0,pincode,index=0;
        char verify[3],contents[5000],filecharacter,stud_id_string[20];
        puts("****CONTACT DETAILS****");_sleep(500);
        printf("\n \tMOBILE NUMBER:");_sleep(100);   fgets(com.mobile_no,50,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(com.mobile_no,"e\n")==0||(strcmp(com.mobile_no,"E\n")==0)) transfer();
        printf("\n \tADHAAR NUMBER:");_sleep(100);   fgets(com.adhaar_no,50,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(com.adhaar_no,"e\n")==0||(strcmp(com.adhaar_no,"E\n")==0)) transfer();
        printf("\n \tLANDLINE NUMBER:");_sleep(100);   fgets(com.landline_no,50,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(com.landline_no,"e\n")==0||(strcmp(com.landline_no,"E\n")==0)) transfer();
        printf("\n \tEMAIL ID:");_sleep(100);   fgets(com.email,50,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(com.email,"e\n")==0||(strcmp(com.email,"E\n")==0)) transfer();

        printf(" \n\tADDRESS INFORMATION:");_sleep(200);

        localadd();
        permadd();


        guardcont();

        puts("****CONTACT DETAILS****\n");_sleep(500);

        printf("\n \tMOBILE NUMBER:    %s",com.mobile_no);_sleep(100);
        printf("\n \tADHAAR NUMBER:    %s",com.adhaar_no);_sleep(100);
        printf("\n \tLANDLINE NUMBER:    %s",com.landline_no);_sleep(100);
        printf("\n \tEMAIL ID:    %s",com.email);_sleep(100);
        printf("LOCAL ADDRESS:\n");_sleep(100);
        printf("\tSTREET1: s\n",noty.lcad.street1);_sleep(100);
        printf("\tSTREET2: %s\n",noty.lcad.street2);_sleep(100);
        printf("\tSTREET3: %s\n",noty.lcad.street3);_sleep(100);
        printf("\tCITY: %s\n",noty.lcad.city);_sleep(100);
        printf("\tSTATE: %s\n",noty.lcad.city);_sleep(100);
        printf("\tPINCODE: %s\n",noty.lcad.pincode);_sleep(100);
        printf("PERMANENT ADDRESS:\n");_sleep(100);
        printf("\tSTREET1: %s\n",noty.ptad.street1);_sleep(100);
        printf("\tSTREET2: %s\n",noty.ptad.street2);_sleep(100);
        printf("\tSTREET3: %s\n",noty.ptad.street3);_sleep(100);
        printf("\tCITY: %s\n",noty.ptad.city);_sleep(100);
        printf("\tSTATE: %s\n",noty.ptad.city);_sleep(100);
        printf("\tPINCODE: %s\n",noty.ptad.pincode);_sleep(100);fflush(stdin);
        printf("\tFATHER`S:\n");_sleep(100);
        printf("\tMOBILE NUMBER: %s\n",noty.cont.cont_fath.mobile_no);_sleep(100);
        printf("\tOFFICE NUMBER: %s\n",noty.cont.cont_fath.office_no);_sleep(100);
        printf("\tEMAIL: %s\n",noty.cont.cont_fath.email_id);_sleep(100);
        printf("\tMOTHER`S:\n");_sleep(100);
        printf("\tMOBILE NUMBER: %s\n",noty.cont.cont_mot.mobile_no);_sleep(100);
        printf("\tOFFICE NUMBER: %s\n",noty.cont.cont_mot.office_no);_sleep(100);
        printf("\tHOME NUMBER: %s\n",noty.cont.cont_mot.home_no);_sleep(100);
        printf("\tEMAIL: %s\n",noty.cont.cont_mot.email_id);_sleep(100);

        while(loopbreaker==0){
        puts("\nPRESS V TO VERIFY E TO EXIT AND A TO FILL CONTACT DETAIL AGAIN");
        puts("NOTE: you are not undone process after sybmitting verification");
        fgets(verify,4,stdin);

        if(strcmp(verify,"v\n")==0||strcmp(verify,"V\n")==0){
            write_on_file=fopen("temporary.dll","a");

                    /*local address*/
            fputs("#",write_on_file);
            fprintf(write_on_file,"%s\n%s\n%s\n%s\n%s\n%s\n",noty.lcad.street1,noty.lcad.street2,noty.lcad.street3,noty.lcad.city,noty.lcad.state,noty.lcad.pincode);
                    /*permanent address*/
            fputs("$",write_on_file);
            fprintf(write_on_file,"%s\n%s\n%s\n%s\n%s\n%s\n",noty.ptad.street1,noty.ptad.street2,noty.ptad.street3,noty.ptad.city,noty.ptad.state,noty.ptad.pincode);
                    /*student contact*/
            fputs("^",write_on_file);
            fprintf(write_on_file,"%s\n%s\n%s\n%s\n",com.mobile_no,com.landline_no,com.email,com.adhaar_no);
                    /*parents contact*/
            fputs("*",write_on_file);
            fprintf(write_on_file,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n",noty.cont.cont_fath.mobile_no,noty.cont.cont_fath.office_no,noty.cont.cont_fath.email_id,noty.cont.cont_mot.mobile_no,noty.cont.cont_mot.office_no,noty.cont.cont_mot.home_no,noty.cont.cont_mot.email_id);

            fclose(write_on_file);


            puts("*****CONGRATULATIONS*****\n");_sleep(250);
            printf("YOUR ");_sleep(200);printf("DATA ");_sleep(200);printf("WAS ");_sleep(200);printf("SAVED ");_sleep(1000);

                        //TESTING printf("stud id is %d ",stud.id);
                        copycontents();
                        loopbreaker=1;
/*            if(ufo.mainmenu_login_choice==1&&ufo.next_choice==1)            view_student_data(stud.id);
            if(ufo.mainmenu_login_choice==1&&ufo.next_choice==2)            view_student_data(teaid.fetched_id);*/







            return 1;}


        else if(strcmp(verify,"e\n")==0|strcmp(verify,"E\n")==0)
            transfer();
        else if(strcmp(verify,"a\n")==0|strcmp(verify,"A\n")==0)
            contact();
        else
            printf("\ntry again\n");
        }loopbreaker=0;


}







void copycontents(){
FILE *write_on_file;
    puts("copying contents");_sleep(7000);
    char contents[5555],stud_id_string[10],taker;
    unsigned int index=0;

write_on_file=fopen("temporary.dll","r");
while(taker!=EOF){
    taker=fgetc(write_on_file);
    putchar(taker);
    contents[index]=taker;
    index++;}
contents[index]='\0';
fflush(stdin);
fflush(write_on_file);
fclose(write_on_file);
/*puts("contents are");_sleep(1000);
puts(contents);*/

write_on_file=fopen("yoyo.dll","w");
fprintf(write_on_file,"%s",contents);
//fputs(contents,write_on_file);
fflush(write_on_file);
fclose(write_on_file);
write_on_file=fopen("yoyo.txt","w");
fprintf(write_on_file,"%s",contents);
//fputs(contents,write_on_file);
fflush(write_on_file);
fclose(write_on_file);


/*if(ufo.mainmenu_login_choice==1&&ufo.next_choice==1) sprintf(stud_id_string,"%d.dll",stud.id);
            if(ufo.mainmenu_login_choice==1&&ufo.next_choice==2) sprintf(stud_id_string,"%d.dll",teaid.fetched_id);*/
            //rewind(write_on_file);
write_on_file=fopen(stud_id_string,"w");
fprintf(write_on_file,"%s",contents);
//fputs(contents,write_on_file);
fflush(write_on_file);
fclose(write_on_file);











}










void localadd(){
    unsigned int loopbreaker=0,pincode;
  printf(" \n\tLOCAL ADDRESS:");_sleep(100);
        printf(" \n\tSTREET1:");_sleep(100);   fgets(noty.lcad.street1,150,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.lcad.street1,"e\n")==0||(strcmp(noty.lcad.street1,"E\n")==0)) transfer();
        printf(" \n\tSTREET2:");_sleep(100);   fgets(noty.lcad.street2,150,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.lcad.street2,"e\n")==0||(strcmp(noty.lcad.street2,"E\n")==0)) transfer();
        printf(" \n\tSTREET3:");_sleep(100);   fgets(noty.lcad.street3,150,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.lcad.street3,"e\n")==0||(strcmp(noty.lcad.street3,"E\n")==0)) transfer();
        printf(" \n\tCITY:");_sleep(100);      fgets(noty.lcad.city,20,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.lcad.city,"e\n")==0||(strcmp(noty.lcad.city,"E\n")==0)) transfer();
        printf(" \n\tSTATE:");_sleep(100);     fgets(noty.lcad.state,20,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.lcad.state,"e\n")==0||(strcmp(noty.lcad.state,"E\n")==0)) transfer();
        while(loopbreaker==0){

            printf(" \n\tPINCODE:");_sleep(100);     fgets(noty.lcad.pincode,10,stdin);_sleep(50);   fflush(stdin); /*if exit then*/     if(strcmp(noty.lcad.pincode,"e\n")==0||(strcmp(noty.lcad.pincode,"E\n")==0)) transfer();
           /*for testing  printf("string length is %d",strlen(noty.lcad.pincode));
              printf("loopbreaker before lenfth compareison is %d",loopbreaker);
            */
            if(strlen(noty.lcad.pincode)==7)
              loopbreaker=1;
            //for testing printf("loopbreaker after lenfth compareison is %d",loopbreaker);}
            /*   pincode=atoi(noty.lcad.pincode);
            if(pincode>100000&&pincode< 999999)*/

               else
               puts("\nwrong pincode");
            }loopbreaker=0;

}
void permadd(){
    unsigned int loopbreaker=0,pincode;
printf(" \n\tPERMANENT ADDRESS:");_sleep(100);
        printf(" \n\tSTREET1:");_sleep(100);   fgets(noty.ptad.street1,150,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.ptad.street1,"e\n")==0||(strcmp(noty.ptad.street1,"E\n")==0)) transfer();
        printf(" \n\tSTREET2:");_sleep(100);   fgets(noty.ptad.street2,150,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.ptad.street2,"e\n")==0||(strcmp(noty.ptad.street2,"E\n")==0)) transfer();
        printf(" \n\tSTREET3:");_sleep(100);   fgets(noty.ptad.street3,150,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.ptad.street3,"e\n")==0||(strcmp(noty.ptad.street3,"E\n")==0)) transfer();
        printf(" \n\tCITY:");_sleep(100);      fgets(noty.ptad.city,20,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.ptad.city,"e\n")==0||(strcmp(noty.ptad.city,"E\n")==0)) transfer();
        printf(" \n\tSTATE:");_sleep(100);     fgets(noty.ptad.state,20,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.ptad.state,"e\n")==0||(strcmp(noty.ptad.state,"E\n")==0)) transfer();
        while(loopbreaker==0){

            printf(" \n\tPINCODE:");_sleep(100);     fgets(noty.ptad.pincode,20,stdin);_sleep(50);   fflush(stdin); /*if exit then*/     if(strcmp(noty.ptad.pincode,"e\n")==0||(strcmp(noty.ptad.pincode,"E\n")==0)) transfer();
            if(strlen(noty.ptad.pincode)==7)
              loopbreaker=1;

            /*   pincode=atoi(noty.lcad.pincode);
            if(pincode>100000&&pincode< 999999)*/

            }loopbreaker=0;

}
void guardcont(){
 printf(" \n\tFATHER`S MOBILE NUMBER:");_sleep(100);   fgets(noty.cont.cont_fath.mobile_no,12,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.cont.cont_fath.mobile_no,"e\n")==0||(strcmp(noty.cont.cont_fath.mobile_no,"E\n")==0)) transfer();
        printf(" \n\tFATHER`S OFFICE NUMBER:");_sleep(100);   fgets(noty.cont.cont_fath.office_no,12,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.cont.cont_fath.office_no,"e\n")==0||(strcmp(noty.cont.cont_fath.office_no,"E\n")==0)) transfer();
        printf(" \n\tFATHER`S EMAIL ID:");_sleep(100);   fgets(noty.cont.cont_fath.email_id,12,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.cont.cont_fath.email_id,"e\n")==0||(strcmp(noty.cont.cont_fath.email_id,"E\n")==0)) transfer();
        printf(" \n\tMOTHER`S MOBILE NUMBER:");_sleep(100);   fgets(noty.cont.cont_mot.mobile_no,12,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.cont.cont_mot.mobile_no,"e\n")==0||(strcmp(noty.cont.cont_mot.mobile_no,"E\n")==0)) transfer();
        printf(" \n\tMOTHER`S OFFICE NUMBER:");_sleep(100);   fgets(noty.cont.cont_mot.office_no,12,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.cont.cont_mot.office_no,"e\n")==0||(strcmp(noty.cont.cont_mot.office_no,"E\n")==0)) transfer();
        printf(" \n\tMOTHER`S HOME NUMBER:");_sleep(100);   fgets(noty.cont.cont_mot.home_no,12,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.cont.cont_mot.home_no,"e\n")==0||(strcmp(noty.cont.cont_mot.home_no,"E\n")==0)) transfer();
        printf(" \n\tMOTHER`S EMAIL ID:");_sleep(100);   fgets(noty.cont.cont_mot.email_id,12,stdin);_sleep(50);   fflush(stdin); /*if exit then*/    if(strcmp(noty.cont.cont_mot.email_id,"e\n")==0||(strcmp(noty.cont.cont_mot.email_id,"E\n")==0)) transfer();



}




