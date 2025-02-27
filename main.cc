
#include "ordenacio.h"
#include <iostream>


void ordenacio_examples(){

    int choice;
    ordenacio orde;
    //int T[6] = {7,3,4,5,6,1};
    int T[6] = {4,7,3,1,6};

    do
    {
        std::cout << std::endl
             << " 1 - Ordenació per selecció.\n"
             << " 2 - Ordenació per inserció.\n"
             << " 4 - Help.\n"
             << " 5 - Exit.\n"
             << " Enter your choice and press return: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            //code 
            std::cout << "Array sense ordenar: \n";
            orde.print_array(6,T);
            std::cout << "Array ordenat: \n";
            orde.ordenacio_per_seleccio(6,T);
            break;
        case 2:
            //code 
            std::cout << "Array sense ordenar: \n";
            orde.print_array(6,T);
            std::cout << "Array ordenat: \n";
            orde.ordenacio_per_insercio(6,T);
            break;
        case 3:
            //code to make option for the game
            break;
        case 4:
            //code to help the user like give him
            //extra information about the mode and the controller
            break;
        case 5:
            std::cout << "End of Program.\n";
            break;
        default:
            std::cout << "Not a Valid Choice. \n"
                 << "Choose again.\n";
            break;
        }

    } while (choice != 5);
}

int main()
{
    int choice;

    do
    {
        std::cout << std::endl
             << " 1 - Exemples ordenació.\n"
             << " 2 - Story.\n"
             << " 4 - Help.\n"
             << " 5 - Exit.\n"
             << " Selecciona una opció i prem Enter: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            //code 
            ordenacio_examples();
            break;
        case 2:
            //code to make score for this game to count how many times u win the game
            break;
        case 3:
            //code to make option for the game
            break;
        case 4:
            //code to help the user like give him
            //extra information about the mode and the controller
            break;
        case 5:
            std::cout << "End of Program.\n";
            break;
        default:
            std::cout << "Not a Valid Choice. \n"
                 << "Choose again.\n";
            break;
        }

    } while (choice != 5);
    return 0;
}