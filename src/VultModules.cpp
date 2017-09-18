#include <math.h>
#include "VultModules.hpp"
#include "dsp.hpp"

float getSampleRate()
{
   return gSampleRate;
}

struct VultModulesPlugin : Plugin
{
   VultModulesPlugin()
   {
      slug = "VultModules";
      name = "VultModules";
      createModel<RescombWidget>(this, "Rescomb", "Rescomb");
      createModel<StabileWidget>(this, "Stabile", "Stabile");
   }
};

Plugin *init()
{
   return new VultModulesPlugin();
}
