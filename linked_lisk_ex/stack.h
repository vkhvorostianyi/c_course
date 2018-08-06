/* Stack library - this is library offers the
   minimal stack operations for a stack of integers (easily changeable) */

typedef int stack_data;

extern void stack_init();

extern void stack_clear();

extern int stack_enpty();

extern void stach_push(stack_data d);

extern stack_data stack_pop();


