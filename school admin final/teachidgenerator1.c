#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int fetch_data(unsigned int);
void validate_data();
void modify_data();
void teach_id_generator();

struct teacher{
char specialised_subject[20];
unsigned int id;
unsigned int password[50];
char degree[20];
char assigned_class[5];

}teach;

struct teacher_id{
int fetched_id;
int last_id;
}teaid;





void teach_id_generator(){
fetch_data(0);
validate_data();

modify_data();
printf("\n\tYOUR ID IS %d",teaid.fetched_id);
printf("\n\tYOUR PASSWORD IS %d\n\n",teaid.fetched_id);
puts("YOU ARE SUCCESSFULLY REGISTERED AND ALL YOUR INFORMATION WAS SAVED TO US");_sleep(2000);
puts("THANK YOU");_sleep(1000);
admissionmodule();
}







int fetch_data(unsigned int fetch_modify){
FILE *fileopen;
unsigned int index=0;
char filename[10],taker,id[10];

if(strcmp(teach.specialised_subject,"ENGLISH")==0){
strcpy(filename,"eng.dll");}


else if(strcmp(teach.specialised_subject,"HINDI")==0){
strcpy(filename,"hnd.dll");}

else if(strcmp(teach.specialised_subject,"SANSKRIT")==0){
strcpy(filename,"snskrt.dll");}


else if(strcmp(teach.specialised_subject,"BIOLOGY")==0){
strcpy(filename,"bio.dll");}

else if(strcmp(teach.specialised_subject,"PHYSICS")==0){
strcpy(filename,"phy.dll");}

else if(strcmp(teach.specialised_subject,"CHEMISTRY")==0){
strcpy(filename,"chm.dll");}


else if(strcmp(teach.specialised_subject,"MATHEMATICS")==0){
strcpy(filename,"mth.dll");}


else if(strcmp(teach.specialised_subject,"MORAL EDUCATION")==0){
strcpy(filename,"mrlsci.dll");}

else if(strcmp(teach.specialised_subject,"ACCOUNTANCY")==0){
strcpy(filename,"accnt.dll");}

else if(strcmp(teach.specialised_subject,"ECONOMICS")==0){
strcpy(filename,"eco.dll");}

else if(strcmp(teach.specialised_subject,"BUSINESS")==0){
strcpy(filename,"bsin.dll");}

else if(strcmp(teach.specialised_subject,"MANAGEMENT")==0){
strcpy(filename,"mgmnt.dll");}



 if((fileopen= fopen(filename, "r+"))==NULL)
    {puts("ERROR");
    teacheradmissionmodule();}


taker=fgetc(fileopen);
//TESTING           putchar(taker);



while(taker!='a'){

    taker=fgetc(fileopen);
//TESTING                                               putchar(taker);
if(strcmp(teach.assigned_class,"NURSERY CLASSES")==0){
    id[index]=taker;

    index++;}

}
if(strcmp(teach.assigned_class,"NURSERY CLASSES")==0){id[index-1]='\0';
//TESTING               puts("id is");
//TESTING                       puts(id);

teaid.fetched_id=atoi(id);


//TESTING
printf("id in nursery int is %d\n",teaid.fetched_id);
}
index=0;


while(taker!='b'){

    taker=fgetc(fileopen);
//TESTING                                                   putchar(taker);

if(strcmp(teach.assigned_class,"NURSERY CLASSES")==0){
    id[index]=taker;

    index++;}

}
if(strcmp(teach.assigned_class,"NURSERY CLASSES")==0){id[index-1]='\0';
//TESTING puts("final id if class is nursery is");
//TESTING               puts(id);
teaid.last_id=atoi(id);
//TESTING
printf("final  id if class is nursery in int is %d\n",teaid.last_id);index=0;
return 1;}



/*FOR PRIMARY ID*/

while(taker!='c'){

    taker=fgetc(fileopen);
//TESTING                                           putchar(taker);
if(strcmp(teach.assigned_class,"PRIMARY CLASSES")==0){
    id[index]=taker;

    index++;}

}if(strcmp(teach.assigned_class,"PRIMARY CLASSES")==0){ id[index-1]='\0';
//TESTING                       puts("id is for primary class");
//TESTING                               puts(id);
teaid.fetched_id=atoi(id);
//TESTING
printf("id for primary class in int is %d\n",teaid.fetched_id);

}
index=0;

while(taker!='d'){

    taker=fgetc(fileopen);
//TESTING                                                       putchar(taker);

 if(strcmp(teach.assigned_class,"PRIMARY CLASSES")==0){
            id[index]=taker;

    index++;}

}
if(strcmp(teach.assigned_class,"PRIMARY CLASSES")==0){
id[index-1]='\0';
//TESTING                                   puts("final id is");
//TESTING                                       puts(id);

teaid.last_id=atoi(id);
//TESTING
printf("final  id in int is %d\n",teaid.last_id);index=0;
return 1;}








/*FOR SECONDARY ID*/

while(taker!='e'){

    taker=fgetc(fileopen);
//TESTING                                           putchar(taker);
if(strcmp(teach.assigned_class,"SECONDARY CLASSES")==0){
    id[index]=taker;

    index++;}

}if(strcmp(teach.assigned_class,"SECONDARY CLASSES")==0){ id[index-1]='\0';
//TESTING                       puts("id is for primary class");
//TESTING                               puts(id);
teaid.fetched_id=atoi(id);
//TESTING
printf("id for SECONDARY CLASSES in int is %d\n",teaid.fetched_id);

}
index=0;

while(taker!='f'){

    taker=fgetc(fileopen);
//TESTING                                                       putchar(taker);


 if(strcmp(teach.assigned_class,"SECONDARY CLASSES")==0){
            id[index]=taker;

    index++;}

}
if(strcmp(teach.assigned_class,"SECONDARY CLASSES")==0){
id[index-1]='\0';
//TESTING                                   puts("final id is");
//TESTING                                       puts(id);

teaid.last_id=atoi(id);
//TESTING
printf("final  id SECONDARY CLASSES in int is %d\n",teaid.last_id);index=0;
return 1;}




/*FOR H-secID*/

while(taker!='g'){

    taker=fgetc(fileopen);
//TESTING                                           putchar(taker);
if(strcmp(teach.assigned_class,"HIGHER SECONDARY CLASSES")==0){
    id[index]=taker;

    index++;}

}if(strcmp(teach.assigned_class,"HIGHER SECONDARY CLASSES")==0){ id[index-1]='\0';
//TESTING                       puts("id is for primary class");
//TESTING                               puts(id);
teaid.fetched_id=atoi(id);
//TESTING
printf("id for primary class in int is %d\n",teaid.fetched_id);

}
index=0;

while(taker!='h'){

    taker=fgetc(fileopen);
//TESTING                                                       putchar(taker);


 if(strcmp(teach.assigned_class,"HIGHER SECONDARY CLASSES")==0){
            id[index]=taker;

    index++;}

}
if(strcmp(teach.assigned_class,"HIGHER SECONDARY CLASSES")==0){
id[index-1]='\0';
//TESTING                                   puts("final id is");
//TESTING                                       puts(id);

teaid.last_id=atoi(id);
//TESTING
printf("final  id in int is %d\n",teaid.last_id);index=0;
return 1;}









else {puts("SOMETHING WENT WRONG CONTACT TO DEVELOPER");}

fclose(fileopen);


}




