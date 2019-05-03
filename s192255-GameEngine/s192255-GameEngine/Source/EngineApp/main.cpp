#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>
#include <iostream>

#include "Core/App.h"
//#include "Core/ResourceManager.h"
//#include "Core/SceneManager.h"
//#include "Core/TimeHandler.h"

//#include "Input/EventManager.h"
//#include "Input/InputManagement.h"

//#include "Physics/ContactListener.h"

//#include "Rendering/Window.h"

//#include "../Game/GameObject.h"
//#include "../Game/Game.h"
//#include "../Game/Player.h"
//#include "../Game/Ball.h"


int main()
{
	App gameApp = App("ROME");

	gameApp.getGame()->start();
	gameApp.getGame()->givePlayerInput(gameApp.getEventManager());
	while (gameApp.getWindow()->instance()->GameWindow->isOpen())
	{
		std::cout << "Delta Time: " << gameApp.getDeltaTime() << '\r';

		gameApp.getWindow()->instance()->GameWindow->clear(sf::Color(123,132,123,255));
		gameApp.Update();		
		gameApp.getWindow()->instance()->GameWindow->display();
	}
	return 0;
}