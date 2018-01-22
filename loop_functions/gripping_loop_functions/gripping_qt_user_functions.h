#ifndef FORAGING_QT_USER_FUNCTIONS_H
#define FORAGING_QT_USER_FUNCTIONS_H

#include <argos3/plugins/simulator/visualizations/qt-opengl/qtopengl_user_functions.h>
#include <argos3/plugins/robots/foot-bot/simulator/footbot_entity.h>

using namespace argos;

class CGrippingQTUserFunctions : public CQTOpenGLUserFunctions {

public:

   CGrippingQTUserFunctions();

   virtual ~CGrippingQTUserFunctions() {}

   void Draw(CFootBotEntity& c_entity);
   
};

#endif
