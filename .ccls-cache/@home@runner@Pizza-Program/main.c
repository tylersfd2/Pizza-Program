#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 
int main(void) {
  

  int pizza_type;
  int order_num;
  srand(time(0));
  order_num = rand(); // order number random number
  int order_choice;

  
 // set to false
  bool toppings = false;
  bool pizza_small = false;
  bool pizza_medium = false;
  bool pizza_large = false;
  bool confirm_order = false;

  float pizza_cost = 5.0f; // flat cost

  // cost multipliers
  float pizza_small_cost = 2.0f; 
  float pizza_medium_cost = 5.0f;
  float pizza_large_cost = 8.0f;
  float toppings_cost = 2.0f;
  // order amounts
  float order_tips;
  float order_tax;
  float order_total;
  // types of pizza
  char type1[12] = "Cheese";
  char type2[12] = "Pepperoni";
  char type3[12] = "Supreme";

  while (confirm_order != true) {
    printf("######################################\n");
    printf("## Welcome to Tyler's Pizza Parlor! ## \n");
    printf("######################################\n");
    printf("Please note: Due to staff shortages we only have three different types of pizza! \n");
    printf("Your online order number is %d \n", order_num);
  
    printf("Please select the type of pizza you would like: (1, 2 or 3) \n 1.%s \n 2.%s \n 3.%s \n <:", type1, type2, type3);
    scanf("%i", &order_choice);

    if (order_choice >= 1 && order_choice <= 3) { // accept options 1-3
    printf("pizza type %i selected", order_choice); 
    printf("\n is this correct? (1-yes, 2-no) \n <:");
    scanf("%i", &order_choice); // confirm choice
    }

    if (order_choice == 1) {
      confirm_order = true; // confirm the order and exit the while loop
    }
    else {
      printf("Please select the type of pizza you would like: (1, 2 or 3) \n 1.%s \n 2.%s \n 3.%s \n <:", type1, type2, type3);
      scanf("%i", &order_choice); // iterate through the loop again
    } 
    
    
  
    //confirm_order = false; // reset the order confirmation to false
    printf("What size pizza would you like? (1-sm, 2-med or 3-large)\n <:");
    scanf("%i", &order_choice);
  

  
      if (order_choice == 1) { // if type1 is selected, choose size of pizza
      
          pizza_small = true;
          confirm_order = true;
        } else{
          confirm_order = false;
        }
        if (order_choice == 2) {
            printf("You selected %i, is this correct? (1-yes, 2-no)\n <:", order_choice);
            scanf("%i", &order_choice);
            if (order_choice == 1) {
              pizza_medium = true;
              confirm_order = true;
          } else{
              confirm_order = false;
          }
          
        }
        if (order_choice == 3) {
            printf("You selected %i, is this correct? (1-yes, 2-no)\n <:", order_choice);
            if (order_choice == 1) {
              pizza_large = true;
              confirm_order = true;
            }
            else {
              confirm_order = false;
            }
        }
      }
    
    printf("\n would you like to add any additional toppings? (1-yes, 2-no)\n <:");
    scanf("%i", &order_choice);
    if (order_choice == 1) {
      printf("toppings:\n 1.Chicken - $2.00\n 2. Caviar - $20.00 \n3. 20k Golden Flakes - $50.00 \n <:");
      scanf("%i", &order_choice);
    } else {
      confirm_order = false;
    }
      if(order_choice == 1) {
      toppings_cost = 2.0f;
    }
      else if (order_choice == 2) {
        toppings_cost = 20.00f;

    }
      else if (order_choice == 3) {
        toppings_cost = 50.00f;
    }
    
    
    if (pizza_small == true) {
      order_total = (pizza_cost * pizza_small_cost);
      }
    if (pizza_medium == true ) {
      order_total = (pizza_cost * pizza_medium_cost);
      }  
    if (pizza_large == true) {
      order_total = (pizza_cost * pizza_large_cost);
      } 
    printf("\n Would you like to add a tip? 1-yes, 2-no\n <:");
    scanf("%i", &order_choice);
    if (order_choice == 1){
      printf("Enter the tip percentage ( 1- 10%, 2- %15 or 3- %20\n <:");
      scanf("%i", &order_choice);
      if (order_choice == 1) {
      order_tips = order_total * 0.10f;
        }
      else if (order_choice == 2) {
        order_tips = order_total * 0.15f;
        }
      else if (order_choice == 3) {
        order_tips = order_total * 0.20f;
        }
    else if (order_choice == 2) {
      printf("Defaulting to %20 tip. THANK YOU!!");
      printf("Just kidding, your order will not include a tip.");
      
        }
      }
    order_tax = (order_total + order_tips) * 0.06;
    order_total = (order_total + order_tips + toppings_cost) * order_tax;

    printf("###########################\n");
    printf("##  Order # %i   ##\n", order_num);
    printf("###########################");
    printf("\n## Tip: $%0.2f           ##", order_tips);
    printf("\n## Tax: $%0.2f           ##", order_tax);
    printf("\n## Total: $%0.2f         ##", order_total);
    printf("\n###########################");
    printf("\n is this correct? (1-yes, 2-no)\n <:");
    scanf("%i", &order_choice);
    if (order_choice == 1){
    printf("Order Placed!\n");
    printf("###########################\n");
    printf("##  Order # %i     ##\n", order_num);
    printf("###########################");
    printf("\n## Order Tip:   $%0.2f    ##", order_tips);
    printf("\n## Order Tax:   $%0.2f    ##", order_tax);
    printf("\n## Order Total: $%0.2f    ##", order_total);
    printf("\n###########################\n");
    if (pizza_small == true){
      printf("WILL BE READY IN ABOUT 15 minutes");
    }
    else if (pizza_medium == true) {
      printf("WILL BE READY IN ABOUT 20 minutes");
    }
    else if (pizza_large == true) {
      printf("WILL BE READY IN ABOUT 30 minutes"); 
        }
      } else if (order_choice == 2) {
        printf("Restarting order...\n");
        confirm_order = false;
      }
return 0; 
    }

  
  


