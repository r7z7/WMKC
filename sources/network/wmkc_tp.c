#include <network/wmkc_tp.h>

WMKC_PUBLIC(wmkcErr_obj) wmkcTp_new WMKC_OPEN_API
WMKC_OF((wmkcTp_obj **net, wmkcString addr, wmkc_u16 port, wmkc_u32 maxRetry))
{
    wmkcErr_obj error;

    if(!net || !addr) {
        wmkcErr_return(error, wmkcErr_ErrNULL, "wmkcTp_new: net or addr is NULL.");
    }
    if(!wmkcMemoryNew(wmkcTp_obj *, (*net), sizeof(wmkcTp_obj))) {
        wmkcErr_return(error, wmkcErr_ErrMemory,
            "wmkcTp_new: (*net) Failed to apply for memory.");
    }

    (*net)->addr = addr;
    if(port) {
        (*net)->port = port;
    } else {
        (*net)->port = WMKC_TP_DEFAULT_PORT;
    }
    if(maxRetry) {
        (*net)->maxRetry = maxRetry;
    } else {
        (*net)->maxRetry = WMKC_TP_DEFAULT_MAX_RETRY;
    }
    (*net)->snc = wmkcNull;
    // SNC_new(&(*net)->snc, SNC_256);

    wmkcErr_return(error, wmkcErr_OK, "OK.");
}

WMKC_PUBLIC(wmkcErr_obj) wmkcTp_free WMKC_OPEN_API
WMKC_OF((wmkcTp_obj **net))
{
    wmkcErr_obj error;
    if(!net) {
        wmkcErr_return(error, wmkcErr_ErrNULL, "wmkcTp_free: net is NULL.");
    }

    if((*net)->snc) {
        SNC_release(&(*net)->snc);
    }
    wmkcMemoryFree((*net));

    wmkcErr_return(error, wmkcErr_OK, "OK.");
}

WMKC_PUBLIC(wmkcErr_obj) wmkcTp_Listen WMKC_OPEN_API
WMKC_OF((wmkcTp_obj *net, wmkcFileString fn))
{
    wmkcErr_obj error;
    if(!net || !net->addr || !net->port || !fn) {
        wmkcErr_return(error, wmkcErr_ErrNULL,
            "wmkcTp_Listen: net or net->addr or net->port or fn is NULL.");
    }
    if(!net->maxRetry) {
        net->maxRetry = WMKC_TP_DEFAULT_MAX_RETRY;
    }

    wmkcErr_return(error, wmkcErr_OK, "OK.");
}

WMKC_PUBLIC(wmkcErr_obj) wmkcTp_Client WMKC_OPEN_API
WMKC_OF((wmkcTp_obj *net, wmkcFileString fn))
{
    wmkcErr_obj error;
    if(!net || !net->addr || !net->port || !fn) {
        wmkcErr_return(error, wmkcErr_ErrNULL,
            "wmkcTp_Listen: net or net->addr or net->port or fn is NULL.");
    }
    if(!net->maxRetry) {
        net->maxRetry = WMKC_TP_DEFAULT_MAX_RETRY;
    }

    wmkcErr_return(error, wmkcErr_OK, "OK.");
}
