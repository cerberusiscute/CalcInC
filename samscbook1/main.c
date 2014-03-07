/*
 *main.c
 *samscbook1

 *Created by Mark on 3/1/14.
 *Copyright (c) 2014 Mark. All rights reserved.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//function prototypes
//modulus
float modcalc(float mod1, float mod2);
//addition
float add(float num1, float num2);
//subtraction
float sub(float num1, float num2);
//division
float div(float num1, float num2);
//multiplication
float mul(float num1, float num2);
//exponentiation
float expon(float num1, int numToExpBy);
//should the program continue?
int cont(void);
//boob (8008)
void boob(float boob1, float boob2);

//global variables
float fnum, snum;


int main(void)
{
  char contOrNot[] = "yes";
  while (strcmp(contOrNot, "yes") == 0)
  {
    printf("What would you like to do?\n\
           1: modulus\n\
           2: add\n\
           3: subtract\n\
           4: divide\n\
           5: multiply\n\
           6: exponentiation\n");
    
    int choice;
    
    scanf("%d", &choice);
    
    switch (choice)
    {
      case 1:
        printf("Please enter the first number followed by the second.\n");
        scanf("%f", &fnum);
        scanf("%f", &snum);
        if (&snum && &fnum)
        {
          boob(fnum, snum);
          printf("\n");
          int modResult;
          modResult = modcalc(fnum, snum);
          printf("%.2f\n", (float) modResult);
          break;
        }
        else
        {
          printf("WRONG ANSWER, YOU TURDWAD! :)\n");
          break;
        }
      case 2:
        printf("Please enter the first number followed by the second.\n");
        scanf("%f", &fnum);
        scanf("%f", &snum);
        if (&snum && &fnum)
        {
          boob(fnum, snum);
          printf("\n");
          int addResult;
          addResult = add(fnum, snum);
          printf("%.2f\n", (float) addResult);
          break;
        }
        else
        {
          printf("WRONG ANSWER, YOU TURDWAD! :)\n");
          break;
        }
      case 3:
        printf("Please enter the first number followed by the second.\n");
        scanf("%f", &fnum);
        scanf("%f", &snum);
        if (&snum && &fnum)
        {
          boob(fnum, snum);
          printf("\n");
          int subResult;
          subResult = sub(fnum, snum);
          printf("%.2f\n", (float) subResult);
          break;
        }
        else
        {
          printf("WRONG ANSWER, YOU TURDWAD! :)\n");
          break;
        }
      case 4:
        printf("Please enter the first number followed by the second.\n");
        scanf("%f", &fnum);
        scanf("%f", &snum);
        boob(fnum, snum);
        if (&snum && &fnum)
        {
          boob(fnum, snum);
          printf("\n");
          int divResult;
          divResult = div(fnum, snum);
          printf("%.2f\n", (float) divResult);
          break;
        }
        else
        {
          printf("WRONG ANSWER, YOU TURDWAD! :)\n");
          break;
        }
      case 5:
        printf("Please enter the first number followed by the second.\n");
        scanf("%f", &fnum);
        scanf("%f", &snum);
        boob(fnum, snum);
        if (&snum && &fnum)
        {
          boob(fnum, snum);
          printf("\n");
          int mulResult;
          mulResult = mul(fnum, snum);
          printf("%.2f\n", (float) mulResult);
          break;
        }
        else
        {
          printf("WRONG ANSWER, YOU TURDWAD! :)\n");
          break;
        }
      case 6:
        printf("Please enter the first number followed by the second.\n");
        scanf("%f", &fnum);
        scanf("%f", &snum);
        boob(fnum, snum);
        if (&snum && &fnum)
        {
          boob(fnum, snum);
          printf("\n");
          int exResult;
          exResult = expon(fnum, snum);
          printf("%.2f\n", (float) exResult);
          break;
        }
        else
        {
          printf("WRONG ANSWER, YOU TURDWAD! :)\n");
          break;
        }
    }
    printf("\nWould you like to calculate again?");
    
    scanf("%s", contOrNot);
  }
}

//Caclulate Modulus
float modcalc(float mod1, float mod2)
{
  return fmodf(mod1, mod2);
  //return result;
}

//Addition
float add(float num1, float num2)
{
  return num1 + num2;
}

//Subtraction
float sub(float num1, float num2)
{
  return num1 - num2;
}

//Division
float div(float num1, float num2)
{
  return num1 / num2;
}

//Multiplication
float mul(float num1, float num2)
{
  return num1 * num2;
}

//Exponentiationd
float expon(float num1, int numToExpBy)
{
  num1 = pow(num1, numToExpBy);
  return num1;
}

void boob(float boob1, float boob2)
{
  if (boob1 == 8008 || boob2 == 8008)
  {
    printf("BBBOOOOOOOOBBBBBBBIIIIIIIIEEEEEEESSSS");
  }
}