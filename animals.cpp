/*
** EPITECH PROJECT, 2024
** test_icedev
** File description:
** animals
*/

#include "header/animals.hpp"

void CChien::Parle() const {
    std::cout << "Ouaf !" << std::endl;
}

void CChat::Parle() const {
    std::cout << "Miaou !" << std::endl;
}

void ParleAnimal(const CAnimal *pAnimal_in) {
    pAnimal_in->Parle();
}

CAnimal* CAnimal::CreateAnimal(const char* pNomAnimal_in) {
    if (strcmp(pNomAnimal_in, "CChien") != 0 && strcmp(pNomAnimal_in, "CChat") != 0) {
        throw std::invalid_argument("Nom d'animal invalide");
    }
    if (strcmp(pNomAnimal_in, "CChien") == 0) {
        return new CChien();
    } else if (strcmp(pNomAnimal_in, "CChat") == 0) {
        return new CChat();
    } else {
        return nullptr;
    }
}
