# include<stdio.h>
# include<stdlib.h>
# include<time.h>
# include<string.h>

struct ktshirt {char color[10]; int days; double price; char text[15];};


struct ktshirt grabShirt(char * text){
  char * colors[5] = {"Blue", "Red" , "White", "Black", "Yellow"};

  struct ktshirt s;
  int index = rand()%5;

  strcpy(s.color, *(colors + index));

  strcpy(s.text, text);

  s.days = rand() % 10;

  s.price = (rand() % 100) / 10.0;

  return s;
}

void toString(struct ktshirt s){
  printf("The color is: %s \n", s.color);
  printf("He wore it %d days\n", s.days);
  printf("It cost %0.2lf dollars\n", s.price);
  printf("It says: ' %s '\n\n\n", s.text);
}

void modifier(struct ktshirt * s){
    char * colors[5] = {"Blue", "Red" , "White", "Black", "Yellow"};
    int index = rand()%5;
    s -> days += 5;
    strcpy(s -> color ,*(colors + index));
    s -> price += index;
    strcat(s -> text, "ify");
}


void tests(struct ktshirt s){
    printf("############ NEW TEST ##############\n\n");
    printf("The original ktshirt : \n\n");
    toString(s);
    struct ktshirt * sp = &s;
    modifier(sp);
    printf("\n\n");
    printf("The modified ktshirt: \n\n");
    toString(s);
    printf("\n\n");
}


int main(){
  srand(time(NULL));
  struct ktshirt s1 = grabShirt("Bunny");
  struct ktshirt s2 = grabShirt("Monty Python");
  struct ktshirt s3 = grabShirt("Sarcasm");
  tests(s1);
  tests(s2);
  tests(s3);
  return 0;
}
