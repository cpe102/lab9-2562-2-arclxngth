#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream source;
    source.open ("C:\\Users\\acer\\Documents\\GitHub\\lab9-2562-2-arclxngth\\cheerbook.txt");

    string textline;
    
    ofstream text ("C:\\Users\\acer\\Documents\\GitHub\\lab9-2562-2-arclxngth\\cheerbook_copy.txt");

    text<<"-------------------- SOTUS ---------------------"<<endl;
    
    while(getline(source,textline)){

        text<<textline<<endl;
    }
    
    text<<"-------------------- SOTUS ---------------------";
    source.close();    
    text.close();

    return 0;


}



//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
