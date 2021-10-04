#include "simple_physics.hpp"

namespace simple_phys
{
	double speed(double distance, double time);
	double electric_energy(double voltage, double charge);
	double velocity(double displacement, double time);
	double displacement(double velocity, double time);
	double distance(double speed, double time);
	double time(double distance, double velocity);
	double displacement_2(double velocity_1, double time, double acceleration);
	double displacement_3(double velocity_1, double velocity_2, double acceleration);
	double acceleration(double velocity_2, double velocity_1, double time_2, double time_1);
	double mometum(double mass, double velocity);
	double force(double mass, double acceleration);
	double pressure(double force, double area);
	double density(double mass, double volume);
	double impulse(double force, double time);
	double work(double force, double distance);
	double time(double frequency);
	double frequency(double time);
	double final_free_fall_velocity(double acceleration_of_gravity, double initial_height);
	double centripedal_acceleration_from_tangental(double tangental_velocity, double radius);
	double centripedal_acceleration_from_angular(double angular_velocity, double radius);
	double centripedal_force(double mass, double tangental_velocity, double radius);
	double angular_velocity(double angle, double time);
	double angular_velocity(double angle_2, double angle_1, double time_2, double time_1);
	double angular_acceleration(double angular_velocity, double time);
	double angular_acceleration(double angular_velocity_2, double angular_velocity_1, double time_2, double time_1);
	double perpendicular_angular_momentum(double radius, double mass, double velocity, double perpendicular_angle);
	double torque(double radius, double force, double angle);
	double torque(double inertia, double angular_acceleration);
	double dry_friction(double coefficient_of_friction, double normal_force);
	double newtons_gravitational_force(double mass_1, double mass_2, double radius_between_masses);
	double escape_speed(double mass, double radius);
	double classical_kinetic_energy(double mass, double velocity);
	double gravitational_potential_energy(double mass, double gravitational_acceleration, double height);
	double orbital_period(double velocity, double radius);
	double elastic_potential_energy(const double spring_constant, double displacement);
	double rotational_kinetic_energy(double rotational_inertia, double angular_velocity);
	double rolling_object_kinetic_energy(double kinetic_energy, double rotational_kinetic_energy);
	double relativistic_velocity_clamp(double velocity);
	double lorentz_factor(double velocity);
	double relativistic_time_dilation(double lorentz_factor, double proper_time);
	double relativistic_time_dilation_2(double velocity, double proper_time);
	double relativistic_time_dilation(double lorentz_factor, double proper_time_2, double proper_time_1);
	double relativistic_length_contraction(double lorentz_factor, double proper_length);
	double relativistic_length_contraction_2(double velocity, double proper_length);
	double relativistic_momentum(double lorentz_factor, double mass, double velocity);
	double relativistic_momentum(double velocity, double mass);
	double mass_energy(double mass);
	double energy_momentum(double momentum, double rest_mass);
	double significant_figures(double value);
	double heat_flow(double mass, double specific_heat_capacity, double temperature_change);
	double heat_flow(double mass, double specific_heat_2, double specific_heat_1, double temperature);
	double thermal_energy_transfer(double thermal_mass_of_body, double temperature_2, double temperature_1);
	double pendulum_potential_energy(double mass, double gravitational_acceleration, double pendulum_length, double angle);
	double efficiency(double work_out, double energy_in);
	double power(double energy, double time);
	double power_velocity(double force, double velocity, double applied_angle);
	double drag_force(double air_density, double velocity, double drag_coefficient, double cross_sectional_area);
	double index_of_refraction(double speed_of_light_in_medium);
	double photon_energy(double frequency);
	double photon_momentum(double wavelength);
	double wave_velocity(double frequency, double wavelength);
	double voltage(double current, double resistance);
	double current(double voltage, double resistance);
	double heisenberg_momentum_uncertainty(double max_position, double min_position);
	double heisenberg_position_uncertainty(double max_momentum, double min_momentum);
	double celcius_to_kelvin(double celcius);
	double kelvin_to_celcius(double kelvin);
	double ideal_gas_pressure(unsigned int moles, double temperature, double volume);
	double average_kinetic_energy_of_ideal_gas(double gas_temperature);
	double reynolds_number(double flow_speed, double characteristic_linear_dimension_as_length, double kinematic_viscosity);
	double reynolds_number_2(double fluid_density, double flow_speed, double characteristic_linear_dimension_as_length, double dynamic_viscosity);
	double drag_coefficient(double wet_area, double front_area, double bejan_number, double reynolds_number);
	double ballistic_coefficient(double mass, double drag_coefficient, double cross_sectional_area);
	double ballistic_coefficient_2(double density, double characteristic_body_length, double drag_coefficient);
	double charge(double voltage, double time);
	double electric_energy(double voltage, double current, double time);
	double electric_energy(double voltage, double charge);
	double electric_power(double voltage, double current);
	double maluses_law(double initial_intensity, double angle_between_polarizer_and_initial_polarization_direction);
};
