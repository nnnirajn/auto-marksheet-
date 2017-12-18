#include<stdio.h>
#include<stdlib.h>
#include "HIGHLIGHT.h"
void main()
{
  int i,Roll_no;
  float p;
  float marathi,hindi,English,Math,Science,Social_Science;
  char name[100];
  system("color 30");
  col_back(12,14);
  gotoxy(35,2);
  printf("......WELCOME......");
  gotoxy(30,6);
  col_back(14,9);
  printf("STUDENT MARKSHEET MAKING SYSTEM");
  gotoxy(25,20);
  col_back(14,18);
  printf("Enter any key.....");
  _getch();
  system("cls");
  col_back(14,18);
  printf("Enter students name:- ");
  gets(name);
  printf("\nEnter students Roll number:- ");
  scanf("%d",&Roll_no);
  printf("\nEnter marks in marathi:- ");
  scanf("%f",&marathi);
  printf("\nEnter marks in Hindi:- ");
  scanf("%f",&hindi);
  printf("\nEnter marks in English:- ");
  scanf("%f",&English);
  printf("\nEnter marks in Math:- ");
  scanf("%f",&Math);
  printf("\nEnter marks in Science:- ");
  scanf("%f",&Science);
  printf("\nEnter marks in Siocial Science:- ");
  scanf("%f",&Social_Science);
  gotoxy(25,20);
  col_back(14,18);
  printf("Enter any key.....");
  _getch();
  system("cls");
  system("color 80");
  gotoxy(15,2);
  printf("Marksheet of Student:-");
  gotoxy(8,3);
  printf("---------------------------------------------------------");
  gotoxy(8,7);
  printf("---------------------------------------------------------");
  gotoxy(8,3);
  for(i=3;i<25;i++)
  {
    gotoxy(8,i);
    printf("|\n");
  }
   gotoxy(30,3);
  for(i=3;i<25;i++)
  {
    gotoxy(65,i);
    printf("|\n");
  }
  gotoxy(8,24);
  printf("----------------------------------------------------------");

  /****************************************************/
  col_back(14,12);
  gotoxy(24,4);
  printf("SHREE SHIVAJI HIGHSCHOOL  NADNURA");
  col_back(15,8);
  gotoxy(10,6);
  printf("Name:- ");
  puts(name);
  gotoxy(50,6);
  printf("Roll No:-");
  gotoxy(59,6);
  printf("%d",Roll_no);
  gotoxy(13,8);
  printf("Subjects");
  col_back(16,8);
  for(i=8;i<25;i++)
  {
    gotoxy(23,i);
    printf("|\n");
  }
  col_back(16,8);
  for(i=8;i<25;i++)
  {
    gotoxy(35,i);
    printf("|\n");
  }
  col_back(16,8);
  for(i=8;i<25;i++)
  {
    gotoxy(47,i);
    printf("|\n");
  }

   col_back(15,8);
   gotoxy(27,8);
   printf("OUT of");
   col_back(15,8);
   gotoxy(39,8);
   printf("mark");
   col_back(15,8);
   gotoxy(59,8);
   printf("Date");
   gotoxy(53,9);
   printf("12/12/2017");
   gotoxy(10,12);
   printf("1} Marathi");
    gotoxy(10,14);
   printf("2} Hindi");
    gotoxy(10,16);
   printf("3} English");
    gotoxy(10,18);
   printf("4} Math");
    gotoxy(10,20);
   printf("5} Science");
    gotoxy(10,22);
   printf("6} S. Science");

   gotoxy(28,12);
   printf("100");
   gotoxy(28,14);
   printf("100");
   gotoxy(28,16);
   printf("100");
   gotoxy(28,18);
   printf("100");
   gotoxy(28,20);
   printf("100");
   gotoxy(28,22);
   printf("100");

   gotoxy(39,12);
   printf("%.0f",marathi);
   gotoxy(39,14);
   printf("%.0f",hindi);
   gotoxy(39,16);
   printf("%.0f",English);
   gotoxy(39,18);
   printf("%.0f",Math);
   gotoxy(39,20);
   printf("%.0f",Science);
   gotoxy(39,22);
   printf("%.0f",Social_Science);

   p = ((marathi+hindi+English+Math+Science+Social_Science)/600)*100;
   gotoxy(51,12);
   printf("Percentage");
   gotoxy(51,13);
   printf("%.2f",p);

      gotoxy(51,16);
      printf("Result");


   if(marathi>35.0 && hindi>35.0 && English>35.0 && Math>35.0 && Science>35.0 && Social_Science>35.0 && p>35.0)
   {
      gotoxy(51,17);
      printf("pass");

   }

   else{
      gotoxy(51,17);
      printf("fail");

   }

      gotoxy(51,19);
      printf("Grade");
if(marathi>35.0 && hindi>35.0 && English>35.0 && Math>35.0 && Science>35.0 && Social_Science>35.0 && p>35.0)
{
   if(p>=75.0)
   {
      gotoxy(51,20);
      printf("A");
   }
   else if(p<75 && p>60)
   {
      gotoxy(51,20);
      printf("B");
   }
   else if(p<=60 && p>=45)
   {
      gotoxy(51,20);
      printf("C");
   }
   else if(p<45 && p>=35)
   {
      gotoxy(51,20);
      printf("D");
   }
   else if(p<35)
   {
      gotoxy(51,20);
      printf("E");
   }

}
else{
    gotoxy(51,20);
      printf("-");
}

  _getch();
  _getch();



}
