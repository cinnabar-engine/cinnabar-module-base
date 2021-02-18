#pragma once
#include <SDL2/SDL_events.h>

namespace ce {
	class IEventHandler {
	 private:
	 public:
		virtual void onEvent(SDL_Event& event) = 0;
	};
}
