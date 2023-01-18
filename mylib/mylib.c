
#include <stdio.h>

void states(int s0, int s1, int o0, int b, int *ns0, int *ns1, int *no0) {
    // if the current state is 0.0 cents (s0 = 0, s1 = 0)
    if (s0 == 0 && s1 == 0) {
        // if the input is a coin (b = 1)
        if (b == 1) {
            // update the state to 0.1 cents (ns0 = 1, ns1 = 0)
            *ns0 = 1;
            *ns1 = 0;
            *no0 = 0;
        } else {
            // otherwise, stay in the same state (ns0 = 0, ns1 = 0)
            *ns0 = 0;
            *ns1 = 0;
            *no0 = 0;
        }
    }
    // if the current state is 0.1 cents (s0 = 1, s1 = 0)
    else if (s0 == 1 && s1 == 0) {
        // if the input is a coin (b = 1)
        if (b == 1) {
            // update the state to 0.2 cents (ns0 = 0, ns1 = 1)
            *ns0 = 0;
            *ns1 = 1;
            *no0 = 0;
        } else {
            // otherwise, update the state to 0.0 cents (ns0 = 1, ns1 = 0)
            *ns0 = 1;
            *ns1 = 0;
            *no0 = 0;
        }
    }
    // if the current state is 0.2 cents (s0 = 0, s1 = 1)
    else if (s0 == 0 && s1 == 1) {
        // if the input is a coin (b = 1)
        if (b == 1) {
            // update the state to 0.3 cents (ns0 = 1, ns1 = 1)
            *ns0 = 1;
            *ns1 = 1;
            *no0 = 0;
        } else {
            // otherwise, update the state to 0.1 cents (ns0 = 0, ns1 = 1)
            *ns0 = 0;
            *ns1 = 1;
            *no0 = 0;
        }
    }
    // if the current state is 0.3 cents (s0 = 1, s1 = 1)
    else if (s0 == 1 && s1 == 1) {
        // if the input is a coin (b = 1)
        if (b == 1) {
            // stay in the same state (ns0 = 1, ns1 = 1)
            *ns0 = 1;
            *ns1 = 1;
            *no0 = 0;
        } else {
            // otherwise, update the state to sold out state (ns0 = 1, ns1 = 1, no0 = 1)
            *ns0 = 1;
            *ns1 = 1;
            *no0 = 1;
        }
    }
}
