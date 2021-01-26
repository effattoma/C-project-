#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

int car;

 struct car
   {
        char car_number[20];
        char lot_number[3];
        char plot_number[3];
        char name[20];
        char date[20];
        char time[20];
        float  ltime;
        int charge;

    }s;

    void view_car();



int main()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tProject Name: Smart CAR PARKING System.\n\n\t\t\t\tBy: Effat Tamanna\n\t\t\t\tID: 172-35-2146\n\t\t\t\tSection: B\n\n\t\t\t\tDepartment of Software Engineering\n\t\t\t\tDaffodil International University.\n\n\n\n\n");

 system("COLOR 0C");
    system("pause");
    system("cls");

    getch();
printf("\n\n\n\n\n\n");
printf("\t\t\t  CAR                           PARKING                       SYSTEM\n\n\n");
printf("------------------*************$-----------------*******************--------------*****************----------------------\n");
printf("------------------**************-----------------*******************$-------------****************$----------------------\n");
printf("------------------***--------***-----------------***---------------***------------****-----------------------------------\n");
printf("------------------***----------------------------***--------------***-------------****-----------------------------------\n");
printf("------------------***----------------------------***--------------***-------------****-----------------------------------\n");
printf("------------------***----------------------------***--------------***-------------****************-----------------------\n");
printf("------------------***----------------------------*******************$--------------**************$-----------------------\n");
printf("------------------***----------------------------********************--------------------------****----------------------\n");
printf("------------------***----------------------------***-------------------------------------------****----------------------\n");
printf("------------------***----------------------------***-------------------------------------------****----------------------\n");
printf("------------------***---------***----------------***-------------------------------------------****----------------------\n");
printf("------------------***************----------------***-------------------------------****************----------------------\n");
printf("------------------**************$----------------***-------------------------------****************$---------------------\n");


    printf("\n\n\n\t\t\t\t\t____________________________________\n\t\t\t\t\t**** SMART CAR PARKING****\n\t\t\t\t\t____________________________________\n\n");

    printf("\n\t\t\t\t\t$ Welcome to our PARKING LOT $ \n\n\n");

    system("COLOR 0C");
    system("pause");
    system("cls");
    login();

    getch();

     view_car();

    }


void view_car()

{
    int choose;


     printf("\n\n\n\t\t\t\t\t__________________***________________\n\n\t\t\t\t\t**** PARKING lot ****\n\n\t\t\t\t\t_____________***____________________\n\n");

     printf("\n\t\t\t\t\t$$ FOR CASTOMAR $$\n\n\t\t\t\t1.PARKING (available lot ,car info)\n\n\t\t\t\t2.CAR LEAVING\n\n\n ");

     printf("\n\n\t\t\t\t\t *  FOR ADMIN  *\n\n\t\t\t\t3.VIEW PARKING INFO\n\n\t\t\t\t4.SEARCH CAR NUMBER \n\n\t\t\t\t5.SEARCH PARKING DATE\n\n\t\t\t\t6.VIEW LEAVING INFO \n\n\t\t\t\t7.cost \n\n\t\t\t\t8.search lot number\n\n\t\t\t\t9.Exit\n\n");

     printf("\n\n\t\t\t\t\t  \tEnter Your Choice:\t");

     scanf("%d",&choose);


    switch(choose)
    {
    case 1:


        av_lot();
        break;


    case 2:
         car_out();

        break;

    case 3:
        view();

        break;

    case 4:
         search_car_number();

        break;

    case 5:
        parking_date();
        break;

    case 6:
       view_leaving();
        break;
    case 7:
         cost();
        break;
    case 8:
         search_lot_number();

        break;
    case 9:
         exit(0);

        break;

    default:
        view_car();
        break;
    }
}


loader_animation()
{
    loader();

    system("cls");

    printf("\n\tSuccessfully Loaded\n\n");
    getch();
}

void loader()
{
    int i;
    system("cls");
    system("COLOR 0C");

    printf("\n\n\n\n\t\t\tLoading...\n");
    printf("\t");
    for(i=0;i<100;i++)
    {
        Sleep(15);

        printf("%c",219);

    }
}


