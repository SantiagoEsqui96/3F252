#pragma once
#include <EstadoFoco.hpp>

class Foco
{
private:
    EstadoFoco estado;

public:
    Foco() {}
    ~Foco() {}
    void Encender() { estado = true; }
    void Apagar() { estado = false; }
    EstadoFoco LeerEstado() { return estado; }
};

// Formatear codigo: ctl + K + F
//  Tipos de interfaz: Señar mixta, entrada, salida
//  +: para interfaz: usa      -: para memoria, tiene