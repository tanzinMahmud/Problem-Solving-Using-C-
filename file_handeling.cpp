#include <iostream>
#include <fstream>
using namespace std;

int main(){

    double x, y;
    ifstream fin;
    ofstream fout;

    fin.open("f3.txt");
    fin>>x>>y;

    fout.open("F4.txt");
    fout<<"S ="<<x+y<<" "<<"M ="<<x*y<<endl;
    fin.close();
    fout.close();
}

