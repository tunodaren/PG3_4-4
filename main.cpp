#include <stdio.h>

     /*親クラス*/
class 親クラス
{
public:

	            /*関数名*/
	            /*関数名*/
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	float size;
	float radius;
};

     /*円クラス*/   /*親クラス*/
class  Circle:public 親クラス
{
public:
	void Size();
	void Draw() { printf("面積 %f\n", size); };
};

     /*四角クラス*/    /*親クラス*/
class  Rectangle:public 親クラス
{
public:
	void Size() override;
	void Draw() { printf("面積 %f\n", size); };
};

   /*親クラス*/
void 親クラス::Size() {}

  /*円クラス*/
void Circle::Size()
{
	radius = 5.0f;
	printf("円の半径 %f\n", radius);
	size = radius * radius * 3.14f;
}

   /*四角クラス*/
void  Rectangle::Size()
{
	radius = 5.0f;
	printf("矩形の半径 %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

int main(void) {

	/*親クラス*/          /*円クラス*/   /*四角クラス*/
	親クラス*ishape[2] = { new  Circle, new Rectangle };

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;
}