#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

    public:
        std::string nome;
	
	    double quotaTotalAnual();
	
};

#endif