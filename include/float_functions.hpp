#pragma once

#include "float_types.hpp"

namespace simple_physics
{
    float speed(float distance, float time);
    float electric_energy(float voltage, float charge);
    float velocity(float displacement, float time);
    float displacement(float velocity, float time);
    float distance(float speed, float time);
    float time(float distance, float velocity);
    float displacement_2(float velocity_1, float time, float acceleration);
    float displacement_3(float velocity_1, float velocity_2, float acceleration);
    float acceleration(float velocity_2, float velocity_1, float time_2, float time_1);
    float momentum(float mass, float velocity);
    float force(float mass, float acceleration);
    float pressure(float force, float area);
    float density(float mass, float volume);
    float impulse(float force, float time);
    float work(float force, float distance);
    float time(float frequency);
    float frequency(float time);
    float final_free_fall_velocity(float acceleration_of_gravity, float initial_height);
    float centripedal_acceleration_from_tangental(float tangental_velocity, float radius);
    float centripedal_acceleration_from_angular(float angular_velocity, float radius);
    float centripedal_force(float mass, float tangental_velocity, float radius);
    float angular_velocity(float angle, float time);
    float angular_velocity(float angle_2, float angle_1, float time_2, float time_1);
    float angular_acceleration(float angular_velocity, float time);
    float angular_acceleration(float angular_velocity_2, float angular_velocity_1, float time_2, float time_1);
    float perpendicular_angular_momentum(float radius, float mass, float velocity, float perpendicular_angle);
    float torque(float radius, float force, float angle);
    float torque(float inertia, float angular_acceleration);
    float dry_friction(float coefficient_of_friction, float normal_force);
    float newtons_gravitational_force(float mass_1, float mass_2, float radius_between_masses);
    float escape_speed(float mass, float radius);
    float classical_kinetic_energy(float mass, float velocity);
    float gravitational_potential_energy(float mass, float gravitational_acceleration, float height);
    float orbital_period(float velocity, float radius);
    float elastic_potential_energy(const float spring_constant, float displacement);
    float rotational_kinetic_energy(float rotational_inertia, float angular_velocity);
    float rolling_object_kinetic_energy(float kinetic_energy, float rotational_kinetic_energy);
    float relativistic_velocity_clamp(float velocity);
    float lorentz_factor(float velocity);
    float relativistic_time_dilation(float lorentz_factor, float proper_time);
    float relativistic_time_dilation_2(float velocity, float proper_time);
    float relativistic_time_dilation(float lorentz_factor, float proper_time_2, float proper_time_1);
    float relativistic_length_contraction(float lorentz_factor, float proper_length);
    float relativistic_length_contraction_2(float velocity, float proper_length);
    float relativistic_momentum(float lorentz_factor, float mass, float velocity);
    float relativistic_momentum(float velocity, float mass);
    float mass_energy(float mass);
    float energy_momentum(float momentum, float rest_mass);
    float significant_figures(float value);
    float heat_flow(float mass, float specific_heat_capacity, float temperature_change);
    float heat_flow(float mass, float specific_heat_2, float specific_heat_1, float temperature);
    float thermal_energy_transfer(float thermal_mass_of_body, float temperature_2, float temperature_1);
    float pendulum_potential_energy(float mass, float gravitational_acceleration, float pendulum_length, float angle);
    float efficiency(float work_out, float energy_in);
    float power(float energy, float time);
    float power_velocity(float force, float velocity, float applied_angle);
    float drag_force(float air_density, float velocity, float drag_coefficient, float cross_sectional_area);
    float index_of_refraction(float speed_of_light_in_medium);
    float photon_energy(float frequency);
    float photon_momentum(float wavelength);
    float wave_velocity(float frequency, float wavelength);
    float voltage(float current, float resistance);
    float current(float voltage, float resistance);
    float heisenberg_momentum_uncertainty(float max_position, float min_position);
    float heisenberg_position_uncertainty(float max_momentum, float min_momentum);
    float celcius_to_kelvin(float celcius);
    float kelvin_to_celcius(float kelvin);
    float ideal_gas_pressure(unsigned int moles, float temperature, float volume);
    float average_kinetic_energy_of_ideal_gas(float gas_temperature);
    float reynolds_number(float flow_speed, float characteristic_linear_dimension_as_length, float kinematic_viscosity);
    float reynolds_number_2(float fluid_density, float flow_speed, float characteristic_linear_dimension_as_length, float dynamic_viscosity);
    float drag_coefficient(float wet_area, float front_area, float bejan_number, float reynolds_number);
    float ballistic_coefficient(float mass, float drag_coefficient, float cross_sectional_area);
    float ballistic_coefficient_2(float density, float characteristic_body_length, float drag_coefficient);
    float charge(float voltage, float time);
    float electric_energy(float voltage, float current, float time);
    float electric_energy(float voltage, float charge);
    float electric_power(float voltage, float current);
    float maluses_law(float initial_intensity, float angle_between_polarizer_and_initial_polarization_direction);
    float rayleigh_criterion(float light_wavelength, float lens_aperture_diameter);
    float lateral_resolution(float light_wavelength, float half_angle_of_light, float index_of_refraction);
    float luminosity_distance(float luminosity, float redshift, float angular_diameter_distance);
    float wave_intensity(float power, float area);
    float orbital_period(float mass_of_orbited_body);
    float rocket_delta_velocity(float specific_impulse, float gravitational_acceleration, float initial_mass, float final_mass);
    float doppler_effect(float sound_wave_speed, float observer_velocity, float source_velocity, float origional_sound_wave_frequency);
    float coulombs_force(float charge_1, float charge_2, float distance_between_charges);
    float integrate_jerk_to_acceleration(float jerk, float delta_time);
    float integrate_acceleration_to_velocity(float acceleration, float delta_time);
    float integrate_velocity_to_position(float velocity, float delta_time);
    float integrate_jerk_to_position(float acceleration, float delta_time);
    float integrate_acceleration_to_position(float acceleration, float delta_time);
    float period_of_spring_with_mass(float mass, float spring_constant);
	float is_total_energy_zero(float kinetic_energy, float potential_energy, float floating_point_tolerance)
	float period_of_spring_with_mass(float mass, float spring_constant)
	float harmonic_oscillator_position(float amplitude, float frequency, float time, float phase)
	
};
