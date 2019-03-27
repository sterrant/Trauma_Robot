# Trauma_Robot

Hi All. I wanted to capture some of my lessons learned while building and programming these robots as I am learning the documentation is pretty awful. Feel free to email me with comments/additions.

General Notes:
1. Had lots of difficulties with the Arduino UNO driver for Win 7 on my work PC. I installed The Arduino IDE via the arduino.cc web site and chose the .zip copy that did not require Admin permissions. This worked fine but when I plugged in my Keyestudio UNO board windows could not find the driver.  Eventually had to forcibly load the driver from ...\arduino-1.8.8-windows\arduino-1.8.8\drivers\Old_Arduino_Drivers. This is still causing crashes, but works. I eventually bought an Arduino UNO board (not Keyestudio like comes in the kit) for Bluetooth testing (see below), and my PC found the driver for that with no issue. 
2. The Bluetooth module provided with the kit is not compatible with the iPhone. iPhone use BLE (Bluetooth Low Energy) and require a different module. I bought the Ks0174 keyestudio HM-10 Bluetooth-4.0 V2 board which was pin compatible with the included module. 
3. Side Note - I am writing a new iPhone app to communicate with the Ks0174 keyestudio HM-10 Bluetooth-4.0 V2 module. The provided mobile app to control the robot for Android only. More to come on the iPhone App progress
4. The expansion board (including the bluetooth module) needs to be removed when uploading code to the arduino. Apprently there is a conflict on the TX/RX lines used for programming when the Bluetooth module is installed. This is partly the reason I bought the second Uno board.  
