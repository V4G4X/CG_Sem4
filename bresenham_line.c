#include<stdio.h>
#include<math.h>
#include<GL/freeglut.h>
#include<GL/gl.h>

int main(int argc, char** argv){
	glutInit(argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Bresenham Line");
	
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glutDisplayFunc(render);
	 
	 glutMainLoop();
}

void swap(int*x,int*x1){
	int c = *x;
	*x = *x1;
	*x1 = c;
}

void axis(){
	dda(-750,0,750,0);
	dda(0,-750,0,750);
}

void render(){
	gluOrtho2D(750,-750,750,-750);
	axis();
	
	
	
	glFlush();
}

void bresen(int x0,int y0,int x1,int y1){
	if(x0>x1){
		swap(x0,x1);
		swap(y0,y1);
	}
	
	
	
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	glEnd();
}
