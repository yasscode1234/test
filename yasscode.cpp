// préparation de la base
#include <windows.h>
#include <iostream>
#include <string>

std::string version = "0.0.1"; // Déclare une variable globale pour stocker la version du programme

int main() {
    std::cout << "Test Yasscode " << version << std::endl; // Affiche le message de test dans la console
    std::cout << "Entre votre nom : " << std::endl;
    std::string name;
    std::getline(std::cin, name); // Attend que l'utilisateur tape sa réponse qu'il apuie sur Entrée
    std::cout << "Bonjour, " << name << "!" << std::endl;
    getchar(); // Attend que l'utilisateur appuie sur une touche avant de fermer la console
    return 0;
}
