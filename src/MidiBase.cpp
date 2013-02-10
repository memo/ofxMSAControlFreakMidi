//
//  MidiBase.cpp
//  ofxMSAControlFreak example-tutorial
//
//  Created by Memo Akten on 02/02/2013.
//
//

#include "MidiBase.h"

namespace msa {
    namespace controlfreak {
        namespace midi {
            
            
            //--------------------------------------------------------------
            Base::~Base() {
                for(int i=0; i<channels.size(); i++) {
                    delete channels[i];
                }
            }
            
            //--------------------------------------------------------------
            void Base::addNote(Parameter *p, bool bOnlySendOnChange, int channel, int noteNumber) {
                channels.push_back(new Controller(p, MIDI_NOTE_ON, channel, noteNumber));
            }
            
            //--------------------------------------------------------------
            void Base::addCC(Parameter *p, bool bOnlySendOnChange, int channel, int midiCC) {
                channels.push_back(new Controller(p, MIDI_CONTROL_CHANGE, channel, midiCC));
            }
            
            //--------------------------------------------------------------
            void Base::addProgramChange(Parameter *p, bool bOnlySendOnChange, int channel) {
                channels.push_back(new Controller(p, MIDI_PROGRAM_CHANGE, channel));
            }
            
            //--------------------------------------------------------------
            void Base::addPitchBend(Parameter *p, bool bOnlySendOnChange, int channel) {
                channels.push_back(new Controller(p, MIDI_PITCH_BEND, channel));
            }
            
            //--------------------------------------------------------------
            void Base::addAfterTouch(Parameter *p, bool bOnlySendOnChange, int channel) {
                channels.push_back(new Controller(p, MIDI_AFTERTOUCH, channel));
            }
            
            //--------------------------------------------------------------
            void Base::addPolyAfterTouch(Parameter *p, bool bOnlySendOnChange, int channel, int noteNumber) {
                channels.push_back(new Controller(p, MIDI_POLY_AFTERTOUCH, channel, noteNumber));
            }
            
            
        };
        
    }
}