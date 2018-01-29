#include <iostream>
#include <vector>

using std::vector;
using std::swap;

void Reorder(vector<int>& input) {
	size_t front = 0;
	size_t end = input.size() - 1;

	while (front < end) {
		while (1 == (input[front] % 2)) {
			++front;
		}

		while (0 == (input[end] % 2)) {
			--end;
		}

		if (front < end) {
			swap(input[front], input[end]);
		}
	}
}

int main (int argc, char* argv[]) {
	int inputA[] = {1, 4, 5, 7, 9, 15, 20, 28, 30, 13, 14, 11, 19};
	vector<int> inputV(inputA, inputA + sizeof(inputA) / sizeof(int));
	Reorder(inputV);
}
