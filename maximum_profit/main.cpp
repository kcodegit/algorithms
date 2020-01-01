//
//  main.cpp
//  MaximumProfit
//
//  Created by Kohei Ando on 2019/05/15.
//  Copyright © 2019 Kohei Ando. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;
//
int main(int argc, const char *argv[])
{
	int R[MAX], n;

	cin >> n; // std input stream
	for (int i = 0; i < n; i++)
		cin >> R[i];

	int maxv = -2000000000;
	int minv = R[0];

	for (int i = 1; i < n; i++)
	{
		maxv = max(maxv, R[i] - minv);
		minv = min(minv, R[i]);
	}

	cout << maxv << std::endl;

	return 0;
}
