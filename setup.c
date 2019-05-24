char fpe_type[8];

static int __init fpe_setup(char *line)
{
	memcpy(fpe_type, line, 8);
	return 1;
}
Fri May 24 15:51:41 PDT 2019
Fri May 24 15:52:02 PDT 2019
Fri May 24 16:31:31 PDT 2019
Fri May 24 16:31:48 PDT 2019
