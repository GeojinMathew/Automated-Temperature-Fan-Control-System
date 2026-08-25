# Automated Temperature-Based Fan Control System

An Arduino UNO based automatic fan-control system that monitors ambient temperature using a DHT11 sensor and automatically adjusts the speed of a 12V DC fan.

## Project Overview

The system continuously measures temperature using the DHT11 sensor. The Arduino UNO processes the temperature reading and generates a PWM signal to control a 12V DC fan through an IRLZ44N MOSFET.

## Components

- Arduino UNO
- DHT11 temperature sensor
- IRLZ44N N-channel MOSFET
- 12V DC fan (6015D, 0.15A)
- 1N5408 flyback diode
- Resistors
- 12V, 1A DC adapter

## Temperature-Based Control

| Temperature | Fan State |
|---|---|
| Below 30°C | OFF |
| 30–30.9°C | LOW |
| 31–31.9°C | MEDIUM |
| 32°C and above | HIGH |

## Working Principle

DHT11 → Arduino UNO → PWM → IRLZ44N MOSFET → 12V DC Fan

The DHT11 measures the surrounding temperature. The Arduino compares the measured value with predefined temperature thresholds and changes the PWM output accordingly. The MOSFET acts as the switching device for the externally powered fan.

## Circuit

The circuit diagram will be added here.

## Testing & Results

Initial testing confirmed successful DHT11 temperature and humidity readings. The temperature-based fan-control system was then tested with different PWM levels.

Detailed test results will be added here.

## Future Improvements

- Add an LCD display
- Add manual control
- Add temperature data logging
- Add adjustable temperature thresholds
- Add a protective enclosure

## Project Status

**Working Prototype — Version 1.0**

## Author

Geojin Mathew
