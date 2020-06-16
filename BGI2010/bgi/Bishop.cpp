#include "Bishop.h"



Bishop::Bishop()
{
}

Bishop::Bishop(Position p, Color c, Board* b) :
	Piece(p, c, b) {}
bool Bishop::isLegel(Position EP, bool IsRealMove , bool SelfCheck )
{

	if (SelfCheck && Brd->IsCheckAfterMove())
		return false;
	//return true;
	return (IsDiagonalMove(P, EP) && IsDiagonalPathClear(P, EP, Brd));
}

void Bishop::Draw()
{
	int x = P.ci * 75;
	int y = P.ri * 75;
	int a = (P.ci + 1) * 75;
	int b = (P.ri + 1) * 75;

	if (C == White)
	{
		if ((P.ri + P.ci) % 2 == 0)
		{

			readimagefile("img/WBL.jpg", x + 5, y + 5, a - 5, b - 5);

		}

		else
		{
			readimagefile("img/WBD.jpg", x + 5, y + 5, a - 5, b - 5);
		}

		cout << "b";
	}
	else
	{
		cout << "B";

		if ((P.ri + P.ci) % 2 == 0)
		{

			readimagefile("img/DBL.jpg", x + 5, y + 5, a - 5, b - 5);

		}

		else
		{
			readimagefile("img/DBD.jpg", x + 5, y + 5, a - 5, b - 5);
		}
	}

}
void Bishop::unDraw()
{
	cout << " ";
}



Bishop::~Bishop()
{
}
