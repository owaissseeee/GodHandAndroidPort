#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: fileLoad__7cMcLoad
// Address: 0x7c1c40 - 0x7c2130
void fileLoad__7cMcLoad_0x7c1c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileLoad__7cMcLoad_0x7c1c40");
#endif

    switch (ctx->pc) {
        case 0x7c1c9cu: goto label_7c1c9c;
        case 0x7c1cb0u: goto label_7c1cb0;
        case 0x7c1ce8u: goto label_7c1ce8;
        case 0x7c1d64u: goto label_7c1d64;
        case 0x7c1dc0u: goto label_7c1dc0;
        case 0x7c1e38u: goto label_7c1e38;
        case 0x7c1e48u: goto label_7c1e48;
        case 0x7c1e58u: goto label_7c1e58;
        case 0x7c1e7cu: goto label_7c1e7c;
        case 0x7c1e94u: goto label_7c1e94;
        case 0x7c1edcu: goto label_7c1edc;
        case 0x7c1ef4u: goto label_7c1ef4;
        case 0x7c1f04u: goto label_7c1f04;
        case 0x7c1f70u: goto label_7c1f70;
        case 0x7c1f84u: goto label_7c1f84;
        case 0x7c1fb0u: goto label_7c1fb0;
        case 0x7c1fc0u: goto label_7c1fc0;
        case 0x7c1fecu: goto label_7c1fec;
        case 0x7c2004u: goto label_7c2004;
        case 0x7c202cu: goto label_7c202c;
        case 0x7c205cu: goto label_7c205c;
        case 0x7c206cu: goto label_7c206c;
        case 0x7c207cu: goto label_7c207c;
        default: break;
    }

    ctx->pc = 0x7c1c40u;

    // 0x7c1c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7c1c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7c1c44: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7c1c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7c1c48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7c1c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7c1c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c1c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1c50: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7c1c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7c1c54: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c1c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c1c58: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7c1c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7c1c5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c1c60: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c1c64: 0x10720080  beq         $v1, $s2, . + 4 + (0x80 << 2)
    ctx->pc = 0x7C1C64u;
    {
        const bool branch_taken_0x7c1c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1C64u;
        // 0x7c1c68: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1c64) {
            ctx->pc = 0x7C1E68u;
            goto label_7c1e68;
        }
    }
    ctx->pc = 0x7C1C6Cu;
    // 0x7c1c6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C1C6Cu;
    {
        const bool branch_taken_0x7c1c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1c6c) {
            ctx->pc = 0x7C1C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1C6Cu;
            // 0x7c1c70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1C84u;
            goto label_7c1c84;
        }
    }
    ctx->pc = 0x7C1C74u;
    // 0x7c1c74: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C1C74u;
    {
        const bool branch_taken_0x7c1c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1C74u;
        // 0x7c1c78: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1c74) {
            ctx->pc = 0x7C1C9Cu;
            goto label_7c1c9c;
        }
    }
    ctx->pc = 0x7C1C7Cu;
    // 0x7c1c7c: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x7C1C7Cu;
    {
        const bool branch_taken_0x7c1c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1C7Cu;
        // 0x7c1c80: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1c7c) {
            ctx->pc = 0x7C2118u;
            goto label_7c2118;
        }
    }
    ctx->pc = 0x7C1C84u;
label_7c1c84:
    // 0x7c1c84: 0x106200b5  beq         $v1, $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x7C1C84u;
    {
        const bool branch_taken_0x7c1c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1C84u;
        // 0x7c1c88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1c84) {
            ctx->pc = 0x7C1F5Cu;
            goto label_7c1f5c;
        }
    }
    ctx->pc = 0x7C1C8Cu;
    // 0x7c1c8c: 0x106200d3  beq         $v1, $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x7C1C8Cu;
    {
        const bool branch_taken_0x7c1c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1C8Cu;
        // 0x7c1c90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1c8c) {
            ctx->pc = 0x7C1FDCu;
            goto label_7c1fdc;
        }
    }
    ctx->pc = 0x7C1C94u;
    // 0x7c1c94: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x7C1C94u;
    {
        const bool branch_taken_0x7c1c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1C94u;
        // 0x7c1c98: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1c94) {
            ctx->pc = 0x7C2118u;
            goto label_7c2118;
        }
    }
    ctx->pc = 0x7C1C9Cu;
