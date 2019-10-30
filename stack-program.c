#include<stdio.h>
#include<stdio.h>
#include<string.h>


/*LIFO METHOD "Last in first out" :
   A Stack is an abstract data strucutre that contains a collection
   of elements, each element is pushed at the end and is pooped out first*/




//Display set of instruction for the user
void instructions(void) {
   puts("Enter choice:\n"
         "[1] : Push add a value to the stack\n" //Adds a value to top/end
         "[2] : Pop removes a value from stack\n"//Removes a value from the top/end
         "[3] : End program");
}

/*A Structure required containing :
   A variable assigned to int,
   A pointer to a node.


/* Functions (Prototypes) required for program to run:
   Push function required,
   Pop function required,
   Print Stack function required
*/



int main () {
   instructions();
   printf("%s", "Answer? ");
   int choice;
   scanf("%d", &choice);

   while (choice!= 3) {

      switch (choice) 
      {
      case 1: //push a value onto the stack
         printf("%s", "Enter a interger: ");/* code */
         //need to  stop while loop from running
         break;
      //pop a value off the stack
      case 2:
      printf("The popped value is \n");
      //need to stop while loop from running
         break;
      //invalid option selected   
      default:
      puts("Invalid choice.\n");
      //need to stop while lopp running
         break;
      //end switch statement
      };
      
   }
   printf("Program ended.\n"); //prints to confirm program has ended
}