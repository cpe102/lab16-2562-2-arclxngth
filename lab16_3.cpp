#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(int N){

	vector<int> arr(N);
	
	for(int i=0; i<N; i++){

		int random_num = rand()%10;
		arr[i]=random_num;
	}
	return arr;
} 

void showVector(vector<int> arr){
	
	cout<<"[ ";

	for(int i=0; i<arr.size(); i++){

		cout<<arr[i]<<" ";
	}
	cout<<"]";
}

int dotProduct(vector<int> vector1, vector<int> vector2){
	
	int dot = 0;

	for(int i=0; i<vector1.size(); i++){

		dot += vector1[i]*vector2[i];
	}
	
	return dot;
}
