#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Persona{
    private:
        string name;
        string lastName;
        int phoneNumber;
    public: 
        void setName( string name ){
            this->name = name;
        }
        void setLastName( string lastName ){
            this->lastName = lastName;
        }
        void setPhoneNumber( int phoneNumber ){
            this->phoneNumber = phoneNumber;
        }
        string getName( ){
            return this->name;
        }
        string getLastName( ){
            return this->lastName;
        }
        int getPhoneNumber( ){
            return this->phoneNumber;
        } 
};

Persona agregarPersona (){

    string name;
    string lastName; 
    int phoneNumber;

    Persona person1;

    cout << "Enter name: " << endl;
    cin >> name;

    cout << "Enter last name: " << endl;
    cin >> lastName;

    cout << "Enter phone number: " << endl;
    cin >> phoneNumber;

    person1.setName( name );
    person1.setLastName( lastName );
    person1.setPhoneNumber( phoneNumber );

    cout << "=================" << endl;
    cout << "Name: " << person1.getName() << endl;
    cout << "Last name: " << person1.getLastName() << endl;
    cout << "phone number: " << person1.getPhoneNumber() << endl;
    cout << "=================" << endl;

    return person1;
}

void mostrarPersonas( Persona * personas, int personasAgregadas ){
    int i;
    for( i = 0; i < personasAgregadas; i++ ){
        cout << "=================" << endl;
        cout << personas[ i ].getName() << endl;
        cout << personas[ i ].getLastName() << endl;
        cout << personas[ i ].getPhoneNumber() << endl;
        cout << "=================" << endl; 
    }

    return;
}

void guardarPersonas( Persona * personas, int personasAgregadas ){
    
    char fileName[32];
    FILE * fp;

    cout << "Ingrese nombre del archivo: " << endl;
    scanf( "%s", fileName );
    strcat( fileName, ".txt" );
    fp = fopen( fileName, "w" );
    int i;
    for( i = 0; i < personasAgregadas; i++ ){
        fprintf( fp, "%s", "==================\n" );
        cout << personas[ i ].getName();
        fprintf( fp, "Nombre: %s\n", personas[ i ].getName().c_str() );
        fprintf( fp, "Apellido: %s\n", personas[ i ].getLastName().c_str() );
        fprintf( fp, "Telefono: %d\n", personas[ i ].getPhoneNumber() );
        fprintf( fp, "%s", "==================\n" );
    }
    fclose( fp );
    cout << "Archivo creado: " << fileName << endl;
}

int menu( ){
    int option;
    cout << "1. Agregar persona" << endl;
    cout << "2. Visualizar contactos" << endl;
    cout << "3. Guardar en archivo de texto" << endl;
    cout << "0. Salir" << endl;
    cin.clear();
    cin >> option;
    return option;
}

int main ( ){
    string name;
    string lastName;
    int phoneNumber;

    Persona personas[32];
    int personasAgregadas = 0;
    int option;

    do{
        option = menu( );
        switch( option ){
            case 1:
                personas[ personasAgregadas++ ] = agregarPersona( );
            break;
            case 2:
                mostrarPersonas( personas, personasAgregadas );
            break;
            case 3:
                guardarPersonas( personas, personasAgregadas );
            break;
        }
    }while( option != 0 );

    
    return 0;
}