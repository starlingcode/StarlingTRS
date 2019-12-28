#include "plugin.hpp"


Plugin *pluginInstance;


void init(Plugin *p) {
    pluginInstance = p;

    // Add modules here
    p->addModel(modelBalanceMergePan);
    p->addModel(modelQuadLFO);
    p->addModel(modelTSTRSTS);
    p->addModel(modelAddSub);
    p->addModel(modelTRSVCF);
    p->addModel(modelTRSVCPH);
    p->addModel(modelTRSMS);

    // Any other plugin initialization may go here.
    // As an alternative, consider lazy-loading assets and lookup tables when your module is created to reduce startup times of Rack.
}
