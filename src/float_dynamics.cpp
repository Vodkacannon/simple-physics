#include <math.h>

namespace general_physics
{
    float momentum(float mass, float velocity)
	{
		return mass * velocity;
	}

	float force(float mass, float acceleration)
	{
		return mass * acceleration;
	}

	float force(float mass, float displacement_2, float displacement_1, float time_2, float time_1)
	{
		return mass * ((displacement_2 / time_2 - displacement_1 / time_1) / (time_2 - time_1));
	}
	
	float pressure(float force, float area)
	{
		return force / area;
	}

	float density(float mass, float volume)
	{
		return mass / volume;
	}

	float impulse(float force, float time)
	{
		return force * time;
	}

	float work(float force, float distance)
	{
		return force * distance;
	}
	
	float dry_friction(float coefficient_of_friction, float normal_force)
	{
		return coefficient_of_friction * normal_force;
	}
	
	float power(float energy, float time)
	{
		return energy / time;
	}
	
	float power(float force, float velocity, float applied_angle)
	{
		return force * velocity * cosf(applied_angle);
	}

	float drag_force(float air_density, float velocity, float drag_coefficient, float cross_sectional_area)
	{
		return 0.5f * air_density * velocity * velocity * drag_coefficient * cross_sectional_area;
	}
	
	float classical_kinetic_energy(float mass, float velocity)
	{
		return 0.5f * mass * velocity * velocity;
	}

	float gravitational_potential_energy(float mass, float gravitational_acceleration, float height)
	{
		return mass * gravitational_acceleration * height;
	}

	float elastic_potential_energy(const float spring_constant, float displacement)
	{
		return 0.5f * spring_constant * displacement * displacement;
	}
	
	float reynolds_number(float flow_speed, float characteristic_linear_dimension_as_length, float kinematic_viscosity)
	{
		return (flow_speed * characteristic_linear_dimension_as_length) / kinematic_viscosity;
	}

	float reynolds_number(float fluid_density, float flow_speed, float characteristic_linear_dimension_as_length, float dynamic_viscosity)
	{
		return (fluid_density * flow_speed * characteristic_linear_dimension_as_length) / dynamic_viscosity;
	}

	float drag_coefficient(float wet_area, float front_area, float bejan_number, double reynolds_number)
	{
		return 2.0f * (wet_area / front_area) * (bejan_number / (reynolds_number * reynolds_number));
	}

	float ballistic_coefficient(float mass, float drag_coefficient, float cross_sectional_area)
	{
		return (mass * drag_coefficient) / cross_sectional_area;
	}
}
