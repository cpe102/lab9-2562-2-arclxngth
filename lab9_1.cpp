#include<iostream>
using namespace std;

int main(){

	char grade;
	int i=0;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << i+1 << "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A') {
			count[0]+=1;

		}else if(grade == 'B'){
			count[1]+=1;

		}else if (grade == 'C'){
			count[2]+=1;

		}else if (grade == 'D'){
			count[3]+=1;

		}else if (grade == 'F'){
			count[4]+=1;

		}else if (grade == '0'){
			break;

		}else{ // grade is wrong input
			cout<<"Wrong input. Please input again."<<endl;
			i--;
		}

		i++;
	}while(grade != 0);
	
	 
	cout << "In total "<< i <<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];

	return 0;
}
	
