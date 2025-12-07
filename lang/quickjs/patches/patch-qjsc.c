$NetBSD: patch-qjsc.c,v 1.2 2022/01/30 10:55:03 he Exp $

Portability patch for NetBSD.

--- qjsc.c.orig	2025-09-13 08:48:28.000000000 +0000
+++ qjsc.c
@@ -502,7 +502,9 @@ static int output_executable(const char 
              lib_dir, bn_suffix, lto_suffix);
     *arg++ = libjsname;
     *arg++ = "-lm";
+#ifdef CONFIG_LDL
     *arg++ = "-ldl";
+#endif
     *arg++ = "-lpthread";
     *arg = NULL;
 
