#include "BaseApplication.hpp"
#include <iostream>

using namespace Soft3D;

bool Soft3D::BaseApplication::m_bQuit = false;

Soft3D::BaseApplication::BaseApplication(GfxConfiguration& cfg)
	:m_Config(cfg)
{
	
}

// Parse command line, read configuration, initialize all sub modules
int Soft3D::BaseApplication::Initialize()
{
	std::cout << m_Config;
	
	return 0;	
}


// Finalize all sub modules and clean up all runtime temporary files.
void Soft3D::BaseApplication::Finalize()
{
		
}


// One cycle of the main loop
void Soft3D::BaseApplication::Tick()
{
	
	
}

bool Soft3D::BaseApplication::IsQuit()
{
	return m_bQuit;	
}