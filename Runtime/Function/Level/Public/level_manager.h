#pragma once

#include <memory>
#include <vector>
#include "level.h"
namespace Lg
{

	class CLevelManager
	{
	public:
		CLevelManager();
		~CLevelManager() = default;

		void TickLevels(float dt);

	private:
		std::vector<std::unique_ptr<CLevel>> m_levels;
		CLevel* m_active_level{ nullptr };
	};
}
