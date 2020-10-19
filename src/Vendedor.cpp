#include "Vendedor.hpp"

#define MESES_NO_ANO 12

Vendedor::Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas){
	nome = _nome;
	salarioHora = _salarioHora;
	quotaMensalVendas = _quotaMensalVendas;
};

double Vendedor::quotaTotalAnual() {
	return quotaMensalVendas * MESES_NO_ANO;
}
