// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <bits/stdc++.h>
// using namespace std;

// bool isPerfectSquare(long double x)
// {

//     long long sr = sqrt(x);
//     return sr * sr == x;
// }

// void Perfectly_Imperfect_Array()
// {
//     int T;
//     cin >> T;
//     while (T)
//     {
//         int size;
//         long long PF = 1;
//         cin >> size;
//         vector<long long> V(size);
//         for (int i = 0; i < size; i++)
//         {
//             cin >> V[i];
//             PF *= V[i];
//         }
//         if (!isPerfectSquare(PF))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//         T--;
//     }
// }
// int main()
// {
//     Perfectly_Imperfect_Array();
//     return 0;
// }

// accpeted solution
#include <cstdio>
using namespace std;
int T, N;
bool iss[10101];
main()
{
	for (int i = 1; i <= 100; i++)
		iss[i * i] = true;
	scanf("%d", &T);
	for (; T--;)
	{
		scanf("%d", &N);
		bool fn = false;
		for (; N--;)
		{
			int A;
			scanf("%d", &A);
			if (!iss[A])
				fn = true;
		}
		puts(fn ? "YES" : "NO");
	}
}