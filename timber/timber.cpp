//Include important libraries here

#include<SFML/Graphics.hpp>

using namespace sf;

int main()
{
	//video mode object
	VideoMode vm(1920, 1080);

	//create ,open window for game
	RenderWindow window(vm, "timber!!", Style::Fullscreen);

	//create a texture to hold a graphic on the gpu
	Texture texturebackground;

	//load a graphic into the texture
	texturebackground.loadFromFile("graphics/background.png");

	// create a sprite
	Sprite spritebackground;

	//attach the texture to the sprite 
	spritebackground.setTexture(texturebackground);

	//set the spritebackground to cover the screen
	spritebackground.setPosition(0, 0);

	while (window.isOpen())
	{
		/**********handle the player input**********/
		
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		
		{
			window.close();
		}
		
		/**********update the scene**********/

		/**********draw the scene**********/
		
		//clear everything from last frame
		
		window.clear();
		
		//draw our game scene here
		
		window.draw(spritebackground);
		
		//show everything we just draw
		
		window.display();
	}

	return 0;
}