#include<iostream>
#include <stdlib.h>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.141516
#include<math.h>

using namespace std;

/////////////////////////============Declaration================/////////////////////////

////////////////////////////////////Faiza////////////////////////////////////////////////////

GLfloat b1position = 0.0f;//boat
GLfloat b1speed = 0.03f;

GLfloat b2position = 0.0f;//river line
GLfloat b2speed = 0.05f;

GLfloat r1position = 0.0f;//robot
GLfloat r1speed = 1.0f;

GLfloat Sun_position = 0.0f;//sun
GLfloat Sun_speed = 0.02f;

GLfloat rain_position = 0.0f;//rain
GLfloat rain_speed = 0.2f;

GLfloat position_cloud = 0.0f;//cloud
GLfloat speed_cloud = 0.04f;

int nightStatus=0;
int rainStatus=0;
///////////////////////////////////////////Tushar/////////////////////////////////////
GLfloat Bird_position = 0.0f;
GLfloat Bird_speed = 0.05f;
//////////////////////////////////////////Adrita/////////////////////////////////////
GLfloat b3position = 0.0f;//fountain line
GLfloat b3speed = 0.05f;
//////////////////////////////////////////Sara/////////////////////////////////////
GLfloat menposition = 0.0f;//boat
GLfloat menspeed = 0.01f;

GLfloat j = 0.0f;
int i;
int lineAmount = 100;
GLfloat twicePi = 2.0f * PI;
///////////////////==================Transition========================/////////////////

////////////////////////////////////Faiza///////////////////////////////////////////
void boat(int value)
{
    if(b1position >2.0)
    b1position = -1.0f;
    b1position += b1speed;
glutPostRedisplay();
glutTimerFunc(100, boat, 0);
}

void riverline(int value)//river line
{
    if(b2position <-2.0)
    b2position = 1.0f;
    b2position -=b2speed;
glutPostRedisplay();
glutTimerFunc(80, riverline, 0);
}

void robot(int value)
{
    if(r1position <-1.0)
    r1position = 1.0f;
    r1position -= r1speed;
glutPostRedisplay();
glutTimerFunc(100, robot, 0);
}

void Sun(int value)
{

    if(Sun_position <-1.0)
    Sun_position = 1.0f;
    Sun_position -= Sun_speed;
glutPostRedisplay();
glutTimerFunc(100, Sun, 0);
}

void cloud(int value)
{
    if(position_cloud <-2.0)
    position_cloud = 1.0f;
    position_cloud -= speed_cloud;
glutPostRedisplay();
glutTimerFunc(100, cloud, 0);
}

void Rain(int value)
{
    if(rain_position <-2.0)
    rain_position = 1.0f;
    rain_position -= rain_speed;
glutPostRedisplay();
glutTimerFunc(100, Rain, 0);
}
///////////////////////////////////////////Tushar///////////////////////////////////
void Bird(int value)
{
    if(Bird_position >2.0)
    Bird_position = -1.0f;
    Bird_position += Bird_speed;
glutPostRedisplay();
glutTimerFunc(100, Bird, 0);
}
/////////////////////////////////////////Adrita//////////////////////////////////////////////
void Fountain(int value)
{
    if(b3position <-1.0)
    b3position = 0.0f;
    b3position -= b3speed;
glutPostRedisplay();
glutTimerFunc(100,Fountain, 0);
}
/////////////////////////////////////////Sara///////////////////////////////////////////////
void men(int value)
{
    if(menposition >1.2)
    menposition = 0.0f;
    menposition += menspeed;
glutPostRedisplay();
glutTimerFunc(100, men, 0);
}
////////////////////////////============Drawing================////////////////////////

/////////////////////////////////////////Faiza///////////////////////////////////////////
void sun()
{
    int i;
        GLfloat p1=-0.75f; GLfloat q1= 0.8f; GLfloat r1 = 0.09f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f(1.0f, 0.9f, 0.0f); // yellow
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f
        (
            p1+(r1*cos(i*tp2/tringle2)),
            q1+(r1*sin(i*tp2/tringle2))
        );
    }
    glEnd ();
}

void cloud()
{
GLfloat p2=0.8f; GLfloat q2= 0.7f; GLfloat r2 = 0.13f;//1st part
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f); // white
    glVertex2f (p2,q2);
    for(int i= 0;i<=tringle3; i++)
    {
        glVertex2f
        (
            p2+(r2*cos(i*tp3/tringle3)),
            q2+(r2*sin(i*tp3/tringle3))
        );
    }
    glEnd ();

GLfloat p3=0.68f; GLfloat q3= 0.7f; GLfloat r3 = 0.16f;//2nd part
    int tringle4=40;

    GLfloat tp4 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f); // white
    glVertex2f (p3,q3);
    for(int i= 0;i<=tringle4; i++)
    {
        glVertex2f
        (
            p3+(r3*cos(i*tp4/tringle4)),
            q3+(r3*sin(i*tp4/tringle4))
        );
    }
    glEnd ();

GLfloat p4=0.56f; GLfloat q4= 0.7f; GLfloat r4 = 0.13f;//3rd part
    int tringle5=40;

    GLfloat tp5 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f); // white
    glVertex2f (p4,q4);
    for(int i= 0;i<=tringle5; i++)
    {
        glVertex2f
        (
            p4+(r4*cos(i*tp5/tringle5)),
            q4+(r4*sin(i*tp5/tringle5))
        );
    }
    glEnd ();
}

void nightcloud()
{
GLfloat p2=0.8f; GLfloat q2= 0.7f; GLfloat r2 = 0.13f;//1st part
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80); // Ash
    glVertex2f (p2,q2);
    for(int i= 0;i<=tringle3; i++)
    {
        glVertex2f
        (
            p2+(r2*cos(i*tp3/tringle3)),
            q2+(r2*sin(i*tp3/tringle3))
        );
    }
    glEnd ();

GLfloat p3=0.68f; GLfloat q3= 0.7f; GLfloat r3 = 0.16f;//2nd part
    int tringle4=40;

    GLfloat tp4 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80); // Ash
    glVertex2f (p3,q3);
    for(int i= 0;i<=tringle4; i++)
    {
        glVertex2f
        (
            p3+(r3*cos(i*tp4/tringle4)),
            q3+(r3*sin(i*tp4/tringle4))
        );
    }
    glEnd ();

GLfloat p4=0.56f; GLfloat q4= 0.7f; GLfloat r4 = 0.13f;//3rd part
    int tringle5=40;

    GLfloat tp5 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80); // Ash
    glVertex2f (p4,q4);
    for(int i= 0;i<=tringle5; i++)
    {
        glVertex2f
        (
            p4+(r4*cos(i*tp5/tringle5)),
            q4+(r4*sin(i*tp5/tringle5))
        );
    }
    glEnd ();
}

void grass()
{
    glBegin(GL_QUADS);
	glColor3f(0.2f, 0.7f, 0.0f); // Green
	glVertex2f(-1.0f, -0.7f);   // x, y
	glVertex2f(1.0f, -0.7f);    // x, y
	glVertex2f(1.0f, 0.1f);    // x, y
	glVertex2f(-1.0f, 0.1f);
	glEnd();
}

void nightgrass()
{
    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.3f, 0.1f); // dark green
	glVertex2f(-1.0f, -0.7f);   // x, y
	glVertex2f(1.0f, -0.7f);    // x, y
	glVertex2f(1.0f, 0.1f);    // x, y
	glVertex2f(-1.0f, 0.1f);
	glEnd();
}

void chair()
{
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); // white
	glVertex2f(0.08f, -0.25f); //BODY
	glVertex2f(0.20f, -0.25f);
	glVertex2f(0.15f, -0.20f);    // x, y
	glVertex2f(0.04f, -0.20f);
	glEnd();

    glLineWidth(3.3);
	glBegin(GL_LINES);//Hatol
	glColor3f(1.0f, 1.0f, 1.0f); // white
	glVertex2f(0.04f, -0.20f);//HATOL left
	glVertex2f(0.04f, -0.10f);
	glVertex2f(0.15f, -0.20f);//HATOL Right
	glVertex2f(0.15f, -0.10f);
    glVertex2f(0.04f, -0.10f);//Back
	glVertex2f(0.15f, -0.10f);
	glVertex2f(0.04f, -0.15f);//Back line
	glVertex2f(0.15f, -0.15f);
	glEnd();

    glLineWidth(3.8);//leg
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); // white
	glVertex2f(0.04f, -0.20f);//leg 1
	glVertex2f(0.04f, -0.30f);
	glVertex2f(0.08f, -0.25f);//leg 2
	glVertex2f(0.08f, -0.35f);
	glVertex2f(0.20f, -0.25f);//leg 3
	glVertex2f(0.20f, -0.35f);
	glVertex2f(0.15f, -0.25f);//leg 4
	glVertex2f(0.15f, -0.35f);
	glEnd();
}

void tree()
{
    //tree-1
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.0f); // Dark Red
	glVertex2f(-0.01f, -0.3f);    // x, y
	glVertex2f(0.02f, -0.3f);    // x, y
	glVertex2f(0.02f, 0.0f);    // x, y
	glVertex2f(-0.01f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f); // green
	glVertex2f(-0.1f, 0.0f);    // x, y
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.0f, 0.2f);
    glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f); // green
	glVertex2f(-0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.0f, 0.3f);
    glEnd();

//tree-2
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.0f); // Dark Red
	glVertex2f(0.2f, -0.3f);    // x, y
	glVertex2f(0.24f, -0.3f);    // x, y
	glVertex2f(0.24f, 0.0f);    // x, y
	glVertex2f(0.2f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f); // Green
	glVertex2f(0.12f, 0.0f);    // x, y
	glVertex2f(0.32f, 0.0f);
	glVertex2f(0.22f, 0.2f);
    glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f); // Green
	glVertex2f(0.12f, 0.1f);    // x, y
	glVertex2f(0.32f, 0.1f);
	glVertex2f(0.22f, 0.3f);
    glEnd();
}

void nighttree()
{
    //tree-1
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.0f); // Dark Red
	glVertex2f(-0.01f, -0.3f);    // x, y
	glVertex2f(0.02f, -0.3f);    // x, y
	glVertex2f(0.02f, 0.0f);    // x, y
	glVertex2f(-0.01f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // green
	glVertex2f(-0.1f, 0.0f);    // x, y
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.0f, 0.2f);
    glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // green
	glVertex2f(-0.1f, 0.1f);    // x, y
	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.0f, 0.3f);
    glEnd();
//tree-2
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.0f); // Dark Red
	glVertex2f(0.2f, -0.3f);    // x, y
	glVertex2f(0.24f, -0.3f);    // x, y
	glVertex2f(0.24f, 0.0f);    // x, y
	glVertex2f(0.2f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // green
	glVertex2f(0.12f, 0.0f);    // x, y
	glVertex2f(0.32f, 0.0f);
	glVertex2f(0.22f, 0.2f);
    glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // green
	glVertex2f(0.12f, 0.1f);    // x, y
	glVertex2f(0.32f, 0.1f);
	glVertex2f(0.22f, 0.3f);
    glEnd();
}

