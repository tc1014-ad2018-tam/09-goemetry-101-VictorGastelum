/*
   This program will calculate the perimeter, surface and volume of 3 figures. 
   The user will choose what kind of measure he wants and then he has the option
   to select what figure he want, the user will provide the data to calculate the measures 
   so the program will procesing the data and finally shows to the user the results. 
  
   Author: Victor Manuel Gastelum Huitzil
   Date: 13/09/18.
   e-mail: A01411985@itesm.mx
 */
 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//I structured the menu
  void menu(){
	  printf("\nA. Perimeter\n");
	  printf("B. Surface\n");
   	  printf("C. Volume\n");
	  printf("X. Exit\n");
  }

  // This void will calculate the perimeter of 3 figures
  void perimeter(){
	  double a;
	  double b; 
	  double c; 
	  double result; 
	  int z;
	
	  system("cls"); //Clean the screen
	
	  //I show the menu
	  printf("1. Square\n");
	  printf("2. Triangle\n");
	  printf("3. Rectangle\n");
	
	  printf("Your option: \n");
	  scanf("%i", &z);
	
	  switch(z){
		  case 1:
			printf("Give me the side: ");
			scanf("%i", &b);
			
			result=b*4;
			
			printf("The perimeter is: %i", result);
			break;
		  case 2:
			printf("Give me the first side: ");
			scanf("%lf", &a);
			printf("Give me the second side: ");
			scanf("%lf", &b);
			printf("Give me the third side: ");
			scanf("%lf", &c);
			
			result+=a+b+c;
			
			printf("The perimeter is: %lf", result);
			printf("\n");
			break;
			
		  case 3:
			printf("Give me the length of the base:");
            scanf("%lf", &b);
            printf("Give me the length of the height:");
            scanf("%lf", &c);

            result=(2*b)+(2*c);

            printf("The perimeter is: %lf", result);
            printf("\n");
			
			break;
	  }
  }

  //This void will calculate the surface of 3 figures
  void surface(){
      double a;
      double b;
      double c;
      double surface;
      double ap;
      int option;
    
      system("cls"); //Clean the screen
    
      //I show the menu
      printf("1. Square\n");
      printf("2. Rectangle\n");
      printf("3. Hexagon\n");
      printf("Chose an option:\n");
      scanf("%i", &option);

      switch (option) {
          case 1:
        	printf("Give me the length of the size:");
            scanf("%lf", &c);

            surface = pow(c,2); //I use the "pow" function for exponents

            printf("The surface is: %lf", surface);
            break;

            
          case 2:           
            printf("Give me the length of the base:");
            scanf("%lf", &a);
            printf("Give me the length of the height:");
            scanf("%lf", &b);

            surface = a*b;

            printf("The surface is: %lf", surface);
            break;
            
          case 3:
            printf("Give me the side:");
            scanf("%lf", &c);
            printf("Give me the apothem:");
            scanf("%lf", &ap);

            surface = (c*6)*(ap)/2;

            printf("The surface is: %lf", surface);
            break;
            
          default:
            printf("That's not an option\n");
    }
  }

// This void will calculate the volume of 3 figures
  void volume(){
      double a;
      double b;
      double c;
      double s;
      double r;
      double pi;
      double volume;
      int op;
    
      pi= 3.141516; //I give value to pi
    
      system("cls"); //Clean the screen

      //I show the menu
      printf("1. Rectangular Prism\n");
      printf("2. Cube\n");
      printf("3. Sphere\n");
      printf("Chose an option:\n");
      scanf("%i", &op);

      switch (op) {
          case 1:
            printf("Give me the width:");
            scanf("%lf", &b);
            printf("Give me the length:");
            scanf("%lf", &a);
            printf("Give me the height:");
            scanf("%lf", &c);

            volume = b*a*c;

            printf("The volume is %lf", volume);
            break;
          case 2:
            printf("Give me the length of the side:");
            scanf("%lf", &s);

            volume = pow(s,3); //I use the "pow" function for exponents

            printf("The volume is %lf", volume);
            break;
            
          case 3:
            printf("Give me the radius:");
            scanf("%lf", &r);

            volume=((1.33)*(pi))*(pow(r,3)); //I use the "pow" function for exponents

            printf("The volume is: %lf", volume);
            break;
            
          default:
            printf("That's not an option \n");
      }
  }

int main(){
	char m;
	
	//I cycled to discard any value other than X
	do{
	//Show the menu to the user
	menu();
    printf("Your option: \n");
    m = getchar();//The function of getchar is to read alphabetical values
    
	switch(m){
		case 'A':
			printf("\n");
			perimeter(); //Send the user the perimeter menu
			break;
		case 'B':
            surface(); //Send the user the surface menu
			break;
		case 'C':
			volume(); //Send the user the volume menu
			break;
		default:
		    printf("That's not an option\n");	
            break;
	}
}  while (m!='X');
	
	
printf("Bye");	
	
return 0;
}
