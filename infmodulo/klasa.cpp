#include "stdafx.h"
#include "klasa.h"

long long Klasa::infmodulo(long long a, long long b)
{
	if (a > b)
	{
		R.push_back(a);
		R.push_back(b);
		S.push_back(1);
		S.push_back(0);
	}
	else if (b > a)
	{
		R.push_back(b);
		R.push_back(a);
		S.push_back(0);
		S.push_back(1);

	}
	bool x = true;
	int y = 2;
	long long Ri = 0;
	long long Si = 0;
	while (x)
	{
		Q = R[y - 2] / R[y - 1];
		Ri = R[y - 2] - (Q * R[y - 1]);
		Si = S[y - 2] - (Q*S[y - 1]);
		
		if (Ri == 1)
		{
			break;
		}

		if (Ri < 0)
		{
			break;
		}
		
		if (Ri%2==0)
		{
			break;
		}
		
		R.push_back(Ri);
		S.push_back(Si);

		y++;
	}
	
	
	/*for (int i = 0; i < R.size(); i++)
	{
		cout << R[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < S.size(); i++)
	{
		cout << S[i] << endl;
	}*/
	return 0;
}