void stall()
{
    //stall-1
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5f, 0.8f); // Pink
	glVertex2f(-0.98f, -0.1f);    // x, y
	glVertex2f(-0.93f, -0.1f);
	glVertex2f(-0.93f, 0.0f);    // x, y
	glVertex2f(-0.98f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(1.0f, 1.0f, 0.5f); // light Yellow
	glVertex2f(-1.0f, 0.0f);// x, y
	glVertex2f(-0.91f, 0.0f);    // x, y
	glVertex2f(-0.95f, 0.1f);
	glEnd();

//stall-2
    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.9f, 0.0f); // Yellow
	glVertex2f(-0.88f, -0.1f);    // x, y
	glVertex2f(-0.83f, -0.1f);
	glVertex2f(-0.83f, 0.0f);    // x, y
	glVertex2f(-0.88f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.9f, 0.2f, 0.0f); // red
	glVertex2f(-0.90f, 0.0f);// x, y
	glVertex2f(-0.81f, 0.0f);    // x, y
	glVertex2f(-0.85f, 0.1f);
	glEnd();

//stall-3
    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.6f, 0.3f); // Baby orange
	glVertex2f(-0.78f, -0.1f);    // x, y
	glVertex2f(-0.73f, -0.1f);
	glVertex2f(-0.73f, 0.0f);    // x, y
	glVertex2f(-0.78f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.9f, 0.8f, 1.0f); // baby pink
	glVertex2f(-0.80f, 0.0f);// x, y
	glVertex2f(-0.71f, 0.0f);    // x, y
	glVertex2f(-0.75f, 0.1f);
    glEnd();

//stall-4
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.8f, 1.0f); // sky blue
	glVertex2f(-0.68f, -0.1f);    // x, y
	glVertex2f(-0.63f, -0.1f);
	glVertex2f(-0.63f, 0.0f);    // x, y
	glVertex2f(-0.68f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.5f, 0.3f, 0.8f); // purple
	glVertex2f(-0.70f, 0.0f);// x, y
	glVertex2f(-0.61f, 0.0f);    // x, y
	glVertex2f(-0.65f, 0.1f);
    glEnd();

//stall-5
    glBegin(GL_QUADS);
	glColor3f(0.9f, 1.0f, 0.3f); // yellow
	glVertex2f(-0.48f, -0.1f);    // x, y
	glVertex2f(-0.43f, -0.1f);
	glVertex2f(-0.43f, 0.0f);    // x, y
	glVertex2f(-0.48f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.7f, 0.0f, 0.5f); //mazenta
	glVertex2f(-0.50f, 0.0f);// x, y
	glVertex2f(-0.41f, 0.0f);    // x, y
	glVertex2f(-0.45f, 0.1f);
    glEnd();

//stall-6
    glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.2f); //dark brown
	glVertex2f(-0.38f, -0.1f);    // x, y
	glVertex2f(-0.33f, -0.1f);
	glVertex2f(-0.33f, 0.0f);    // x, y
	glVertex2f(-0.38f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.5f, 0.5f, 0.5f); //light brown
	glVertex2f(-0.40f, 0.0f);// x, y
	glVertex2f(-0.31f, 0.0f);    // x, y
	glVertex2f(-0.35f, 0.1f);
    glEnd();

//stall-7
    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.5f, 1.0f); //dark blue
	glVertex2f(-0.28f, -0.1f);    // x, y
	glVertex2f(-0.23f, -0.1f);
	glVertex2f(-0.23f, 0.0f);    // x, y
	glVertex2f(-0.28f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.7f, 0.9f, 0.2f); //light yellow
	glVertex2f(-0.30f, 0.0f);// x, y
	glVertex2f(-0.21f, 0.0f);    // x, y
	glVertex2f(-0.25f, 0.1f);
    glEnd();

//stall-8
    glBegin(GL_QUADS);
	glColor3f(0.8f, 0.5f, 1.0f); //pink
	glVertex2f(-0.18f, -0.1f);    // x, y
	glVertex2f(-0.13f, -0.1f);
	glVertex2f(-0.13f, 0.0f);    // x, y
	glVertex2f(-0.18f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.7f, 0.0f, 0.1f); //dark green
	glVertex2f(-0.20f, 0.0f);// x, y
	glVertex2f(-0.11f, 0.0f);    // x, y
	glVertex2f(-0.15f, 0.1f);
    glEnd();

//stall-9
    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.6f, 0.3f); // Baby orange
	glVertex2f(-0.78f, -0.6f);    // x, y
	glVertex2f(-0.73f, -0.6f);
	glVertex2f(-0.73f, -0.5f);    // x, y
	glVertex2f(-0.78f, -0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.9f, 0.8f, 1.0f); // baby pink
	glVertex2f(-0.80f, -0.5f);// x, y
	glVertex2f(-0.71f, -0.5f);    // x, y
	glVertex2f(-0.75f, -0.4f);
    glEnd();

//stall-10
    glBegin(GL_QUADS);
	glColor3f(0.9f, 1.0f, 0.3f); // yellow
	glVertex2f(-0.68f, -0.6f);    // x, y
	glVertex2f(-0.63f, -0.6f);
	glVertex2f(-0.63f, -0.5f);    // x, y
	glVertex2f(-0.68f, -0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.7f, 0.0f, 0.1f); //dark green
	glVertex2f(-0.70f, -0.5f);// x, y
	glVertex2f(-0.61f, -0.5f);    // x, y
	glVertex2f(-0.65f, -0.4f);
    glEnd();

//stall-11
    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.5f, 1.0f); //dark blue
	glVertex2f(-0.58f, -0.6f);    // x, y
	glVertex2f(-0.53f, -0.6f);
	glVertex2f(-0.53f, -0.5f);    // x, y
	glVertex2f(-0.58f, -0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.7f, 0.9f, 0.2f); //light yellow
	glVertex2f(-0.60f, -0.5f);// x, y
	glVertex2f(-0.51f, -0.5f);    // x, y
	glVertex2f(-0.55f, -0.4f);
    glEnd();

//stall-12
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.8f, 1.0f); // sky blue
	glVertex2f(-0.48f, -0.6f);    // x, y
	glVertex2f(-0.43f, -0.6f);
	glVertex2f(-0.43f, -0.5f);    // x, y
	glVertex2f(-0.48f, -0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.7f, 0.0f, 0.5f); //mazenta
	glVertex2f(-0.50f, -0.5f);// x, y
	glVertex2f(-0.41f, -0.5f);    // x, y
	glVertex2f(-0.45f, -0.4f);
    glEnd();

//stall-13
    glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.2f); //dark brown
	glVertex2f(-0.38f, -0.6f);    // x, y
	glVertex2f(-0.33f, -0.6f);
	glVertex2f(-0.33f, -0.5f);    // x, y
	glVertex2f(-0.38f, -0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.5f, 0.5f, 0.5f); //light brown
	glVertex2f(-0.40f, -0.5f);// x, y
	glVertex2f(-0.31f, -0.5f);    // x, y
	glVertex2f(-0.35f, -0.4f);
    glEnd();

//stall-14
    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.5f, 1.0f); //dark blue
	glVertex2f(-0.28f, -0.6f);    // x, y
	glVertex2f(-0.23f, -0.6f);
	glVertex2f(-0.23f, -0.5f);    // x, y
	glVertex2f(-0.28f, -0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.7f, 0.9f, 0.2f); //light yellow
	glVertex2f(-0.30f, -0.5f);// x, y
	glVertex2f(-0.21f, -0.5f);    // x, y
	glVertex2f(-0.25f, -0.4f);
    glEnd();

//stall-15
    glBegin(GL_QUADS);
	glColor3f(0.8f, 0.5f, 1.0f); //pink
	glVertex2f(-0.18f, -0.6f);    // x, y
	glVertex2f(-0.13f, -0.6f);
	glVertex2f(-0.13f, -0.5f);    // x, y
	glVertex2f(-0.18f, -0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.7f, 0.0f, 0.1f); //dark green
	glVertex2f(-0.20f, -0.5f);// x, y
	glVertex2f(-0.11f, -0.5f);    // x, y
	glVertex2f(-0.15f, -0.4f);
    glEnd();
}

void robot()
{
	glBegin(GL_QUADS);//body
	glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(-0.97f, -0.15f);// x, y
	glVertex2f(-0.93f, -0.15f);    // x, y
	glVertex2f(-0.93f, -0.2f);
	glVertex2f(-0.97f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);//face
	glColor3f(1.0f, 0.0f, 0.0f); // red
	glVertex2f(-0.94f, -0.16f);// x, y
	glVertex2f(-0.92f, -0.16f);    // x, y
	glVertex2f(-0.92f, -0.11f);
	glVertex2f(-0.94f, -0.11f);
	glEnd();

	glBegin(GL_QUADS);//face
	glColor3f(1.0f, 0.0f, 0.0f); // red
	glVertex2f(-0.98f, -0.16f);// x, y
	glVertex2f(-0.96f, -0.16f);    // x, y
	glVertex2f(-0.96f, -0.11f);
	glVertex2f(-0.98f, -0.11f);
	glEnd();
}

void river()
{
	glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f); // cyan
    glVertex2f(1.0f, -0.65f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(-1.0f, -0.65f);
	glEnd();
}

void nightriver()
{
	glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);//dark bluep
    glVertex2f(1.0f, -0.65f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(-1.0f, -0.65f);
	glEnd();
}

void riverLineD()
{

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.20f, -0.90f);
	glVertex2f(-0.40f, -0.90f);
	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(-0.80f, -0.80f);
	glVertex2f(-1.0f, -0.80f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex2f(0.40f, -0.90f);
	glVertex2f(0.60f, -0.90f);
	glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(-0.20f, -0.70f);
    glVertex2f(-0.30f, -0.70f);
    glEnd();
}

void riverLineN()
{

    glBegin(GL_LINES);
	glColor3f(0.50f, 0.50f, 0.60f);//ash
	glVertex2f(-0.20f, -0.90f);
	glVertex2f(-0.40f, -0.90f);
	glEnd();

    glBegin(GL_LINES);
	glColor3f(0.50f, 0.50f, 0.60f);//ash
	glVertex2f(-0.80f, -0.80f);
	glVertex2f(-1.0f, -0.80f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.50f, 0.50f, 0.60f);//ash
	glVertex2f(0.40f, -0.90f);
	glVertex2f(0.60f, -0.90f);
	glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(-0.20f, -0.70f);
    glVertex2f(-0.30f, -0.70f);
    glEnd();
}

void sideriver()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f); // cyan
	glVertex2f(0.80f, -0.7f);   // x, y
	glVertex2f(1.0f, -0.7f);    // x, y
	glVertex2f(1.0f, 0.1f);    // x, y
	glVertex2f(0.83f, 0.1f);
	glEnd();
}

void nightsideriver()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);//dark bluep
	glVertex2f(0.80f, -0.7f);   // x, y
	glVertex2f(1.0f, -0.7f);    // x, y
	glVertex2f(1.0f, 0.1f);    // x, y
	glVertex2f(0.83f, 0.1f);
	glEnd();
}

void sideriverLineD()
{
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.84f, -0.05f);
    glVertex2f(0.84f, 0.05f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.95f, -0.05f);
    glVertex2f(0.95f, 0.05f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.90f, -0.05f);
    glVertex2f(0.90f, 0.05f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.86f, -0.3f);
    glVertex2f(0.86f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.93f, -0.2f);
    glVertex2f(0.93f, -0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.98f, -0.5f);
    glVertex2f(0.98f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.98f, -0.1f);
    glVertex2f(0.98f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.90f, -0.3f);
    glVertex2f(0.90f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.95f, -0.35f);
    glVertex2f(0.95f, -0.45f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.94f, -0.5f);
    glVertex2f(0.94f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.84f, -0.1f);
    glVertex2f(0.84f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.89f, -0.1f);
    glVertex2f(0.89f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.88f, -0.45f);
    glVertex2f(0.88f, -0.55f);
    glEnd();
}

