#include "../overviewer.h"

static int
tracks_start(void *data, RenderState *state, PyObject *support) {
    return 0;
}

static int
tracks_hidden(void *data, RenderState *state, int x, int y, int z) {
    // just hide grass
    return (state->block == 2);
}

RenderPrimitiveInterface primitive_tracks = {
    "tracks", 0,
    tracks_start,
    NULL,
    NULL,
    tracks_hidden,
    NULL,
};
