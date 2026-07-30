# Timed Movement Control of Four DC Motors Using Arduino and L298D Motor Driver

## 🔗 Simulation Link

Tinkercad Circuits Simulation:  
https://www.tinkercad.com/things/gFeZIH5MFeI-epic-tumelo-elzing


## 📚 Training Information

This project was completed as part of the Smart Methods Training Program – Electronics Engineering Track.

The task focuses on programming and controlling four DC motors using an Arduino UNO and an L298D motor driver. The movement sequence was implemented and tested through Tinkercad simulation.


## 📌 Project Description

This project demonstrates the control of four DC motors using an Arduino UNO microcontroller and an L298D motor driver.

The system was designed and tested through a Tinkercad simulation to implement a programmed movement sequence for a robotic platform.

The Arduino sends digital control signals to the L298D driver, which manages the direction of the motors and allows the robot to perform different movements according to predefined time intervals.

The programmed movement sequence includes:
- Moving forward for 30 seconds.
- Moving backward for 60 seconds.
- Alternating between right and left turns for 60 seconds.


## 🛠️ Hardware Components

- Arduino UNO Microcontroller
  - The main controller responsible for generating motor control signals.

- L298D Motor Driver
  - A motor control module used to interface between the Arduino and DC motors while handling the required motor current.

- 4 DC Motors
  - Used to simulate the movement system of a robotic vehicle.

- External Power Supply
  - Provides the required power for motor operation.

- Tinkercad Circuits
  - Used as a simulation environment for designing and testing the circuit.


## ⚙️ How It Works

The Arduino initializes the motor control pins as OUTPUT pins.

The control signals are sent from the Arduino to the L298D motor driver, which controls the rotation direction of each motor.

The system executes the programmed movement sequence:

1. Forward movement for 30 seconds.
2. Backward movement for 60 seconds.
3. Right and left turns alternately for 60 seconds.

The movement timing is controlled using programmed delay intervals.


## 🔄 Movement Control Logic

The direction of the DC motors is controlled by changing the digital states of the motor input pins.

Different HIGH and LOW combinations allow the robot to perform:

- Forward movement.
- Reverse movement.
- Right turning.
- Left turning.
- Direction changes during the programmed sequence.


## 🔌 Wiring Description

The L298D motor driver acts as an interface between the Arduino UNO and the DC motors.

The Arduino provides the control signals, while the motor driver manages the power required to operate the motors.

An external power source is used for the motors to ensure stable operation and reduce the load on the Arduino board.


## 💻 Software Implementation

The Arduino program is responsible for:

- Defining motor control pins.
- Configuring pins as output.
- Creating movement control functions.
- Executing the timed movement sequence using delay commands.


## 🎯 Learning Outcomes

Through this simulation, the following concepts were practiced:

- Arduino motor control.
- L298D motor driver integration.
- DC motor direction control.
- Embedded systems programming.
- Robotic movement simulation using Tinkercad.


## 🚀 Future Improvements

Possible improvements for this project:

- Implement PWM speed control.
- Add obstacle detection sensors.
- Add Bluetooth or Wi-Fi remote control.
- Replace fixed delays with real-time control using millis().
- Develop autonomous robot navigation.


## 👩‍💻 Author

Shmokh Waleed