void sideriverLineN()
{
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.84f, -0.05f);
    glVertex2f(0.84f, 0.05f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.95f, -0.05f);
    glVertex2f(0.95f, 0.05f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.90f, -0.05f);
    glVertex2f(0.90f, 0.05f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.86f, -0.3f);
    glVertex2f(0.86f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.93f, -0.2f);
    glVertex2f(0.93f, -0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.98f, -0.5f);
    glVertex2f(0.98f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.98f, -0.1f);
    glVertex2f(0.98f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.90f, -0.3f);
    glVertex2f(0.90f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.95f, -0.35f);
    glVertex2f(0.95f, -0.45f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.94f, -0.5f);
    glVertex2f(0.94f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.84f, -0.1f);
    glVertex2f(0.84f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.89f, -0.1f);
    glVertex2f(0.89f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.88f, -0.45f);
    glVertex2f(0.88f, -0.55f);
    glEnd();
}

void boat()
{
	glBegin(GL_QUADS);//body down
	glColor3f(0.8f, 0.2f, 0.0f); // orange
	glVertex2f(-0.75f, -0.95f);// x, y
	glVertex2f(-0.5f, -0.95f);    // x, y
	glVertex2f(-0.3f, -0.85f);
	glVertex2f(-0.95f, -0.85f);
	glEnd();

	glBegin(GL_QUADS);//body up
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-0.85f, -0.85f);// x, y
	glVertex2f(-0.45f, -0.85f);    // x, y
	glVertex2f(-0.45f, -0.75f);
	glVertex2f(-0.85f, -0.75f);
	glEnd();

    glBegin(GL_LINES);//side line
    glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(-0.65f, -0.60f);
    glVertex2f(-0.75f, -0.75f);
    glEnd();

    glBegin(GL_LINES);//boitha
    glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(-0.35f, -0.72f);
    glVertex2f(-0.45f, -0.98f);
    glEnd();

    glBegin(GL_TRIANGLES);//pal 1st
    glColor3f(1.0f, 0.3f, 0.0f);//pink
    glVertex2f(-0.65f, -0.67f);
    glVertex2f(-0.57f, -0.67f);
    glVertex2f(-0.65f, -0.75f);
    glEnd();

    glBegin(GL_TRIANGLES);//pal 2nd
    glColor3f(1.0f, 0.3f, 0.0f);//pink
    glVertex2f(-0.65f, -0.60f);
    glVertex2f(-0.57f, -0.60f);
    glVertex2f(-0.65f, -0.75f);
    glEnd();
}

void nightboat()
{
	glBegin(GL_QUADS);//body down
	glColor3f(0.6f, 0.3f, 0.3f); // brown
	glVertex2f(-0.75f, -0.95f);// x, y
	glVertex2f(-0.5f, -0.95f);    // x, y
	glVertex2f(-0.3f, -0.85f);
	glVertex2f(-0.95f, -0.85f);
	glEnd();

	glBegin(GL_QUADS);//body up
	glColor3f(1.0f, 0.8f, 0.1f); // Yellow
	glVertex2f(-0.85f, -0.85f);// x, y
	glVertex2f(-0.45f, -0.85f);    // x, y
	glVertex2f(-0.45f, -0.75f);
	glVertex2f(-0.85f, -0.75f);
	glEnd();

    glBegin(GL_LINES);//side line
    glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(-0.65f, -0.60f);
    glVertex2f(-0.75f, -0.75f);
    glEnd();

    glBegin(GL_LINES);//boitha
    glColor3f(0.0f, 0.0f, 0.0f);//black
    glVertex2f(-0.35f, -0.72f);
    glVertex2f(-0.45f, -0.98f);
    glEnd();

    glBegin(GL_TRIANGLES);//pal 1st
    glColor3f(1.0f, 0.4f, 0.4f);//orange
    glVertex2f(-0.65f, -0.67f);
    glVertex2f(-0.57f, -0.67f);
    glVertex2f(-0.65f, -0.75f);
    glEnd();

    glBegin(GL_TRIANGLES);//pal 2nd
    glColor3f(1.0f, 0.4f, 0.4f);//orange
    glVertex2f(-0.65f, -0.60f);
    glVertex2f(-0.57f, -0.60f);
    glVertex2f(-0.65f, -0.75f);
    glEnd();
}