label_7c1c9c:
    // 0x7c1c9c: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x7c1c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c1ca0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x7c1ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c1ca4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x7c1ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c1ca8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x7c1ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c1cac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c1cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7c1cb0:
    // 0x7c1cb0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x7c1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c1cb4: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x7c1cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c1cb8: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x7C1CB8u;
    {
        const bool branch_taken_0x7c1cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c1cb8) {
            ctx->pc = 0x7C1CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1CB8u;
            // 0x7c1cbc: 0x66001a  div         $zero, $v1, $a2 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1DA0u;
            goto label_7c1da0;
        }
    }
    ctx->pc = 0x7C1CC0u;
    // 0x7c1cc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c1cc4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C1CC4u;
    {
        const bool branch_taken_0x7c1cc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1cc4) {
            ctx->pc = 0x7C1CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1CC4u;
            // 0x7c1cc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1CCCu;
            goto label_7c1ccc;
        }
    }
    ctx->pc = 0x7C1CCCu;
label_7c1ccc:
    // 0x7c1ccc: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x7c1cccu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c1cd0: 0x2010  mfhi        $a0
    ctx->pc = 0x7c1cd0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x7c1cd4: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x7C1CD4u;
    {
        const bool branch_taken_0x7c1cd4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x7C1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1CD4u;
        // 0x7c1cd8: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1cd4) {
            ctx->pc = 0x7C1D10u;
            goto label_7c1d10;
        }
    }
    ctx->pc = 0x7C1CDCu;
    // 0x7c1cdc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x7c1cdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1ce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c1ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1ce4: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x7c1ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
label_7c1ce8:
    // 0x7c1ce8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c1cec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C1CECu;
    {
        const bool branch_taken_0x7c1cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1CECu;
        // 0x7c1cf0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1cec) {
            ctx->pc = 0x7C1D08u;
            goto label_7c1d08;
        }
    }
    ctx->pc = 0x7C1CF4u;
    // 0x7c1cf4: 0x0  nop
    ctx->pc = 0x7c1cf4u;
    // NOP
    // 0x7c1cf8: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C1CF8u;
    {
        const bool branch_taken_0x7c1cf8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1CF8u;
        // 0x7c1cfc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1cf8) {
            ctx->pc = 0x7C1CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1ce8;
        }
    }
    ctx->pc = 0x7C1D00u;
    // 0x7c1d00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C1D00u;
    {
        const bool branch_taken_0x7c1d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1D00u;
        // 0x7c1d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1d00) {
            ctx->pc = 0x7C1D38u;
            goto label_7c1d38;
        }
    }
    ctx->pc = 0x7C1D08u;
label_7c1d08:
    // 0x7c1d08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C1D08u;
    {
        const bool branch_taken_0x7c1d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1D08u;
        // 0x7c1d0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1d08) {
            ctx->pc = 0x7C1D38u;
            goto label_7c1d38;
        }
    }
    ctx->pc = 0x7C1D10u;
label_7c1d10:
    // 0x7c1d10: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x7c1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c1d14: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x7c1d14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x7c1d18: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c1d18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c1d1c: 0x902004  sllv        $a0, $s0, $a0
    ctx->pc = 0x7c1d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c1d20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c1d24: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x7c1d24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x7c1d28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x7c1d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x7c1d2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c1d30: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c1d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c1d34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c1d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7c1d38:
    // 0x7c1d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7c1d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7c1d3c: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x7C1D3Cu;
    {
        const bool branch_taken_0x7c1d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1D3Cu;
        // 0x7c1d40: 0x24c46900  addiu       $a0, $a2, 0x6900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 26880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1d3c) {
            ctx->pc = 0x7C20D0u;
            goto label_7c20d0;
        }
    }
    ctx->pc = 0x7C1D44u;
    // 0x7c1d44: 0xae2800f0  sw          $t0, 0xF0($s1)
    ctx->pc = 0x7c1d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 8));
    // 0x7c1d48: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c1d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c1d4c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c1d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c1d50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x7c1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x7c1d54: 0x54470006  bnel        $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C1D54u;
    {
        const bool branch_taken_0x7c1d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x7c1d54) {
            ctx->pc = 0x7C1D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1D54u;
            // 0x7c1d58: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1D70u;
            goto label_7c1d70;
        }
    }
    ctx->pc = 0x7C1D5Cu;
    // 0x7c1d5c: 0xc1f23c4  jal         func_7C8F10
    ctx->pc = 0x7C1D5Cu;
    SET_GPR_U32(ctx, 31, 0x7C1D64u);
    ctx->pc = 0x7C1D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1D5Cu;
    // 0x7c1d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F10u, 0x7C1D5Cu, 0x7C1D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1D64u;
