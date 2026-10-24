#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002DDAB0
// Address: 0x2ddab0 - 0x2ddd18
void func_002DDAB0_0x2ddab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DDAB0_0x2ddab0");
#endif

    switch (ctx->pc) {
        case 0x2ddb08u: goto label_2ddb08;
        case 0x2ddbb8u: goto label_2ddbb8;
        case 0x2ddbd0u: goto label_2ddbd0;
        case 0x2ddbe4u: goto label_2ddbe4;
        case 0x2ddcd8u: goto label_2ddcd8;
        default: break;
    }

    ctx->pc = 0x2ddab0u;

    // 0x2ddab0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ddab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ddab4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2ddab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2ddab8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2ddab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2ddabc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2ddabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2ddac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ddac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddac4: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2ddac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ddac8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ddac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddacc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2ddaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2ddad0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2ddad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2ddad4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2ddad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2ddad8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ddad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ddadc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ddadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ddae0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2ddae0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2ddae4: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x2ddae4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
    // 0x2ddae8: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x2ddae8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ddaec: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x2ddaecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ddaf0: 0x1253007d  beq         $s2, $s3, . + 4 + (0x7D << 2)
    ctx->pc = 0x2DDAF0u;
    {
        const bool branch_taken_0x2ddaf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x2DDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAF0u;
        // 0x2ddaf4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddaf0) {
            ctx->pc = 0x2DDCE8u;
            goto label_2ddce8;
        }
    }
    ctx->pc = 0x2DDAF8u;
    // 0x2ddaf8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ddaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ddafc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2ddafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ddb00: 0x24150379  addiu       $s5, $zero, 0x379
    ctx->pc = 0x2ddb00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 889));
    // 0x2ddb04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ddb04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ddb08:
    // 0x2ddb08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ddb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddb0c: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x2ddb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x2ddb10: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2ddb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2ddb14: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2DDB14u;
    {
        const bool branch_taken_0x2ddb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB14u;
        // 0x2ddb18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb14) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDB1Cu;
    // 0x2ddb1c: 0x4600070  bltz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x2DDB1Cu;
    {
        const bool branch_taken_0x2ddb1c = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2ddb1c) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDB24u;
    // 0x2ddb24: 0x948502fe  lhu         $a1, 0x2FE($a0)
    ctx->pc = 0x2ddb24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x2ddb28: 0x28a20300  slti        $v0, $a1, 0x300
    ctx->pc = 0x2ddb28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x2ddb2c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ddb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ddb30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDB30u;
    {
        const bool branch_taken_0x2ddb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB30u;
        // 0x2ddb34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb30) {
            ctx->pc = 0x2DDB40u;
            goto label_2ddb40;
        }
    }
    ctx->pc = 0x2DDB38u;
    // 0x2ddb38: 0x28a20500  slti        $v0, $a1, 0x500
    ctx->pc = 0x2ddb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x2ddb3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ddb3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ddb40:
    // 0x2ddb40: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2ddb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ddb44: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2DDB44u;
    {
        const bool branch_taken_0x2ddb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB44u;
        // 0x2ddb48: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb44) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDB4Cu;
    // 0x2ddb4c: 0x10750018  beq         $v1, $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DDB4Cu;
    {
        const bool branch_taken_0x2ddb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x2DDB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB4Cu;
        // 0x2ddb50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb4c) {
            ctx->pc = 0x2DDBB0u;
            goto label_2ddbb0;
        }
    }
    ctx->pc = 0x2DDB54u;
    // 0x2ddb54: 0x2862037a  slti        $v0, $v1, 0x37A
    ctx->pc = 0x2ddb54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)890) ? 1 : 0);
    // 0x2ddb58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DDB58u;
    {
        const bool branch_taken_0x2ddb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB58u;
        // 0x2ddb5c: 0x28620361  slti        $v0, $v1, 0x361 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)865) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb58) {
            ctx->pc = 0x2DDB80u;
            goto label_2ddb80;
        }
    }
    ctx->pc = 0x2DDB60u;
    // 0x2ddb60: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2DDB60u;
    {
        const bool branch_taken_0x2ddb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB60u;
        // 0x2ddb64: 0x28620364  slti        $v0, $v1, 0x364 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)868) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb60) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDB68u;
    // 0x2ddb68: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DDB68u;
    {
        const bool branch_taken_0x2ddb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB68u;
        // 0x2ddb6c: 0x24020368  addiu       $v0, $zero, 0x368 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb68) {
            ctx->pc = 0x2DDBB0u;
            goto label_2ddbb0;
        }
    }
    ctx->pc = 0x2DDB70u;
    // 0x2ddb70: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DDB70u;
    {
        const bool branch_taken_0x2ddb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ddb70) {
            ctx->pc = 0x2DDBB0u;
            goto label_2ddbb0;
        }
    }
    ctx->pc = 0x2DDB78u;
    // 0x2ddb78: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2DDB78u;
    {
        const bool branch_taken_0x2ddb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb78) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDB80u;
