#ifndef __IRuntimeModule_H__
#define __IRuntimeModule_H__

#include "Interface.hpp"

namespace Soft3D{
    
	Interface IRuntimeModule{
    public:
		virtual ~IRuntimeModule(){};
		virtual int Initialize() = 0;	
        virtual void Finalize() = 0;
        
        virtual void Tick() = 0;
	};
	
}

#endif