#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,arr[100],dep[100];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>dep[i];
    }
	
    int plat_needed = 1, result = 1;
	for (int i = 0; i < m; i++) {
		plat_needed = 1;
		for (int j = 0; j < m; j++) {
			if (i != j)
				if (arr[i] >= arr[j] && dep[j] >= arr[i])
					plat_needed++;
		}

		result = plat_needed;
	}
	cout << result;
	return 0;
}