label_7c1d64:
    // 0x7c1d64: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x7c1d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x7c1d68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C1D68u;
    {
        const bool branch_taken_0x7c1d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1D68u;
        // 0x7c1d6c: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1d68) {
            ctx->pc = 0x7C1D78u;
            goto label_7c1d78;
        }
    }
    ctx->pc = 0x7C1D70u;
label_7c1d70:
    // 0x7c1d70: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x7c1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7c1d74: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x7c1d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_7c1d78:
    // 0x7c1d78: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x7c1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7c1d7c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x7c1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x7c1d80: 0x106200dc  beq         $v1, $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x7C1D80u;
    {
        const bool branch_taken_0x7c1d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1D80u;
        // 0x7c1d84: 0x28620012  slti        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1d80) {
            ctx->pc = 0x7C20F4u;
            goto label_7c20f4;
        }
    }
    ctx->pc = 0x7C1D88u;
    // 0x7c1d88: 0x144000e1  bnez        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x7C1D88u;
    {
        const bool branch_taken_0x7c1d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1D88u;
        // 0x7c1d8c: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1d88) {
            ctx->pc = 0x7C2110u;
            goto label_7c2110;
        }
    }
    ctx->pc = 0x7C1D90u;
    // 0x7c1d90: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x7c1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x7c1d94: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x7c1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x7c1d98: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x7C1D98u;
    {
        const bool branch_taken_0x7c1d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1D98u;
        // 0x7c1d9c: 0xae2300d8  sw          $v1, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1d98) {
            ctx->pc = 0x7C2110u;
            goto label_7c2110;
        }
    }
    ctx->pc = 0x7C1DA0u;
label_7c1da0:
    // 0x7c1da0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C1DA0u;
    {
        const bool branch_taken_0x7c1da0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1da0) {
            ctx->pc = 0x7C1DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1DA0u;
            // 0x7c1da4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1DA8u;
            goto label_7c1da8;
        }
    }
    ctx->pc = 0x7C1DA8u;
label_7c1da8:
    // 0x7c1da8: 0x2010  mfhi        $a0
    ctx->pc = 0x7c1da8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x7c1dac: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x7C1DACu;
    {
        const bool branch_taken_0x7c1dac = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x7C1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1DACu;
        // 0x7c1db0: 0xe4102a  slt         $v0, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1dac) {
            ctx->pc = 0x7C1DE8u;
            goto label_7c1de8;
        }
    }
    ctx->pc = 0x7C1DB4u;
    // 0x7c1db4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c1db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1db8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x7c1db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1dbc: 0x0  nop
    ctx->pc = 0x7c1dbcu;
    // NOP
label_7c1dc0:
    // 0x7c1dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c1dc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C1DC4u;
    {
        const bool branch_taken_0x7c1dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1DC4u;
        // 0x7c1dc8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1dc4) {
            ctx->pc = 0x7C1DE0u;
            goto label_7c1de0;
        }
    }
    ctx->pc = 0x7C1DCCu;
    // 0x7c1dcc: 0x0  nop
    ctx->pc = 0x7c1dccu;
    // NOP
    // 0x7c1dd0: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C1DD0u;
    {
        const bool branch_taken_0x7c1dd0 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1DD0u;
        // 0x7c1dd4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1dd0) {
            ctx->pc = 0x7C1DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1dc0;
        }
    }
    ctx->pc = 0x7C1DD8u;
    // 0x7c1dd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7C1DD8u;
    {
        const bool branch_taken_0x7c1dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1DD8u;
        // 0x7c1ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1dd8) {
            ctx->pc = 0x7C1E0Cu;
            goto label_7c1e0c;
        }
    }
    ctx->pc = 0x7C1DE0u;
