#ifndef COMPETICAOSIMPLES_H
#define COMPETICAOSIMPLES_H

#include "Equipe.h"
#include "Modalidade.h"
#include "Tabela.h"
#include "Competicao.h"

#include<stdexcept>
#include<iostream>
#include<string>

using namespace std;

class CompeticaoSimples: public Competicao
{
    public:
        CompeticaoSimples(string nome, Equipe** equipes, int quantidade, Modalidade* m);
        virtual ~CompeticaoSimples();

        Modalidade* getModalidade();
        Tabela* getTabela();

        void imprimir();

    private:

        Modalidade* m;


};

#endif // COMPETICAOSIMPLES_H
