// include important libraries here
#include <SFML/Graphics.hpp>

//make code easier to type with "using namespce"
using namespace sf;

//this is where our game starts from
int main()
{
	//create a video mode object
	VideoMode vm(1920, 1080);

	//create  and open a window for the game 
	RenderWindow window(vm, "timber!!!", Style::Fullscreen);

	//create a texture to hold a graphics on the gpu
	Texture texturebackground;

	//load a graphics into the texture
	texturebackground.loadFromFile("graphics/background.png");

	//create a sprite
	Sprite spritebackground;

	//attach the texture to the sprite
	spritebackground.setTexture(texturebackground);

	//set the sprite background to the cover the screen
	spritebackground.setPosition(0, 0);

	while (window.isOpen())
	{
		/**********************handle the player input**********************/

		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

		/**********************update the scene**********************/

		/**********************draw the scene**********************/

		//clear everything from the last frame
		window.clear();

		//draw our scene here
		window.draw(spritebackground);

		//show everything we just draw
		window.display();
	}

	return 0;
}