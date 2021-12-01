#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
	ifstream input;
	input.open("input.txt");
	int depth;
	vector<int>depth_measurements;
	while (input >> depth) {
		depth_measurements.push_back(depth);
	}
	input.close();
	int value = 0;
	int sum = 0;
	int new_sum=0;
	for (int i = 2; i < depth_measurements.size(); i++) {
		sum = depth_measurements[i] + depth_measurements[i-1] 
			+ depth_measurements[i - 2];
		cout << sum << endl;
		if (sum > new_sum) {
			value++;
		}
		new_sum = sum;
	}
	//Minus one because the first if statement check must be negated
	cout << value-1;

}