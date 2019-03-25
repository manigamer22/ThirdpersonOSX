/*
 *
 * OverrideView.cpp
 *  Created by Warlauke#6660
 */

#include "../main.h"
// Index IDs

// Hacks
//#include "../Hacks/fovchanger.hpp"
#include "../Hacks/Thirdperson.hpp"

void hkOverrideView(void* thisptr, CViewSetup& setup) {
    
    if (!vars.misc.antiscreenshot || !pEngine->IsTakingScreenshot())
    {
        OverrideView(setup);
    }
    createmoveVMT->GetOriginalMethod<tOverrideView>(19)(thisptr, setup);
}
