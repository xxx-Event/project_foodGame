#include <SFML/Graphics.hpp>
#define WIDTH 650
#define HEIGHT 650

using namespace sf;

int main(void)
{
	RenderWindow app(VideoMode(WIDTH, HEIGHT), "foodGame");
	app.setFramerateLimit(60);

	Texture t;
	t.loadFromFile("images/main.png");

	Sprite Backgroud(t);

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