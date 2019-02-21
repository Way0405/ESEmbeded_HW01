#include <stdio.h>
#include <stdlib.h>


int a, c;
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

int main()
{
  int ch, key;

  printf("key a Function \nEX: 1 + 1\n");
  while (1)
  {
  	  scanf("%i %c %i", &a, &b, &c);
    ch = b;
    commandPtr = commandlist;
    for (; key = commandPtr->key; commandPtr++)
      if (ch == key)
      {
        commandPtr->fptr();
        break;
      }
    
    // 用上面這樣的好處是....如果當我的按鍵對應的 function 有很多的話
    // 不用 function 指標，那我可能就要寫一個很大的 switch 然後一堆 case
  }

  return 0;
}


int do_plus()      // do_b() do_c() 類似....
{
  printf("%d %c %d = %d\n", a, b, c, a+c);
  return 0;
}

int do_minus()      // do_b() do_c() 類似....
{
  printf("%d %c %d = %d\n", a, b, c, a-c);
  return 0;
}

int do_multiply()      // do_b() do_c() 類似....
{
  printf("%d %c %d = %d\n", a, b, c, a*c);
  return 0;
}

int do_divided()      // do_b() do_c() 類似....
{
  printf("%d %c %d = %d\n", a, b, c, a/c);
  return 0;
}

/*

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int main()
{
	int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	//IF ELSE IF
	if (b == '+')
		printf("%d %c %d = %d\n", a, b, c, plus(a, c));
	else if (b == '-')
		printf("%d %c %d = %d\n", a, b, c, minus(a, c));
	else if (b == '*')
		printf("%d %c %d = %d\n", a, b, c, multiply(a, c));
	else if (b == '/')
		printf("%d %c %d = %d\n", a, b, c, divided(a, c));
}
*/