label_7c1de0:
    // 0x7c1de0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7C1DE0u;
    {
        const bool branch_taken_0x7c1de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1DE0u;
        // 0x7c1de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1de0) {
            ctx->pc = 0x7C1E0Cu;
            goto label_7c1e0c;
        }
    }
    ctx->pc = 0x7C1DE8u;
label_7c1de8:
    // 0x7c1de8: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x7c1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c1dec: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x7c1decu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x7c1df0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c1df0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c1df4: 0x902004  sllv        $a0, $s0, $a0
    ctx->pc = 0x7c1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c1df8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c1dfc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x7c1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x7c1e00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c1e04: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c1e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c1e08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c1e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7c1e0c:
    // 0x7c1e0c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c1e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c1e10: 0x50520005  beql        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C1E10u;
    {
        const bool branch_taken_0x7c1e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x7c1e10) {
            ctx->pc = 0x7C1E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1E10u;
            // 0x7c1e14: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1E28u;
            goto label_7c1e28;
        }
    }
    ctx->pc = 0x7C1E18u;
    // 0x7c1e18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x7c1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c1e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c1e20: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x7C1E20u;
    {
        const bool branch_taken_0x7c1e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1E20u;
        // 0x7c1e24: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1e20) {
            ctx->pc = 0x7C1CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1cb0;
        }
    }
    ctx->pc = 0x7C1E28u;
label_7c1e28:
    // 0x7c1e28: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x7c1e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c1e2c: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x7c1e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c1e30: 0xc1f0c7c  jal         func_7C31F0
    ctx->pc = 0x7C1E30u;
    SET_GPR_U32(ctx, 31, 0x7C1E38u);
    ctx->pc = 0x7C1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1E30u;
    // 0x7c1e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C31F0u, 0x7C1E30u, 0x7C1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1E38u;
label_7c1e38:
    // 0x7c1e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c1e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1e3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c1e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1e40: 0xc1f0cf4  jal         func_7C33D0
    ctx->pc = 0x7C1E40u;
    SET_GPR_U32(ctx, 31, 0x7C1E48u);
    ctx->pc = 0x7C1E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1E40u;
    // 0x7c1e44: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C33D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C33D0u, 0x7C1E40u, 0x7C1E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1E48u;
label_7c1e48:
    // 0x7c1e48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c1e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1e4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c1e50: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C1E50u;
    SET_GPR_U32(ctx, 31, 0x7C1E58u);
    ctx->pc = 0x7C1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1E50u;
    // 0x7c1e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C1E50u, 0x7C1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1E58u;
label_7c1e58:
    // 0x7c1e58: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x7C1E58u;
    {
        const bool branch_taken_0x7c1e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1E58u;
        // 0x7c1e5c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1e58) {
            ctx->pc = 0x7C2104u;
            goto label_7c2104;
        }
    }
    ctx->pc = 0x7C1E60u;
    // 0x7c1e60: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x7C1E60u;
    {
        const bool branch_taken_0x7c1e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1E60u;
        // 0x7c1e64: 0xae3200f4  sw          $s2, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1e60) {
            ctx->pc = 0x7C2110u;
            goto label_7c2110;
        }
    }
    ctx->pc = 0x7C1E68u;
label_7c1e68:
    // 0x7c1e68: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c1e6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c1e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1e70: 0x24501740  addiu       $s0, $v0, 0x1740
    ctx->pc = 0x7c1e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c1e74: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C1E74u;
    SET_GPR_U32(ctx, 31, 0x7C1E7Cu);
    ctx->pc = 0x7C1E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1E74u;
    // 0x7c1e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C1E74u, 0x7C1E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1E7Cu;
