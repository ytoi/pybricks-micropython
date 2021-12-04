/* SPDX-License-Identifier: MIT */
/* Copyright (c) 2013, 2014 Damien P. George */
/* Copyright (c) 2018-2021 The Pybricks Authors */

/* top end of the stack */
_estack = ORIGIN(RAM) + LENGTH(RAM);

/* define output sections */
SECTIONS
{
    /* The program code and other data goes into FLASH */
    .text :
    {
        . = ALIGN(4);
        _fw_isr_vector_src = .;   /* The isr vector table must be copied to SRAM since the
                                     firmware doesn't start at the beginning of the flash memory */
        KEEP(*(.isr_vector)) /* isr vector table */

        _etext = .;        /* define a global symbol at end of code */
        _sidata = _etext;  /* This is used by the startup in order to initialize the .data section */
    } >FLASH

    .name :
    {
        *(.name) /* customizable hub name */
    } >FLASH

    .ARM.attributes 0 : { *(.ARM.attributes) }
}
