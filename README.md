# Bluetooth Module Control with Arduino
This project demonstrates how to control LEDs using a Bluetooth module and an Arduino board. The Bluetooth module allows you to send commands wirelessly from a mobile device or computer to control the LEDs connected to the Arduino.

# Hardware Requirements
  Arduino board (e.g., Arduino Uno)
  Bluetooth module (e.g., HC-05)
  LEDs (3 in this example)
  Resistors (appropriate values for the LEDs)
  Jumper wires

# Software Requirements
  Arduino IDE
  SoftwareSerial Library (already included in the Arduino IDE)

# Connection Instructions
  Connect the Bluetooth module to the Arduino board:
    Connect the VCC pin of the Bluetooth module to the 5V pin of the Arduino.
    Connect the GND pin of the Bluetooth module to the GND pin of the Arduino.
    Connect the RX pin of the Bluetooth module to the TX pin (pin 8) of 
    the Arduino.
    Connect the TX pin of the Bluetooth module to the RX pin (pin 9) of the Arduino.
    Ensure that the RX and TX pins are crossed over (TX of Bluetooth to RX of Arduino and vice versa) for serial communication.

  Connect the LEDs:
    Connect the anode (longer leg) of each LED to digital pins 6, 4, and 3 of the Arduino through appropriate resistors.
    Connect the cathode (shorter leg) of each LED to GND.

  Open the Arduino IDE on your computer and upload the code to the Arduino board:
    Connect the Arduino board to your computer using a USB cable.
    Open the Arduino IDE.
    Copy the provided code into a new sketch.
    Go to Tools > Board and select the appropriate Arduino board.
    Go to Tools > Port and select the port to which the Arduino board is connected.
    Click on the "Upload" button to compile and upload the code to the Arduino board.'

  Power up the circuit:
    Disconnect the Arduino board from the computer.
    Connect a power source (e.g., a 9V battery or a USB power bank) to the Arduino board.
    
  Pair the Bluetooth module with your mobile device:
    Enable Bluetooth on your mobile device.
    Search for Bluetooth devices and select the module (e.g., HC-05).
    Enter the default pairing code (e.g., 1234 or 0000).
    
  Open a Bluetooth terminal application on your mobile device:
    Install a Bluetooth terminal application from the app store (e.g., Bluetooth Terminal HC-05).
    Open the Bluetooth terminal application and connect to the Bluetooth module.
    
  Control the LEDs:
    In the Bluetooth terminal application, you will see a text input field.
    Type the letter 'L' and press send to turn on LED1.
    Type any other character and press send to turn off LED1.
    Type the letter 'F' and press send to turn on LED2.
    Type any other character and press send to turn off LED2.
    Type the letter 'K' and press send to turn on LED3.
    Type any other character and press send to turn off LED3.
    Type the letter 'J' and press send to turn on both LED1 and LED2.
    Type any other character and press send to turn off both LED1 and LED2.
    
Make sure to follow the safety precautions and double-check your connections before powering up the circuit. Enjoy controlling the LEDs wirelessly using the Bluetooth module and your mobile device!

# Video Demonstration
For a video demonstration of the project, please follow this link: Project Demo Video

[https://drive.google.com/file/d/1zxGo-GGR2pxua3amR4jhTw9ItEadoZfP/view?usp=sharing]

# Additional Notes
Ensure that the Bluetooth module is properly powered and connected to the Arduino.
Make sure to adjust the baud rate (BTSerial.begin(9600)) in both the code and the Bluetooth terminal application to match the desired communication speed.
You can expand the code to include more LEDs or add additional functionality to suit your project requirements.
Consider implementing error handling or feedback mechanisms to enhance the user experience.

# Troubleshooting
If you encounter any issues with the project, consider the following troubleshooting steps:
Verify the connections between the Arduino, Bluetooth module, and LEDs.
Check that the Bluetooth module is properly paired and connected to the mobile device or computer.
Ensure that the correct COM port is selected in the Arduino IDE for uploading the code.
Double-check the code for any errors or typos.
Test the project with different devices and Bluetooth terminal applications.
If you're unable to resolve the issue, feel free to reach out for further assistance.

# Conclusion
This project showcases how to control LEDs using a Bluetooth module and an Arduino. By following the provided instructions, you can replicate the project and customize it to fit your specific needs. Have fun experimenting and exploring the possibilities of Bluetooth-enabled projects with Arduino!
