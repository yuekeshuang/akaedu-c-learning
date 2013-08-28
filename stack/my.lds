ENTRY(add)
SECTTONS
{
  .= 0x0;
  .text		:
  {
	add.o	(.text)
	main.o	(.text)
  }
  .data		: {*(.data)}
  .bss		: {	*(.bss)}
}
