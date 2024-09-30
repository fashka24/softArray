#include "softArray.hpp"

int main() {
	soft::softArray<int> a_v = soft::softArray<int>(10);
	a_v.add(15); a_v.add(16);

	a_v.print();
	return 0;
}
