#pragma once

#include "include/constants.hpp"

namespace general_physics
{
	float maluses_law(float initial_intensity, float angle_between_polarizer_and_initial_polarization_direction)
	{
		return initial_intensity * cosf(angle_between_polarizer_and_initial_polarization_direction) * cosf(angle_between_polarizer_and_initial_polarization_direction);
	}
	
	float rayleigh_criterion(float light_wavelength, float lens_aperture_diameter)
	{
		return RAYLEIGHS_CRITERION_CONSTANT * (light_wavelength / lens_aperture_diameter);
	}
	
	float lateral_resolution(float light_wavelength, float half_angle_of_light, float index_of_refraction)
	{
		return (RAYLEIGHS_CRITERION_CONSTANT * light_wavelength) / (2 * index_of_refraction * sinf(half_angle_of_light));
	}
									    
	float luminosity_distance(float luminosity, float redshift, float angular_diameter_distance)
	{
		return luminosity / (4 * M_PI * (1 + redshift) * (1 + redshift) * angular_diameter_distance); 	
	}

	float beer_lambert_law(float molar_absorption_coefficient, float optical_path_length, float molar_concentration_of_matter) 
    {
		return molar_absorption_coefficient * optical_path_length * molar_concentration_of_matter;
    }

	float beer_lambert_law(float molar_absorption_coefficient, float optical_path_length, float molar_concentration_of_matter, float molar_absorption_coefficient_2, float optical_path_length_2, float molar_concentration_of_matter_2) 
	{
		return molar_absorption_coefficient * optical_path_length * molar_concentration_of_matter + molar_absorption_coefficient_2 * optical_path_length_2 * molar_concentration_of_matter_2;
	}
}
