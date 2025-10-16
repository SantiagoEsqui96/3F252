#include <iostream>
#include <string>
#include <list>
using namespace std;

class Humano{
    private:
        string nombre;
        int edad;
public:

    Humano(string n = "Desconocido", int e = 0){
        nombre = n;
        edad = e;
    }

    string LeerNombre(){
        return nombre;
    }

    int LeerEdad(){
        return edad;
    }

};

class Alumno : public Humano{
public:
    int registro;
public:

    Alumno(string n = "Alumno", int e = 0, int reg = 0) : Humano(n, e){
        registro = reg;
    }
    int LeerRegistro () {
        return registro;
    }

};

class Empleado : public Humano{
private:
    long noEmpleado;
public:

Empleado(string n = "Empleado", int e = 0, long num= 0) : Humano(n, e) {
        noEmpleado = num;
}
    long LeerNumeroEmpleado(){
        return noEmpleado;
    }
};

int main(int argc, char const *argv[])
{
    Humano* humano = NULL;
    Alumno* alumno = new Alumno();
    Empleado* empleado = new Empleado();
    
    
humano = alumno;
humano->LeerEdad();

humano = empleado;
humano->LeerEdad();


list<Humano*> listaHumanos;
listaHumanos.emplace_back(new Alumno());
listaHumanos.emplace_back(new Alumno());
listaHumanos.emplace_back(new Alumno());
listaHumanos.emplace_back(new Alumno());
listaHumanos.emplace_back(new Alumno());
listaHumanos.emplace_back(new Alumno());
listaHumanos.emplace_back(new Empleado());
listaHumanos.emplace_back(new Empleado());
listaHumanos.emplace_back(new Empleado());
listaHumanos.emplace_back(new Empleado());

for (auto &&humano : listaHumanos)
{
    cout << humano->LeerNombre() << endl;
}





    return 0;
}
//completar el constructor y definir los metodos.