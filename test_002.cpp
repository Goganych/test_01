#include <iostream>

using namespace std;

template <typename Iter, typename T>
auto find_two_elements_with_sum(Iter first, Iter last, T c) {
	bool t_i = false;
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	if (first == last || first > last) cout << "ERROR -- range!!!" << endl;
	if (c < 1 || c > 13) cout << "ERROR -- value!!!" << endl;

	while (first != last) {
		int summ = arr[first] + arr[last];
		    if (summ < c)
			    first++;
		    else if (summ > c)
			    last--;
		    else {
			    t_i = true;
			cout << "Our Iterators " << first << " " << last << endl;
			    break;
		}
	}
	return 0;
}

int main() {
	int s_e = 14;
	size_t a = 0, b = 9;
	find_two_elements_with_sum(a, b, s_e);

	return 0;
}
