#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int view_student_data(unsigned int id){
    FILE *viewer;
    unsigned int index=0;
    char id_string[50],file_data[10000],takechar;

    puts("\n\n\tREVIEW YOUR INFORMATION WHICH IS SAVED IN OUR DATABASE");_sleep(2000);
    sprintf(id_string,"%d.dll",id);
    viewer=fopen(id_string,"r");
    /*takechar=fgetc(viewer);
    id_string[index]=takechar;
    index++;/*/
    while(takechar!=EOF){
        takechar=fgetc(viewer);
        putchar(takechar);

    }

    fclose(viewer);_sleep(2000);
    puts("PRESS ANY KEY TO CONTINUE");
    getch();
return;

}
