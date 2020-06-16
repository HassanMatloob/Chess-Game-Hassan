#pragma once
#include "Piece.h"


class Bishop : public Piece
{
public:
	Bishop();
	Bishop(Position p, Color c, Board* b); 
	virtual bool isLegel(Position EP, bool IsRealMove = false, bool SelfCheck = false);
	virtual void Draw();
	
	virtual void unDraw();

	~Bishop();
};

