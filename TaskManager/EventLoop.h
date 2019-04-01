//
//  TaskPool.h
//  TaskPool
//
//  Created by Cao Phuoc Thanh on 3/22/19.
//  Copyright © 2019 Cao Phuoc Thanh. All rights reserved.
//

#ifndef TaskPool_h
#define TaskPool_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Event.h"

typedef void (*lisen_calback)(long, void*,...);

typedef struct EventLoop {
    void (*setInterval)(calback, long);
    void (*setTimeout)(calback, long);
    void (*setImmedate)(calback);
    void (*emit)(long, void*,...);
    void (*linsen)(long, lisen_calback);
    void (*add)(Event);
    void (*remove)(long);
    void (*execute)(void);
    void (*exit)(void);
    int (*count)(void);
    int (*max)(void);
} EventLoop;

EventLoop EventShared(void);

#endif /* TaskPool_h */
