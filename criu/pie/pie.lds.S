OUTPUT_ARCH(i386:x86-64)
TARGET(elf64-x86-64)
SECTIONS
{
	.text : {
		*(.head.text)
		*(.text*)
	}

	.data : {
		*(.data*)
		*(.bss*)
	}

	.rodata : {
		*(.rodata*)
		*(.got*)
	}

	.toc : ALIGN(8) {
		*(.toc*)
	}

	/DISCARD/ : {
		*(.debug*)
		*(.comment*)
		*(.note*)
		*(.group*)
		*(.eh_frame*)
	}
__export_parasite_args = .;
}
