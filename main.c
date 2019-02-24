#include <stdio.h>
#include <stdlib.h>


struct commands
{
  void (*fptr) (float,char,float);
  int key;
};
typedef struct commands commands;

void do_plus(float,char,float), 
	do_minus(float,char,float), 
	do_multiply(float,char,float),
	do_divided(float,char,float);
commands commandlist[] =
  {
    do_plus,       '+',
    do_minus,      '-',
    do_multiply,   '*',
    do_divided,    '/'
  };
commands *commandPtr;	
/////////////////////////////////////////////////////////////////////////////
void main()
{
  float x, y;
  char op;
  int operator, key;

  printf("key a Function \nEX: 1 + 1\n");
  while (1)
  {
  	scanf("%f %c %f", &x, &op, &y);
    operator = op;
    commandPtr = commandlist;
    for (; key = commandPtr->key; commandPtr++)
      if (operator == key)
      {
        commandPtr->fptr(x,op,y);
        break;
      }
  }

}
////////////////////////////////////////////////////////////////////////////////

void do_plus(float a,char b,float c)      
{
  printf("%f %c %f = %f\n", a, b, c, a+c);
}

void do_minus(float a,char b,float c)     
{
  printf("%f %c %f = %f\n", a, b, c, a-c);
}

void do_multiply(float a,char b,float c)     
{
  printf("%f %c %f = %f\n", a, b, c, a*c);
}

void do_divided(float a,char b,float c)     
{
  printf("%f %c %f = %f\n", a, b, c, a/c);
}
