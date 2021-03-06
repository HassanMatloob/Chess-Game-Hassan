#pragma once	
#include "Piece.h"
class Rook : public Piece
{
public:
	Rook();
	Rook(Position p, Color c, Board* b);

	virtual bool isLegel(Position EP, bool IsRealMove = false, bool SelfCheck = false);
	
	virtual void Draw();
	virtual void unDraw();
	~Rook();
};

