#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI 3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glBegin(GL_QUADS);
glColor3ub(77, 77, 51);
glVertex2f(-.2,.25);
glVertex2f(-.2,.15);
glVertex2f(.3,.15);
glVertex2f(.3,.25);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 153, 0);
glVertex2f(-.2,.15);
glVertex2f(-.2,.05);
glVertex2f(.3,.05);
glVertex2f(.3,.15);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 26);
glVertex2f(-.2,.05);
glVertex2f(-.2,-.05);
glVertex2f(.3,-.05);
glVertex2f(.3,.05);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-.2,-.05);
glVertex2f(-.2,-.35);
glVertex2f(.3,-.35);
glVertex2f(.3,-.05);
glEnd();
glBegin(GL_QUADS);
glColor3ub(77, 77, 51);
glVertex2f(-.15,.35);
glVertex2f(-.15,.05);
glVertex2f(.25,.05);
glVertex2f(.25,.35);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-.10,.25);
glVertex2f(-.10,.15);
glVertex2f(.20,.15);
glVertex2f(.20,.25);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 153, 0);
glVertex2f(0.0,.450);
glVertex2f(0.0,.35);
glVertex2f(0.20,.35);
glVertex2f(0.200,0.45);
glEnd();
glBegin(GL_QUADS);
glColor3ub(230, 138, 0);
glVertex2f(0.03,.450);
glVertex2f(0.03,.35);
glVertex2f(-0.050,.35);
glVertex2f(-0.05,0.45);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 26);
glVertex2f(0.03,.850);
glVertex2f(0.03,.45);
glVertex2f(-0.050,.45);
glVertex2f(-0.05,0.85);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 51);
glVertex2f(0.03,.850);
glVertex2f(0.03,.45);
glVertex2f(0.20,.45);
glVertex2f(0.200,0.85);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(0.03,.850);
glVertex2f(0.03,.75);
glVertex2f(0.120,.75);
glVertex2f(0.12,0.85);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 0);
glVertex2f(-.15,.05);
glVertex2f(-.15,-.05);
glVertex2f(.25,-.05);
glVertex2f(.25,.05);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 13, 26);
glVertex2f(-0.03,-.05);
glVertex2f(-0.03,-.15);
glVertex2f(-0.150,-.15);
glVertex2f(-0.15,-0.05);
glEnd();
glBegin(GL_QUADS);
glColor3ub(92, 92, 61);
glVertex2f(-0.15,-.15);
glVertex2f(-0.15,-.450);
glVertex2f(-0.090,-.45);
glVertex2f(-0.09,-0.15);
glEnd();
glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.09,-.15);
glVertex2f(-0.09,-.450);
glVertex2f(-0.030,-.45);
glVertex2f(-0.03,-0.15);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 13, 26);
glVertex2f(-0.15,-.45);
glVertex2f(-0.15,-.550);
glVertex2f(-0.090,-.55);
glVertex2f(-0.09,-0.45);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 51);
glVertex2f(-0.09,-.45);
glVertex2f(-0.09,-.550);
glVertex2f(-0.030,-.55);
glVertex2f(-0.03,-0.45);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 26);
glVertex2f(-.09,-.05);
glVertex2f(-.09,-.25);
glVertex2f(.25,-.25);
glVertex2f(.25,-.05);
glEnd();
glBegin(GL_QUADS);
glColor3ub(92, 92, 61);
glVertex2f(0.20,-.25);
glVertex2f(0.20,-.450);
glVertex2f(0.150,-.45);
glVertex2f(0.15,-0.25);
glEnd();
glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(0.20,-.15);
glVertex2f(0.20,-.450);
glVertex2f(0.250,-.45);
glVertex2f(0.25,-0.15);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 13, 26);
glVertex2f(0.20,-.45);
glVertex2f(0.20,-.550);
glVertex2f(0.150,-.55);
glVertex2f(0.15,-0.45);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0,0,26);
glVertex2f(0.20,-.45);
glVertex2f(0.20,-.550);
glVertex2f(0.250,-.55);
glVertex2f(0.25,-0.45);
glEnd();

glFlush(); // Render now
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
glutInitWindowSize(320, 320); // Set the window's initial width & height
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}