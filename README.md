# Trauma_Robot

Hi All. I wanted to capture some of my lessons learned while building and programming these robots as I am learning the documentation is pretty awful. Feel free to email me with comments/additions.

General Notes:
1. Had lots of difficulties with the Arduino UNO driver for Win 7 on my work PC. I installed The Arduino IDE via the arduino.cc web site and chose the .zip copy that did not require Admin permissions. This worked fine but when I plugged in my Keyestudio UNO board windows could not find the driver.  Eventually had to forcibly load the driver from ...\arduino-1.8.8-windows\arduino-1.8.8\drivers\Old_Arduino_Drivers. This is still causing crashes, but works. I eventually bought an Arduino UNO board (not Keyestudio like comes in the kit) for Bluetooth testing (see below), and my PC found the driver for that with no issue. 
2. The Bluetooth module provided with the kit is not compatible with the iPhone. iPhones use BLE (Bluetooth Low Energy) and require a different module. I bought the Ks0174 keyestudio HM-10 Bluetooth-4.0 V2 board which uses BLE and was pin compatible with the included module. 
3. Side Note - I am writing a new iPhone app to communicate with the Ks0174 keyestudio HM-10 Bluetooth-4.0 V2 module. The provided mobile app to control the robot for Android only. More to come on the iPhone App progress
4. The expansion board (including the bluetooth module) needs to be removed when uploading code to the arduino. Apprently there is a conflict on the TX/RX lines used for programming when the Bluetooth module is installed. This is partly the reason I bought the second Uno board.  

Board Bring Up:
1. With the Arduino development environment installed, and your Aduino powered up and connected via the USB cable, click on Tools->Get Board Info. If all is set up properly, you should see something like this:
BN: Arduino/Genuino Uno
VID: 2341
PID: 0043
SN: 557363235393514191C2 
2. Load the example Communication sketch (Arduino programs are called sketches) by cklicking on File->Examples->04Communication->ASCIITable. This will load a small program that prints an ASCII table via the serial monitor. 
2. Complie the sketch by selecting Sketch->Verify/Compile. insure you have a clean complie as shown in the lower window.
3. Upload the sketch by clicking Sketch->Upload. You should see some blinking on the Arduino board. 
4. Open the Serial Monitor, by clicking on the small magnifying glass icon on the right of the toolbar. 
5. The ASCII table should fill the screen. Now you know everything is working. 