void rain()
{
    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 1
    glVertex2f(1.0f, 0.70f);
    glVertex2f(0.90f, 0.60f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 2
    glVertex2f(0.30f, 0.70f);
    glVertex2f(0.20f, 0.60f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 3
    glVertex2f(0.85f, 0.50f);
    glVertex2f(0.75f, 0.40f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 4
    glVertex2f(0.80f, 0.20f);
    glVertex2f(0.70f, 0.10f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 5
    glVertex2f(0.65f, 0.20f);
    glVertex2f(0.55f, 0.10f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 6
    glVertex2f(1.0f, 0.30f);
    glVertex2f(0.90f, 0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 7
    glVertex2f(0.80f, 0.70f);
    glVertex2f(0.70f, 0.60f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 8
    glVertex2f(0.60f, 0.70f);
    glVertex2f(0.50f, 0.60f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 9
    glVertex2f(0.60f, 0.50f);
    glVertex2f(0.50f, 0.40f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 10
    glVertex2f(0.40f, 0.50f);
    glVertex2f(0.30f, 0.40f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 11
    glVertex2f(0.20f, 0.30f);
    glVertex2f(0.10f, 0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 12
    glVertex2f(0.40f, 0.30f);
    glVertex2f(0.30f, 0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 13
    glVertex2f(0.40f, 0.50f);
    glVertex2f(0.30f, 0.40f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 14
    glVertex2f(0.0f, 0.10f);
    glVertex2f(-0.10f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 15
    glVertex2f(-0.90f, 0.70f);
    glVertex2f(-1.0f, 0.60f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 16
    glVertex2f(-0.75f, 0.50f);
    glVertex2f(-0.85f, 0.40f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 17
    glVertex2f(-0.70f, 0.20f);
    glVertex2f(-0.80f, 0.10f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 18
    glVertex2f(-0.55f, 0.20f);
    glVertex2f(-0.65f, 0.10f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 19
    glVertex2f(-0.90f, 0.30f);
    glVertex2f(-1.0f, 0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 20
    glVertex2f(-0.70f, 0.70f);
    glVertex2f(-0.80f, 0.60f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 21
    glVertex2f(-0.50f, 0.70f);
    glVertex2f(-0.60f, 0.60f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 22
    glVertex2f(-0.20f, 0.70f);
    glVertex2f(-0.30f, 0.60f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 23
    glVertex2f(-0.50f, 0.50f);
    glVertex2f(-0.60f, 0.40f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 24
    glVertex2f(-0.30f, 0.50f);
    glVertex2f(-0.40f, 0.40f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 25
    glVertex2f(-0.10f, 0.30f);
    glVertex2f(-0.20f, 0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 26
    glVertex2f(-0.30f, 0.30f);
    glVertex2f(-0.40f, 0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 27
    glVertex2f(-0.30f, 0.50f);
    glVertex2f(-0.40f, 0.40f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 28
    glVertex2f(0.0f, 0.55f);
    glVertex2f(-0.1f, 0.45f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 29
    glVertex2f(0.0f, 0.70f);
    glVertex2f(-0.1f, 0.60f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 30
    glVertex2f(1.0f, -0.60f);
    glVertex2f(0.90f, -0.70f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 31
    glVertex2f(0.30f, -0.70f);
    glVertex2f(0.20f, -0.80f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 32
    glVertex2f(0.85f, -0.40f);
    glVertex2f(0.75f, -0.50f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 33
    glVertex2f(0.80f, -0.10f);
    glVertex2f(0.70f, -0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 34
    glVertex2f(0.65f, -0.10f);
    glVertex2f(0.55f, -0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 35
    glVertex2f(1.0f, -0.10f);
    glVertex2f(0.90f, -0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 36
    glVertex2f(0.80f, -0.80f);
    glVertex2f(0.70f, -0.90f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 37
    glVertex2f(0.60f, -0.60f);
    glVertex2f(0.50f, -0.70f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 38
    glVertex2f(0.60f, -0.40f);
    glVertex2f(0.50f, -0.50f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 39
    glVertex2f(0.40f, -0.40f);
    glVertex2f(0.30f, -0.50f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 40
    glVertex2f(0.20f, -0.20f);
    glVertex2f(0.10f, -0.30f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 41
    glVertex2f(0.40f, -0.20f);
    glVertex2f(0.30f, -0.30f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 42
    glVertex2f(0.40f, -0.40f);
    glVertex2f(0.30f, -0.50f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 43
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.1f, -0.10f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 44
    glVertex2f(-0.90f, -0.60f);
    glVertex2f(-1.0f, -0.70f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 45
    glVertex2f(-0.75f, -0.40f);
    glVertex2f(-0.85f, -0.50f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 46
    glVertex2f(-0.70f, -0.10f);
    glVertex2f(-0.80f, -0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 47
    glVertex2f(-0.55f, -0.10f);
    glVertex2f(-0.65f, -0.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 48
    glVertex2f(-0.90f, -0.20f);
    glVertex2f(-1.0f, -0.30f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 49
    glVertex2f(-0.70f, -0.80f);
    glVertex2f(-0.80f, -0.90f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 50
    glVertex2f(-0.50f, -0.60f);
    glVertex2f(-0.60f, -0.70f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 51
    glVertex2f(-0.20f, -0.80f);
    glVertex2f(-0.30f, -0.90f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 52
    glVertex2f(-0.50f, -0.40f);
    glVertex2f(-0.60f, -0.50f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 53
    glVertex2f(-0.30f, -0.40f);
    glVertex2f(-0.40f, -0.50f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 54
    glVertex2f(-0.10f, -0.20f);
    glVertex2f(-0.20f, -0.30f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 55
    glVertex2f(-0.30f, -0.20f);
    glVertex2f(-0.40f, -0.30f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 56
    glVertex2f(-0.30f, -0.40f);
    glVertex2f(-0.40f, -0.50f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 57
    glVertex2f(0.0f, -0.45f);
    glVertex2f(-0.1f, -0.55f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash 58
    glVertex2f(0.0f, -0.60f);
    glVertex2f(-0.1f, -0.70f);
    glEnd();
}
///////////////////////////////////////////adrita//////////////////////////////////////////
void sky()
{
    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.6f, 0.8f); // Blue
	glVertex2f(-1.0f, 0.1f);    // x, y
	glVertex2f(1.0f, 0.1f);    // x, y
	glVertex2f(1.0f, 1.0f);    // x, y
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}

void nightsky()
{
    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.4f); // Dark Blue
	glVertex2f(-1.0f, 0.1f);    // x, y
	glVertex2f(1.0f, 0.1f);    // x, y
	glVertex2f(1.0f, 1.0f);    // x, y
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}

void moon()
{
    {
        int j;
    GLfloat p2=0.6f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;
    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );
    }
    glEnd ();
     }
      {

    int j;

    GLfloat p2=0.65f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.4f); // Dark Blue
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );
    }
    glEnd ();
    }
}

void ballon()
{
    int i;
        GLfloat p1=-0.64f; GLfloat q1= -0.16f; GLfloat r1 = 0.03f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f(1.0f, 0.4f, 1.0f); // blue
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f
        (
            p1+(r1*cos(i*tp2/tringle2)),
            q1+(r1*sin(i*tp2/tringle2))
        );
    }
    glEnd ();
}


void balon1()
{

    {
        int j;
    GLfloat p2=-0.54f; GLfloat q2= -0.02f; GLfloat r2 = 0.03f;
    int tringle3=30;
    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,0.0f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );
    }

    glEnd ();
    glLineWidth(3.0);//
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); // blue
	glVertex2f(-0.54f, -0.02f);//belon line
	glVertex2f(-0.54f, -0.15f);
	glEnd();
}
}

void balon()
    {
        int j;
    GLfloat p2=-0.56f; GLfloat q2= -0.038f; GLfloat r2 = 0.03f;
    int tringle3=30;
    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,0.0f,0.0f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );
    }
    glEnd ();
     }

void star()
{
     glLineWidth(4);
     glBegin(GL_POINTS);
     glColor3f(1.0,1.0,1.0);
     glVertex2f(-0.85,0.85);
     glVertex2f(-0.65,0.65);
     glVertex2f(-0.5,0.75);
     glVertex2f(-0.4,0.65);
     glVertex2f(-0.45,0.45);
     glVertex2f(0.0,0.90);
     glVertex2f(0.20,0.70);
     glVertex2f(0.85,0.85);
     glVertex2f(0.65,0.65);
     glVertex2f(0.45,0.45);

     glEnd();
}

void hill()
{
    //hill
    glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.7f, 0.2f); // Green
	glVertex2f(-0.20f, 0.10f);   // x, y
	glVertex2f(0.08f,0.55f);    // x, y
	glVertex2f(0.20f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.5f, 0.2f); // Green
	glVertex2f(-0.05f, 0.10f);   // x, y
	glVertex2f(-0.38f,0.50f);    // x, y
	glVertex2f(-0.60f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.7f, 0.2f); // Green
	glVertex2f(-0.90f, 0.10f);   // x, y
	glVertex2f(-0.69f,0.39f);    // x, y
	glVertex2f(-0.50f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.5f, 0.2f); // Green
	glVertex2f(-1.3f, 0.10f);   // x, y
	glVertex2f(-0.98f,0.35f);    // x, y
	glVertex2f(-0.95f,0.40f);    // x, y
	glVertex2f(-0.75f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.3f, 0.1f); // Green
	glVertex2f(0.56f, 0.10f);   // x, y
	glVertex2f(0.40f,0.48f);    // x, y
	glVertex2f(0.10f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.9f, 0.3f); // Green
	glVertex2f(0.88f, 0.10f);   // x, y
	glVertex2f(0.80f,0.70f);    // x, y
	glVertex2f(0.48f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.5f, 0.2f); // Green
	glVertex2f(1.3f, 0.10f);   // x, y
	glVertex2f(0.99f,0.50f);    // x, y
	glVertex2f(0.71f,0.10f);    // x, y
	glEnd();
}

void nighthill()
{
    //hill
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.5f, 0.3f); // Green
	glVertex2f(-0.20f, 0.10f);   // x, y
	glVertex2f(0.08f,0.55f);    // x, y
	glVertex2f(0.20f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.4f, 0.4f); // Green
	glVertex2f(-0.05f, 0.10f);   // x, y
	glVertex2f(-0.38f,0.50f);    // x, y
	glVertex2f(-0.60f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.5f, 0.3f); // Green
	glVertex2f(-0.90f, 0.10f);   // x, y
	glVertex2f(-0.69f,0.39f);    // x, y
	glVertex2f(-0.50f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.4f, 0.4f); // Green
	glVertex2f(-1.3f, 0.10f);   // x, y
	glVertex2f(-0.98f,0.35f);    // x, y
	glVertex2f(-0.95f,0.40f);    // x, y
	glVertex2f(-0.75f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.4f, 0.4f); // Green
	glVertex2f(0.56f, 0.10f);   // x, y
	glVertex2f(0.40f,0.48f);    // x, y
	glVertex2f(0.10f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.5f, 0.3f); // Green
	glVertex2f(0.88f, 0.10f);   // x, y
	glVertex2f(0.80f,0.70f);    // x, y
	glVertex2f(0.48f,0.10f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.4f, 0.4f); // Green
	glVertex2f(1.0f, 0.10f);   // x, y
	glVertex2f(0.99f,0.50f);    // x, y
	glVertex2f(0.71f,0.10f);    // x, y
	glEnd();
}

void fountain()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f); // cyan
	glVertex2f(0.85f, 0.1f);   // x, y
	glVertex2f(0.92f, 0.1f);    // x, y
	glVertex2f(0.88f, 0.4f);    // x, y
	glVertex2f(0.82f, 0.5f);
	glEnd();
}

void nightfountain()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);//dark bluep
	glVertex2f(0.85f, 0.1f);   // x, y
	glVertex2f(0.92f, 0.1f);    // x, y
	glVertex2f(0.88f, 0.4f);    // x, y
	glVertex2f(0.82f, 0.5f);
	glEnd();
}

void flineD()
{
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.87f, 0.15f);
    glVertex2f(0.86f, 0.23f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.87f, 0.33f);
    glVertex2f(0.86f, 0.41f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.89f, 0.2f);
    glVertex2f(0.88f, 0.28f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);//white
    glVertex2f(0.90f, 0.1f);
    glVertex2f(0.89f, 0.15f);
    glEnd();
}

void flineN()
{
    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.87f, 0.15f);
    glVertex2f(0.86f, 0.23f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.87f, 0.33f);
    glVertex2f(0.86f, 0.41f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.89f, 0.2f);
    glVertex2f(0.88f, 0.28f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.50f, 0.50f, 0.60f);//ash
    glVertex2f(0.90f, 0.1f);
    glVertex2f(0.89f, 0.15f);
    glEnd();
}

void toy()
{
	glBegin(GL_QUADS);//body
	glColor3f(0.7f, 0.0f, 0.5f); // magenda
	glVertex2f(-0.86f, -0.19f);// x, y
	glVertex2f(-0.84f, -0.19f);    // x, y
	glVertex2f(-0.84f, -0.16f);
	glVertex2f(-0.86f, -0.14f);
	glEnd();

	glBegin(GL_QUADS);//body
	glColor3f(0.9f, 0.2f, 1.0f); //purple
	glVertex2f(-0.84f, -0.19f);   // x, y
	glVertex2f(-0.82f, -0.19f);   // x, y
	glVertex2f(-0.82f, -0.14f);
	glVertex2f(-0.84f, -0.16f);
	glEnd();

    glLineWidth(3.0);//book middle
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.84f, -0.16f);//book
	glVertex2f(-0.84f, -0.19f);

    glEnd();
/////////book stall 3//////////
	glBegin(GL_QUADS);//body
	glColor3f(0.5f, 0.4f, 0.0f); //brown
	glVertex2f(-0.76f, -0.18f);// x, y
	glVertex2f(-0.74f, -0.18f);    // x, y
	glVertex2f(-0.74f, -0.15f);
	glVertex2f(-0.76f, -0.13f);
	glEnd();

	glBegin(GL_QUADS);//body
	glColor3f(0.5f, 0.4f, 0.0f); //brown
	glVertex2f(-0.74f, -0.18f);   // x, y
	glVertex2f(-0.72f, -0.18f);   // x, y
	glVertex2f(-0.72f, -0.13f);
	glVertex2f(-0.74f, -0.15f);
	glEnd();


///////////showpeice stall5///////////////////
    glBegin(GL_TRIANGLES);//roof
	glColor3f(0.0f, 0.8f, 1.0f); // baby pink
	glVertex2f(-0.46f, -0.19f);// x, y
	glVertex2f(-0.44f, -0.19f);    // x, y
	glVertex2f(-0.44f, -0.16f);
	glEnd();

	glBegin(GL_QUADS);//body
	glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(-0.44f, -0.19f);   // x, y
	glVertex2f(-0.42f, -0.19f);   // x, y
	glVertex2f(-0.42f, -0.14f);
	glVertex2f(-0.44f, -0.16f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.0f, 0.8f, 1.0f); // baby pink
	glVertex2f(-0.44f, -0.19f);// x, y
	glVertex2f(-0.42f, -0.19f);    // x, y
	glVertex2f(-0.40f, -0.16f);
	glEnd();

	glBegin(GL_QUADS);//body
	glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(-0.43f, -0.19f);   // x, y
	glVertex2f(-0.41f, -0.19f);   // x, y
	glVertex2f(-0.41f, -0.14f);
	glVertex2f(-0.43f, -0.16f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.0f, 0.8f, 1.0f); // baby pink
	glVertex2f(-0.44f, -0.16f);// x, y
	glVertex2f(-0.43f, -0.16f);    // x, y
	glVertex2f(-0.44f, -0.15f);
	glEnd();
/////////////house stall 6//////////////
	glBegin(GL_TRIANGLES);//roof
	glColor3f(1.0f, 0.6f, 0.3f); // orange
	glVertex2f(-0.35f, -0.16f);// x, y
	glVertex2f(-0.33f, -0.14f);    // x, y
	glVertex2f(-0.31f, -0.16f);
	glEnd();

	glBegin(GL_QUADS);//body
	glColor3f(0.9f, 0.5f, 1.0f); // pink
	glVertex2f(-0.34f, -0.19f);   // x, y
	glVertex2f(-0.32f, -0.19f);   // x, y
	glVertex2f(-0.32f, -0.16f);
	glVertex2f(-0.34f, -0.16f);
	glEnd();

	glBegin(GL_TRIANGLES);//roof
	glColor3f(0.5f, 0.5f, 1.0f); //pink
	glVertex2f(-0.38f, -0.16f);// x, y
	glVertex2f(-0.36f, -0.15f);    // x, y
	glVertex2f(-0.34f, -0.16f);
	glEnd();

	glBegin(GL_QUADS);//body
	glColor3f(0.7f, 0.0f, 0.5f); // blue
	glVertex2f(-0.37f, -0.18f);   // x, y
	glVertex2f(-0.35f, -0.18f);   // x, y
	glVertex2f(-0.35f, -0.16f);
	glVertex2f(-0.37f, -0.16f);
	glEnd();
///////////tree stall 7///////////////////
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.0f); // Dark Red
	glVertex2f(-0.25f, -0.19f);   // x, y
	glVertex2f(-0.26f, -0.19f);   // x, y
	glVertex2f(-0.26f, -0.16f);
	glVertex2f(-0.25f, -0.16f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f); // Green
    glVertex2f(-0.27f, -0.16f);// x, y
	glVertex2f(-0.26f, -0.14f);    // x, y
	glVertex2f(-0.24f, -0.16f);
    glEnd();
////////////////tree stall 7.2//////////////////
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.0f); // Dark Red
	glVertex2f(-0.22f, -0.19f);   // x, y
	glVertex2f(-0.23f, -0.19f);   // x, y
	glVertex2f(-0.23f, -0.16f);
	glVertex2f(-0.22f, -0.16f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f); // Green
    glVertex2f(-0.24f, -0.16f);// x, y
	glVertex2f(-0.23f, -0.14f);    // x, y
	glVertex2f(-0.21f, -0.16f);
    glEnd();
/////////flowerball////////////////////
GLfloat x9=-0.15f; GLfloat y9=-0.17f; GLfloat radius9=0.02f;
    glBegin(GL_TRIANGLE_FAN);//tree
    glColor3f(0.0f, 0.5f, 0.0f); // Green
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f(
                x9+ (radius9* cos(i *  twicePi / lineAmount)),
                y9 + (radius9* sin(i * twicePi / lineAmount))
            );
        }
    glEnd();
}

void flowerball2()
{
    GLfloat x9=-0.15f; GLfloat y9=-0.19f; GLfloat radius9=0.01f;
    glBegin(GL_TRIANGLE_FAN);//tree
    glColor3f(1.0f, 0.0f, 0.0f); // Green
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f(
                x9+ (radius9* cos(i *  twicePi / lineAmount)),
                y9 + (radius9* sin(i * twicePi / lineAmount))
            );
        }
    glEnd();
}

void flowerball3()
{
    GLfloat x9=-0.13f; GLfloat y9=-0.17f; GLfloat radius9=0.02f;
    glBegin(GL_TRIANGLE_FAN);//tree
    glColor3f(0.0f, 0.7f, 0.0f); // Green
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f(
                x9+ (radius9* cos(i *  twicePi / lineAmount)),
                y9 + (radius9* sin(i * twicePi / lineAmount))
            );
        }
    glEnd();
}

void flowerball4()
{
    GLfloat x9=-0.13f; GLfloat y9=-0.19f; GLfloat radius9=0.01f;
    glBegin(GL_TRIANGLE_FAN);//tree
    glColor3f(1.0f, 0.0f, 0.0f); // Green
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f(
                x9+ (radius9* cos(i *  twicePi / lineAmount)),
                y9 + (radius9* sin(i * twicePi / lineAmount))
            );
        }
    glEnd();
}

void Woman()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.9f, 0.5f, 1.0f); // baby pink
    glVertex2f(0.10f, -0.56f);// x, y
    glVertex2f(0.05f, -0.56f);    // x, y
    glVertex2f(0.07f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f( 1.0, 0.4, 0.0); // green
    glVertex2f(0.09f,-0.53f);
    glVertex2f(0.06f,-0.53f);
    glVertex2f(0.06f,-0.48f);
    glVertex2f(0.09f,-0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.8f, 0.0f ); // head
    glVertex2f(0.09f,-0.48f);
    glVertex2f(0.07f,-0.48f);
    glVertex2f(0.07f,-0.45f);
    glVertex2f(0.09f,-0.45f);
    glEnd();

    glLineWidth(3.0);//
    glBegin(GL_LINES);
    glColor3f( 0.0f,0.0f,0.0f);//black
    glVertex2f(0.09f, -0.56f);//
    glVertex2f(0.09f, -0.58f);
    glVertex2f(0.06f, -0.56f);//
    glVertex2f(0.06f, -0.58f);
    glVertex2f(0.08f, -0.45f);//
    glVertex2f(0.10f, -0.5f);
    glVertex2f(0.084f, -0.5f);//
    glVertex2f(0.10f, -0.5f);
    glVertex2f(0.086f, -0.55f);//
    glVertex2f(0.10f, -0.5f);
    glVertex2f(0.09f, -0.45f);//
    glVertex2f(0.10f, -0.5f);
    glVertex2f(0.094f, -0.55f);//
    glVertex2f(0.10f, -0.5f);
    glVertex2f(0.096f, -0.45f);//
    glVertex2f(0.10f, -0.5f);
    glVertex2f(0.06f, -0.49f);//
    glVertex2f(0.05f, -0.47f);
    glEnd();
}

void man1()
{
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.3f, 0.8f);  // baby pink
	glVertex2f(0.20f, -0.56f);   // x, y
	glVertex2f(0.15f, -0.56f);  // x, y
	glVertex2f(0.17f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f( 0.7, 0.0, 0.5); // green
    glVertex2f(0.19f,-0.53f);
    glVertex2f(0.16f,-0.53f);
    glVertex2f(0.16f,-0.48f);
    glVertex2f(0.19f,-0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.8f, 0.0f); // head
    glVertex2f(0.19f,-0.48f);
    glVertex2f(0.17f,-0.48f);
    glVertex2f(0.17f,-0.45f);
    glVertex2f(0.19f,-0.45f);
    glEnd();

    glLineWidth(3.0);//
    glBegin(GL_LINES);
    glColor3f( 0.0f,0.0f,0.0f);//black
    glVertex2f(0.19f, -0.56f);//
    glVertex2f(0.19f, -0.58f);
    glVertex2f(0.16f, -0.56f);//
    glVertex2f(0.16f, -0.58f);
    glVertex2f(0.18f, -0.45f);//
    glVertex2f(0.20f, -0.5f);
    glVertex2f(0.184f, -0.5f);//
    glVertex2f(0.20f, -0.5f);
    glVertex2f(0.186f, -0.55f);//
    glVertex2f(0.20f, -0.5f);
    glVertex2f(0.19f, -0.45f);//
    glVertex2f(0.20f, -0.5f);
    glVertex2f(0.194f, -0.55f);//
    glVertex2f(0.20f, -0.5f);
    glVertex2f(0.196f, -0.45f);//
    glVertex2f(0.20f, -0.5f);
    glVertex2f(0.16f, -0.49f);//
    glVertex2f(0.15f, -0.47f);
    glEnd();
}

///////////////////////////////////////////Tushar/////////////////////////////////////////////
void magicstall()
{
   glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(0.3f,-0.6f);   // x, y
	glVertex2f(0.6f,-0.6f);    // x, y
	glVertex2f(0.6f,-0.2f);    // x, y
	glVertex2f(0.3f,-0.2f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // green
    glVertex2f(0.3f, -0.2f);    // x, y
    glVertex2f(0.6f, -0.2f);
    glVertex2f(0.45f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f); //white
    glVertex2f(0.3f, -0.2f);    // x, y
    glVertex2f(0.3375f, -0.2f);
    glVertex2f(0.45f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f); //white
    glVertex2f(0.375f, -0.2f);    // x, y
    glVertex2f(0.4125f, -0.2f);
    glVertex2f(0.45f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f); //white
    glVertex2f(0.45f, -0.2f);    // x, y
    glVertex2f(0.4875f, -0.2f);
    glVertex2f(0.45f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f); //white
    glVertex2f(0.525f, -0.2f);    // x, y
    glVertex2f(0.5625f, -0.2f);
    glVertex2f(0.45f, -0.0f);
    glEnd();
//1st//
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f); // Green
    glVertex2f(0.3f, -0.2f);   // x, y
    glVertex2f(0.3f, -0.6f);    // x, y
    glVertex2f(0.3375f, -0.6f);    // x, y
    glVertex2f(0.3375f, -0.2f);
    glEnd();
//2nd /////
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f); // Green
    glVertex2f(0.375f, -0.2f);   // x, y
    glVertex2f(0.375f, -0.6f);    // x, y
    glVertex2f(0.4125f, -0.6f);    // x, y
    glVertex2f(0.4125f, -0.2f);
    glEnd();
//3rd///
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f); // Green
    glVertex2f(0.45f, -0.2f);   // x, y
    glVertex2f(0.45f, -0.6f);    // x, y
    glVertex2f(0.4875f, -0.6f);    // x, y
    glVertex2f(0.4875f, -0.2f);
    glEnd();
//last 2nd bar////
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f); // Green
    glVertex2f(0.525f, -0.2f);   // x, y
    glVertex2f(0.525f, -0.6f);    // x, y
    glVertex2f(0.5625f, -0.6f);    // x, y
    glVertex2f(0.5625f, -0.2f);
    glEnd();
////////////////////////////////////////gate Rudro///////////////////////////////////
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f); //black
    glVertex2f(0.395, -0.6f);    // x, y
    glVertex2f(0.45f, -0.4f);
    glVertex2f(0.5, -0.6f);
    glEnd();
}

void chorki()
{
    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.2f, 0.5f); // Dark Red
	glVertex2f(-0.02f, -0.62f);    // x, y
	glVertex2f(0.0f, -0.62f);    // x, y
	glVertex2f(0.0f, -0.15f);    // x, y
	glVertex2f(-0.02f, -0.15f);
    glEnd();

    glLineWidth(4.8);//
	glBegin(GL_LINES);
	glColor3ub(23, 23, 23);
	glVertex2f(-0.01f, -0.15f);//hand 1
	glVertex2f(-0.1f, -0.25f);
    glVertex2f(-0.01f, -0.15f);//hand 2
	glVertex2f(-0.1f, -0.04f);
	glVertex2f(-0.01f, -0.15f);//hand 3
	glVertex2f(0.07f, -0.06f);
	glVertex2f(-0.01f, -0.15f);//hand 4
	glVertex2f(0.07f, -0.25f);
	glVertex2f(-0.01f, -0.15f);//hand 5
	glVertex2f(-0.01f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); //pink
    glVertex2f(-0.12f, -0.25f);
	glVertex2f(-0.08f, -0.25f);    // x, y
    glVertex2f(-0.08f, -0.30f);    // x, y
	glVertex2f(-0.12f, -0.30f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); //pink
    glVertex2f(-0.12f, -0.04f);
	glVertex2f(-0.08f, -0.04f);    // x, y
    glVertex2f(-0.08f, -0.09f);    // x, y
	glVertex2f(-0.12f, -0.09f);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); //pink
    glVertex2f(0.09f, -0.06f);
	glVertex2f(0.05f, -0.06f);    // x, y
    glVertex2f(0.05f, -0.11f);    // x, y
	glVertex2f(0.09f, -0.11f);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); //pink
    glVertex2f(0.09f, -0.25f);
	glVertex2f(0.05f, -0.25f);    // x, y
    glVertex2f(0.05f, -0.30f);    // x, y
	glVertex2f(0.09f, -0.30f);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); //pink
    glVertex2f(-0.03f, -0.30f);
	glVertex2f(0.01f, -0.30f);    // x, y
    glVertex2f(0.01f, -0.35f);    // x, y
	glVertex2f(-0.03f, -0.35f);
    glEnd();

    int i;
        GLfloat p1=-0.01f; GLfloat q1= -0.15f; GLfloat r1 = 0.02f;
    int tringle2=40;
    GLfloat tp2 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3f(1.0f, 0.8f, 0.5f); // blue
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f
        (
            p1+(r1*cos(i*tp2/tringle2)),
            q1+(r1*sin(i*tp2/tringle2))
        );
    }
    glEnd ();
}

void bird()
{
// 1st Bird
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //color
    // x, y
    glVertex2f(-0.8f, 0.8f);// x, y
    glVertex2f(-0.75f, 0.8f);
    glVertex2f(-0.8f, 0.81f);
    glVertex2f(-0.85f, 0.85f);
    glEnd();

// 2nd Bird
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //color
    // x, y
    glVertex2f(-0.7f, 0.7f);// x, y
    glVertex2f(-0.65f, 0.7f);
    glVertex2f(-0.7f, 0.71f);
    glVertex2f(-0.75f, 0.75f);
    glEnd();

// 3rd Bird
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); //color
    // x, y
    glVertex2f(-0.9f, 0.7f);// x, y
    glVertex2f(-0.85f, 0.7f);
    glVertex2f(-0.9f, 0.71f);
    glVertex2f(-0.95f, 0.75f);
    glEnd();
}

void nightbird()
{
// 1st Bird
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); //color
    // x, y
    glVertex2f(-0.8f, 0.8f);// x, y
    glVertex2f(-0.75f, 0.8f);
    glVertex2f(-0.8f, 0.81f);
    glVertex2f(-0.85f, 0.85f);
    glEnd();

// 2nd Bird
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); //color
    // x, y
    glVertex2f(-0.7f, 0.7f);// x, y
    glVertex2f(-0.65f, 0.7f);
    glVertex2f(-0.7f, 0.71f);
    glVertex2f(-0.75f, 0.75f);
    glEnd();

// 3rd Bird
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); //color
    // x, y
    glVertex2f(-0.9f, 0.7f);// x, y
    glVertex2f(-0.85f, 0.7f);
    glVertex2f(-0.9f, 0.71f);
    glVertex2f(-0.95f, 0.75f);
    glEnd();
}
/////////////////////////////////////////Sara//////////////////////////////////////
void grass2()
{
    //Left
    /////1/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.4f, 0.0f); // Green
	glVertex2f(-0.99f, -0.63f);   // x, y
	glVertex2f(-0.96f, -0.63f);    // x, y
	glVertex2f(-0.93f, -0.35f);    // x, y

	glEnd();

	/////2/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.4f, 0.0f); // Green
	glVertex2f(-0.96f, -0.63f);   // x, y
	glVertex2f(-0.93f, -0.63f);    // x, y
	glVertex2f(-0.90f, -0.35f);    // x, y

	glEnd();

	/////3/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.4f, 0.0f); // Green
	glVertex2f(-0.93f, -0.63f);   // x, y
	glVertex2f(-0.90f, -0.63f);    // x, y
	glVertex2f(-0.87f, -0.35f);    // x, y

	glEnd();

	/////4/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.4f, 0.0f); // Green
	glVertex2f(-0.90f, -0.63f);   // x, y
	glVertex2f(-0.87f, -0.63f);    // x, y
	glVertex2f(-0.84f, -0.35f);    // x, y

	glEnd();

	/////5/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // Green
	glVertex2f(-0.93f, -0.63f);   // x, y
	glVertex2f(-0.91f, -0.63f);    // x, y
	glVertex2f(-0.95f, -0.35f);    // x, y

	glEnd();

	/////6/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f); // Green
	glVertex2f(-0.93f, -0.63f);   // x, y
	glVertex2f(-0.95f, -0.63f);    // x, y
	glVertex2f(-0.97f, -0.33f);    // x, y

	glEnd();

	/////7/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // Green
	glVertex2f(-1.f, -0.63f);   // x, y
	glVertex2f(-0.98f, -0.63f);    // x, y
	glVertex2f(-0.99f, -0.33f);    // x, y

	glEnd();

	/////8/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // Green
	glVertex2f(-0.87f, -0.63f);   // x, y
	glVertex2f(-0.90f, -0.63f);    // x, y
	glVertex2f(-0.92f, -0.37f);    // x, y

	glEnd();

	/////9/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // Green
	glVertex2f(-0.87f, -0.63f);   // x, y
	glVertex2f(-0.84f, -0.63f);    // x, y
	glVertex2f(-0.89f, -0.37f);    // x, y

	glEnd();

	/////10/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f); // Green
	glVertex2f(-0.95f, -0.63f);   // x, y
	glVertex2f(-0.97f, -0.63f);    // x, y
	glVertex2f(-0.98f, -0.37f);    // x, y

	glEnd();

	//Right
    /////1/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.4f, 0.0f); // Green
	glVertex2f(0.79f, -0.63f);   // x, y
	glVertex2f(0.76f, -0.63f);    // x, y
	glVertex2f(0.73f, -0.35f);    // x, y

	glEnd();

	/////2/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.4f, 0.0f); // Green
	glVertex2f(0.76f, -0.63f);   // x, y
	glVertex2f(0.73f, -0.63f);    // x, y
	glVertex2f(0.70f, -0.35f);    // x, y

	glEnd();

	/////3/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.4f, 0.0f); // Green
	glVertex2f(0.73f, -0.63f);   // x, y
	glVertex2f(0.70f, -0.63f);    // x, y
	glVertex2f(0.77f, -0.35f);    // x, y

	glEnd();

	/////4/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.4f, 0.0f); // Green
	glVertex2f(0.79f, -0.63f);   // x, y
	glVertex2f(0.77f, -0.63f);    // x, y
	glVertex2f(0.74f, -0.35f);    // x, y

	glEnd();

	/////5/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // Green
	glVertex2f(0.73f, -0.63f);   // x, y
	glVertex2f(0.71f, -0.63f);    // x, y
	glVertex2f(0.75f, -0.35f);    // x, y

	glEnd();

	/////6/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f); // Green
	glVertex2f(0.73f, -0.63f);   // x, y
	glVertex2f(0.75f, -0.63f);    // x, y
	glVertex2f(0.77f, -0.33f);    // x, y

	glEnd();

	/////7/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // Green
	glVertex2f(0.79f, -0.63f);   // x, y
	glVertex2f(0.78f, -0.63f);    // x, y
	glVertex2f(0.79f, -0.33f);    // x, y

	glEnd();

	/////8/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // Green
	glVertex2f(0.77f, -0.63f);   // x, y
	glVertex2f(0.80f, -0.63f);    // x, y
	glVertex2f(0.82f, -0.37f);    // x, y

	glEnd();

	/////9/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f); // Green
	glVertex2f(0.77f, -0.63f);   // x, y
	glVertex2f(0.74f, -0.63f);    // x, y
	glVertex2f(0.79f, -0.37f);    // x, y

	glEnd();

	/////10/////
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f); // Green
	glVertex2f(0.75f, -0.63f);   // x, y
	glVertex2f(0.77f, -0.63f);    // x, y
	glVertex2f(0.78f, -0.37f);    // x, y

	glEnd();
}

void Table()
{
    //////Table-1///////
    glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.96f, -0.2f); //BODY
	glVertex2f(-0.90f, -0.2f);
	glVertex2f(-0.93f, -0.15f);    // x, y
	glVertex2f(-0.99f, -0.15f);
	glEnd();

    glLineWidth(3.0);//leg
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );
	glVertex2f(-0.96f, -0.2f);//leg 1
	glVertex2f(-0.96f, -0.23f);
	glVertex2f(-0.90f, -0.2f);//leg 2
	glVertex2f(-0.90f, -0.23f);
	glVertex2f(-0.93f, -0.15f);//leg 3
	glVertex2f(-0.93f, -0.18f);
	glVertex2f(-0.99f, -0.15f);//leg 4
	glVertex2f(-0.99f, -0.18f);
	glEnd();

	//////Table-2///////
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.86f, -0.2f); //BODY
	glVertex2f(-0.80f, -0.2f);
	glVertex2f(-0.83f, -0.15f);    // x, y
	glVertex2f(-0.89f, -0.15f);
	glEnd();

    glLineWidth(3.0);//leg
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );
	glVertex2f(-0.86f, -0.2f);//leg 1
	glVertex2f(-0.86f, -0.23f);
	glVertex2f(-0.80f, -0.2f);//leg 2
	glVertex2f(-0.80f, -0.23f);
	glVertex2f(-0.83f, -0.15f);//leg 3
	glVertex2f(-0.83f, -0.18f);
	glVertex2f(-0.89f, -0.15f);//leg 4
	glVertex2f(-0.89f, -0.18f);
	glEnd();

	//////Table-3///////
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.76f, -0.2f); //BODY
	glVertex2f(-0.70f, -0.2f);
	glVertex2f(-0.73f, -0.15f);    // x, y
	glVertex2f(-0.79f, -0.15f);
	glEnd();

    glLineWidth(3.0);//leg
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );
	glVertex2f(-0.76f, -0.2f);//leg 1
	glVertex2f(-0.76f, -0.23f);
	glVertex2f(-0.70f, -0.2f);//leg 2
	glVertex2f(-0.70f, -0.23f);
	glVertex2f(-0.73f, -0.15f);//leg 3
	glVertex2f(-0.73f, -0.18f);
	glVertex2f(-0.79f, -0.15f);//leg 4
	glVertex2f(-0.79f, -0.18f);
	glEnd();

	//////Table-4///////
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.66f, -0.2f); //BODY
	glVertex2f(-0.60f, -0.2f);
	glVertex2f(-0.63f, -0.15f);    // x, y
	glVertex2f(-0.69f, -0.15f);
	glEnd();

    glLineWidth(3.0);//leg
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );
	glVertex2f(-0.66f, -0.2f);//leg 1
	glVertex2f(-0.66f, -0.23f);
	glVertex2f(-0.60f, -0.2f);//leg 2
	glVertex2f(-0.60f, -0.23f);
	glVertex2f(-0.63f, -0.15f);//leg 3
	glVertex2f(-0.63f, -0.18f);
	glVertex2f(-0.69f, -0.15f);//leg 4
	glVertex2f(-0.69f, -0.18f);
	glEnd();

	//////Table-5///////
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.46f, -0.2f); //BODY
	glVertex2f(-0.40f, -0.2f);
	glVertex2f(-0.43f, -0.15f);    // x, y
	glVertex2f(-0.49f, -0.15f);
	glEnd();

    glLineWidth(3.0);//leg
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );
	glVertex2f(-0.46f, -0.2f);//leg 1
	glVertex2f(-0.46f, -0.23f);
	glVertex2f(-0.40f, -0.2f);//leg 2
	glVertex2f(-0.40f, -0.23f);
	glVertex2f(-0.43f, -0.15f);//leg 3
	glVertex2f(-0.43f, -0.18f);
	glVertex2f(-0.49f, -0.15f);//leg 4
	glVertex2f(-0.49f, -0.18f);
	glEnd();

	//////Table-6///////
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.36f, -0.2f); //BODY
	glVertex2f(-0.30f, -0.2f);
	glVertex2f(-0.33f, -0.15f);    // x, y
	glVertex2f(-0.39f, -0.15f);
	glEnd();

    glLineWidth(3.0);//leg
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );
	glVertex2f(-0.36f, -0.2f);//leg 1
	glVertex2f(-0.36f, -0.23f);
	glVertex2f(-0.30f, -0.2f);//leg 2
	glVertex2f(-0.30f, -0.23f);
	glVertex2f(-0.33f, -0.15f);//leg 3
	glVertex2f(-0.33f, -0.18f);
	glVertex2f(-0.39f, -0.15f);//leg 4
	glVertex2f(-0.39f, -0.18f);
	glEnd();

	//////Table-7///////
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.26f, -0.2f); //BODY
	glVertex2f(-0.20f, -0.2f);
	glVertex2f(-0.23f, -0.15f);    // x, y
	glVertex2f(-0.29f, -0.15f);
	glEnd();

    glLineWidth(3.0);//leg
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );
	glVertex2f(-0.26f, -0.2f);//leg 1
	glVertex2f(-0.26f, -0.23f);
	glVertex2f(-0.20f, -0.2f);//leg 2
	glVertex2f(-0.20f, -0.23f);
	glVertex2f(-0.23f, -0.15f);//leg 3
	glVertex2f(-0.23f, -0.18f);
	glVertex2f(-0.29f, -0.15f);//leg 4
	glVertex2f(-0.29f, -0.18f);
	glEnd();

	//////Table-8///////
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.16f, -0.2f); //BODY
	glVertex2f(-0.10f, -0.2f);
	glVertex2f(-0.13f, -0.15f);    // x, y
	glVertex2f(-0.19f, -0.15f);
	glEnd();

    glLineWidth(3.0);//leg
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );
	glVertex2f(-0.16f, -0.2f);//leg 1
	glVertex2f(-0.16f, -0.23f);
	glVertex2f(-0.10f, -0.2f);//leg 2
	glVertex2f(-0.10f, -0.23f);
	glVertex2f(-0.13f, -0.15f);//leg 3
	glVertex2f(-0.13f, -0.18f);
	glVertex2f(-0.19f, -0.15f);//leg 4
	glVertex2f(-0.19f, -0.18f);
	glEnd();
}

