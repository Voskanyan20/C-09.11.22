#include <iostream>
using namespace std;

int sumFunc(int arr[3][3], int numb){
	int s1 = 0, s2 = 0;

	for(int i = 0; i < numb; i++){
		for(int j = 0; j < numb; j++){
			if(i == j){
				s1 += arr[i][j];
			}

			if(i == numb - j - 1){
				s2 += arr[i][j];
			}
		}
	}

	return s1 - s2;
}

int main(){
	int numb = 3;

	int arr[3][3] = {
		{5,8,11},
		{1,3,7},
		{12,4,6}
	};

	cout << "Answer is = " << sumFunc(arr, numb);
	return 0;
}
