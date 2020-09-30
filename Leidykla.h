//
// Created by Marius on 9/30/2020.
//
#include <iostream>
#include "Leidinys.h"
#ifndef KNYGYNAS_LEIDYKLA_H
#define KNYGYNAS_LEIDYKLA_H
struct Leidykla{
    int metai;
    std::string pavadinimas;
    std::string adresas;
    Leidinys leidinys;
    void info();
};

#endif //KNYGYNAS_LEIDYKLA_H
