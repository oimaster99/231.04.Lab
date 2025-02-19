/***********************************************************************
 * Header File:
 *    Space
 * Author:
 *    Joshua Macias, Roy Garcia
 * Summary:
 *    The functions for space
 ************************************************************************/
#pragma once

#include "piece.h"
#include <cassert>

 /***************************************************
  * MOVE
  * The empty space on the board
  ***************************************************/
class Space : public Piece 
{
	Space() : Piece() { };
	Space(Position pos, bool isWhite = true) : Piece(pos, isWhite) { }
	const PieceType & getType() const override { return SPACE; }
	void display(ogstream& gout) { };

};
