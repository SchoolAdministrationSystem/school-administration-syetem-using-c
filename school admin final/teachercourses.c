

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>




struct teacher{

char specialised_subject[20];
unsigned int id;
unsigned int password[50];
char degree[20];
char assigned_class[5];

}teach;










/*courses*/
void undergraduate(){
    char choice[5];
    puts("WHICH CLASS YOU WANT TO PREFER");_sleep(200);

puts("1.NURSERY\n\t\(class nursery to u.k.g\)");_sleep(200);
puts("2.PRIMARY\n\t\(class 1st to 5th\)");_sleep(200);
puts("3.SECONDARY\n\t\(class 6TH to 10th\)");_sleep(200);
puts("4.HIGHER SECONDARY\n\t\(class 11TH & 12th\)");_sleep(200);
puts("5. MANAGEMENT");_sleep(200);
fgets(choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choice,"e\n")==0||(strcmp(choice,"E\n")==0)) continue_choice(1);
if(strcmp(choice,"1\n")==0){strcpy(teach.assigned_class,"NURSERY CLASSES");
nursery(1);}
else if(strcmp(choice,"2\n")==0){strcpy(teach.assigned_class,"PRIMARY CLASSES");primary(1);}
else if(strcmp(choice,"3\n")==0){puts("SORRY YOU ARE UNELIGIBILE FOR IT");_sleep(400);admissionmodule();}
else if(strcmp(choice,"4\n")==0){puts("SORRY YOU ARE UNELIGIBILE FOR IT");_sleep(400);admissionmodule();}
else if(strcmp(choice,"5\n")==0){strcpy(teach.assigned_class,"MANAGEMENT WORK");teachmanagement(1);}
else {puts("ENTER NUMBER ONLY");_sleep(400);puts("PRESS E ANYTIME TO EXIT");_sleep(400);graduate();}
}

void graduate(){
//    puts("graduate");
    char choice[5];
    puts("WHICH CLASS YOU WANT TO PREFER");_sleep(200);

puts("1.NURSERY\n\t\(class nursery to u.k.g\)");_sleep(200);
puts("2.PRIMARY\n\t\(class 1st to 5th\)");_sleep(200);
puts("3.SECONDARY\n\t\(class 6TH to 10th\)");_sleep(200);
puts("4.HIGHER SECONDARY\n\t\(class 11TH & 12th\)");_sleep(200);
puts("5. MANAGEMENT");_sleep(200);
fgets(choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choice,"e\n")==0||(strcmp(choice,"E\n")==0)) continue_choice(1);

if(strcmp(choice,"1\n")==0){strcpy(teach.assigned_class,"NURSERY CLASSES");nursery(2);}
else if(strcmp(choice,"2\n")==0){strcpy(teach.assigned_class,"PRIMARY CLASSES");primary(2);}
else if(strcmp(choice,"3\n")==0){strcpy(teach.assigned_class,"SECONDARY CLASSES");secondary(2);}
else if(strcmp(choice,"4\n")==0){puts("SORRY YOU ARE UNELIGIBILE FOR IT");_sleep(400);admissionmodule();}
else if(strcmp(choice,"5\n")==0){strcpy(teach.assigned_class,"MANAGEMENT WORK");teachmanagement(2);}

else {puts("ENTER NUMBER ONLY");_sleep(400);puts("PRESS E ANYTIME TO EXIT");_sleep(400);graduate();}

}

void postgraduate(){
        char choice[5];
    puts("WHICH FIELD YOU WANT TO PREFER");_sleep(200);

puts("1.NURSERY\n\t\(class nursery to u.k.g\)");_sleep(200);
puts("2.PRIMARY\n\t\(class 1st to 5th\)");_sleep(200);
puts("3.SECONDARY\n\t\(class 6TH to 10th\)");_sleep(200);
puts("4.HIGHER SECONDARY\n\t\(class 11TH & 12th\)");_sleep(200);
puts("5. MANAGEMENT");_sleep(200);
fgets(choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choice,"e\n")==0||(strcmp(choice,"E\n")==0)) continue_choice(1);

if(strcmp(choice,"1\n")==0){strcpy(teach.assigned_class,"NURSERY CLASSES");
nursery(3);}
else if(strcmp(choice,"2\n")==0){ strcpy(teach.assigned_class,"PRIMARY CLASSES");
primary(3);}
else if(strcmp(choice,"3\n")==0){strcpy(teach.assigned_class,"SECONDARY CLASSES");secondary(3);}

else if(strcmp(choice,"4\n")==0){strcpy(teach.assigned_class,"HIGHER SECONDARY CLASSES");highersecondary(3);}
else if(strcmp(choice,"5\n")==0){strcpy(teach.assigned_class,"MANAGEMENT WORK");teachmanagement(3);}
else {puts("ENTER NUMBER ONLY");_sleep(400);puts("PRESS E ANYTIME TO EXIT");_sleep(400);graduate();}
}



void phd(){
        char choice[5];
    puts("WHICH FIELD YOU WANT TO PREFER");_sleep(200);

puts("1.APPLY FOR PRINCIPAL");_sleep(200);
puts("2. MANAGEMENT");_sleep(200);
puts("3.HIGHER SECONDARY\n\t\(class 11TH & 12th\)");_sleep(200);
fgets(choice,5,stdin);fflush(stdin); /*if exit then*/    if(strcmp(choice,"e\n")==0||(strcmp(choice,"E\n")==0)) continue_choice(1);
if(strcmp(choice,"1\n")==0){strcpy(teach.assigned_class,"PRINCIPAL");
principal(4);}
else if(strcmp(choice,"2\n")==0){strcpy(teach.assigned_class,"MANAGEMENT WORK");teachmanagement(4);}
else if(strcmp(choice,"3\n")==0){strcpy(teach.assigned_class,"HIGHER SECONDARY CLASSES");
highersecondary(4);}
else {puts("ENTER NUMBER ONLY");_sleep(400);puts("PRESS E ANYTIME TO EXIT");_sleep(400);graduate();}
}


