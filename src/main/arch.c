
/* This is needed for automake, so that it can build an empty archive */

#ifdef _EE
  int __round42;
#else
  int pointless_symbol_so_the_archive_doesnt_look_empty;
#endif
