#pragma once
#include "Piece.h"
class King : public Piece
{
public:
	King();
	King(Position p, Color c, Board* b);
virtual bool isLegel(Position EP, bool IsRealMove = false, bool SelfCheck = false);
	
virtual void Draw();
	
virtual void unDraw();
	

	~King();
};

