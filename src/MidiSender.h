#pragma once

#include "ofxMSAControlFreakMidi/src/MidiBase.h"


namespace msa {
    namespace controlfreak {
        namespace midi {
            
            class Sender : public Base {
            public:
                void setup(int port);
                void update();
                
            private:
                ofxMidiOut midiOut;
                
            };
        }
    }
}