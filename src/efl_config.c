#include <Elementary.h>
#include <Ecore_Wayland.h>

static void
_scale_set(void)
{
   char *s = NULL;

   s = getenv("ELM_SCALE");
   if (!s) elm_config_scale_set(1.0);

   elm_config_save();
   elm_config_all_flush();
}

int main(int argc, char **argv)
{
   elm_init(argc, argv);

   elm_win_add(NULL, "config", ELM_WIN_BASIC);

   _scale_set();

   //  This program will end after setting the scale value.
   //  If it should stay alive, remove this comment.
   //  elm_run();

   elm_shutdown();

   return 0;
}
