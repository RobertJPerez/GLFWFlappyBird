//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//
// "Creature Box" -- flocking app
//
// by Christopher Rasmussen
//
// CISC 440/640, March, 2014
// updated to OpenGL 3.3, March, 2016
//
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

#include "Predator.hh"

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

extern vector <Flocker *> flocker_array;    

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------

Predator::Predator(int _index,
		 double init_x, double init_y, double init_z,
		 double init_vx, double init_vy, double init_vz,
		 float r, float g, float b,
		 int max_hist) : Creature(_index, init_x, init_y, init_z, init_vx, init_vy, init_vz, r, g, b, max_hist)
{ 

}

//----------------------------------------------------------------------------

void Predator::draw(glm::mat4 Model)
{

}

//----------------------------------------------------------------------------

void Predator::update()
{

}

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
