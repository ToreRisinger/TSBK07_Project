#ifndef RENDERER_H
#define RENDERER_H

#include "GL/gl.h"
#include "MicroGlut.h"
#include "GL_utilities.h"
#include "LoadObj.h"
#include "MathUtils.h"
#include "Logic.h"

#define near .1
#define far 1000.0
#define right 0.5
#define left -0.5
#define top 0.5
#define bottom -0.5
#define fovDegree 45.0
#define aspectRatio 16.0 / 9.0

class Renderer
{
public:
    Renderer(Logic* logic);
    ~Renderer();

    void render();
    
private:
    void _initSystems();

    mat4 _modelMatrix;
    mat4 _viewMatrix;
    mat4 _projectionMatrix;
    
    GLuint _shader;

    Model* _cube;

    Logic* _logic;
};

#endif
