#include "King.h"


King::King()
{
}


King::King(Position p, Color c, Board * b) :
		Piece(p, c, b) {}
bool King::isLegel(Position EP, bool IsRealMove, bool SelfCheck )
	{
		if (SelfCheck && Brd->IsCheckAfterMove())
			return false;
		return !(abs(EP.ri - P.ri) > 1 || abs(EP.ci - P.ci) > 1);
	}
void King::Draw()
	{
		int x = P.ci * 75;
		int y = P.ri * 75;
		int a = (P.ci + 1) * 75;
		int b = (P.ri + 1) * 75;

		if (C == White)
		{
			cout << "k";


			if ((P.ri + P.ci) % 2 == 0)
			{

				readimagefile("img/WKL.jpg", x + 5, y + 5, a - 5, b - 5);

			}

			else
			{
				readimagefile("img/WKD.jpg", x + 5, y + 5, a - 5, b - 5);
			}

		}
		else
		{
			cout << "K";


			if ((P.ri + P.ci) % 2 == 0)
			{

				readimagefile("img/DKL.jpg", x + 5, y + 5, a - 5, b - 5);

			}

			else
			{
				readimagefile("img/DKD.jpg", x + 5, y + 5, a - 5, b - 5);
			}
		}

	}
void King::unDraw()
	{
		cout << " ";
	}

King::~King()
{
}
