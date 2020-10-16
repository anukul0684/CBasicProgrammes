#include <stdio.h>




void print_menu_items(){
	printf("Please select an item from the menu:\n");
	printf("\t1. Coffee\n");
	printf("\t2. Hot Coco\n");
	printf("\t3. Donut\n");
	printf("\t4. Royale with cheese\n\n");
	printf("\t0. Complete order\n");
}


float menu_items(int item_selection){
	/*
		This function accept an integer of the item selected by the user.
		You must return the appropriate item price. Items are prices as follows:
			Coffee: $1.24, Hot coco: $1.49, Donut: $0.99, Royale with cheese $3.79
		If the item selection integer is 0, return 0.
		If the selected item is outside of the valid cases, print a relevant message and return 0.
	*/

	// YOUR CODE HERE
    if(item_selection)
    {
        switch(item_selection)
        {
            case 1:
                return 1.24;
                break;
            case 2:
                return 1.49;
                break;
            case 3:
                return 0.99;
                break;
            case 4:
                return 3.79;
                break;
            default:
                printf("\n*********Invalid Code Selected**********");
                return 0;
        }
    }
    else
        return 0;
}


int main(){
	/*
		The main function of this program acts as a point of sale for users to enter their orders, prompting them to
		select from the items available on the menu as a loop.

		In each iteration, the menu is printed for the user and they are then prompted to select a number from the menu.
		The selected item number is then passed to the menu_items function to retrive the item's price.
		The price of the item is then added to the order total, and the process run until the user selects '0' to complete their order.

		The order total is then printed. The following format is expected:
			Your order total is ${order_total}.
	*/


	int item_selection = 0;
	float item_price;

	float order_total = 0;

	printf("WELCOME TO TOM HORTINS!\n\n");

	do{
		// PRINT MENU
		print_menu_items();

		// GET USER INPUT
		// YOUR CODE HERE
        printf("\nPlease enter your choice code number here:");
        scanf("%d",&item_selection);

		// GET PRICE OF SELECTED ITEM
		// YOUR CODE HERE
        if(item_selection)
        {
            item_price=menu_items(item_selection);

            if(item_price)
            {
                printf("\nThe Price of code is: $%f ",item_price);
            }
            else
            {
                printf("\nOR\n");
                printf("Your order is Complete.\n");
            }

            // UPDATE ORDER TOTAL
            // YOUR CODE HERE
            order_total = order_total + item_price;
        }


	} while (item_selection != 0);

	// PRINT ORDER TOTAL
	// YOUR CODE HERE
	if(order_total)
    {
        printf("\nYour total bill amount is: $%f \n", order_total);
    }
    else
    {
        printf("\nWith no selection, the total amount remains: $%f \n", order_total);
    }


	return 0;
}

