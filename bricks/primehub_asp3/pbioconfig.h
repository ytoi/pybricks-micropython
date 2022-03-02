// SPDX-License-Identifier: MIT
// Copyright (c) 2019-2020 The Pybricks Authors

#define PBIO_CONFIG_DCMOTOR                 (1)
#define PBIO_CONFIG_LIGHT                   (1)
#define PBIO_CONFIG_LIGHT_MATRIX            (1)
#define PBIO_CONFIG_TACHO                   (1)

#define PBIO_ON_ASP3                        (1)
#define PBIO_CONFIG_USE_PORT_F_AS_ASP3_DEBUG_UART  (1)

#define PBIO_CONFIG_UARTDEV                 (1)
#if PBIO_CONFIG_USE_PORT_F_AS_ASP3_DEBUG_UART
#define PBIO_CONFIG_UARTDEV_NUM_DEV         (5)
#else
#define PBIO_CONFIG_UARTDEV_NUM_DEV         (6)
#endif

#define PBIO_CONFIG_ENABLE_SYS              (1)
