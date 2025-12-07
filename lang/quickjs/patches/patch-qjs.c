$NetBSD: patch-qjs.c,v 1.3 2025/02/07 12:36:24 pho Exp $

Portability patch for NetBSD.

--- qjs.c.orig	2025-09-13 08:48:28.000000000 +0000
+++ qjs.c
@@ -136,7 +136,7 @@ static size_t js_trace_malloc_usable_siz
     return malloc_size(ptr);
 #elif defined(_WIN32)
     return _msize((void *)ptr);
-#elif defined(EMSCRIPTEN)
+#elif defined(EMSCRIPTEN) || defined(__NetBSD__)
     return 0;
 #elif defined(__linux__) || defined(__GLIBC__)
     return malloc_usable_size((void *)ptr);
