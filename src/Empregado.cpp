#include "Empregado.hpp"

#define HORAS_TRABALHO_PADRAO 8

// Empregado::Empregado(std::string _nome, double _salarioHora) : nome(_nome), salarioHora(_salarioHora){};

double Empregado::pagamentoMes(double horasTrabalhadas) {
 
    double t = horasTrabalhadas;
	  
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > HORAS_TRABALHO_PADRAO) {
        double x = horasTrabalhadas - HORAS_TRABALHO_PADRAO;
        t += x / 2;
    }
	return t * salarioHora;
}


double Empregado::getSalarioHora(){
    return salarioHora;
}

std::string Empregado::getNome(){
    return nome;
}