#include <SFML/Graphics.hpp>
//크기는 650px가 적당하나 우선 기존 픽셀을 파악하기 위해 선정
#define WIDTH 450
#define HEIGHT 450

using namespace sf;

int main(void)
{
	RenderWindow app(VideoMode(WIDTH, HEIGHT), "foodGame");
	app.setFramerateLimit(60);

	//이미지 가져오기
	Texture t;
	t.loadFromFile("images/main.png");

	Sprite Backgroud(t);

	//앱 실행
	while (app.isOpen())
	{
		Event e;
		while (app.pollEvent(e))
		{
			if (e.type == Event::Closed)
				app.close();
		}
		app.clear();
		app.draw(Backgroud);
		app.display();
	}
}