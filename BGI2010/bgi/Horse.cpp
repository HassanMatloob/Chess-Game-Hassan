#include "Horse.h"


Horse::Horse()
{
}

Horse::Horse(Position p, Color c, Board* b) :
	Piece(p, c, b) {}
bool Horse::isLegel(Position EP, bool IsRealMove , bool SelfCheck)
{
	if (SelfCheck && Brd->IsCheckAfterMove())
		return false;
	return  (((abs(P.ri - EP.ri) == 2) && (abs(P.ci - EP.ci) == 1)) || ((abs(P.ri - EP.ri) == 1) && (abs(P.ci - EP.ci) == 2)));
}
void Horse::Draw()
{
	int x = P.ci * 75;
	int y = P.ri * 75;
	int a = (P.ci + 1) * 75;
	int b = (P.ri + 1) * 75;

	if (C == White)
	{
		cout << "h";


		//sector((P.ci*100)+50, 50 , 0, 90, 20, 20);

		if ((P.ri + P.ci) % 2 == 0)
		{

			readimagefile("img/WHL.jpg", x + 5, y + 5, a - 5, b - 5);

		}

		else
		{
			readimagefile("img/WHD.jpg", x + 5, y + 5, a - 5, b - 5);
		}


	}
	else
	{
		cout << "H";

		//sector((P.ci * 100) + 50, 750, 0, 90, 20, 20);
		if ((P.ri + P.ci) % 2 == 0)
		{

			readimagefile("img/DHL.jpg", x + 5, y + 5, a - 5, b - 5);

		}

		else
		{
			readimagefile("img/DHD.jpg", x + 5, y + 5, a - 5, b - 5);
		}

	}


}
void Horse::unDraw()
{
	cout << " ";
}


Horse::~Horse()
{
}
