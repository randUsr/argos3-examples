#include "gripping_qt_user_functions.h"
#include <controllers/footbot_gripping/footbot_gripping.h>

using namespace argos;

/****************************************/
/****************************************/

CGrippingQTUserFunctions::CGrippingQTUserFunctions() {
   RegisterUserFunction<CGrippingQTUserFunctions,CFootBotEntity>(&CGrippingQTUserFunctions::Draw);
}

/****************************************/
/****************************************/

void CGrippingQTUserFunctions::Draw(CFootBotEntity& c_entity) {
}

/****************************************/
/****************************************/

REGISTER_QTOPENGL_USER_FUNCTIONS(CGrippingQTUserFunctions, "gripping_qt_user_functions")
