#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cars.h"

int main() {
    int choice;
    Vehicle vehicleList[MAX_VEHICLES];
    int numVehicles = 0;  
    int *pointeurVehicle = &numVehicles;  


    do {
        printf("----- Menu -----\n");
        printf("1. Ajouter un véhicule\n");
        printf("2. Supprimer un véhicule\n");
        printf("3. Afficher les statistiques\n");
        printf("4. Afficher la liste des véhicules\n");
        printf("5. Rechercher un véhicule par numéro d'immatriculation\n");
        printf("6. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choice);
        getchar(); // Clear newline character from input buffer

        switch (choice) {
            case 1:
                addVehicle(vehicleList, pointeurVehicle);
                break;
            case 2:
                removeVehicle(vehicleList, pointeurVehicle);
                break;
            case 3:
                displayStatistics(vehicleList, pointeurVehicle);
                break;
            case 4:
                displayVehicles(vehicleList, pointeurVehicle);
                break;
            case 5:
                searchVehicleByPlate(vehicleList, pointeurVehicles);
                break;
            case 6:
                printf("Au revoir.\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }

        printf("\n");
    } while (choice != 6);

    return 0;
}