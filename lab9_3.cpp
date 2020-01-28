#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    ifstream source;
    source.open ("C:\\Users\\acer\\Documents\\GitHub\\lab9-2562-2-arclxngth\\score.txt");

    string textline;
    int count=0;
    float mean, SD, sum, bSD;

    while(getline(source,textline)){

        sum += stof(textline);
        bSD += pow(stof(textline),2);
        count++;
    }
	
    mean = sum/count;

    SD = sqrt((bSD/count)-(pow(mean,2)));

    cout << "Number of data = "<< count <<endl;
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<SD;

    return 0;

}