label_2ddb80:
    // 0x2ddb80: 0x240203af  addiu       $v0, $zero, 0x3AF
    ctx->pc = 0x2ddb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 943));
    // 0x2ddb84: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DDB84u;
    {
        const bool branch_taken_0x2ddb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB84u;
        // 0x2ddb88: 0x286203b0  slti        $v0, $v1, 0x3B0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)944) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb84) {
            ctx->pc = 0x2DDBB0u;
            goto label_2ddbb0;
        }
    }
    ctx->pc = 0x2DDB8Cu;
    // 0x2ddb8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDB8Cu;
    {
        const bool branch_taken_0x2ddb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB8Cu;
        // 0x2ddb90: 0x24020380  addiu       $v0, $zero, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb8c) {
            ctx->pc = 0x2DDBA4u;
            goto label_2ddba4;
        }
    }
    ctx->pc = 0x2DDB94u;
    // 0x2ddb94: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDB94u;
    {
        const bool branch_taken_0x2ddb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ddb94) {
            ctx->pc = 0x2DDBB0u;
            goto label_2ddbb0;
        }
    }
    ctx->pc = 0x2DDB9Cu;
    // 0x2ddb9c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2DDB9Cu;
    {
        const bool branch_taken_0x2ddb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb9c) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDBA4u;
label_2ddba4:
    // 0x2ddba4: 0x240203b7  addiu       $v0, $zero, 0x3B7
    ctx->pc = 0x2ddba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
    // 0x2ddba8: 0x14a2004d  bne         $a1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2DDBA8u;
    {
        const bool branch_taken_0x2ddba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ddba8) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDBB0u;
label_2ddbb0:
    // 0x2ddbb0: 0xc0741f8  jal         func_1D07E0
    ctx->pc = 0x2DDBB0u;
    SET_GPR_U32(ctx, 31, 0x2DDBB8u);
    ctx->pc = 0x2DDBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDBB0u;
    // 0x2ddbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D07E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D07E0u, 0x2DDBB0u, 0x2DDBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBB8u;
label_2ddbb8:
    // 0x2ddbb8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2DDBB8u;
    {
        const bool branch_taken_0x2ddbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddbb8) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDBC0u;
    // 0x2ddbc0: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDBC0u;
    {
        const bool branch_taken_0x2ddbc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddbc0) {
            ctx->pc = 0x2DDBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDBC0u;
            // 0x2ddbc4: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDBDCu;
            goto label_2ddbdc;
        }
    }
    ctx->pc = 0x2DDBC8u;
    // 0x2ddbc8: 0xc0742b8  jal         func_1D0AE0
    ctx->pc = 0x2DDBC8u;
    SET_GPR_U32(ctx, 31, 0x2DDBD0u);
    ctx->pc = 0x2DDBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDBC8u;
    // 0x2ddbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0AE0u, 0x2DDBC8u, 0x2DDBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBD0u;
label_2ddbd0:
    // 0x2ddbd0: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2DDBD0u;
    {
        const bool branch_taken_0x2ddbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddbd0) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDBD8u;
    // 0x2ddbd8: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x2ddbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2ddbdc:
    // 0x2ddbdc: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2DDBDCu;
    SET_GPR_U32(ctx, 31, 0x2DDBE4u);
    ctx->pc = 0x2DDBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDBDCu;
    // 0x2ddbe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2DDBDCu, 0x2DDBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBE4u;
