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
  int size_choice;
  int toppings_choice;
  int tip_choice;

  
 // set to false
  
  bool pizza_small = false;
  bool pizza_medium = false;
  bool pizza_large = false;
  bool confirm_order = false;

  float pizza_cost = 5.0f; // flat cost

  // cost multipliers
  float pizza_small_cost = 2.0f; 
  float pizza_medium_cost = 5.0f;
  float pizza_large_cost = 8.0f;
  float toppings_cost;
  float sales_tax = 0.06f;
  // order amounts
  float order_tips = 0;
  float order_tax = 0;
  float order_total_before_tax = 0;
  float order_total = 0;
  // types of pizza
  char pizza1[12] = "Cheese";
  char pizza2[12] = "Pepperoni";
  char pizza3[12] = "Supreme";

  while (confirm_order != true) {
    printf("######################################\n");
    printf("## Welcome to Tyler's Pizza Parlor! ## \n");
    printf("######################################\n");
    printf("Please note: Due to staff shortages we only have three different types of pizza! \n");
    printf("Your online order #: %d \n", order_num);
  
    printf("Please select the type of pizza you would like: (1, 2 or 3) \n 1.%s \n 2.%s \n 3.%s \n <:", pizza1, pizza2, pizza3);
    scanf("%i", &order_choice);

    printf("What size pizza would you like? (1-sm, 2-med or 3-large)\n <:");
    scanf("%i", &size_choice);
  
    if(size_choice == 1) {
          order_total = (pizza_cost + pizza_small_cost);
          pizza_small = true;
        }
    else if (size_choice == 2) {
          order_total = (pizza_cost + pizza_medium_cost);
          pizza_medium = true;
        } 
    else if (size_choice == 3) {
          order_total = (pizza_cost + pizza_large_cost);
          pizza_large = true;
        }
      
    printf("\n would you like to add any additional toppings? (1-yes, 2-no)\n <:");
    scanf("%i", &order_choice);
    if (order_choice == 1) {
      printf("toppings:\n 1.Chicken - $2.00\n 2. Caviar - $20.00 \n3. 20k Golden Flakes - $50.00 \n <:");
      scanf("%i", &order_choice);
    } else if (order_choice == 2) {
      printf("no toppings selected");
    }
      if(toppings_choice == 1) {
      toppings_cost = 2.0f;
    }
      else if (toppings_choice == 2) {
        toppings_cost = 20.00f;

    }
      else if (toppings_choice== 3) {
        toppings_cost = 50.00f;
    }
    
    printf("\n Would you like to add a tip? (1-yes, 2-no)\n <:");
    scanf("%i", &order_choice);
    if (order_choice == 1) {
      printf("Select the tip percentage (1- 10 %, 2- 15 % or 3- 20 %)\n <:");
      scanf("%i", &order_choice);
    
      if (order_choice == 1) {
        order_tips = order_total * 0.1;
        }
      else if (order_choice == 2) {
        order_tips = order_total * 0.15;
        }
      else if (order_choice == 3) {
        order_tips = order_total * 0.20;
        }
    }
    else if (order_choice == 2) {
      printf("no tip selected\n");
      
        }
      
    order_total_before_tax = order_total + toppings_cost;
    order_tax = order_total * sales_tax;
    order_total = (order_total + order_tips + toppings_cost) + order_tax;

    printf("###########################\n");
    printf("##  Order # %i   ##\n", order_num);
    printf("###########################");
    printf("\n## Before Tax: $%0.2f    ##", order_total_before_tax);
    printf("\n## Tax: $%0.2f           ##", order_tax);
    printf("\n## Tip: $%0.2f           ##", order_tips);
    printf("\n## Total: $%0.2f         ##", order_total);
    printf("\n###########################");
    printf("\n is this correct? (1-yes, 2-no)\n <:");
    scanf("%i", &order_choice);
    if (order_choice == 1){
    printf("Order Placed!\n");
    printf("###########################\n");
    printf("##  Order # %i     ##\n", order_num);
    printf("###########################");
    printf("\n## Before Tax: $%0.2f     ##", order_total_before_tax);
    printf("\n## Order Tax:   $%0.2f    ##", order_tax);
    printf("\n## Order Tip:   $%0.2f    ##", order_tips);
    printf("\n## Order Total: $%0.2f    ##", order_total);
    printf("\n############################\n");
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
   printf("\nWould you like to start another order? (1-yes, 2-no)\n <:");
   scanf("%i", &order_choice);
   if (order_choice == 1) {
      order_num = rand();
      confirm_order = false;
    } else if (order_choice == 2) {
      printf("Thank you for your business!");
      confirm_order = true;
    }

    }
    return 0; 
}
  
  


