#include <stdio.h>
#include <string.h>
#include "cars.h"

void addVehicle(Vehicle vehicleList[], int* numVehicles) {
    if (*numVehicles == MAX_VEHICLES) {
        printf("La limite de véhicules a été atteinte.\n");
        return;
    }

    Vehicle newVehicle;
    
    printf("Type de Véhicule : ");
    scanf("%49s", newVehicle.type);

    printf("Marque : ");
    scanf("%49s", newVehicle.brand);

    printf("Modèle : ");
    scanf("%49s", newVehicle.model);

    printf("Année : ");
    scanf("%9s", newVehicle.year);

    printf("Couleur : ");
    scanf("%19s", newVehicle.color);

    printf("Numéro d'immatriculation : ");
    scanf("%19s", newVehicle.plate);

    vehicleList[*numVehicles] = newVehicle;
    *numVehicles = *numVehicles + 1;

    printf("Le véhicule a été ajouté avec succès.\n");

}

void removeVehicle(Vehicle vehicleList[], int* numVehicles) {
    char searchPlate[MAX_PLATE_LENGTH];
    printf("Entrez le numéro d'immatriculation du véhicule à supprimer : ");
    scanf("%19s", searchPlate);

    int foundIndex = -1;

    for (int i = 0; i < *numVehicles; i++) {
        if (strcmp(vehicleList[i].plate, searchPlate) == 0) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < *numVehicles - 1; i++) {
            vehicleList[i] = vehicleList[i + 1];
        }
        *numVehicles = *numVehicles - 1 ;
        printf("Le véhicule a été supprimé avec succès.\n");

    } 
    
    else {
        printf("Aucun véhicule avec ce numéro d'immatriculation trouvé.\n");
    }
}

void displayStatistics(Vehicle vehicleList[], int numVehicles) {
    int numCars = 0;
    int numMotorcycles = 0;
    int numBuses = 0;
    int numTrains = 0;
    int numRedCars = 0;
    int numBlueCars = 0;
    int numGreenCars = 0;
    // Add more color variables as needed

    for (int i = 0; i < numVehicles; i++) {
        if (strcmp(vehicleList[i].type, "Voiture") == 0) {
            numCars++;
            if (strcmp(vehicleList[i].color, "Rouge") == 0)
                numRedCars++;
            else if (strcmp(vehicleList[i].color, "Bleu") == 0)
                numBlueCars++;
            else if (strcmp(vehicleList[i].color, "Vert") == 0)
                numGreenCars++;
        } else if (strcmp(vehicleList[i].type, "Moto") == 0) {
            numMotorcycles++;
        } else if (strcmp(vehicleList[i].type, "Autobus") == 0) {
            numBuses++;
        } else if (strcmp(vehicleList[i].type, "Métro") == 0) {
            numTrains++;
        }
    }

    printf("Statistiques de circulation routière :\n");
    printf("Nombre de voitures : %d\n", numCars);
    printf("Nombre de motos : %d\n", numMotorcycles);
    printf("Nombre d'autobus : %d\n", numBuses);
    printf("Nombre de métros : %d\n", numTrains);
    printf("Nombre de voitures rouges : %d\n", numRedCars);
    printf("Nombre de voitures bleues : %d\n", numBlueCars);
    printf("Nombre de voitures vertes : %d\n", numGreenCars);
}

void displayVehicles(Vehicle vehicleList[], int numVehicles) {
    if (numVehicles == 0) {
        printf("Aucun véhicule enregistré.\n");
        return;
    }

    printf("Liste des véhicules enregistrés :\n");
    for (int i = 0; i < numVehicles; i++) {
        printf("Véhicule %d\n", i + 1);
        printf("Type : %s\n", vehicleList[i].type);
        printf("Marque : %s\n", vehicleList[i].brand);
        printf("Modèle : %s\n", vehicleList[i].model);
        printf("Année : %s\n", vehicleList[i].year);
        printf("Couleur : %s\n", vehicleList[i].color);
        printf("Numéro d'immatriculation : %s\n", vehicleList[i].plate);
        printf("--------------------\n");
    }
}

void searchVehicleByPlate(Vehicle vehicleList[], int numVehicles) {
    char searchPlate[MAX_PLATE_LENGTH];
    printf("Entrez le numéro d'immatriculation du véhicule à rechercher : ");
    scanf("%19s", searchPlate);

    int foundIndex = -1;

    for (int i = 0; i < numVehicles; i++) {
        if (strcmp(vehicleList[i].plate, searchPlate) == 0) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Véhicule trouvé :\n");
        printf("Type : %s\n", vehicleList[foundIndex].type);
        printf("Marque : %s\n", vehicleList[foundIndex].brand);
        printf("Modèle : %s\n", vehicleList[foundIndex].model);
        printf("Année : %s\n", vehicleList[foundIndex].year);
        printf("Couleur : %s\n", vehicleList[foundIndex].color);
        printf("Numéro d'immatriculation : %s\n", vehicleList[foundIndex].plate);
    } else {
        printf("Aucun véhicule avec ce numéro d'immatriculation trouvé.\n");
    }
}

void searchVehicleByType(Vehicle vehicleList[], int numVehicles) {
    char searchType[MAX_TYPE_LENGTH];
    printf("Entrez le type de véhicule a rechercher : ");
    scanf("%19s", searchType);

    int foundIndex = -1;

    for (int i = 0; i < numVehicles; i++) {
        if (strcmp(vehicleList[i].type, searchType) == 0) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Véhicule trouvé :\n");
        printf("Type : %s\n", vehicleList[foundIndex].type);
        printf("Marque : %s\n", vehicleList[foundIndex].brand);
        printf("Modèle : %s\n", vehicleList[foundIndex].model);
        printf("Année : %s\n", vehicleList[foundIndex].year);
        printf("Couleur : %s\n", vehicleList[foundIndex].color);
        printf("Numéro d'immatriculation : %s\n", vehicleList[foundIndex].plate);
    } else {
        printf("Aucun véhicule de ce type trouvé.\n");
    }
}

