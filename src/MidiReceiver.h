#pragma once

#include "ofxMSAControlFreakMidi/src/MidiManagerBase.h"

namespace msa {
    namespace controlfreak {
        namespace midi {
            
            class Receiver : public ofxMidiListener {
            public:
                void setup(int port);
                void update();
                
            private:
                ofxMidiIn midiIn;
                
                void newMidiMessage(ofxMidiMessage& msg);
                
            };
            
        }
    }
}