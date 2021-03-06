//
// Created by pc on 2019/4/12.
//

#ifndef OPENGLES_DEMO_FILTERONE_H
#define OPENGLES_DEMO_FILTERONE_H


#include "BaseOpengl.h"
#include "../shaderutils/ShaderUtil.h"
#include "../matrix/MatrixUtil.h"


class FilterOne: public  BaseOpengl {

public:
    GLint vPosition;
    GLint fPosition;
    GLint sampler;
    GLint u_matrix;
    GLuint textureId;

    int w;
    int h;
    void *pixels = NULL;

    float matrix[16]; // 不能被释放，里面存储的就是单位矩阵

public:
    FilterOne();

    ~FilterOne();

    void onCreate();

    void onChange(int w, int h);

    void draw();

    void destroy();

    void destroySource();

    void setMatrix(int width, int height);

    void setPilex(void *data, int width, int height, int length);

};
#endif //OPENGLES_DEMO_FILTERONE_H
