// #include <Arduino.h>
// #include <SPI.h>
// #include <SdFat.h>
// #include <LiquidCrystal_I2C.h>

// // Define the SD card shield interface settings
// #define SD_FAT_TYPE 0           // use the auto file type defined in SdFatConfig.h
// const uint8_t SD_CS_PIN = 5;   // specify the chip select pin for the SD card shield SPI comms

// // Define the SD card and file objects themselves
// SdFat sd;
// File boardSequence;

// int selectFile(String fileNames[]);
// char* getFileNames();
// void Load();

// void setup() {
//   Serial.begin(9600);
//   ///////////////////////////////////////////////////////////////////////////////////
//   // Configuration of the SD host for reading of board profile sequences
//   ///////////////////////////////////////////////////////////////////////////////////
//   // Initialize the SD card
//   //if (!sd.begin(SD_CONFIG)) {
//     if (!sd.begin(SD_CS_PIN, SPI_SIXTEENTH_SPEED)){
//     //Serial.println("\r\n  Initializing the SD host board failed.");
//     sd.initErrorHalt(&Serial);
//   }

//   Load();
// }

// void loop() {
//   // put your main code here, to run repeatedly:
  
// }

// void Load(){
    
//     // String fnames[] = { "155_6-15-21.txt", "155_6-15-21_#2.txt", "155_6-15-21_#3.txt", "155_June8_Test1.txt", "Bend_Test_1.txt", "Bend_Test_2.txt", "hex.txt", "OG Test.txt", "sequence.txt", "name14.txt", "name15.txt", "name16.txt", "name17.txt", "name18.txt", "name19.txt", "name20.txt", "name21.txt", "name22.txt", "name23.txt", "name24.txt", "name25.txt", "name26.txt" };

//     String fnames[1];

//     File directory = sd.open("/gilson");
//     if (!directory) {
//         // Serial.println("ERROR");
//     }
    
//     File file = directory.openNextFile();
  
//     int j;
//     while (file) { 

//       char newName[30];

//       file.getName(newName, sizeof(newName));
//       fnames[j] = newName;

//       j++;

//       file.close();
//       file = directory.openNextFile();
//     }


//     file.close();
//     directory.close();
 
//     int fileIndex = selectFile(fnames);

//     // Serial.println(fileNames[]);
//     // Serial.println(fileNames[index]);

//     char path [fnames[fileIndex].length()+1];

//     int i;
//     for (i = 0; i < sizeof(path); i++) {
//       path[i] = fnames[fileIndex][i];
//       // Serial.println(path[i]);
//     }
//     // Serial.println(path);



//     // Set the appropriate directory for the board sequence files
//     sd.chdir("/gilson");

//     // Open the file for reading
//     if ( !boardSequence.open(path, O_READ)) {  // actual program for 155cm
//       //if ( !boardSequence.open("test_prg.txt", O_READ)) {         // test program
//       Serial.println("Opening the specified file failed");
//       return;
//     }
//     else {
//       Serial.println("Program file opened successfully");
        
//       // char newPath[25];
//       // boardSequence.getName(newPath, 25);
//       // Serial.println(newPath);

//       // Make sure that the file pointer for the board sequence is at the beginning of the file
//       //boardSequence.rewind();
//       // Once the board profile is successfully loaded, set the profile ready flag
//       // profileReady = true;
//       // Set the sequenceStep counter to zero to start the sequence at the beginning
//       // sequenceStep = 0;

//       // Turn on the board profile loaded LED indicator for the user
//       // digitalWrite(PROFILELED, HIGH);

//       // Move the cursor to the bottom left digit and print a confirmation message
//       // lcd.setCursor(0, 1);
//       // lcd.print("Profile loaded");
//       // Hold all program flow for 1 second to allow the user to see the message
//       delay(1000);
//       // Move the cursor back to the bottom left digit and clear the lower row
//       // lcd.setCursor(0, 1);
//       // lcd.print("                ");

//       // Transition the operating mode and the display back to pause
//       // setOpMode(PAUSE_MODE);
//     }
// }

// //////////////////////////////////////////////////////////////////////////////
// // Utility function to read all files
// //////////////////////////////////////////////////////////////////////////////
// char* getFileNames() {
//     return NULL;
// }





// //////////////////////////////////////////////////////////////////////////////
// // Utility function to select file
// //////////////////////////////////////////////////////////////////////////////
// int selectFile(String fileNames[]) {
//   // Display selection menu

//   int index = 5;
//   // Return selected file index
//   return index;
// }