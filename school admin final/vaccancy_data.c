
vaccancy_data(){
    english();
}

english(){
char choice[5],id_string[10];unsigned int choice_int,count=0,id=1420000;
puts("ENTER NUMBER OF FACULTY FOR NURSERY TO PRIMARY CLASSES WHO TEACH ENGLISH:-(max-10)");
fgets(choice,5,stdin);
choice_int=atoi(choice);
printf("choice_int is %d",choice_int);
if(choice_int>0&&choice_int<10){
    (choice_int==0){strcpy(id_string,"");}
    else{
    while(count<choice_int){
            id=id+choice_int;
        printf("id int is %d",id);
    }
    sprintf(id_string,"%d",id);
    puts(id_string);
    }
}
else{puts("****error***\nFILL AGAIN");english();}
}