validate_data(){puts("validate data");
if(teaid.last_id-teaid.fetched_id==0||teaid.last_id-teaid.fetched_id<0){
puts("\n\n\tSORRY");_sleep(500);
puts("\t\t\tTHERE IS NO VACCANCY AVAILABLE\n\n");_sleep(2000);admissionmodule();
}
else
    //TESTING    puts("FILL DETAIL");
    common_details();
    /*if(strcmp(teach.assigned_class,"NURSERY CLASSES")==0){puts("filling all data");_sleep(1000);}
    if(strcmp(teach.assigned_class,"PRIMARY CLASSES")==0){puts("filling all data");_sleep(1000);}*/
}













modify_data(){
    FILE *fileopen;
    char filename[10];


/*TESTING
puts("Modify teacher data");
puts("assigned class is");
puts(teach.assigned_class);_sleep(1000);*/

if(strcmp(teach.specialised_subject,"ENGLISH")==0){
strcpy(filename,"eng.dll");}


else if(strcmp(teach.specialised_subject,"HINDI")==0){
strcpy(filename,"hnd.dll");}

else if(strcmp(teach.specialised_subject,"SANSKRIT")==0){
strcpy(filename,"snskrt.dll");}


else if(strcmp(teach.specialised_subject,"BIOLOGY")==0){
strcpy(filename,"bio.dll");}

else if(strcmp(teach.specialised_subject,"PHYSICS")==0){
strcpy(filename,"phy.dll");}

else if(strcmp(teach.specialised_subject,"CHEMISTRY")==0){
strcpy(filename,"chm.dll");}


else if(strcmp(teach.specialised_subject,"MATHEMATICS")==0){
strcpy(filename,"mth.dll");}


else if(strcmp(teach.specialised_subject,"MORAL EDUCATION")==0){
strcpy(filename,"mrlsci.dll");}

else if(strcmp(teach.specialised_subject,"ACCOUNTANCY")==0){
strcpy(filename,"accnt.dll");}

else if(strcmp(teach.specialised_subject,"ECONOMICS")==0){
strcpy(filename,"eco.dll");}

else if(strcmp(teach.specialised_subject,"BUSINESS")==0){
strcpy(filename,"bsin.dll");}

else if(strcmp(teach.specialised_subject,"MANAGEMENT")==0){
strcpy(filename,"mgmnt.dll");}


fileopen=fopen(filename,"r+");
if(fileopen==NULL) {puts("ERROR"); admissionmodule();}
//TESTING                                       puts("file was opened");











    if(strcmp(teach.assigned_class,"NURSERY CLASSES")==0){
//TESTING                                                   puts("NURDERY CLASS EDITOR");_sleep(500);
    fseek( fileopen, 1, SEEK_SET );

    fprintf(fileopen,"%d",teaid.fetched_id+1);
    }

if(strcmp(teach.assigned_class,"PRIMARY CLASSES")==0){fseek( fileopen, 19, SEEK_SET );
//TESTING                                       puts("PRIMARY CLASS EDITOR");_sleep(500);
    fprintf(fileopen,"%d",teaid.fetched_id+1);}
if(strcmp(teach.assigned_class,"SECONDARY CLASSES")==0){fseek( fileopen, 37, SEEK_SET );
//TESTING                                       puts("SEC CLASS EDITOR");_sleep(500);
    fprintf(fileopen,"%d",teaid.fetched_id+1);}
if(strcmp(teach.assigned_class,"HIGHER SECONDARY CLASSES")==0){fseek( fileopen, 55, SEEK_SET );
//TESTING                                       puts("H SEC CLASS EDITOR");_sleep(500);
    fprintf(fileopen,"%d",teaid.fetched_id+1);}

else {//puts("NOEDITOR");_sleep(500);

}

    fclose(fileopen);

}

