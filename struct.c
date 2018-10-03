#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct foo{int a; char bar[12];};

//random stuffing
struct foo *re(struct foo b){
  b.a=rand();
  strcpy(b.bar, "chocolate");
  struct foo * pointer = &b;
  return pointer;
}
void print(struct foo test){
  printf("This is it: %i and %s\n", re(test)->a, re(test)->bar);
}

struct foo * modify(struct foo * thing, int interger,  char c[] ) {
  thing->a = interger;
  if (sizeof(*c) <= sizeof(thing->bar)) {
    return NULL;
  }
  strcpy(thing->bar, c);
  struct foo * pointer = thing;
  return pointer;
  
}

int main() {
  srand(time(NULL));
  struct foo test;
  print(test);
  char cat[12] = "q12we2po2123";
  printf("%s\n", cat);
  modify(&test, 12, cat);
  print(test);

}
