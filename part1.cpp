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
	for (int i = 1; i < depth_measurements.size(); i++) {
		if (depth_measurements[i - 1] < depth_measurements[i]) {
			value++;
		}
	}
	cout << value;

}