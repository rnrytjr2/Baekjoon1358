// Baekjoon1358.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int main()
{
	int W, H, X, Y, P, answer = 0;
	cin >> W >> H >> X >> Y >> P;
	for (int i = 0; i < P; i++)
	{
		int PX, PY;
		cin >> PX >> PY;
		if ((PX >= X && PX <= X + W) && (PY >= Y && PY <= Y + H))
		{
			answer++;
		}
		else if (PX < X && ((X - PX) * (X - PX) + (Y + (H / 2) - PY) * (Y + (H / 2) - PY)) <= ((H / 2) * (H / 2)))
		{
			answer++;
		}
		else if (PX > X && ((X + W - PX) * (X + W - PX) + (Y + (H / 2) - PY) * (Y + (H / 2) - PY)) <= ((H / 2) * (H / 2)))
		{
			answer++;
		}
	}
	cout << answer;
}

