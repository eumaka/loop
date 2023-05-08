#include <iterator> // for std::prev


for (it = track->begin_states(); it != std::prev(track->end_states()); ++it) 
{ 
  SvtxTrackState* state = it->second;
  float l = state->get_pathlength();
}
