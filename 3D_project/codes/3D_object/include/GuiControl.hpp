#ifndef GuiControl_hpp
#define GuiControl_hpp
#include <glm/vec3.hpp>
#include <functional>
class GLFWwindow;

enum SHAPETYPE
{
    SHAPE_CONI=0,
    SHAPE_CUBE=1,
    SHAPE_SILIN=2   
};

typedef std::function<void(SHAPETYPE)>  SekilOlusturFonksiyonu;
class Mesh3D;
class GuiControl
{
public:
    GuiControl();
    void init(GLFWwindow* window);
    void createFrame();
    void createFrameItems();
    void draw();
    void setPos(glm::vec3* pos);
    void setAngle(glm::vec3* angles);
    SekilOlusturFonksiyonu tiklaSekilOlustur;
    void setRoot(Mesh3D* root);
private:
    void agacaEkle();
    void agacaEkle(Mesh3D* aktif);
    Mesh3D* root;
    int secilenSekil;
    glm::vec3* vecPos;
    glm::vec3* vecAngles;

};

#endif