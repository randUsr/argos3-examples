#include "gripping_loop_functions.h"
#include <argos3/core/simulator/simulator.h>
#include <argos3/plugins/robots/foot-bot/simulator/footbot_entity.h>
#include <argos3/plugins/simulator/entities/gripper_equipped_entity.h>

/****************************************/
/****************************************/

CGrippingLoopFunctions::CGrippingLoopFunctions() {
}

/****************************************/
/****************************************/

void CGrippingLoopFunctions::Init(TConfigurationNode& t_node) {

}

/****************************************/
/****************************************/

void CGrippingLoopFunctions::Reset() {

}

/****************************************/
/****************************************/

void CGrippingLoopFunctions::Destroy() {

}

/****************************************/
/****************************************/

CColor CGrippingLoopFunctions::GetFloorColor(const CVector2& c_position_on_plane) {
   return CColor::WHITE;
}

/****************************************/
/****************************************/

void CGrippingLoopFunctions::PreStep() {
   CSpace::TMapPerType& tFBMap = GetSpace().GetEntitiesByType("foot-bot");
   /* Go through them */
   for(CSpace::TMapPerType::iterator it = tFBMap.begin();
       it != tFBMap.end();
       ++it) {
      /* Create a pointer to the current foot-bot */
      CFootBotEntity* pcFB = any_cast<CFootBotEntity*>(it->second);
      CGripperEquippedEntity e = pcFB->GetGripperEquippedEntity();
      if(e.IsGripping()) {
         CEmbodiedEntity eme = e.GetGrippedEntity();
         //if("cylinder" == eme.GetTypeDescription() ){
         //CCylinderEntity cylinder = any_cast<CCylinderEntity>(eme);
         //cylinder.DisableLEDs();
         //}
      }
   }
}

/****************************************/
/****************************************/

REGISTER_LOOP_FUNCTIONS(CGrippingLoopFunctions, "gripping_loop_functions")
