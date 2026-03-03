📋 How to:
_________________________________________________________________

1️⃣ Install Arduino IDE

[Download](https://downloads.arduino.cc/arduino-ide/arduino-ide_latest_Windows_64bit.exe) and install the official Arduino IDE

_________________________________________________________________
2️⃣ Add BW16 (RTL8720DN) Board Support

1 - Open Arduino IDE

2 - Go to File → Preferences

3 - In Additional Boards Manager URLs, add:
```
https://raw.githubusercontent.com/Ameba-AIoT/ameba-arduino-d/master/Arduino_package/package_realtek_amebad_index.json
```
4 - Click OK

5 - Go to Tools → Board → Boards Manager

6 - Search for Ameba

7 - Install the latest version
___________________________________________________________________
3️⃣Upload the Code

1 - Copy [this whole code](https://github.com/RelatorBR/BW16---See-Mac/blob/main/BW16_see_mac.ino) and paste it into Arduino IDE
2 - Select the correct board:
```
Tools → Board → BW16 (RTL8720DN)
```
3 - Select the correct port:
```
Tools → Port → [Your Device Port]
```
4 - Click Upload

5- After Finish go to tools> serial monitor > press reset.

6 - Output:

<img width="417" height="196" alt="image" src="https://github.com/user-attachments/assets/1cfa3c6d-3fb0-45a6-9cb3-e7a8dc34456f" />
