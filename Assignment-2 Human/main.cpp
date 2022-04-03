#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 106.369,47.656 );
glVertex2i(  64.198,47.656 );
glVertex2i( 64.198,60.019 );
glVertex2i( 106.369,60.019  );
glEnd();
glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 106.369,60.019 );
glVertex2i(  85.347,60.019  );
glVertex2i( 85.347,72.05 );
glVertex2i( 106.369,72.05  );
glEnd();
glColor3ub (163, 228, 215);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 106.369,72.05 );
glVertex2i(  85.347,72.05  );
glVertex2i( 85.347,84.192 );
glVertex2i( 106.369, 84.192  );
glEnd();

glColor3ub (31, 97, 141 );
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 106.369, 84.192 );
glVertex2i(  85.347,84.192  );
glVertex2i( 85.347,167.017 );
glVertex2i( 106.369, 167.017  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 167.095,47.337 );
glVertex2i(  124.924,47.337  );
glVertex2i( 124.924,60.019 );
glVertex2i( 167.095,60.019    );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 146.073,60.019 );
glVertex2i(  124.924,60.019  );
glVertex2i( 124.924,72.05 );
glVertex2i( 146.073,72.05    );
glEnd();

glColor3ub (163, 228, 215);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 146.073,72.05 );
glVertex2i(  124.924,72.05  );
glVertex2i( 124.924,84.192 );
glVertex2i( 146.073,84.192   );
glEnd();
glColor3ub (31, 97, 141 );
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 146.073,84.192 );
glVertex2i(  124.924,84.192  );
glVertex2i( 124.924,167.017 );
glVertex2i( 146.073,167.017   );
glEnd();

glColor3ub (31, 97, 141);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 146.073,167.017 );
glVertex2i(  85.347,167.017  );
glVertex2i( 85.347,182.329 );
glVertex2i( 146.073,182.329  );
glEnd();
glColor3ub (93, 109, 126  );
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 146.073,182.329 );
glVertex2i(  85.347,182.329 );
glVertex2i( 85.347,186.145  );
glVertex2i( 146.073, 186.145  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 112.785, 186.005 );
glVertex2i(  85.347,186.005 );
glVertex2i( 85.347,242.597   );
glVertex2i( 112.785, 242.597  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 146.073, 186.145 );
glVertex2i(  119.962 ,186.005 );
glVertex2i(  119.962,242.597   );
glVertex2i( 146.073, 242.597  );
glEnd();

glColor3ub (93, 109, 126 );
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 119.962 ,186.005 );
glVertex2i(  112.785, 186.005 );
glVertex2i(  112.785,232.987   );
glVertex2i( 119.962, 232.987  );
glEnd();

glColor3ub (248, 249, 249);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 119.962, 232.987 );
glVertex2i(  112.785,232.987 );
glVertex2i(  112.785, 242.597   );
glVertex2i( 119.962, 242.597  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 107.392 , 242.597 );
glVertex2i(  85.347,242.597);
glVertex2i(  85.347, 253.766   );
glVertex2i( 107.392 , 253.766  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 146.073, 242.597 );
glVertex2i(  125.948,242.597);
glVertex2i(  125.948, 253.766   );
glVertex2i( 146.073 , 253.766  );
glEnd();

glColor3ub (248, 249, 249);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i( 125.948,242.597 );
glVertex2i(  107.392 , 242.597);
glVertex2i(  107.392 , 253.766   );
glVertex2i( 125.948 , 253.766  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  85.95,174.673 );
glVertex2i(  78.736 , 174.673);
glVertex2i(  78.736, 272.504   );
glVertex2i(  85.95, 272.504  );
glEnd();

glColor3ub (251, 238, 230);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  93.442 ,166.977 );
glVertex2i(  78.736 , 166.977);
glVertex2i(  78.736 , 174.673  );
glVertex2i(  93.442,174.673  );
glEnd();

