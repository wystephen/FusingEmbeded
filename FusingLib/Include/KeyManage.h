

static uint32_t CpuID[3];

void GetCPI_ID(void){
	CpuID[0] = * (uint32_t) (0x1fff7a10);
	CpuID[1] = *(uint32_t)(0x1fff7a14);
	CpuID[2] = *(uint32_t)(0x1fff7a18);





}