label_7c1e7c:
    // 0x7c1e7c: 0x545200a5  bnel        $v0, $s2, . + 4 + (0xA5 << 2)
    ctx->pc = 0x7C1E7Cu;
    {
        const bool branch_taken_0x7c1e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c1e7c) {
            ctx->pc = 0x7C1E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1E7Cu;
            // 0x7c1e80: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C2114u;
            goto label_7c2114;
        }
    }
    ctx->pc = 0x7C1E84u;
    // 0x7c1e84: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c1e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c1e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1e8c: 0xc1f0bc0  jal         func_7C2F00
    ctx->pc = 0x7C1E8Cu;
    SET_GPR_U32(ctx, 31, 0x7C1E94u);
    ctx->pc = 0x7C1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1E8Cu;
    // 0x7c1e90: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2F00u, 0x7C1E8Cu, 0x7C1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1E94u;
label_7c1e94:
    // 0x7c1e94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c1e94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1e98: 0x1073001e  beq         $v1, $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x7C1E98u;
    {
        const bool branch_taken_0x7c1e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x7C1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1E98u;
        // 0x7c1e9c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1e98) {
            ctx->pc = 0x7C1F14u;
            goto label_7c1f14;
        }
    }
    ctx->pc = 0x7C1EA0u;
    // 0x7c1ea0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C1EA0u;
    {
        const bool branch_taken_0x7c1ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1EA0u;
        // 0x7c1ea4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1ea0) {
            ctx->pc = 0x7C1EB8u;
            goto label_7c1eb8;
        }
    }
    ctx->pc = 0x7C1EA8u;
    // 0x7c1ea8: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C1EA8u;
    {
        const bool branch_taken_0x7c1ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1EA8u;
        // 0x7c1eac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1ea8) {
            ctx->pc = 0x7C1EC8u;
            goto label_7c1ec8;
        }
    }
    ctx->pc = 0x7C1EB0u;
    // 0x7c1eb0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x7C1EB0u;
    {
        const bool branch_taken_0x7c1eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1EB0u;
        // 0x7c1eb4: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1eb0) {
            ctx->pc = 0x7C2108u;
            goto label_7c2108;
        }
    }
    ctx->pc = 0x7C1EB8u;
label_7c1eb8:
    // 0x7c1eb8: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x7C1EB8u;
    {
        const bool branch_taken_0x7c1eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1EB8u;
        // 0x7c1ebc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1eb8) {
            ctx->pc = 0x7C1F50u;
            goto label_7c1f50;
        }
    }
    ctx->pc = 0x7C1EC0u;
    // 0x7c1ec0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x7C1EC0u;
    {
        const bool branch_taken_0x7c1ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1EC0u;
        // 0x7c1ec4: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1ec0) {
            ctx->pc = 0x7C2108u;
            goto label_7c2108;
        }
    }
    ctx->pc = 0x7C1EC8u;
label_7c1ec8:
    // 0x7c1ec8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x7c1ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c1eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1ed0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x7c1ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c1ed4: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C1ED4u;
    SET_GPR_U32(ctx, 31, 0x7C1EDCu);
    ctx->pc = 0x7C1ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1ED4u;
    // 0x7c1ed8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C1ED4u, 0x7C1EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1EDCu;
label_7c1edc:
    // 0x7c1edc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x7c1edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7c1ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c1ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1ee4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x7c1ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x7c1ee8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c1ee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1eec: 0xc1f0d98  jal         func_7C3660
    ctx->pc = 0x7C1EECu;
    SET_GPR_U32(ctx, 31, 0x7C1EF4u);
    ctx->pc = 0x7C1EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1EECu;
    // 0x7c1ef0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3660u, 0x7C1EECu, 0x7C1EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1EF4u;
label_7c1ef4:
    // 0x7c1ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c1ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1ef8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c1ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1efc: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C1EFCu;
    SET_GPR_U32(ctx, 31, 0x7C1F04u);
    ctx->pc = 0x7C1F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1EFCu;
    // 0x7c1f00: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C1EFCu, 0x7C1F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1F04u;
