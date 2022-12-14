#ifndef __swgl_h__
#define __swgl_h__

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

//implement the following function call for the opengl pipeline


//hw1
void swTranslated(GLdouble x, GLdouble y, GLdouble z);
void swScaled(GLdouble x, GLdouble y, GLdouble z);
void swRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);

void swMatrixMode(GLenum mode);
void swLoadIdentity(void);
void swLoadMatrixd(const GLdouble * m);
void swMultMatrixd(const GLdouble * m);

void swPushMatrix(void);
void swPopMatrix(void);

void swuLookAt(GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ,
 	           GLdouble centerX, GLdouble centerY, GLdouble centerZ,
 	           GLdouble upX, GLdouble upY, GLdouble upZ);
void swFrustum(	GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble nearVal, GLdouble farVal);
void swuPerspective(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar);

void swViewport(GLint x, GLint y, GLsizei width, GLsizei height);

bool swTransformation(const GLdouble h[4], GLdouble w[4]);

void multMatrix(GLdouble * r, const GLdouble * m, const GLdouble * n);
void multMatrix(GLdouble * m, const GLdouble * n);

#endif                  /* __swgl_h__ */
