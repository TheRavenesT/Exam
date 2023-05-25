from cars import (
    add_vehicle,
    remove_vehicle,
    display_statistics,
    display_vehicles,
    search_vehicle_by_plate,
)


def main():
    vehicle_list = []

    choice = 0
    while choice != 6:
        print("----- Menu -----")
        print("1. Ajouter un véhicule")
        print("2. Supprimer un véhicule")
        print("3. Afficher les statistiques")
        print("4. Afficher la liste des véhicules")
        print("5. Rechercher un véhicule par numéro d'immatriculation")
        print("6. Quitter")
        choice = int(input("Choix : "))

        if choice == 1:
            add_vehicle(vehicle_list)
        elif choice == 2:
            remove_vehicle(vehicle_list)
        elif choice == 3:
            display_statistics(vehicle_list)
        elif choice == 4:
            display_vehicles(vehicle_list)
        elif choice == 5:
            search_vehicle_by_plate(vehicle_list)
        elif choice == 6:
            print("Au revoir.")
        else:
            print("Choix invalide. Veuillez réessayer.")

        print()


if __name__ == "__main__":
    main()