av_lot()
{
     loader();

      system("cls" );

      printf("\n");

    printf("\n\t\t================================================================================================\n\n");

 printf("\t\t\t\t\t     $$  $$  $$$$$ $$$$$$ $$$$$$ $$\n");

printf("\n\t\t\t\t\t\t\t Welcome to Our parking lot\n");

    printf("\n\t\t\t\t\t\t\tTotal lot- 10 \n");

    printf("\n\n\t\t\t lot No\t\t\tAvailable\n");




    FILE *fp;

    fp=fopen("carp.txt","r");

    char able[20];
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.lot_number,"1")==0)
        {
            strcpy(able,"No");
        }
    }
    fclose(fp);

    printf("\n\t\t\t 1\t\t\t%s\t\t\t\n",able);

    fp=fopen("carp.txt","r");
    strcpy(able,"Yes");

    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.lot_number,"2")==0)
        {
            strcpy(able,"No");

        }
    }
    fclose(fp);

    printf("\n\t\t\t 2\t\t\t%s\n",able);

    strcpy(able,"Yes");

    fp=fopen("carp.txt","r");

    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.lot_number,"3")==0)
        {
            strcpy(able,"No");

        }
    }
    fclose(fp);

    printf("\n\t\t\t 3\t\t\t%s\n",able);



    fp=fopen("carp.txt","r");
    strcpy(able,"Yes");

    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.lot_number,"4")==0)
        {
            strcpy(able,"No");
        }
    }
     fclose(fp);

    printf("\n\t\t\t 4\t\t\t%s\n",able);



    fp=fopen("carp.txt","r");
    strcpy(able,"Yes");

    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.lot_number,"5")==0)
        {
            strcpy(able,"No");

        }
    }
    fclose(fp);

    printf("\n\t\t\t 5\t\t\t%s\n",able);



    fp=fopen("carp.txt","r");
    strcpy(able,"Yes");

    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.lot_number,"6")==0)
        {
            strcpy(able,"No");
        }
    }
    fclose(fp);

    printf("\n\t\t\t 6\t\t\t%s\n",able);


    fp=fopen("carp.txt","r");
    strcpy(able,"Yes");


    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.lot_number,"7")==0)
        {
            strcpy(able,"No");
        }
    }
    fclose(fp);

    printf("\n\t\t\t 7\t\t\t%s\n",able);



    fp=fopen("carp.txt","r");
    strcpy(able,"Yes");

    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.lot_number,"8")==0)
        {
            strcpy(able,"No");
        }
    }
    fclose(fp);

     printf("\n\t\t\t 8\t\t\t%s\n",able);



    fp=fopen("carp.txt","r");
    strcpy(able,"Yes");

    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.lot_number,"9")==0)
        {
            strcpy(able,"No");
        }
    }
    fclose(fp);

    printf("\n\t\t\t 9\t\t\t%s\n",able);



    fp=fopen("carp.txt","r");
    strcpy(able,"Yes");

    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.lot_number,"10")==0)
        {
            strcpy(able,"No");
        }
    }
    printf("\n\t\t\t 10\t\t\t%s\n",able);

    fclose(fp);

    printf("\n\n\t\t\t\t\t\tWhich lot You Want To park your car:");

    scanf("%d",&car);
     loader();
   system("COLOR 0C");
    system("cls");


    printf("\t\t ===============================================================================================\n\n");


    printf("\n\t\t\t\t\t\t some info.\n\n");

    printf("\t\t\t\t=================================================\t\t\n");

    fp=fopen("carp.txt","a");

    struct car s;

    printf("Enter car number      :\t");
    scanf("%s", s.car_number);

    printf("\nEnter entry lot number:\t");
    scanf("%s",s.lot_number);

    printf("\nEnter Name            :\t");
    scanf("%s", s.name);

    printf("\nEnter date            :\t");
    scanf("%s",s.date);

    printf("\nEnter entry time      :\t");
    scanf("%s", &s.time);

	system("pause");
    system("cls");

    system("COLOR 0C");
    printf("\n\n\t\t\t\t\tSuccessfully park your car\n\n\n ");
	printf("\n\n\t\t\t\t\t Thanks for coming\n\n\n ");
	fwrite(&s,sizeof(s),1,fp);
	fclose(fp);
	system("pause");



	view_car();
}





view()
{
    loader();
    system("cls");
    FILE *fp;
    fp=fopen("carp.txt", "r");
    struct car s;
    while(fread(&s, sizeof(s),1,fp))
    {
        printf("\ncar_number: %s \tName:%s \ttime:%s\t\tlot_number:%s \t\tdate:%s  \n\n", s.car_number, s.name, s.time,s.lot_number,s.date);
    }
    getch();

    fclose(fp);
 system("cls");

    system("pause");

    view_car();
}






search_car_number()
{
    loader();
    system("cls");

    char car_number[20];

    FILE *fp;

    fp=fopen("carp.txt", "r");
    struct car s;



    printf("\n\n\n\t\t\tSearch * CAR NUMBER *:\t");

    scanf("%s", car_number);

    while(fread(&s, sizeof(s), 1, fp))
    {
        if(strcmp(car_number, s.car_number)==0)
        {
            printf("\n\n\t\tCar Number: %s \t\n\n\t\tName:%s \t\n\n\t\ttime:%s \t\n\n\t\tlot Number:%s\t\n\n\t\tdate:%s\t\n\n\t\tLeaving time%s", s.car_number, s.name, s.time,s.lot_number,s.date,s.ltime);

            getch();
        }
    }
    fclose(fp);
 system("cls");
    system("pause");

    view_car();
}







