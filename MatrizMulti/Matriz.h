//
// Created by David Lazo on 7/06/2019.
//

#ifndef PC3_MATRIZ_H
#define PC3_MATRIZ_H



template <class T>
class Matriz {

private:
    int rows, columns;
    T **elementos;

public:
    //Constructores

    Matriz();
    Matriz(const Matriz&);
    Matriz(const int, const int);
    //Destructor
    ~Matriz();

    //Métodos de acceso
    void Show();

    //Métodos de modificación
    void fill_random();
    //Le puse  para Opcion de poner llenar la matriz
    void fill_Manual();


    //Sobrecarga de operadores
    Matriz<T> operator = (const Matriz);
    Matriz<T> operator * (const Matriz);

};
#endif //PC3_MATRIZ_H
