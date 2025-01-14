#include <cmath>

namespace general_physics
{
	float speed(float distance, float time)
	{
		return fabs(distance) / time;
	}

	float velocity(float displacement, float time)
	{
		return displacement / time;
	}

	float displacement(float velocity, float time)
	{
		return velocity * time;
	}

	float distance(float speed, float time)
	{
		return fabs(speed) * time;
	}

	float time(float distance, float velocity)
	{
		return distance / velocity;
	}

	float displacement_2(float velocity_1, float time, float acceleration)
	{
		return velocity_1 * time + 0.5f * acceleration * time * time;
	}

	float displacement_3(float velocity_1, float velocity_2, float acceleration)
	{
		return (velocity_2 * velocity_2 - velocity_1 * velocity_1) / (2 * acceleration);
	}

	float displacement_4(float velocity_1, float velocity_2, float time)
	{
		return ((velocity_1 + velocity_2) * time) / 2;
	}
	
	float acceleration(float velocity_2, float velocity_1, float time_2, float time_1)
	{
		return (velocity_2 - velocity_1) / (time_2 - time_1);
	}
	
	float final_free_fall_velocity(float acceleration_of_gravity, float initial_height)
	{
		return sqrtf(2.0f * acceleration_of_gravity * initial_height);
	}
}
