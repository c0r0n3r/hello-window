#include <iostream>

bool
on_delete_event(GdkEventAny *event)


{
  std::cout << "on_delete_event" << std::endl;

  return true;
}