label_7c1f04:
    // 0x7c1f04: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x7C1F04u;
    {
        const bool branch_taken_0x7c1f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1F04u;
        // 0x7c1f08: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1f04) {
            ctx->pc = 0x7C2104u;
            goto label_7c2104;
        }
    }
    ctx->pc = 0x7C1F0Cu;
    // 0x7c1f0c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x7C1F0Cu;
    {
        const bool branch_taken_0x7c1f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1F0Cu;
        // 0x7c1f10: 0xae3300f4  sw          $s3, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1f0c) {
            ctx->pc = 0x7C2110u;
            goto label_7c2110;
        }
    }
    ctx->pc = 0x7C1F14u;
label_7c1f14:
    // 0x7c1f14: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x7c1f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c1f18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c1f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c1f1c: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x7c1f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c1f20: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x7c1f20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x7c1f24: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x7c1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c1f28: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x7c1f28u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x7c1f2c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7c1f2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7c1f30: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x7c1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c1f34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c1f38: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x7c1f38u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x7c1f3c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7c1f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c1f40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7c1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7c1f44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c1f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c1f48: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x7C1F48u;
    {
        const bool branch_taken_0x7c1f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1F48u;
        // 0x7c1f4c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1f48) {
            ctx->pc = 0x7C1C9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1c9c;
        }
    }
    ctx->pc = 0x7C1F50u;
label_7c1f50:
    // 0x7c1f50: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c1f54: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x7C1F54u;
    {
        const bool branch_taken_0x7c1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1F54u;
        // 0x7c1f58: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1f54) {
            ctx->pc = 0x7C210Cu;
            goto label_7c210c;
        }
    }
    ctx->pc = 0x7C1F5Cu;
label_7c1f5c:
    // 0x7c1f5c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c1f60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c1f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1f64: 0x24501740  addiu       $s0, $v0, 0x1740
    ctx->pc = 0x7c1f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c1f68: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C1F68u;
    SET_GPR_U32(ctx, 31, 0x7C1F70u);
    ctx->pc = 0x7C1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1F68u;
    // 0x7c1f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C1F68u, 0x7C1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1F70u;
label_7c1f70:
    // 0x7c1f70: 0x54520068  bnel        $v0, $s2, . + 4 + (0x68 << 2)
    ctx->pc = 0x7C1F70u;
    {
        const bool branch_taken_0x7c1f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c1f70) {
            ctx->pc = 0x7C1F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1F70u;
            // 0x7c1f74: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C2114u;
            goto label_7c2114;
        }
    }
    ctx->pc = 0x7C1F78u;
    // 0x7c1f78: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1f7c: 0xc1f0bf4  jal         func_7C2FD0
    ctx->pc = 0x7C1F7Cu;
    SET_GPR_U32(ctx, 31, 0x7C1F84u);
    ctx->pc = 0x7C1F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1F7Cu;
    // 0x7c1f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2FD0u, 0x7C1F7Cu, 0x7C1F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1F84u;
label_7c1f84:
    // 0x7c1f84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c1f84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1f88: 0x10720005  beq         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C1F88u;
    {
        const bool branch_taken_0x7c1f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1F88u;
        // 0x7c1f8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1f88) {
            ctx->pc = 0x7C1FA0u;
            goto label_7c1fa0;
        }
    }
    ctx->pc = 0x7C1F90u;
    // 0x7c1f90: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7C1F90u;
    {
        const bool branch_taken_0x7c1f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1F90u;
        // 0x7c1f94: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1f90) {
            ctx->pc = 0x7C1FD0u;
            goto label_7c1fd0;
        }
    }
    ctx->pc = 0x7C1F98u;
    // 0x7c1f98: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x7C1F98u;
    {
        const bool branch_taken_0x7c1f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1F98u;
        // 0x7c1f9c: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1f98) {
            ctx->pc = 0x7C2108u;
            goto label_7c2108;
        }
    }
    ctx->pc = 0x7C1FA0u;
label_7c1fa0:
    // 0x7c1fa0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x7c1fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7c1fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c1fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1fa8: 0xc1f0ce0  jal         func_7C3380
    ctx->pc = 0x7C1FA8u;
    SET_GPR_U32(ctx, 31, 0x7C1FB0u);
    ctx->pc = 0x7C1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1FA8u;
    // 0x7c1fac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3380u, 0x7C1FA8u, 0x7C1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1FB0u;
