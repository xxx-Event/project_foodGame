#include <SFML/Graphics.hpp>
#include<time.h>
#include <Windows.h> 
#pragma comment(lib,"winmm.lib") 
#include <mmsystem.h> 

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

	//음악재생
	PlaySound(TEXT("bgm.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP);

	int cnt = 5;

	//앱 실행
	while (app.isOpen())
	{

		Event e;
		while (app.pollEvent(e))
		{	
			Sleep(1000);
			cnt -= 1;
			if (cnt <0&&e.type == Event::Closed)
				app.close();
		}
		app.clear();
		app.draw(Backgroud);
		app.display();
	}
}