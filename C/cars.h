#ifndef CARS_H
#define CARS_H

#define MAX_BRAND_LENGTH 50
#define MAX_MODEL_LENGTH 50
#define MAX_TYPE_LENGTH 50
#define MAX_YEAR_LENGTH 10
#define MAX_COLOR_LENGTH 20
#define MAX_PLATE_LENGTH 20
#define MAX_VEHICLES 100

typedef struct {
    char brand[MAX_BRAND_LENGTH];
    char model[MAX_MODEL_LENGTH];
    char year[MAX_YEAR_LENGTH];
    char color[MAX_COLOR_LENGTH];
    char plate[MAX_PLATE_LENGTH];
    char type [MAX_TYPE_LENGTH];
} Vehicle;

void addVehicle(Vehicle vehicleList[], int* numVehicles);
void removeVehicle(Vehicle vehicleList[], int* numVehicles);
void displayStatistics(Vehicle vehicleList[], int numVehicles);
void displayVehicles(Vehicle vehicleList[], int numVehicles);
void searchVehicleByPlate(Vehicle vehicleList[], int numVehicles);

#endif  /* CARS_H */