label_7c1fb0:
    // 0x7c1fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c1fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1fb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c1fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1fb8: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C1FB8u;
    SET_GPR_U32(ctx, 31, 0x7C1FC0u);
    ctx->pc = 0x7C1FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1FB8u;
    // 0x7c1fbc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C1FB8u, 0x7C1FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1FC0u;
label_7c1fc0:
    // 0x7c1fc0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x7C1FC0u;
    {
        const bool branch_taken_0x7c1fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1FC0u;
        // 0x7c1fc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1fc0) {
            ctx->pc = 0x7C2100u;
            goto label_7c2100;
        }
    }
    ctx->pc = 0x7C1FC8u;
    // 0x7c1fc8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x7C1FC8u;
    {
        const bool branch_taken_0x7c1fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1FC8u;
        // 0x7c1fcc: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1fc8) {
            ctx->pc = 0x7C2110u;
            goto label_7c2110;
        }
    }
    ctx->pc = 0x7C1FD0u;
label_7c1fd0:
    // 0x7c1fd0: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c1fd4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x7C1FD4u;
    {
        const bool branch_taken_0x7c1fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1FD4u;
        // 0x7c1fd8: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1fd4) {
            ctx->pc = 0x7C210Cu;
            goto label_7c210c;
        }
    }
    ctx->pc = 0x7C1FDCu;
label_7c1fdc:
    // 0x7c1fdc: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c1fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c1fe0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c1fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1fe4: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C1FE4u;
    SET_GPR_U32(ctx, 31, 0x7C1FECu);
    ctx->pc = 0x7C1FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1FE4u;
    // 0x7c1fe8: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C1FE4u, 0x7C1FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1FECu;
label_7c1fec:
    // 0x7c1fec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c1fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1ff0: 0x56120048  bnel        $s0, $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x7C1FF0u;
    {
        const bool branch_taken_0x7c1ff0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c1ff0) {
            ctx->pc = 0x7C1FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1FF0u;
            // 0x7c1ff4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C2114u;
            goto label_7c2114;
        }
    }
    ctx->pc = 0x7C1FF8u;
    // 0x7c1ff8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c1ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1ffc: 0xc1f0bde  jal         func_7C2F78
    ctx->pc = 0x7C1FFCu;
    SET_GPR_U32(ctx, 31, 0x7C2004u);
    ctx->pc = 0x7C2000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1FFCu;
    // 0x7c2000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2F78u, 0x7C1FFCu, 0x7C2004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2004u;
label_7c2004:
    // 0x7c2004: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7c2004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2008: 0x12500005  beq         $s2, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C2008u;
    {
        const bool branch_taken_0x7c2008 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2008u;
        // 0x7c200c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2008) {
            ctx->pc = 0x7C2020u;
            goto label_7c2020;
        }
    }
    ctx->pc = 0x7C2010u;
    // 0x7c2010: 0x1242002c  beq         $s2, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x7C2010u;
    {
        const bool branch_taken_0x7c2010 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2010u;
        // 0x7c2014: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2010) {
            ctx->pc = 0x7C20C4u;
            goto label_7c20c4;
        }
    }
    ctx->pc = 0x7C2018u;
    // 0x7c2018: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7C2018u;
    {
        const bool branch_taken_0x7c2018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2018u;
        // 0x7c201c: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2018) {
            ctx->pc = 0x7C2108u;
            goto label_7c2108;
        }
    }
    ctx->pc = 0x7C2020u;
label_7c2020:
    // 0x7c2020: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x7c2020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c2024: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C2024u;
    SET_GPR_U32(ctx, 31, 0x7C202Cu);
    ctx->pc = 0x7C2028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2024u;
    // 0x7c2028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C2024u, 0x7C202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C202Cu;