void roundtree()
{
//tree-1
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.0f); // Dark Red
	glVertex2f(0.65f, -0.3f);    // x, y
	glVertex2f(0.69f, -0.3f);    // x, y
	glVertex2f(0.69f, 0.0f);    // x, y
	glVertex2f(0.65f, 0.0f);
    glEnd();

    GLfloat p2=0.67f; GLfloat q2= 0.11f; GLfloat r2 = 0.11f;//Middle part
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0,0.4,0.0); // green
    glVertex2f (p2,q2);
    for(int i= 0;i<=tringle3; i++)
    {
        glVertex2f
        (
            p2+(r2*cos(i*tp3/tringle3)),
            q2+(r2*sin(i*tp3/tringle3))
        );
    }
    glEnd ();

    GLfloat p3=0.75f; GLfloat q3= 0.1f; GLfloat r3 = 0.08f;//Right part
    int tringle4=40;

    GLfloat tp4 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0,0.4,0.0); // green
    glVertex2f (p3,q3);
    for(int i= 0;i<=tringle3; i++)
    {
        glVertex2f
        (
            p3+(r3*cos(i*tp4/tringle4)),
            q3+(r3*sin(i*tp4/tringle4))
        );
    }
    glEnd ();

     GLfloat p4=0.59f; GLfloat q4= 0.1f; GLfloat r4 = 0.08f;//Left part
    int tringle5=40;

    GLfloat tp5 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0,0.4,0.0); // green
    glVertex2f (p4,q4);
    for(int i= 0;i<=tringle3; i++)
    {
        glVertex2f
        (
            p4+(r4*cos(i*tp5/tringle5)),
            q4+(r4*sin(i*tp5/tringle5))
        );
    }
    glEnd ();
}

