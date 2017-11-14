#include "storj.h"
#include "uv.h"
#include "Python.h"


void get_info(storj_env_t *env, PyObject *handle);
void get_info_cb(uv_work_t *work_req, int status);
uv_loop_t *set_loop(storj_env_t *env);
void run(uv_loop_t *loop);