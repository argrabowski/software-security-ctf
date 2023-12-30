#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>

  

struct internet {
  int priority;
  char *name;
};

void winner()
{
  char buffer[64];
  FILE *fp;

  printf("and we have a winner @ %d\n", time(NULL));

  fp = fopen("./flag.txt", "r");

  fgets(buffer, 64, (FILE*)fp);
  printf("flag: %s\n", buffer);
}

int main(int argc, char **argv)
{
  struct internet *i1, *i2, *i3;

  i1 = malloc(sizeof(struct internet));
  i1->priority = 1;
  i1->name = malloc(37);

  i2 = malloc(sizeof(struct internet));
  i2->priority = 2;
  i2->name = malloc(37);

  strcpy(i1->name, argv[1]);
  strcpy(i2->name, argv[2]);

  printf("and that's a wrap folks!\n");
}
