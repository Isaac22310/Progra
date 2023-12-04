#include "Engine.h"

@startuml
int main()
{
	Engine::init();

	while (Engine::isRunning())
	{
		Engine::handleEvents();
		Engine::render();
	}

	system("pause");
	return 0;
}
@enduml