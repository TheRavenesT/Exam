class Vehicle:
    def __init__(self, type, brand, model, year, color, plate):
        self.type = type
        self.brand = brand
        self.model = model
        self.year = year
        self.color = color
        self.plate = plate
        


def add_vehicle(vehicle_list):
    if len(vehicle_list) >= 100:
        print("La limite du nombre de véhicules a été atteinte.")
        return

    type = input("Type de Véhicule : ")
    brand = input("Marque : ")
    model = input("Modèle : ")
    year = input("Année : ")
    color = input("Couleur : ")
    plate = input("Numéro d'immatriculation : ")

    new_vehicle = Vehicle(type, brand, model, year, color, plate)
    vehicle_list.append(new_vehicle)

    print("Le véhicule a été ajouté avec succès.")


def remove_vehicle(vehicle_list):
    if len(vehicle_list) == 0:
        print("Aucun véhicule enregistré.")
        return

    search_plate = input("Entrez le numéro d'immatriculation du véhicule à supprimer : ")

    found_index = -1
    for i, vehicle in enumerate(vehicle_list):
        if vehicle.plate == search_plate:
            found_index = i
            break

    if found_index == -1:
        print("Aucun véhicule avec ce numéro d'immatriculation trouvé.")
    else:
        del vehicle_list[found_index]
        print("Le véhicule a été supprimé avec succès.")


def display_statistics(vehicle_list):
    if len(vehicle_list) == 0:
        print("Aucun véhicule enregistré.")
        return

    num_cars = 0
    num_motorcycles = 0
    num_buses = 0
    num_trains = 0

    num_red_cars = 0
    num_blue_cars = 0
    num_green_cars = 0
    # Ajouter plus de variables de couleur au besoin

    for vehicle in vehicle_list:
        if vehicle.type == "Voiture":
            num_cars += 1
            if vehicle.type == "Rouge":
                num_red_cars += 1
            elif vehicle.color == "Bleu":
                num_blue_cars += 1
            elif vehicle.color == "Vert":
                num_green_cars += 1
        elif vehicle.type == "Moto":
            num_motorcycles += 1
        elif vehicle.type == "Autobus":
            num_buses += 1
        elif vehicle.type == "Métro":
            num_trains += 1

    print("----- Statistiques -----")
    print("Nombre de voitures :", num_cars)
    print("Nombre de motos :", num_motorcycles)
    print("Nombre d'autobus :", num_buses)
    print("Nombre de métros :", num_trains)
    print("Nombre de voitures rouges :", num_red_cars)
    print("Nombre de voitures bleues :", num_blue_cars)
    print("Nombre de voitures vertes :", num_green_cars)
    print("------------------------")


def display_vehicles(vehicle_list):
    if len(vehicle_list) == 0:
        print("Aucun véhicule enregistré.")
        return

    print("----- Liste des véhicules -----")
    for vehicle in vehicle_list:
        print("Type :", vehicle.type)
        print("Marque :", vehicle.brand)
        print("Modèle :", vehicle.model)
        print("Année :", vehicle.year)
        print("Couleur :", vehicle.color)
        print("Numéro d'immatriculation :", vehicle.plate)
        print("-------------------------------")


def search_vehicle_by_plate(vehicle_list):
    search_plate = input("Entrez le numéro d'immatriculation à rechercher : ")

    print("----- Résultats de la recherche -----")
    for vehicle in vehicle_list:
        if vehicle.plate == search_plate:
            print("Marque :", vehicle.type)
            print("Marque :", vehicle.brand)
            print("Modèle :", vehicle.model)
            print("Année :", vehicle.year)
            print("Couleur :", vehicle.color)
            print("Numéro d'immatriculation :", vehicle.plate)
            print("-----------------------------------")
            return

    print("Aucun véhicule avec ce numéro d'immatriculation trouvé.")
