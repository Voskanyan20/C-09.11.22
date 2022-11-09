#include <iostream>
using namespace std;

void rotat(int arr[3][3] , int k){
	for (int i = 0; i < k; i++) {
	 	for (int j = 0; j < 3/2; j++){
			for (int q = j;q < 3 - j - 1; q++){
				int temp = arr[j][q];
				arr[j][q] = arr[3-1-q][j];
				arr[3-1-q][j]=arr[3-1-j][3-1-q];
				arr[3-1-j][3-1-q]=arr[q][3-1-j];
				arr[q][3-1-j]=temp;
			}
		}
	}	
}



int main(){
	int k;
	int arr[3][3] = { {1, 2, 3} , {4, 5, 6} , {7, 8, 9} };
	cout << "rotate time = "; cin >> k;
	rotat(arr ,k);
	
	for (int i = 0; i < 3;i++){
		for (int j = 0; j < 3; j++){
			cout<<arr[i][j]<< "  ";
		}
		cout<<"\n";
	}

	return 0;
}
