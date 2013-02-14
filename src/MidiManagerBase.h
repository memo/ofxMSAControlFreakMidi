
#pragma once

#include "ofxMSAControlFreak/src/ofxMSAControlFreak.h"
#include "ofxMidi.h"

namespace msa {
    namespace controlfreak {
        namespace midi {
        
            //--------------------------------------------------------------
            class Controller : public ControllerBase {
            public:
                MidiStatus type;    // 	MIDI_NOTE_ON, MIDI_CONTROL_CHANGE, MIDI_PROGRAM_CHANGE, MIDI_PITCH_BEND, MIDI_AFTERTOUCH, MIDI_POLY_AFTERTOUCH
                int channel;
                int value1;
                //                int value2;
                
                Controller(Parameter *p, bool bOnlyUpdateOnChange, MidiStatus t, int ch, int v=0)
                : ControllerBase(p, bOnlyUpdateOnChange), type(t), channel(ch), value1(v) {}
            };
            
            
            
            //--------------------------------------------------------------
            class ManagerBase : public ControllerManagerBase {
            public:
                virtual ~ManagerBase();
                
                virtual void setup(int port) = 0;
                virtual void update() = 0;
                
                void addNote(Parameter *p, bool bOnlyUpdateOnChange, int channel, int noteNumber);
                void addCC(Parameter *p, bool bOnlyUpdateOnChange, int channel, int midiCC);
                void addProgramChange(Parameter *p, bool bOnlyUpdateOnChange, int channel);
                void addPitchBend(Parameter *p, bool bOnlyUpdateOnChange, int channel);
                void addAfterTouch(Parameter *p, bool bOnlyUpdateOnChange, int channel);
                void addPolyAfterTouch(Parameter *p, bool bOnlyUpdateOnChange, int channel, int noteNumber);
                
            protected:
            };
            
        }
    }
}