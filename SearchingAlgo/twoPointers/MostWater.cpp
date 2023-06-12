#include <iostream>
#include <vector>
using namespace std;

//S = a * b
// a = min (h[i], h[j])
// b = j - 1;


int mostWater(vector<int> h)
{
	int w = 0;
	int i = 0, j = h.size() - 1;
	while(i < j)
	{
		int a = min(h[i], h[j]);
		w = max(w, (j - 1) * a);
		while (h[i] <= a && i < j) // skip until h[i] bigger than a
			i++;
		while(h[j] <= a && i < j)// skip until h[j] bigger than a
			j--;
	}
	return (w);
}

int main(void)
{
	vector<int> height = { 1, 8, 6, 2, 5, 4, 8, 3, 7};

	cout << mostWater(height) << endl;
	return (0);
}