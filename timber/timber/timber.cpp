//include important libraries
#include<SFML/Graphics.hpp>

//make code esaier to type with "using namespace"
using namespace sf;

int main()
{
	//create a video mode object
	VideoMode vm(1920, 1080);

	//create and open a window for the game
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	//create a texture to hold a graphic on the gpu
	Texture texturebackground;

	//load a graphic into texture
	texturebackground.loadFromFile("graphics/background.png");

	//create a sprite
	Sprite spritebackground;

	//atttach the texture to the sprite
	spritebackground.setTexture(texturebackground);

	//set the spritebackground to cover the screen
	spritebackground.setPosition(0, 0);

	while (window.isOpen())
	{
		/********************handle the player input********************/
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
		/********************update the scene********************/
		/********************draw the scene********************/
		//clear everything from the last frame
		window.clear();

		//draw our game scene here
		window.draw(spritebackground);

		//show every thing we just draw
		window.display();
	}

	return 0;
}