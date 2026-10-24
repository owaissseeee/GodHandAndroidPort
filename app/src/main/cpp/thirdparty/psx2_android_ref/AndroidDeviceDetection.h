// SPDX-FileCopyrightText: 2025 PCSX2 Dev Team
// SPDX-License-Identifier: GPL-3.0+

#pragma once

#ifdef __ANDROID__

#include <string>

namespace AndroidDeviceDetection
{
	enum class GPUVendor
	{
		Unknown,
		Qualcomm,  // Adreno (Snapdragon)
		ARM,       // Mali (Mediatek, Exynos, etc.)
		Imagination, // PowerVR
		Other
	};

	// Detect GPU vendor from system properties and GL/Vulkan strings
	GPUVendor DetectGPUVendor();

	// Check if device is Mediatek (Mali GPU)
	bool IsMediatek();

	// Check if device is Snapdragon (Adreno GPU)
	bool IsSnapdragon();

	// Get device manufacturer
	std::string GetManufacturer();

	// Get device model
	std::string GetModel();

	// Get GPU renderer string (requires GL context or Vulkan device)
	std::string GetGPURenderer();
}

#endif // __ANDROID__
