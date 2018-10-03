# include<stdio.h>
# include<stdlib.h>
# include<time.h>
# include<string.h>

struct ktshirt {char color[10]; int days; double price; char text[10];};

struct ktshirt grabShirt(char * text){
  char * colors[5] = {"Blue", "Red" , "White", "Black", "Yellow"};
  
  struct ktshirt s;
  srand(time(NULL));
  
  
  int index = rand()%5; 
  strcpy(s.color, *(colors + index));
  
  strcpy(s.text, text);
  
  s.days = rand() % 10;
  
  s.price = (rand() % 100) / 10.0;
  
  return s;
}

void toString(struct ktshirt * s){
  printf("The color is: %s \nHe wore it %d days\nIt cost %0.2lf dollars\nIt says: ' %s '\n", s->color, s->days, s->price, s->text);

}


int main(){  
  struct ktshirt s1 = grabShirt("Bunny");
  
  
  
  printf("%s, %d, %0.2lf, %s\n", s1.color, s1.days, s1.price, s1.text);
  return 0;
}
