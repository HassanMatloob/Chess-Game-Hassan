#pragma once
#include "Piece.h"
class Horse : public Piece
{
public:
	Horse();
	Horse(Position p, Color c, Board* b);
	virtual bool isLegel(Position EP, bool IsRealMove = false, bool SelfCheck = false);

	
	virtual void Draw();
	
	virtual void unDraw();
	


	~Horse();
};