glColor3ub (251, 238, 230);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  85.347 ,159.141 );
glVertex2i(  78.736 , 159.179 );
glVertex2i(  78.736 , 167.055  );
glVertex2i(  85.347,167.055  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  153.915 ,174.316  );
glVertex2i(  146.676 , 174.316 );
glVertex2i(  146.676 , 272.504  );
glVertex2i(  153.915,272.504  );
glEnd();
glColor3ub (251, 238, 230);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  153.915 ,166.659  );
glVertex2i(  139.263  , 166.659 );
glVertex2i(  139.263  , 174.316  );
glVertex2i(  153.915 ,174.316  );
glEnd();

glColor3ub (251, 238, 230);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  153.915 ,158.948  );
glVertex2i(  146.755  , 158.948 );
glVertex2i(  146.755  , 166.659  );
glVertex2i(  153.915 ,166.659  );
glEnd();
glColor3ub (248, 249, 249);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  135.051 ,253.766  );
glVertex2i(  98.407  , 253.766 );
glVertex2i(  98.407  , 264.89  );
glVertex2i(  135.051 ,264.89  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  98.407 ,253.766  );
glVertex2i(  85.365  , 253.766 );
glVertex2i(  85.365  , 283.639   );
glVertex2i(  98.407 ,283.639  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  143.23 ,253.766  );
glVertex2i(  135.051  , 253.766 );
glVertex2i(  135.051  , 275.884  );
glVertex2i(  143.23 ,275.884  );
glEnd();


glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  147.14  ,253.766  );
glVertex2i(  143.23  , 253.766 );
glVertex2i(  143.23  , 272.504  );
glVertex2i(  147.14  , 272.504  );
glEnd();


glColor3ub (251, 238, 230);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  135.051 ,253.766  );
glVertex2i(  98.407   , 253.766 );
glVertex2i(  98.407   , 264.89  );
glVertex2i(  135.051  , 264.89  );
glEnd();


glColor3ub (251, 238, 230);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  148.166 ,264.89  );
glVertex2i(  98.407   , 264.89 );
glVertex2i(  98.407   , 317.956  );
glVertex2i(  148.166  , 317.956  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  98.407 ,283.576  );
glVertex2i(   94.068  , 283.576 );
glVertex2i(  94.068   , 291.1  );
glVertex2i(  98.407  , 291.1  );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  158.688 ,303.931  );
glVertex2i(   148.166 , 303.931 );
glVertex2i(  148.166  , 313.065  );
glVertex2i(  158.688  , 313.065 );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  148.166 ,309.884  );
glVertex2i(    143.296, 309.884 );
glVertex2i(   143.296 , 313.065  );
glVertex2i(  148.166  , 313.065 );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  143.296 ,303.931  );
glVertex2i(   130.126 , 303.931 );
glVertex2i(  130.126 , 313.065  );
glVertex2i(  143.296  , 313.065 );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  121.485 ,295.036  );
glVertex2i(   116.946  , 295.036 );
glVertex2i(  116.946  , 317.956  );
glVertex2i(  121.485  , 317.956 );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  142.483 ,317.726  );
glVertex2i(  94.248  , 317.726 );
glVertex2i(  94.248  , 333.159  );
glVertex2i(  142.483  , 333.159 );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  158.688 ,317.726 );
glVertex2i(  142.483 ,317.726 );
glVertex2i(  142.483  , 340.646  );
glVertex2i(  158.688  ,340.646 );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  117.048  ,314.443  );
glVertex2i(  112.128  ,314.443 );
glVertex2i(  112.128   , 317.885  );
glVertex2i(  117.048   ,317.885 );
glEnd();

glColor3ub (40, 55, 71);
glPointSize(1.0);
glBegin(GL_QUADS);
glVertex2i(  112.128  ,306.486   );
glVertex2i(  94.189   ,306.486  );
glVertex2i(  94.189    , 317.885  );
glVertex2i(  112.128   , 317.885 );
glEnd();


glFlush ();

}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
