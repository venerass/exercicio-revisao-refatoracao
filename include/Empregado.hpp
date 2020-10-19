#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  protected:
    
    double salarioHora;  
    std::string nome;

  public:

    // Empregado(std::string _nome, double _salarioHora);
    // ~Empregado(){}
    double pagamentoMes(double horasTrabalhadas);
    double getSalarioHora();
    std::string getNome();

};

#endif