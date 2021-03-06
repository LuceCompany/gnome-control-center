#include "hdy-demo-preferences-window.h"

struct _HdyDemoPreferencesWindow
{
  HdyPreferencesWindow parent_instance;
};

G_DEFINE_TYPE (HdyDemoPreferencesWindow, hdy_demo_preferences_window, HDY_TYPE_PREFERENCES_WINDOW)

HdyDemoPreferencesWindow *
hdy_demo_preferences_window_new (void)
{
  return g_object_new (HDY_TYPE_DEMO_PREFERENCES_WINDOW, NULL);
}

static void
hdy_demo_preferences_window_class_init (HdyDemoPreferencesWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/sm/puri/handy/demo/ui/hdy-demo-preferences-window.ui");
}

static void
hdy_demo_preferences_window_init (HdyDemoPreferencesWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
