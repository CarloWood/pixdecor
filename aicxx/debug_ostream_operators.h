#include "deco-layout.hpp"

namespace wf::pixdecor {

inline char const* to_string(decoration_layout_action_t action)
{
  switch (action)
  {
    AI_CASE_RETURN(DECORATION_ACTION_NONE);
    AI_CASE_RETURN(DECORATION_ACTION_MOVE);
    AI_CASE_RETURN(DECORATION_ACTION_RESIZE);
    AI_CASE_RETURN(DECORATION_ACTION_CLOSE);
    AI_CASE_RETURN(DECORATION_ACTION_TOGGLE_MAXIMIZE);
    AI_CASE_RETURN(DECORATION_ACTION_MINIMIZE);
    AI_CASE_RETURN(DECORATION_ACTION_SHADE);
    AI_CASE_RETURN(DECORATION_ACTION_UNSHADE);
  }
  return "Unknown decoration_layout_action_t";
}

inline std::ostream& operator<<(std::ostream& os, decoration_layout_action_t action)
{
  return os << to_string(action);
}

inline std::ostream& operator<<(std::ostream& os, pixdecor_layout_t::action_response_t const& action_response)
{
  os << '{';
  os << "action:" << action_response.action <<
      ", edges:" << action_response.edges;
  os << '}';
  return os;
};

} // namespace wf::pixdecor
