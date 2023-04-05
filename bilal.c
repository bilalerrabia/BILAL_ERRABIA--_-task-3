        #include <stdio.h>
        #include <stdlib.h>
        #include<conio.h>
                typedef struct{
       char  first_name[20];
       char  last_name[20];
       char  gender[2];
       char  address[23];
       char  email[50];
       char  problem[28];
       char  doctor[66];
       char  contact[20];
       char    age[20];
        }info;

        int main(void){

        int conter=-1;
        int repet;
        do{
                conter++ ;
                system("cls");
                printf("\t\t");
            for(int i=1;i<=70;i++){
                printf("-");}
                  printf("\n\t\t\t\t\t BILAL HOSPITAL\n");
                 printf("\t\t");
            for(int i=1;i<=70;i++){
                printf("-");}
                printf("\n\n");
                printf("\t\t\t   !!!!!!!!!!!!! ADD PATIENTS RECORD !!!!!!!!!!!!!\n\n\n");
info bilal[conter];
printf("\t\tfirst_name:");
scanf("%s",&bilal->first_name[conter]);


printf("\n\t\tlast_name:");
scanf("%s",&bilal->last_name[conter]);


        printf("\n\t\tgender[F/M]");
        scanf("%s",&bilal->gender[conter]);

        printf("\n\t\t age:");
        scanf("%s",&bilal->age[conter]);
           printf("\n\t\t contact on:");
           scanf("%s",&bilal->contact[conter]);



              printf("\n\t\taddress:");
              scanf("%s",&bilal->address[conter]);;
              printf("\n\t\tEmail:");
              scanf("%s",&bilal->email[conter]);
            //getch();



              printf("\n\t\tproblem:");
             scanf("%s",&bilal->problem[conter]);
//getch();
              printf("\n\t\tdoctor:");
             scanf("%s",&bilal->doctor[conter]);
//getch();
            printf("\n\n\n\t\t do want to repete[1/0]:");
            getch();
            scanf("%d",&repet);
//getch();
        }while(repet==5 || repet==0);
         system("cls");
          printf("mamak");
        }