void car_out()
{
    loader();
    system("cls");

    char plot_number[5];
    int i;
    system("cls");
    FILE *fp;
    fp=fopen("carp.txt","r+");
    rewind(fp);
    struct car s;


    printf("\n\n\n\nIf you want to leave your car Please enter the lot number:\t");
    scanf("%s",plot_number);
    printf("\n\n\n\n\n\t\t\t\tthanks for coming\n\n\nPlease pay your parking charge \n");

    while(fread(&s,sizeof(s),1,fp))
    {
        if (strcmp(plot_number,s.lot_number)==0)
        {
            fseek(fp,-sizeof(s),SEEK_CUR);

              for(i=0;i<6;i++)

            {
                s.lot_number[i]='\0';
            }


              strcpy(s.lot_number," ");




            fwrite(&s,sizeof(s),1,fp);
            fclose(fp);

        }
    }
    fclose(fp);
    getch();
    view_car();
}






cost()
{

    system("cls");
    FILE *fpc;

    fpc=fopen("car.txt","w");
    fwrite(&s,sizeof(s),1,fpc);

    struct car s;
int  car,hour,charge,total_charge;
          float ltime;
          float time;
          float total_time;
          float total_hour;
          float total ;
      printf("\n\n\tplease enter the leaving lot number:");
      scanf("%s",&s.plot_number);

      printf("\n\n\tEnter entry time:");
      scanf("%f",&time);

    printf("\n\n\tEnter leaving time:");
    scanf("%f", &ltime);

    total_hour=ltime-time;

	printf("\n\n\ttotal parking time:%.2f\n",total_hour);

	if (total_hour<=24)
    {

		s.charge=(total_hour*20);

    }

	else
    {
		printf("wrong input");
    }


	printf("\n\n\tParking cost:%d\n",s.charge);
    printf("\n\n\t successfully payed your parking charge ");
    printf("\n\n\n\n\t\t\t THANKS FOR COMING ");

	fclose(fpc);

    getch();
   view_car();
    system("pause");

}








parking_date()
{
    loader();
    system("cls");

    char date[20];

    FILE *fp;

    fp=fopen("carp.txt", "r");
    struct car s;



    printf("\n\n\n\t\t\tSearch * Date *:\t");

    scanf("%s",& date);

    while(fread(&s, sizeof(s), 1, fp))
    {
        if(strcmp(date, s.date)==0)
        {
            printf("\n\n\t\tCar Number: %s \t\n\n\t\tName:%s \t\n\n\t\ttime:%s \t\n\n\t\tlot Number:%s\t\n\n\t\tdate:%s\n", s.car_number, s.name, s.time,s.lot_number,s.date);

            getch();

        }
    }
    fclose(fp);

    system("pause");

    view_car();
}







view_leaving()
{
    loader();
    system("cls");
        FILE *fpc;
        FILE *fp;
    struct car s;
    fpc=fopen("car.txt","r");
    fp=fopen("carp.txt","r");
    while(fread(&s, sizeof(s),1,fp))
    {
        printf("\ncar_number: %s \tltime:%f\t\tplot_number:%s \t\tcharge:%.f \n\n", s.car_number,  s.ltime,s.plot_number,s.charge);
    }
    getch();

    fclose(fp);
   fclose(fpc);
    system("pause");

    view_car();
}





int login()
{
    system("cls");
    printf("\n\n\n\n\n\n\t\t\t================================ADMIN LOGIN==================================\n\n");
    printf("\n\n\n\n\n\t\t\t\tEnter Your Email : ");

    char admin_email[25],admin_password[10];
    scanf("%s",admin_email);
    char c=' ',ab[10];
    int i=0;

    if(strcmp(admin_email,"toma")==0)
    {
        printf("\n\n\n\n\t\t\t\tEnter Your Password:");
        while (i<=7)
        {
            admin_password[i]=getch();
            c=admin_password[i];
            if(c==13)
            {
                break;
            }
            else
            {
                printf("*");
            }
            i++;
        }

        admin_password[i]='\0';
        if(strcmp(admin_password,"t")==0)
        {
         printf("\n\n\n\n\n\n\t\t\t==========================successfully log in =========================\n\n\n\n\n\n\t");
         system("pause");
         system("cls");
         view_car();

        }
        else
        {
            system("cls");
            printf("\n\n\n\t\t======================WRONG PASSWORD===========================");
            getch();
            login();
        }
    }
    else
    {
        system("cls");
        printf("\n\n\n\t\t======================WRONG EMAIL===========================");
        getch();
        login();
        system("cls");
    }
}


search_lot_number()
{
    loader();
    system("cls");
    char lot_number[20];
    FILE *fp;
    fp=fopen("carp.txt", "r");
    struct car s;
    printf("\n\n\n\t\t\tSearch * LOT NUMBER *:\t");
    scanf("%s",  lot_number);

    while(fread(&s, sizeof(s), 1, fp))
    {
        if(strcmp(lot_number, s.lot_number)==0)
        {
            printf("\n\n\t\tCar Number: %s \t\n\n\t\tName:%s \t\n\n\t\ttime:%s \t\n\n\t\tdate:%s\t\n\n", s.car_number, s.name, s.time,s.date);

            getch();
        }
    }
    fclose(fp);
    system("cls");
    system("pause");

    view_car();
}


exit()
{
     loader();
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t Successfully log out\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t THANK YOU");
     getch();
}
