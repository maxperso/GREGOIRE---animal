/*
** EPITECH PROJECT, 2024
** test_icedev
** File description:
** animals
*/

#ifndef ANIMALS_HPP_
#define ANIMALS_HPP_

#include <iostream>
#include <string>

class CAnimal {
    public:
        CAnimal() = default;
        virtual ~CAnimal() = default;
        static CAnimal* CreateAnimal(const char* pNomAnimal_in);
        virtual void Parle() const = 0;
};

class CChien : public CAnimal {
    public:
        CChien() = default;
        ~CChien() = default;
        void Parle() const override;
};

class CChat : public CAnimal {
    public:
        CChat() = default;
        ~CChat() = default;
        void Parle() const override;
};

#endif /* !ANIMALS_HPP_ */
