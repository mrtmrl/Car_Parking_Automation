#include "stdio.h"

int main()
{   
    int ParkingArea[10][10] = 
	{
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    };
    int i,j = 0;
    int ticketNumber;
    int choice = -99; 
    
    printf("Welcome \n");
    
    while(choice != 0){
    	
        printf("Please input your command: \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0:
                printf("Goodbye. Here is the final Parking Lot: \n");

                for(i = 0; i < 10; i++)
                {
                    for(j = 0; j < 10; j++)
                    {
                        printf("%d ",ParkingArea[i][j]);
                    }

                    printf("\n");
                }

                return 0;

            case 1:
            	printf("Parkin Lot: \n");
            	
                for(i = 0; i < 10; i++)
                {
                    for(j = 0; j < 10; j++)
                    {
                        printf("%d ",ParkingArea[i][j]);
                    }
					
                    printf("\n");
                }
                break;

            case 2:
                printf("A new car is entering. Please input a ticket number: \n");
                int control = 0;
                scanf("%d",&ticketNumber);
                for(i = 0; i < 10; i++)
                {
                    for(j = 0; j < 10; j++)
                    {
                        if(ParkingArea[i][j] == -1)
                        {
                            ParkingArea[i][j] = ticketNumber;
                            control = 1;
                            break;
                        }
                    }
                    if(control == 1)
                        break;
                } 
                break;

            case 3: 
                printf("A car is leaving. Please input the ticket number of the leaving car:\n");
                scanf("%d",&ticketNumber);

                for(i = 0; i < 10; i++){
                    for(j = 0; j < 10; j++){
                        if(ParkingArea[i][j] == ticketNumber){
                            ParkingArea[i][j] = -1;
                            break;
                        }
                    }
                } 
                break;

            default:
                printf("Incorrect command, new command needed. ");
                
        }
    }
}
