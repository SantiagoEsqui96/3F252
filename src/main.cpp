#include <Foco.hpp>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Foco foco;
    foco.Encender();
    cout << "EstadoFoco:" << foco.LeerEstado() << endl;
    return 0;
}
// cout: salida a consola.
// cin: entrada a consola.
// endl: en line.
//