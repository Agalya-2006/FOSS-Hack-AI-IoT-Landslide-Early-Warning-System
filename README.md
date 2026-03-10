# FOSS-Hack-AI-IoT-Landslide-Early-Warning-System
AI and IoT-based early warning system for landslides and floods developed for FOSS Hack GGITS 2026.
# AI and IoT-Driven Early Warning System for Landslides and Floods in Hilly Regions

## Problem Statement
Hilly regions are highly vulnerable to landslides and floods due to heavy rainfall, soil instability, and rising water levels. Traditional warning systems often fail to provide timely alerts, resulting in damage to infrastructure and loss of human lives.

## Proposed Solution
This project proposes an AI and IoT-based early warning system that monitors environmental conditions in real time. Sensors collect data such as rainfall intensity, soil moisture, ground vibration, and water level. The collected data is transmitted through an IoT microcontroller to a cloud platform where an AI model analyzes the information and predicts potential disaster risks. If the system detects abnormal conditions, warning alerts are sent to authorities and nearby communities.

## System Architecture
Sensors → IoT Microcontroller (ESP32 / Arduino) → Cloud Server → AI Prediction Model → Alert System (SMS / Mobile App / Dashboard)

## Hardware Components
- ESP32 / Arduino Microcontroller  
- Rainfall Sensor  
- Soil Moisture Sensor  
- Water Level Sensor  
- Vibration Sensor  
- WiFi Module  

## Software and Technologies
- Embedded C / Arduino IDE  
- Python  
- Machine Learning Algorithms  
- Cloud Database  
- Web Dashboard  

## Working Principle
1. Sensors continuously monitor environmental conditions.
2. Sensor data is sent to the microcontroller.
3. The microcontroller uploads the data to a cloud server.
4. The AI model analyzes the data and predicts possible landslide or flood risks.
5. If risk is detected, alerts are sent to authorities and residents.

## Prototype
The prototype consists of sensor nodes installed on slopes and near water bodies. The sensors collect environmental data and transmit it to the cloud through an ESP32 microcontroller. The AI model processes the data and provides risk prediction.

## Impact and Benefits
- Provides early warning before disasters occur  
- Reduces loss of life and property  
- Supports disaster management authorities  
- Low-cost and scalable monitoring system  
- Real-time monitoring of environmental conditions  

## Future Improvements
- Integration with satellite weather data  
- Mobile application for public alerts  
- Expansion to large-scale smart disaster monitoring networks  

## Research References
1. International Journal of Disaster Risk Reduction – Landslide Early Warning Systems  
2. IEEE Research Papers on IoT-Based Disaster Monitoring  
3. Geological Survey Reports on Landslides and Flood Risk  
4. World Meteorological Organization Disaster Monitoring Studies  

## Installation

Install Python and Arduino IDE.
Connect sensors to ESP32 or Arduino.
Upload firmware using Arduino IDE.
Run the AI prediction script using Python.
Launch the dashboard to monitor sensor data and alerts.

## Contributors

Agalya M
Gobika N
Priyadharshini R
