#include <stdio.h>

     /*�e�N���X*/
class �e�N���X
{
public:

	            /*�֐���*/
	            /*�֐���*/
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	float size;
	float radius;
};

     /*�~�N���X*/   /*�e�N���X*/
class  Circle:public �e�N���X
{
public:
	void Size();
	void Draw() { printf("�ʐ� %f\n", size); };
};

     /*�l�p�N���X*/    /*�e�N���X*/
class  Rectangle:public �e�N���X
{
public:
	void Size() override;
	void Draw() { printf("�ʐ� %f\n", size); };
};

   /*�e�N���X*/
void �e�N���X::Size() {}

  /*�~�N���X*/
void Circle::Size()
{
	radius = 5.0f;
	printf("�~�̔��a %f\n", radius);
	size = radius * radius * 3.14f;
}

   /*�l�p�N���X*/
void  Rectangle::Size()
{
	radius = 5.0f;
	printf("��`�̔��a %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

int main(void) {

	/*�e�N���X*/          /*�~�N���X*/   /*�l�p�N���X*/
	�e�N���X*ishape[2] = { new  Circle, new Rectangle };

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;
}