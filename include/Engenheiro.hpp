#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

    private:
        int projetos;

    public:

        Engenheiro(std::string _nome, double _salarioHora, int _projetos);
        ~Engenheiro(){}
        int getProjetos();
        void printSalaryInfo(double horasTrabalhadas) override;

};

#endif