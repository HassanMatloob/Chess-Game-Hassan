#pragma once
#include "Piece.h"
class Pawn :public Piece
{

public:

	Pawn();
	
	Pawn(Position p, Color c, Board* b); 
	virtual bool isLegel(Position EP, bool IsRealMove = false, bool SelfCheck = false);

	
	void Move(Position EP, bool IsReal = false);
	
	virtual void Draw();
	
	
	virtual void unDraw();
	
	~Pawn();
};

