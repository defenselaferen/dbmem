#include <stdio.h>
#include <stdlib.h>

#include "../header/conditions.hpp"

conditions::Dconditions conditions::Fconditions(bool conditions_boolean) {
    conditions::Dconditions value = FALSE;
    if(conditions_boolean) value = TRUE;
    return value;
}