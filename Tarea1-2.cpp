#include <iostream>
using namespace std;

class Persona{
    private:
        int age;
        char sex;
        float height;
    public: 
        void setAge( int age ){
            this->age = age;
        }
        void setSex( char sex ){
            this->sex = sex;
        }
        void setHeight( float height ){
            this->height = height;
        }
        int getAge( ){
            return this->age;
        }
        char getSex( ){
            return this->sex;
        }
        float getHeight( ){
            return this->height;
        } 
};

int main ( ){
    int age;
    char sex;
    float height;

    Persona person1;

    cout << "Enter age: " << endl;
    cin >> age;

    cout << "Enter sex (M/F)" << endl;
    cin >> sex;

    cout << "Enter height: " << endl;
    cin >> height;

    person1.setAge( age );
    person1.setSex( sex );
    person1.setHeight( height );

    cout << "=================" << endl;
    cout << "Age: " << person1.getAge() << endl;
    cout << "Sex: " << person1.getSex() << endl;
    cout << "Height: " << person1.getHeight() << endl;
    cout << "=================" << endl;
    return 0;
}