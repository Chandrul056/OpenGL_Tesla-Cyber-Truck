#include<glut.h>
#include<math.h>
float x1=0.15,y2=0.1,r=0.08,theta=0,x,y;
float u1=0.15,v2=0.1,r2=0.03,theta2=0,u,v;

float a1=0.7,b2=0.1,r1=0.08,theta1=0,a,b;
float c1=0.7,d2=0.1,r3=0.03,theta3=0,c,d;
float i;

//To display Tesla Cyber Truck
void disp()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.135,0.206,0.235,0.242);
	//glClearColor(0.211,0.211,0.211,0.211);
	glLineWidth(3);
	glPointSize(2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.128,0.128,0.128);
	glVertex2f( 0+i, 0.25);
	glVertex2f( 0.35+i, 0.4);
	glVertex2f( 0.925+i, 0.3);
	glVertex2f( 0.875+i, 0.1);
	glVertex2f(0.8+i,0.075);
	glVertex2f( 0.8+i,0.15 );
	glVertex2f( 0.75+i,0.2 );
	glVertex2f( 0.65+i,0.2 );
	glVertex2f( 0.6+i,0.15 );
	glVertex2f( 0.6+i,0.075 );
	glVertex2f( 0.55+i,0.075 );
	glVertex2f( 0.45+i,0.075 );
	glVertex2f( 0.25+i,0.075 );
	glVertex2f( 0.25+i,0.15 );
	glVertex2f( 0.2+i,0.2 );
	glVertex2f( 0.1+i, 0.2);
	glVertex2f( 0.05+i,0.15 );
	glVertex2f( 0.05+i,0.075 );
	glVertex2f( 0.025+i,0.1 );
	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.128,0.128,0.128);
	glVertex2f( 0+i, 0.25);
	glVertex2f( 0.925+i, 0.3);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.128,0.128,0.128);
	glVertex2f( 0.25+i, 0.1);
	glVertex2f( 0.45+i, 0.1);
	glVertex2f( 0.45+i, 0.1);
	glVertex2f( 0.55+i, 0.1);
	glVertex2f( 0.55+i, 0.1);
	glVertex2f( 0.6+i, 0.1);

	glVertex2f( 0.55+i, 0.075);
	glVertex2f( 0.55+i, 0.280);
	glVertex2f( 0.45+i, 0.075);
	glVertex2f( 0.45+i, 0.275);

	glVertex2f( 0.35+i, 0.225);
	glVertex2f( 0.4+i, 0.225);

	glVertex2f( 0.475+i, 0.225);
	glVertex2f( 0.525+i, 0.225);

	glVertex2f( 0.8+i, 0.125);
	glVertex2f( 0.888+i, 0.15);

	glVertex2f( 0.025+i, 0.1);
	glVertex2f( 0.05+i, 0.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.128,0.128,0.128);
	glVertex2f( 0+i, 0.25);
	glVertex2f( 0.925+i, 0.3);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.128,0.128,0.128);
	glVertex2f( 0.15+i, 0.275);
	glVertex2f( 0.35+i, 0.35);
	glVertex2f( 0.55+i, 0.325);
	glVertex2f( 0.55+i, 0.3);
	glEnd();


	//To draw Front Outer Wheel
	glColor3f(0,0,0);
	for(theta=0;theta<=360;theta+=0.1)
	{
		x=(x1+i)+r*cos(theta);
		y=(y2)+r*sin(theta);
		glBegin(GL_POINTS);
		glVertex2f(x,y);
		glEnd();
		
	}

	//To draw Front Inner Wheel
	glColor3f(0,0,0);
	for(theta2=0;theta2<=360;theta2+=0.1)
	{
		u=(u1+i)+r2*cos(theta2);
		v=(v2)+r2*sin(theta2);
		glBegin(GL_POINTS);
		glVertex2f(u,v);
		glEnd();
	}




	//To draw Back Outer Wheel
	glColor3f(0,0,0);
	for(theta1=0;theta1<=360;theta1+=0.1)
	{
		a=(a1+i)+r1*cos(theta1);
		b=(b2)+r1*sin(theta1);
		glBegin(GL_POINTS);
		glVertex2f(a,b);
		glEnd();
	}

	//To draw Back Inner Wheel
	glColor3f(0,0,0);
	for(theta3=0;theta3<=360;theta3+=0.1)
	{
		c=(c1+i)+r3*cos(theta3);
		d=(d2)+r3*sin(theta3);
		glBegin(GL_POINTS);
		glVertex2f(c,d);
		glEnd();
	}



	glFinish();
}


// Press 'L' to move towards left and Press 'R' to move towards right
void keys(unsigned char k, int x, int y)
{
		if(k=='l')
			i=i-0.01;
		if(k=='r')
			i=i+0.01;
		disp();
}
void main()
{
	glutCreateWindow("Tesla Cyber Truck");
	glutDisplayFunc(disp);
	glutKeyboardFunc(keys);
	glutMainLoop();
}