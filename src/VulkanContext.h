/*
 * Vulkan infinite procedurally generated terrain renderer
 *
 * Copyright (C) 2022 by Sascha Willems - www.saschawillems.de
 *
 * This code is licensed under the MIT license (MIT) (http://opensource.org/licenses/MIT)
 */

#include "volk.h"
#include "Device.hpp"

#pragma once

class VulkanContext {
public:
	static VkQueue copyQueue;
	static VkQueue graphicsQueue;
	static vks::VulkanDevice* device;
};

extern VulkanContext vulkanContext;