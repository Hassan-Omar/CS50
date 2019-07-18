# include <stdio.h>
# include <cs50.h>

// method to add a node into the list
void add(int num);
// method to delete a node from the list
void rmv(int num);

// define a node
typedef struct node_t
{
    int value ;
    // pointer to points to next
    struct node_t *next ;
}node;

// now first element
node *head =NULL ;

int main(void)
{

    int decition =0 ;

    while(decition != -1)
    {
     decition = get_int("Press a Number \n    0-->View Current Data \n    1-->ADD\n    2-->Delete\n    negative one (-1) to quit\nYour Choice = ");

        if(decition == 0)
        {
            printf("__________________________________________\n");
            node *current_node = head;
            while(current_node != NULL)
            {
                printf("%i -->",current_node->value);
                // like increament i (i++)
                current_node = current_node->next ;
            }
            printf("NULL ");
            printf("\n__________________________________________\n");

        }
        else if(decition==1)
        {
            int val = get_int("give me value to add : ") ;
            add(val);
        }
        else if(decition==2)
        {
            int val = get_int("give me value to add : ") ;
            rmv(val);
        }
        else if (decition == -1)
            break;
        else
            printf("not defined number");

    }
}

// method to add a node into the list
void add(int num)
{
    node *new_node; // pointer to the node
    // casting after allocating
    new_node = (node *) malloc(sizeof(node));

    // i will add direct behinde the head
    new_node -> value = num ;
    new_node -> next = head ;
    head =new_node ;
}
// method to delete a node from the list
void rmv(int num)
{

    node *rmv_node = head; // pointer to the node we need to delete
    node *previous_node = NULL; // pointer to node of the privous
    while(rmv_node != NULL)
    {
        // check if this node no i which i need
        if(rmv_node -> value == num)
        {
            previous_node -> next = rmv_node -> next ;
            rmv_node -> next = NULL ;
        }

        previous_node = rmv_node;
        // icrease our index
        rmv_node = rmv_node->next ;
    }


}