#ifndef MAIN_H_
#define MAIN_H_
#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <gl\glew.h>
#include <gl\freeglut.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <iostream>
#include <GL\glew.h>
#include <glm\glm.hpp>
#include <glm\gtc\matrix_inverse.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\type_ptr.hpp>
#include <GL\freeglut.h>
#include <GL\gl.h>
#include <GL\glu.h>
#include <sstream>


#include <foreach.hpp>
#include <boost\property_tree\ptree.hpp>
#include <boost\property_tree\ptree_fwd.hpp>
#include <boost\property_tree\json_parser.hpp>
#include <boost\property_tree\json_parser.hpp>


#include <RemoteEncoderAPI.h>

#include "Modell.h"
#include "Util.h"
#include "ConfigFile.h"

#define MOUSEROTATIONFAKTOR 100
#define KEYROTATIONFAKTOR 15
#define ZOOMFAKTOR 0.3

using namespace std;
using boost::property_tree::ptree;

GLuint vaoId = 0;
GLuint vboId = 0;
GLuint iboId = 0;
GLuint naoId = 0;
GLuint nboId = 0;
GLuint framebuffer;
GLuint programID = 0;
GLuint ATTR_POS;
GLuint ATTR_NORMAL;
GLuint pbo = 0;

//Kommunikation zwischen OpenGL und CUDA

vector<int> vbo;
vector<int> ibo;
vector<int> nbo;
vector<Modell*> part;

int width = 800;
int height = 600;
float factor = 0.0004f;

//Shader Stuff
float translation_X = 0.0f;
float translation_Y = 0.0f;
float zoom = -4.0f;
float rotationAngle_X = 18.0f;
float rotationAngle_Y = 0.0f;

bool vw = false;

int partID;

//User Input
bool keyStates[256];
bool keySpecialStates[246];

int recentMouse_X;
int recentMouse_Y;
int mouseButton = 0;
int mousePressed = 1;

SYSTEMTIME st;
WORD currentTimeMS;
WORD lastTimeMS;

FILE* f;


//Cuda Zeugs
unsigned char* devPtr;
vector<unsigned char> yuv;
unsigned char* d_yuv;
size_t arraySize;

int countFrame;

#endif
