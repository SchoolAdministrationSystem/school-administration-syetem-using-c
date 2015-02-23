#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void teach_validator();
void idgeneratorteach(unsigned int);
void graduate();
void undergraduate();
void postgraduate();
void literature();
void feemanagement();
void operator_mgmt();

void science();
void maths();
void moralscience();
void commerce();
void sociology();
void computer();
void physical();
void arts();
void phd();
void teachmanagement(unsigned int);
void primary();
void secondary();
void nursery();
void highersecondary();
void cultural();
void principal();
//void operator_mgmt();


struct teacher{
char specialised_subject[20];
unsigned int id;
unsigned int password[50];
char degree[20];
char assigned_class[5];

}teach;

/*modules*/
void teacheradmissionmodule(){
//TESTING
printf("WELCOME ");_sleep(200);
printf("ADMIN\n");_sleep(200);
printf("\t\tADMIT NEW FACULTY\n");_sleep(200);
FILE *checkers;
unsigned int index=0;
char taker,teachids[15];


/*checkers=fopen("regteach.dll","r+");
//printf("checker= %d",checkers);

puts("hye");taker=fgetc(checkers);
putchar(taker);
while(taker!='\n'){
 puts("ello");
    taker=fgetc(checkers);
putchar(taker);
teachids[index]=taker;
index++;
}teachids[index]='\0';
//puts(teachids);
teach.id=atoi(teachids);
//printf("teachid=%d",stud.id);
puts("hello");
fclose(checkers);
sprintf(teach.password,"%d",teach.id);
teach.id++;
sprintf(teachids,"a%d",teach.id);
//printf("stud.id %d",stud.id);

checkers=fopen("regteach.dll","r+");
//printf("checker= %d",checkers);
//taker=fgetc(checkers);
fputs(teachids,checkers);
fclose(checkers);
*/

teach_validator();



}



void teach_validator(){
char choice[5];
puts("ARE YOU");_sleep(200);
puts("\t1.UNDER GRADUATE");_sleep(200);
puts("\t2.GRADUATE");_sleep(200);
puts("\t3.POST GRADUATE");_sleep(200);
puts("\t4.Phd");_sleep(200);
puts("\t5.OTHER");_sleep(200);
fgets(choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choice,"e\n")==0||(strcmp(choice,"E\n")==0)) continue_choice(1);

if(strcmp(choice,"3\n")==0){
strcpy(teach.degree,"POST GRADUATE");
puts(teach.degree);
postgraduate();
}


else if(strcmp(choice,"2\n")==0){strcpy(teach.degree,"GRADUATE");
puts(teach.degree);graduate();}
else if(strcmp(choice,"1\n")==0){strcpy(teach.degree,"UNDER GRADUATE");
puts(teach.degree);undergraduate();}
else if(strcmp(choice,"5\n")==0){teachmanagement(0);}
else if(strcmp(choice,"4\n")==0){
        strcpy(teach.degree,"pHD holder");
        puts(teach.degree);
        phd();}
else {puts("SELECT NUMBER ONLY");_sleep(300);teacheradmissionmodule();}

}




/** function called
 * teach_validator();
 * student_personal_details();
 * admissionmodule();
 * postgraduate();
 * graduate();
 * teachmanagement(0);
 * teacheradmissionmodule();
 * undergraduate();
 */

/** function used
 * teach_validator();
 * teacheradmissionmodule();
 */

/** ccalled by
 *
 * void admissionmodule()
 */
