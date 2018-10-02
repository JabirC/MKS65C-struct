# include<stdio.h>
#include <time.h>
/*
struct ktshirt {char * color; int days; double price;};

struct ktshirt grabShirt(){
  //ar * colors[5] = {"Blue", "Red" , "White", "Black", "Yellow"};

    struct kshirt s;
    srand(time(NULL));
  // int index = rand()%10;
  //scolor = *(colors + index);
  
  //eturn s
  }
*/

int main(){
  struct ktshirt {char * color; int days; double price;};
  
  struct kshirt s1;
  //struct ktshirt s1 = grabShirt();
  printf("%s\n", s1.color);
  return 0;
}
