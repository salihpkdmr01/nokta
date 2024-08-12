#include <stdio.h>

struct point
{
	int x, y, z;
};
		//QP = quick print//
		static void QP(struct point p)

		{
			printf("Point 1; X:[%d] Y:[%d] Z:[%d]\n", p.x,p.y,p.z);
		}
	//		//int main()
	//		{

	//			struct	point p1;
	//			p1.x = 11;
	//			p1.y = 17;
	//			p1.z = 12;

	//			QP(p1);

	//			struct point p2;
	//			p2.x = 12;
	//			p2.y = 122;
	//			p2.z =11;

	//			QP (p2);






	//return 0;
	//		}