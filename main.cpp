/*
** EPITECH PROJECT, 2024
** test_icedev
** File description:
** main
*/

#include <iostream>
#include <cstring>
#include <exception>
#include "animals.cpp"

int main() {
    try {
        CAnimal* pChien = CAnimal::CreateAnimal("CChien");
        CAnimal* pChat = CAnimal::CreateAnimal("CChat");

        pChien->Parle();
        pChat->Parle();

        delete pChien;
        delete pChat;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