label_7c202c:
    // 0x7c202c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x7c202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7c2030: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x7c2030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x7c2034: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7c2034u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x7c2038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7c2038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7c203c: 0x0  nop
    ctx->pc = 0x7c203cu;
    // NOP
    // 0x7c2040: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x7c2040u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7c2044: 0x0  nop
    ctx->pc = 0x7c2044u;
    // NOP
    // 0x7c2048: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x7C2048u;
    {
        const bool branch_taken_0x7c2048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7c2048) {
            ctx->pc = 0x7C204Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C2048u;
            // 0x7c204c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C20B8u;
            goto label_7c20b8;
        }
    }
    ctx->pc = 0x7C2050u;
    // 0x7c2050: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x7c2050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c2054: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C2054u;
    SET_GPR_U32(ctx, 31, 0x7C205Cu);
    ctx->pc = 0x7C2058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2054u;
    // 0x7c2058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C2054u, 0x7C205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C205Cu;
label_7c205c:
    // 0x7c205c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7c205cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c2060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2064: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C2064u;
    SET_GPR_U32(ctx, 31, 0x7C206Cu);
    ctx->pc = 0x7C2068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2064u;
    // 0x7c2068: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C2064u, 0x7C206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C206Cu;
label_7c206c:
    // 0x7c206c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x7c206cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c2070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c2070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2074: 0xc1f23de  jal         func_7C8F78
    ctx->pc = 0x7C2074u;
    SET_GPR_U32(ctx, 31, 0x7C207Cu);
    ctx->pc = 0x7C2078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2074u;
    // 0x7c2078: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F78u, 0x7C2074u, 0x7C207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C207Cu;
label_7c207c:
    // 0x7c207c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x7c207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c2080: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c2080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2084: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x7c2084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c2088: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x7c2088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x7c208c: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x7c208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c2090: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x7c2090u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x7c2094: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7c2094u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7c2098: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x7c2098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c209c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c209cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c20a0: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x7c20a0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x7c20a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7c20a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c20a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7c20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7c20ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c20acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c20b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x7c20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x7c20b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x7c20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_7c20b8:
    // 0x7c20b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c20bc: 0x1000fef7  b           . + 4 + (-0x109 << 2)
    ctx->pc = 0x7C20BCu;
    {
        const bool branch_taken_0x7c20bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C20BCu;
        // 0x7c20c0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c20bc) {
            ctx->pc = 0x7C1C9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1c9c;
        }
    }
    ctx->pc = 0x7C20C4u;
label_7c20c4:
    // 0x7c20c4: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c20c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c20c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x7C20C8u;
    {
        const bool branch_taken_0x7c20c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C20C8u;
        // 0x7c20cc: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c20c8) {
            ctx->pc = 0x7C210Cu;
            goto label_7c210c;
        }
    }
    ctx->pc = 0x7C20D0u;
label_7c20d0:
    // 0x7c20d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x7c20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7c20d4: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x7c20d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x7c20d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c20dc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x7c20dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x7c20e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7c20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c20e4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x7c20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x7c20e8: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c20e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c20ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C20ECu;
    {
        const bool branch_taken_0x7c20ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C20ECu;
        // 0x7c20f0: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c20ec) {
            ctx->pc = 0x7C210Cu;
            goto label_7c210c;
        }
    }
    ctx->pc = 0x7C20F4u;
label_7c20f4:
    // 0x7c20f4: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x7c20f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x7c20f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7C20F8u;
    {
        const bool branch_taken_0x7c20f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C20F8u;
        // 0x7c20fc: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c20f8) {
            ctx->pc = 0x7C2110u;
            goto label_7c2110;
        }
    }
    ctx->pc = 0x7C2100u;
label_7c2100:
    // 0x7c2100: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7c2100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_7c2104:
    // 0x7c2104: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c2104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_7c2108:
    // 0x7c2108: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c2108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_7c210c:
    // 0x7c210c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c210cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c2110:
    // 0x7c2110: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7c2110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7c2114:
    // 0x7c2114: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7c2114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7c2118:
    // 0x7c2118: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7c2118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c211c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7c211cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c2120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c2120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c2124: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2124u;
        // 0x7c2128: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C212Cu;
    // 0x7c212c: 0x0  nop
    ctx->pc = 0x7c212cu;
    // NOP
    ctx->pc = 0x7c2130u;
}
} // namespace gh_mcport
