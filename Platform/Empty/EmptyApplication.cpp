#include "BaseApplication.hpp"

namespace Soft3D{
	GfxConfiguration config;
	
	BaseApplication g_App(config);
	IApplication* g_pApp = &g_App;
}