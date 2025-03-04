#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {
    // Set the transmitter pin (e.g., pin 10)
    mySwitch.enableTransmit(10);

    // Define your raw sequence
    unsigned int sequence[] = {
        19320, 1040, 464, 504, 464, 504, 468, 504, 464, 504, 468, 500, 468, 504, 464, 504, 468, 504, 464, 504, 468, 500, 468, 504, 4828, 988, 464, 988, 472, 500, 948, 504, 952, 988, 468, 988, 464, 504, 952, 988, 464, 988, 468, 504, 952, 500, 952, 988, 468, 988, 468, 984, 468, 988, 468, 984, 472, 984, 468, 984, 472, 500, 952, 988, 468, 984, 472, 500, 952, 984, 472, 500, 952, 500, 956, 984, 468, 500, 956, 984, 472, 500, 952, 984, 472, 984, 468, 500, 956, 500, 956, 984, 468, 988, 468, 984, 472, 500, 956, 496, 956, 500, 956, 984, 472, 980, 472, 500, 956, 500, 952, 988, 468, 984, 472, 984, 472, 984, 468, 984, 472, 500, 956, 496, 956, 988, 468, 500, 956, 500, 952, 984, 472, 984, 472, 984, 472, 980, 472, 984, 472, 984, 472, 984, 472, 980, 472, 496, 960, 980, 472, 984, 472, 980, 476, 496
    };

    // Calculate the length of the sequence
    int sequenceLength = sizeof(sequence) / sizeof(sequence[0]);

    
}

void loop() {
    // Your loop code here
    // Send the raw sequence (repeat 3 times)
    mySwitch.sendRaw(sequence, sequenceLength, 3);
    delay(10000);
}
