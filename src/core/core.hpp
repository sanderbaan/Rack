#include "rack.hpp"


using namespace rack;

void audioInit();
void midiInit();

////////////////////
// module widgets
////////////////////

struct AudioInterfaceWidget : ModuleWidget {
	AudioInterfaceWidget();
};

struct MidiInterfaceWidget : ModuleWidget {
	MidiInterfaceWidget();
};
