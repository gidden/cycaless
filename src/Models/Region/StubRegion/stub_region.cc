// stub_region.cc
// Implements the StubRegion class

#include "stub_region.h"

namespace cycamore {

/* --------------------
 * all MODEL classes have these members
 * --------------------
 */

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
StubRegion::StubRegion(cyclus::Context* ctx) : cyclus::RegionModel(ctx) {}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
StubRegion::~StubRegion() {}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
std::string StubRegion::str() {
  return cyclus::RegionModel::str();
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void StubRegion::InitModuleMembers(cyclus::QueryEngine* qe) {}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void StubRegion::EnterSimulation(cyclus::Model* parent) {
  cyclus::RegionModel::EnterSimulation(parent);
}

/* ------------------- */


/* --------------------
 * all COMMUNICATOR classes have these members
 * --------------------
 */

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void StubRegion::ReceiveMessage(cyclus::Message::Ptr msg) {}

/* ------------------- */


/* --------------------
 * all REGIONMODEL classes have these members
 * --------------------
 */

/* ------------------- */


/* --------------------
 * all MODEL classes have these members
 * --------------------
 */

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
extern "C" cyclus::Model* ConstructStubRegion(cyclus::Context* ctx) {
  return new StubRegion(ctx);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
extern "C" void DestructStubRegion(cyclus::Model* model) {
  delete model;
}

/* ------------------- */
} // namespace cycamore