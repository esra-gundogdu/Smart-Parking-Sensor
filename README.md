# Smart-Parking-Sensor🚗📏
An Arduino-based smart parking sensor that measures the distance between the vehicle and an 
obstacle using an HC-SR04 ultrasonic sensor and provides an audible warning with a buzzer as the 
distance decreases.

##🔧 Components
-Arduino UNO
-HC-SR04 Ultrasonic Distance Sensor
-Buzzer
-Breadboard
-Jumper wires

##How It Works
The HC-SR04 ultrasonic sensor sends an ultrasonic pulse and measures the time it takes for the 
echo to return after hitting an obstacle.
The Arduino uses this time to calculate the distance:

Distance=(Time x 0.0343) / 2

The buzzer is controlled according  to the measured distance. As an obstacle gets closer,the 
warning becomes more noticeable,helping the user detect how close the obstacle is.

## 🖥️ Features
-Real-time distance measurment
-Ultrasonic obstacle detection
-Distance-based audible warning
-Simple and low-cost design
-Built with Arduino UNO

## 📷 Project 
The picture of project is available in this repository.

## 🎥 Demonstration
A demonstration video of the project is included in this repository.

## 💻 Code
The Arduino source code is available in this repository.

## What I Learned
Through this project I practiced;
-Working with the HC-SR04 ultrasonic sensor.
-Using functions and parameters
-Measuring the time of an ultrasonic echo using pulseIn()
-Calculating distance from sensor data
-Controlling a buzzer based on distance
-Using conditional statements in Arduino
-Organizing and documenting an Arduino project

##  🚀Future Improvements
Possible improvements for future versions include:
-Adding an LCD to display the measured distance 
-Adding LED indicators dor different distance ranges
-Designinga custom PCB
-Using multiple ultrasonic sensors
## BUilt With
 Arduino UNO + HC-SR04 + Buzzer