void nightroundtree()
{
//tree-1
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.0f); // Dark Red
	glVertex2f(0.65f, -0.3f);    // x, y
	glVertex2f(0.69f, -0.3f);    // x, y
	glVertex2f(0.69f, 0.0f);    // x, y
	glVertex2f(0.65f, 0.0f);
    glEnd();

    GLfloat p2=0.67f; GLfloat q2= 0.11f; GLfloat r2 = 0.11f;//Middle part
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0,0.4,0.0); // green
    glVertex2f (p2,q2);
    for(int i= 0;i<=tringle3; i++)
    {
        glVertex2f
        (
            p2+(r2*cos(i*tp3/tringle3)),
            q2+(r2*sin(i*tp3/tringle3))
        );
    }
    glEnd ();

    GLfloat p3=0.75f; GLfloat q3= 0.1f; GLfloat r3 = 0.08f;//Right part
    int tringle4=40;

    GLfloat tp4 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0,0.4,0.0); // green
    glVertex2f (p3,q3);
    for(int i= 0;i<=tringle3; i++)
    {
        glVertex2f
        (
            p3+(r3*cos(i*tp4/tringle4)),
            q3+(r3*sin(i*tp4/tringle4))
        );
    }
    glEnd ();

     GLfloat p4=0.59f; GLfloat q4= 0.1f; GLfloat r4 = 0.08f;//Left part
    int tringle5=40;

    GLfloat tp5 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0,0.4,0.0); // green
    glVertex2f (p4,q4);
    for(int i= 0;i<=tringle3; i++)
    {
        glVertex2f
        (
            p4+(r4*cos(i*tp5/tringle5)),
            q4+(r4*sin(i*tp5/tringle5))
        );
    }
    glEnd ();
}

