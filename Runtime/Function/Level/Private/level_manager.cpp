﻿

#include <memory>
#include "level_manager.h"

#include <string>

#include "level.h"

namespace Lg
{
	Lg::CLevelManager::CLevelManager()
	{
		std::string default_level = "default_level";

		m_levels.emplace_back(std::make_unique<CLevel>());
		m_active_level = m_levels[0].get();
	}

	void CLevelManager::TickLevels(float dt)
	{
		//get active level
		if (m_active_level)
		{
			m_active_level->TickLevel(dt);
		}
	}
}
