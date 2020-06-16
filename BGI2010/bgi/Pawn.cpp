#include "Pawn.h"


Pawn::Pawn()
{

}

Pawn::Pawn(Position p, Color c, Board* b) :
	Piece(p, c, b) {}
bool Pawn::isLegel(Position EP, bool IsRealMove, bool SelfCheck)

{
	if (SelfCheck && Brd->IsCheckAfterMove())
		return false;

	if (P.ri == 6 || P.ri == 1)
	{
		if (IsVerticalMove(P, EP) && IsVerticalPathClear(P, EP, Brd))
		{
			if (abs(EP.ri - P.ri) > 2)
				return false;
			else
				return true;
		}
		else
			return false;
	}

	else {

		if (IsVerticalMove(P, EP) && IsVerticalPathClear(P, EP, Brd))
		{
			if (C == White)
			{

				if (EP.ri - P.ri == 1)
					return true;
				else
					return false;
			}

			else {

				if (EP.ri - P.ri == -1)
					return true;
				else
					return false;
			}
		}
		else
			return false;


	}

}
void Pawn::Move(Position EP, bool IsReal)
{
	if (IsReal)
	{
		if ((C == WHITE && EP.ri == 7) || (C == BLACK && EP.ri == 0))
		{
			Position T = P;
			P = EP;
			Brd->Move(T, EP);
			//Brd->B[P.ri][P.ci] = new Queen(P, C, Brd);
		}
		else
		{
			Position T = P;
			P = EP;
			Brd->Move(T, EP);
		}
	}
	else
	{
		Position T = P;
		P = EP;
		Brd->Move(T, EP);
	}
}
void Pawn::Draw()
{
	int x = P.ci * 75;
	int y = P.ri * 75;
	int a = (P.ci + 1) * 75;
	int b = (P.ri + 1) * 75;

	if (C == White)
	{
		cout << "p";
		//setcolor();
		//setfillstyle(SOLID_FILL, GREEN);
		//(((P.ci+1) * 100) - 50, 150, 10);
		//readimagefile("img/bB.png")

		if ((P.ri + P.ci) % 2 == 0)
		{

			readimagefile("img/WPL.jpg", x + 5, y + 5, a - 5, b - 5);

		}

		else
		{
			readimagefile("img/WPD.jpg", x + 5, y + 5, a - 5, b - 5);
		}

	}
	else
	{

		if ((P.ri + P.ci) % 2 == 0)
		{

			readimagefile("img/DPL.jpg", x + 5, y + 5, a - 5, b - 5);

		}

		else
		{
			readimagefile("img/DPD.jpg", x + 5, y + 5, a - 5, b - 5);
		}

		cout << "P";

		//setfillstyle(SOLID_FILL, GREEN);
		//circle(((P.ci+1) * 100) - 50, 650, 10);
	}

}
void Pawn::unDraw()
{
	cout << " ";
}

Pawn::~Pawn()
{
}
