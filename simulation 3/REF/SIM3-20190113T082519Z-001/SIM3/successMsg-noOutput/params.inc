 // Design parameters
 // =================

 // Instruction Opcodes
 localparam
    //MULW	= 11'b0110011_000_1,
	LW      = 10'b0000011_010,
    SW      = 10'b0100011_010,
    ALU     = 10'b0110011_xxx,
    BEQ     = 10'b1100011_000,
    JAL     = 10'b1101111_xxx;

 // PC selector
 localparam
    PC_ALU = 1'b1,
    PC_INC = 1'b0;

 // Immediate selector
 localparam
    IMM_B   = 2'b00,
    IMM_J   = 2'b01,
    IMM_S   = 2'b10,
    IMM_L   = 2'b11;

 // ALU_A
 localparam
    ALUA_PCC = 1'b0,
    ALUA_REG = 1'b1;

 // ALU_B
 localparam
    ALUB_IMM = 1'b0,
    ALUB_REG = 1'b1;

 // ALU operations
 localparam
    ALU_ADD = 4'b000_0,
    ALU_SUB = 4'b000_1,
    ALU_SLL = 4'b001_0,
    ALU_SLT = 4'b010_0,
    ALU_SLTU= 4'b011_0,
    ALU_XOR = 4'b100_0,
    ALU_SRL = 4'b101_0,
    ALU_SRA = 4'b101_1,
    ALU_OR  = 4'b110_0,
    ALU_AND = 4'b111_0;

 // Writeback input select
 localparam
    WB_MDR      = 2'b00,
    WB_ALUOUT   = 2'b01,
    WB_PC       = 2'b10,
	WB_MUL_RES	= 2'b11;