void windwill1()
{
    glBegin(GL_QUADS);//windwill Piller
    glColor3ub(167,169,163);
    glVertex2f(0.34f,0.35f);
    glVertex2f(0.36f,0.35f);
    glVertex2f(0.37f,0.0f);
    glVertex2f(0.33f,0.0f);
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(238, 240, 241);//fan1
    glVertex2f(0.21f, 0.25f);//lomba
    glVertex2f( 0.35f, 0.35f);
    glVertex2f( 0.32f, 0.28f);//kona
    glEnd();

    glBegin(GL_TRIANGLES);//fan 3
    glColor3ub(238, 240, 241);
    glVertex2f(0.35f, 0.35f);
    glVertex2f( 0.49f, 0.40f);
    glVertex2f( 0.40f, 0.40f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(238, 240, 241);//fan2
    glVertex2f(0.35f, 0.35f);
    glVertex2f( 0.38f, 0.28f);
    glVertex2f(0.47f,0.25f);//lomba
    glEnd();

    glBegin(GL_TRIANGLES);//fan4
    glColor3ub(238, 240, 241);
    glVertex2f(0.35f, 0.35f);
    glVertex2f(0.31f,0.34f);
    glVertex2f(0.23f, 0.45f);//lomba
    glEnd();
    glPopMatrix();

    j-=0.1f;

    GLfloat x9=0.35f; GLfloat y9=0.35f; GLfloat radius9=0.023f;
    glBegin(GL_TRIANGLE_FAN);//tree
    glColor3ub(238, 240, 241);
    for(i = 0; i <= lineAmount;i++) {
    glVertex2f(
        x9+ (radius9* cos(i *  twicePi / lineAmount)),
        y9 + (radius9* sin(i * twicePi / lineAmount))
        );
        }
    glEnd();
}

void windwill2()
{
    glBegin(GL_QUADS);//windwill Piller
    glColor3ub(167,169,163);
    glVertex2f(0.64f,0.35f);
    glVertex2f(0.66f,0.35f);
    glVertex2f(0.67f,0.0f);
    glVertex2f(0.63f,0.0f);
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(238, 240, 241);//fan1
    glVertex2f(0.51f, 0.25f);//lomba
    glVertex2f( 0.65f, 0.35f);
    glVertex2f( 0.62f, 0.28f);//kona
    glEnd();

   glBegin(GL_TRIANGLES);//fan 3
    glColor3ub(238, 240, 241);
    glVertex2f(0.65f, 0.35f);
    glVertex2f( 0.79f, 0.40f);
    glVertex2f( 0.70f, 0.40f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(238, 240, 241);//fan2
    glVertex2f(0.65f, 0.35f);
    glVertex2f( 0.68f, 0.28f);
    glVertex2f(0.77f,0.25f);//lomba
    glEnd();

    glBegin(GL_TRIANGLES);//fan4
    glColor3ub(238, 240, 241);
    glVertex2f(0.65f, 0.35f);
    glVertex2f(0.61f,0.34f);
    glVertex2f(0.53f, 0.45f);//lomba
    glEnd();

  glPopMatrix();
    j-=0.1f;

  GLfloat x9=0.65f; GLfloat y9=0.35f; GLfloat radius9=0.023f;
    glBegin(GL_TRIANGLE_FAN);//tree
    glColor3ub(238, 240, 241);
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f(
                x9+ (radius9* cos(i *  twicePi / lineAmount)),
                y9 + (radius9* sin(i * twicePi / lineAmount))
            );
        }
    glEnd();
}

void signboard()
{
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.6f, 0.1f); //yellow
    glVertex2f(-0.64f, 0.05f);    // x, y
    glVertex2f(-0.46f, 0.05f);
    glVertex2f(-0.46f, 0.2f);    // x, y
    glVertex2f(-0.64f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.4f, 0.2f); //yellow
    glVertex2f(-0.62f,- 0.1f);
    glVertex2f(-0.60f, -0.1f);    // x, y
    glVertex2f(-0.60f, 0.05f);
    glVertex2f(-0.62f, 0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.4f, 0.2f); //yellow
    glVertex2f(-0.50f,- 0.1f);
    glVertex2f(-0.48f, -0.1f);    // x, y
    glVertex2f(-0.48f, 0.05f);
    glVertex2f(-0.50f, 0.05f);
    glEnd();

    /////////fair//////
    glLineWidth(3.0);//
    glBegin(GL_LINES);
    glColor3f( 0.0f,0.0f,0.0f);//black
    glVertex2f(-0.61f, 0.18f);//
    glVertex2f(-0.61f, 0.09f);
    glVertex2f(-0.61f, 0.18f);//
    glVertex2f(-0.58f, 0.18f);
    glVertex2f(-0.61f, 0.14f);//
    glVertex2f(-0.58f, 0.14f);
    glVertex2f(-0.56f, 0.18f);//
    glVertex2f(-0.58f, 0.09f);
    glVertex2f(-0.56f, 0.18f);//
    glVertex2f(-0.55f, 0.09f);
    glVertex2f(-0.57f, 0.12f);//
    glVertex2f(-0.55f, 0.12f);
    glVertex2f(-0.53f, 0.18f);//
    glVertex2f(-0.53f, 0.09f);
    glVertex2f(-0.54f, 0.18f);//
    glVertex2f(-0.52f, 0.18f);
    glVertex2f(-0.54f, 0.09f);//
    glVertex2f(-0.52f, 0.09f);
    glVertex2f(-0.51f, 0.18f);//
    glVertex2f(-0.51f, 0.09f);
    glVertex2f(-0.51f, 0.18f);//
    glVertex2f(-0.49f, 0.18f);
    glVertex2f(-0.51f, 0.13f);//
    glVertex2f(-0.49f, 0.13f);
    glVertex2f(-0.49f, 0.13f);//
    glVertex2f(-0.49f, 0.18f);
    glVertex2f(-0.51f, 0.13f);//
    glVertex2f(-0.49f, 0.09f);
    glEnd();
}

void Kite()
{
    glPushMatrix();
    glTranslatef(-0.35,0.40,0);
    glRotatef(j,0.0,0.0,1.0);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f); //red
    glVertex2f(-0.25f,0.5f);
    glVertex2f(-0.20f, 0.4f);    // x, y
    glVertex2f(-0.15f, 0.5f);
    glVertex2f(-0.20f, 0.6f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5f, 0.3f, 0.8f); // purple
    glVertex2f(-0.22f,0.3f);   // x, y
    glVertex2f(-0.18f,0.3f);    // x, y
    glVertex2f(-0.20f,0.4f);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5f, 0.3f, 0.8f); // purple
    glVertex2f(-0.15f, 0.5f);   // x, y
    glVertex2f(-0.12f, 0.47f);    // x, y
    glVertex2f(-0.12f, 0.53f);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5f, 0.3f, 0.8f); // purple
    glVertex2f(-0.25f, 0.5f);   // x, y
    glVertex2f(-0.28f, 0.47f);    // x, y
    glVertex2f(-0.28f, 0.53f);    // x, y
    glEnd();
    glPopMatrix();
}

void flower()
{
    glBegin(GL_QUADS);// Piller
    glColor3f ( 0.0,0.4,0.0); // green
    glVertex2f(0.69f,-0.64f);
    glVertex2f(0.71f,-0.64f);
    glVertex2f(0.71f,-0.54f);
    glVertex2f(0.69f,-0.54f);
    glEnd();



   glBegin(GL_TRIANGLES);
    glColor3f(0.7f, 0.0f, 0.5f); //mazenta
    glVertex2f(0.70f,-0.55f);   // x, y
    glVertex2f(0.67f,-0.58f);    // x, y
    glVertex2f(0.67f,-0.53f);    // x, y
    glEnd();



   glBegin(GL_TRIANGLES);
    glColor3f(0.7f, 0.0f, 0.5f); //mazenta
    glVertex2f(0.70f,-0.55f);   // x, y
    glVertex2f(0.74f,-0.58f);    // x, y
    glVertex2f(0.74,-0.53f);    // x, y
    glEnd();



   glBegin(GL_TRIANGLES);
    glColor3f(0.7f, 0.0f, 0.5f); //mazenta
    glVertex2f(0.70f,-0.55f);   // x, y
    glVertex2f(0.68f,-0.50f);    // x, y
    glVertex2f(0.72f,-0.50f);    // x, y
    glEnd();



   glBegin(GL_TRIANGLES);
    glColor3f(0.7f, 0.0f, 0.5f); //mazenta
    glVertex2f(0.70f,-0.55f);   // x, y
    glVertex2f(0.68f,-0.58f);    // x, y
    glVertex2f(0.72f,-0.58f);    // x, y
    glEnd();
}

