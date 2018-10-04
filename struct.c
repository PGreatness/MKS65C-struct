#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct foo{int a; char bar[12];};
  char cat[12] = "wownewnumber";//kept outside to keep out weird symbols
//random stuffing
struct foo *re(struct foo b){
  b.a=rand();
  int i=0;
  for(;i<sizeof(b.bar);i++){
    int letter = rand()%26 +97;
    char a= letter;
    b.bar[i]=a;
  }
  
  //strcpy(b.bar, "chocolate");
  struct foo * pointer = &b;
  return pointer;
}
void print(struct foo test){
  printf("This is it: %d and %s\n", re(test)->a, re(test)->bar);//prints out example created  
}

void modify(struct foo * thing, int interger,  char c[] ) {
  thing->a = interger;//value of the pointer reassigns to value of new integer.
  strcpy(thing->bar, c);//copies new string onto old string
  
}

int main() {
  srand(time(NULL));
  struct foo test;
  print(test);
  printf("%s\n", cat);
  modify(&test, 12, cat);
  printf("What is the new number? %d and What is the  new string?%s\n",test.a,test.bar);

}