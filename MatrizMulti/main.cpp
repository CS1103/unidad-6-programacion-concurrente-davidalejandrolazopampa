#include <iostream>
#include "Matriz.h"
#include "Matriz.cpp"
using namespace std;

int main() {

    int row1,row2,column1,column2,value;

            cout<<"Multiplication matrix..."<<endl;
            cout<<".............Part-1 Enter Values...........!!!"<<endl;
            cout<<"Ingrese row de Matrix1"<<endl;
            cin>>row1;
            cout<<"Ingrese Column de Matrix1"<<endl;
            cin>>column1;
            cout<<"Ingrese row de Matrix2"<<endl;
            cin>>row2;
            cout<<"Ingrese Column de Matrix2"<<endl;
            cin>>column2;

            Matriz<int> A(row1,column1), B(row2,column2),C;
            A.fill_Manual();
            B.fill_Manual();
            C = A * B;
            cout<<"Matrix 1->"<<endl;
            A.Show();
            cout<<endl;
            cout<<"Matrix 2->"<<endl;
            B.Show();
            cout<<endl;
            C.Show();


            //Parte 2 con Datos aleatorios
            cout<<".............Random Entry Part-2...........!!!"<<endl;
            cout<<"Ingrese Matrix 1 row"<<endl;
            cin>>row1;
            cout<<"Ingrese Matrix 1 column"<<endl;
            cin>>column1;
            cout<<"Ingrese Matrix 2 row"<<endl;
            cin>>row2;
            cout<<"Ingrese Matrix 2 column"<<endl;
            cin>>column2;

            Matriz<int>  m1(row1, column1), m2(row2, column2),m3;

            m1.fill_random();
            m2.fill_random();

            m1.Show();
            cout << endl;
            m2.Show();
            m3 = m1 * m2;
            cout << endl;
            m3.Show();


    return 0;
}