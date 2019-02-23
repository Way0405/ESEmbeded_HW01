#include <stdio.h>
#include <stdlib.h>


float a, c;
char b;

struct commands
{
  int (*fptr) ();
  int key;
};
typedef struct commands commands;

int do_plus(void), do_minus(void), do_multiply(void),do_divided(void);
commands commandlist[] =
  {
    do_plus,       '+',
    do_minus,      '-',
    do_multiply,   '*',
    do_divided,    '/'
  };
commands *commandPtr;	
/////////////////////////////////////////////////////////////////////////////
int main()
{
  int ch, key;

  printf("key a Function \nEX: 1 + 1\n");
  while (1)
  {
  	  scanf("%f %c %f", &a, &b, &c);
    ch = b;
    commandPtr = commandlist;
    for (; key = commandPtr->key; commandPtr++)
      if (ch == key)
      {
        commandPtr->fptr();
        break;
      }

  }

  return 0;
}
////////////////////////////////////////////////////////////////////////////////

int do_plus()      
{
  printf("%f %c %f = %f\n", a, b, c, a+c);
  return 0;
}

int do_minus()      // do_b() do_c() ÃþŠü....
{
  printf("%f %c %f = %f\n", a, b, c, a-c);
  return 0;
}

int do_multiply()      // do_b() do_c() ÃþŠü....
{
  printf("%f %c %f = %f\n", a, b, c, a*c);
  return 0;
}

int do_divided()      // do_b() do_c() ÃþŠü....
{
  printf("%f %c %f = %f\n", a, b, c, a/c);
  return 0;
}