label_2ddbe4:
    // 0x2ddbe4: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2ddbe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2ddbe8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ddbe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddbec: 0x0  nop
    ctx->pc = 0x2ddbecu;
    // NOP
    // 0x2ddbf0: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x2DDBF0u;
    {
        const bool branch_taken_0x2ddbf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ddbf0) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDBF8u;
    // 0x2ddbf8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2ddbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2ddbfc: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2ddbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ddc00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ddc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc04: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2ddc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2ddc08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ddc08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ddc0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ddc0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddc10: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x2ddc10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ddc14: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2ddc14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddc18: 0x0  nop
    ctx->pc = 0x2ddc18u;
    // NOP
    // 0x2ddc1c: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x2DDC1Cu;
    {
        const bool branch_taken_0x2ddc1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ddc1c) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDC24u;
    // 0x2ddc24: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2ddc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2ddc28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ddc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddc2c: 0x0  nop
    ctx->pc = 0x2ddc2cu;
    // NOP
    // 0x2ddc30: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ddc30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddc34: 0x0  nop
    ctx->pc = 0x2ddc34u;
    // NOP
    // 0x2ddc38: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x2DDC38u;
    {
        const bool branch_taken_0x2ddc38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC38u;
        // 0x2ddc3c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddc38) {
            ctx->pc = 0x2DDCE0u;
            goto label_2ddce0;
        }
    }
    ctx->pc = 0x2DDC40u;
    // 0x2ddc40: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2ddc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ddc44: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2ddc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ddc48: 0x50910007  beql        $a0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DDC48u;
    {
        const bool branch_taken_0x2ddc48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x2ddc48) {
            ctx->pc = 0x2DDC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDC48u;
            // 0x2ddc4c: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDC68u;
            goto label_2ddc68;
        }
    }
    ctx->pc = 0x2DDC50u;
    // 0x2ddc50: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2ddc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc54: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2ddc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddc58: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2ddc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ddc5c: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x2ddc5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2ddc60: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2ddc60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2ddc64: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2ddc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2ddc68:
    // 0x2ddc68: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ddc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ddc6c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DDC6Cu;
    {
        const bool branch_taken_0x2ddc6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC6Cu;
        // 0x2ddc70: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddc6c) {
            ctx->pc = 0x2DDC90u;
            goto label_2ddc90;
        }
    }
    ctx->pc = 0x2DDC74u;
    // 0x2ddc74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ddc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc78: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2ddc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ddc7c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ddc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddc80: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2ddc80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ddc84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ddc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc88: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2ddc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ddc8c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ddc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ddc90:
    // 0x2ddc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ddc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddc94: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2ddc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddc98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ddc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc9c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2ddc9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2ddca0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2ddca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2ddca4: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2ddca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x2ddca8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ddca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ddcac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ddcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcb0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2ddcb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ddcb4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2ddcb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ddcb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ddcb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcbc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2ddcbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ddcc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ddcc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcc4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2ddcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2ddcc8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ddcc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddccc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2ddcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ddcd0: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2DDCD0u;
    SET_GPR_U32(ctx, 31, 0x2DDCD8u);
    ctx->pc = 0x2DDCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCD0u;
    // 0x2ddcd4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2DDCD0u, 0x2DDCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCD8u;
label_2ddcd8:
    // 0x2ddcd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDCD8u;
    {
        const bool branch_taken_0x2ddcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCD8u;
        // 0x2ddcdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcd8) {
            ctx->pc = 0x2DDCECu;
            goto label_2ddcec;
        }
    }
    ctx->pc = 0x2DDCE0u;
label_2ddce0:
    // 0x2ddce0: 0x1653ff89  bne         $s2, $s3, . + 4 + (-0x77 << 2)
    ctx->pc = 0x2DDCE0u;
    {
        const bool branch_taken_0x2ddce0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2DDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCE0u;
        // 0x2ddce4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddce0) {
            ctx->pc = 0x2DDB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ddb08;
        }
    }
    ctx->pc = 0x2DDCE8u;
label_2ddce8:
    // 0x2ddce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ddce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ddcec:
    // 0x2ddcec: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2ddcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ddcf0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2ddcf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ddcf4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2ddcf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ddcf8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2ddcf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ddcfc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2ddcfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ddd00: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ddd00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ddd04: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ddd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ddd08: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2ddd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ddd0c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2ddd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ddd10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD10u;
        // 0x2ddd14: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDD18u;
}