void flower2 ()
{
    glBegin(GL_QUADS);// Piller
    glColor3f ( 0.0,0.4,0.0); // green
    glVertex2f(0.64f,-0.64f);
    glVertex2f(0.65f,-0.64f);
    glVertex2f(0.65f,-0.54f);
    glVertex2f(0.64f,-0.54f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.9f, 0.0f); // yellow
    glVertex2f(0.65f,-0.55f);   // x, y
    glVertex2f(0.62f,-0.58f);    // x, y
    glVertex2f(0.62f,-0.53f);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.9f, 0.0f); // yellow
    glVertex2f(0.65f,-0.55f);   // x, y
    glVertex2f(0.69f,-0.58f);    // x, y
    glVertex2f(0.69,-0.53f);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.9f, 0.0f); // yellow
    glVertex2f(0.65f,-0.55f);   // x, y
    glVertex2f(0.63f,-0.50f);    // x, y
    glVertex2f(0.67f,-0.50f);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.9f, 0.0f); // yellow
    glVertex2f(0.65f,-0.55f);   // x, y
    glVertex2f(0.63f,-0.58f);    // x, y
    glVertex2f(0.67f,-0.58f);    // x, y
    glEnd();
}

void Men()
{
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.2f, 0.0f); // yellow
	glVertex2f(-0.80f, -0.36f);// x, y
	glVertex2f(-0.75f, -0.36f);    // x, y
	glVertex2f(-0.77f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.0, 0.5 ); // green
    glVertex2f(-0.79f,-0.33f);
    glVertex2f(-0.76f,-0.33f);
    glVertex2f(-0.76f,-0.28f);
    glVertex2f(-0.79f,-0.28f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.8f, 0.0f); // blue
    glVertex2f(-0.79f,-0.28f);
    glVertex2f(-0.77f,-0.28f);
    glVertex2f(-0.77f,-0.25f);
    glVertex2f(-0.79f,-0.25f);
    glEnd();

    glLineWidth(3.0);//
    glBegin(GL_LINES);
    glColor3f(0.8f, 0.8f, 0.5f); // blue
    glVertex2f(-0.79f, -0.36f);//
    glVertex2f(-0.79f, -0.38f);
    glVertex2f(-0.76f, -0.36f);//
    glVertex2f(-0.76f, -0.38f);
    glVertex2f(-0.78f, -0.25f);//
    glVertex2f(-0.80f, -0.3f);
    glVertex2f(-0.784f, -0.25f);//
    glVertex2f(-0.80f, -0.3f);
    glVertex2f(-0.76f, -0.29f);//
    glVertex2f(-0.75f, -0.27f);
    glEnd();

    glLineWidth(3.0);//
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); // blue
    glVertex2f(-0.786f, -0.25f);//
    glVertex2f(-0.80f, -0.3f);
    glVertex2f(-0.79f, -0.25f);//
    glVertex2f(-0.80f, -0.3f);
    glVertex2f(-0.794f, -0.25f);//
    glVertex2f(-0.80f, -0.3f);
    glVertex2f(-0.796f, -0.25f);//
    glVertex2f(-0.80f, -0.3f);
    glEnd();

}
//////////////////////////===============Display===========/////////////////////////////
/////////////////////////////////////////Faiza///////////////////////////////////////////

void display()
{
     if(nightStatus==0)
    {
        ///day
     glLineWidth(1.5);
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);

        sky();//adrita
        Kite();//sara

        glPushMatrix();//sun
        glTranslatef(0.0f,Sun_position, 0.0f);
        sun();
        glPopMatrix();

        glPushMatrix();//cloud
        glTranslatef(position_cloud,0.0f, 0.0f);
        cloud();
        glPopMatrix();

        grass();
        sideriver();

        glPushMatrix();//side river line
        glTranslatef(0.0f,b3position, 0.0f);
        sideriverLineD();
        glPopMatrix();
///////////////////////////////////////////Tushar/////////////////////////////////////////////
        glPushMatrix();
        glTranslatef(Bird_position,0.0f,0.0f);
        bird();
        glPopMatrix();
///////////////////////////////////////////Adrita////////////////////////////////////////////////////////
        hill();
        fountain();
        glPushMatrix();
        glTranslatef(0.0f,b3position, 0.0f);
        flineD();
        glPopMatrix();

        Table();//Sara
        ballon();
        toy();
        flowerball2();
        flowerball3();
        flowerball4();
        balon1();
        balon();
////////////////////////////////////////////Sara////////////////////////////////////////
        grass2();
        windwill1();
        windwill2();
        roundtree();
        signboard();
        flower();
        flower2();
////////////////////////////////////////////Faiza///////////////////////////////////////////////
        tree();
        stall();
        chair();
        man1();//adrita
        Woman();//adrita
        glPushMatrix();//sara
        glTranslatef(menposition, 0.0f, 0.0f);
        Men();
        glPopMatrix();
        magicstall();//Tushar

        glPushMatrix();//robot
        glTranslatef(0.0f, r1position, 0.0f);
        robot();
        glPopMatrix();

        river();

        glPushMatrix();//river line
        glTranslatef(b2position, 0.0f, 0.0f);
        riverLineD();
        glPopMatrix();

        chorki();//tushar

        glPushMatrix();//boat
        glTranslatef(b1position, 0.0f, 0.0f);
        boat();
        glPopMatrix();

        if(rainStatus==1)
        {
            glPushMatrix();//rain
            glTranslatef(0.0f,rain_position, 0.0f);
            rain();
            glPopMatrix();
        }

        glFlush();
}
   else
    {
        //night
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
//////////////////////////////////////Adrita//////////////////////////////////////////
        nightsky();
        star();

        glPushMatrix();
        glTranslatef(0.0f,Sun_position, 0.0f);
        moon();
        glPopMatrix();
//////////////////////////////////////Faiza//////////////////////////////////////////
        glPushMatrix();//cloud
        glTranslatef(position_cloud,0.0f, 0.0f);
        nightcloud();
        glPopMatrix();
//////////////////////////////////////Adrita//////////////////////////////////////////
        nightgrass();
        nighthill();
        nightfountain();

        glPushMatrix();
        glTranslatef(0.0f,b3position, 0.0f);
        flineN();
        glPopMatrix();

        Table();//Sara
        ballon();
        toy();
        flowerball2();
        flowerball3();
        flowerball4();
        balon1();
        balon();
/////////////////////////////////////Tushar//////////////////////////////////////////
        glPushMatrix();
        glTranslatef(Bird_position,0.0f,0.0f);
        nightbird();
        glPopMatrix();
/////////////////////////////////////Sara///////////////////////////////////////////
        grass2();
        windwill1();
        windwill2();
        signboard();
        nightroundtree();
        flower();
        flower2();
//////////////////////////////////////Faiza//////////////////////////////////////////
        nighttree();
        stall();
        chair();
        man1();//adrita
        Woman();//adrita
        glPushMatrix();//sara
        glTranslatef(menposition, 0.0f, 0.0f);
        Men();
        glPopMatrix();
        magicstall();//tushar

        glPushMatrix();//robot
        glTranslatef(r1position, 0.0f, 0.0f);
        robot();
        glPopMatrix();

        glPushMatrix();
        nightsideriver();
        nightriver();

        glPushMatrix();//side river line
        glTranslatef(0.0f,b3position, 0.0f);
        sideriverLineN();
        glPopMatrix();

        glPushMatrix();//river line
        glTranslatef(b2position, 0.0f, 0.0f);
        riverLineN();
        glPopMatrix();

        chorki();//tushar

        glPushMatrix();//boat
        glTranslatef(b1position, 0.0f, 0.0f);
        nightboat();
        glPopMatrix();


        if(rainStatus==1)
        {
            glPushMatrix();//rain
            glTranslatef(0.0f,rain_position, 0.0f);
            rain();
            glPopMatrix();
        }

        glFlush();

    }
}
/////////////////////////////===========Mouse===================////////////////////////
///faiza
void handleMouse(int button, int state, int x, int y) {
if (button == GLUT_LEFT_BUTTON)
{
    Sun_speed += 0.1f;
}
if (button == GLUT_RIGHT_BUTTON)
{
    Sun_speed -= 0.1f;   }
    glutPostRedisplay();
}
//////////////////////////=========Keyboard=================///////////////////////////
///faiza
void handleKeypress(unsigned char key, int x, int y)
{

    if (key == 'a' || key == 'a')//boat stop
    {
        b1speed = 0.0f;
	}
	if (key == 'A' || key == 'A')//boat fast
	{
        b1speed += 0.1f;
	}
	if (key == 'b' || key == 'b')//river line fast
    {
        b2speed += 0.1f;
	}
	if (key == 'B' || key == 'B')//river line slow
	{
        b2speed -= 0.1f;
	}
	if (key == 'c' || key == 'c')//cloud stop
    {
        speed_cloud = 0.0f;
	}
	if (key == 'C' || key == 'C')//cloud fast
	{
        speed_cloud += 0.1f;
	}
	if (key == 'n' || key == 'n')//day
    {
        nightStatus=0;
	}
	if (key == 'N' || key == 'N')//night
	{
        nightStatus=1;
	}
	if (key == 'r' || key == 'r')//rain stop
    {
        rainStatus=0;
	}
	if (key == 'R' || key == 'R')//rain
	{
        rainStatus=1;
	}
glutPostRedisplay();

}
///faiza
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Carnival of Hamlet");
	glutInitWindowSize(500, 500);
	glutInitWindowPosition (100, 200);
	glutDisplayFunc(display);
    glutMouseFunc(handleMouse);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, boat, 0);
    glutTimerFunc(100, riverline, 0);
    glutTimerFunc(100, Sun, 0);
    glutTimerFunc(100, cloud, 0);
    glutTimerFunc(100, robot, 0);
//    glutTimerFunc(100, robot2, 0);
    glutTimerFunc(100, Bird, 0);//tushar
    glutTimerFunc(100, Rain, 0);
    glutTimerFunc(100, Fountain, 0);//adrita
    glutTimerFunc(100, men, 0);//sara

    cout<<"Press 'a' for stop the boat"<< endl << endl;
    cout<<"Press 'A' for high speed of the boat"<< endl << endl;
    cout<<"Press 'b' for high speed of riverline"<< endl << endl;
    cout<<"Press 'B' for low speed of riverline"<< endl << endl;
    cout<<"Press 'c' for stop the cloud"<< endl << endl;
    cout<<"Press 'C' for high speed of the cloud"<< endl << endl;
    cout<<"Press 'n' for day mode"<< endl << endl;
    cout<<"Press 'N' for night mode"<< endl << endl;
    cout<<"Press 'r' for stop the rain"<< endl << endl;
    cout<<"Press 'R' for start the rain"<< endl << endl;

    cout<<"Press 'left button of mouse' for high speed of the sun"<< endl << endl;
    cout<<"Press 'right button of mouse' for low speed of the sun"<< endl << endl;
	glutMainLoop();
	return 0;
}
