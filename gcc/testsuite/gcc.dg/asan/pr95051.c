/* PR sanitizer/95051 */
/* { dg-do compile } */
/* { dg-options "-fno-sanitize=all -fsanitize=kernel-address --param=asan-stack=1 -O2" } */

struct a {
  struct {
    struct {
      int b;
    } c;
  };
};
struct d {
  struct {
    int e;
  } f;
}

g(int h) {
  struct a *i;
  struct d *j = (struct d*)&h;
  i->c.b = j->f.e;
}
