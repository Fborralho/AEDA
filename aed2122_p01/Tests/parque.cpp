#include "parque.h"
#include <vector>
ParqueEstacionamento::ParqueEstacionamento(unsigned int lot, unsigned int nMaxCli) : lotacao(lot), numMaximoClientes(nMaxCli){
    vagas = lot;
}

unsigned ParqueEstacionamento::getNumLugares() const {
    return lotacao;
}

unsigned ParqueEstacionamento::getNumMaximoClientes() const {
    return numMaximoClientes;
}

int ParqueEstacionamento::posicaoCliente(const string &nome) const {
    for(int i= 0; i < clientes.size(); i++){
        if(clientes[i].nome == nome){
            return i;
        }
    }
    return -1;
}

bool ParqueEstacionamento::adicionaCliente(const string &nome) {
    if(vagas == 0){
        return false;
    }
    for(int i=0; i < clientes.size(); i++){
        if(clientes[i].nome == nome){
            return false;
        }
    }
    InfoCartao client;
    client.nome = nome;
    client.presente = false;
    clientes.push_back((client));
    return true;
}

bool ParqueEstacionamento::entrar(const string &nome) {
    if(vagas == 0){
        return false;
    }
    else if(posicaoCliente(nome) == -1){
        return false;
    }
    else if(clientes[posicaoCliente(nome)].presente){
        return false;
    }
    else {
        clientes[posicaoCliente(nome)].presente = true;
        vagas -= 1;
        return true;
    }
}

bool ParqueEstacionamento::retiraCliente(const string &nome) {
    if(clientes[posicaoCliente(nome)].presente){
        return false;
    }
    else{
        clientes.erase(clientes.begin() + posicaoCliente(nome));
        return true;
    }
}

bool ParqueEstacionamento::sair(const string &nome) {
    if(posicaoCliente(nome) == -1){
        return false;
    }
    else if(clientes[posicaoCliente(nome)].presente != true){
        return false;
    }
    else{
        clientes[posicaoCliente(nome)].presente = false;
        return true;
    }
}

unsigned ParqueEstacionamento::getNumLugaresOcupados() const {
    return lotacao - vagas;
}

unsigned ParqueEstacionamento::getNumClientesAtuais() const {
    return clientes.size();
}
using namespace std;

