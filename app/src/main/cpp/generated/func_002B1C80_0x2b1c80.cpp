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

// Function: func_002B1C80
// Address: 0x2b1c80 - 0x2b1f80
void func_002B1C80_0x2b1c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B1C80_0x2b1c80");
#endif

    switch (ctx->pc) {
        case 0x2b1cb4u: goto label_2b1cb4;
        case 0x2b1cb8u: goto label_2b1cb8;
        case 0x2b1d0cu: goto label_2b1d0c;
        case 0x2b1d20u: goto label_2b1d20;
        case 0x2b1d30u: goto label_2b1d30;
        case 0x2b1d40u: goto label_2b1d40;
        case 0x2b1d50u: goto label_2b1d50;
        case 0x2b1d8cu: goto label_2b1d8c;
        case 0x2b1d9cu: goto label_2b1d9c;
        case 0x2b1dc4u: goto label_2b1dc4;
        case 0x2b1e00u: goto label_2b1e00;
        case 0x2b1e10u: goto label_2b1e10;
        case 0x2b1e38u: goto label_2b1e38;
        case 0x2b1e48u: goto label_2b1e48;
        case 0x2b1e78u: goto label_2b1e78;
        case 0x2b1e88u: goto label_2b1e88;
        case 0x2b1eb4u: goto label_2b1eb4;
        case 0x2b1edcu: goto label_2b1edc;
        case 0x2b1eecu: goto label_2b1eec;
        case 0x2b1ef8u: goto label_2b1ef8;
        case 0x2b1f18u: goto label_2b1f18;
        case 0x2b1f28u: goto label_2b1f28;
        case 0x2b1f40u: goto label_2b1f40;
        case 0x2b1f50u: goto label_2b1f50;
        case 0x2b1f5cu: goto label_2b1f5c;
        default: break;
    }

    ctx->pc = 0x2b1c80u;

    // 0x2b1c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b1c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b1c84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b1c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b1c88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b1c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b1c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b1c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b1c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1c98: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b1c9c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2b1c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2b1ca0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b1ca4: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x2B1CA4u;
    {
        const bool branch_taken_0x2b1ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CA4u;
        // 0x2b1ca8: 0x3c12005e  lui         $s2, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ca4) {
            ctx->pc = 0x2B1F5Cu;
            goto label_2b1f5c;
        }
    }
    ctx->pc = 0x2B1CACu;
    // 0x2b1cac: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x2b1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2b1cb0: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2b1cb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2b1cb4:
    // 0x2b1cb4: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2b1cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_2b1cb8:
    // 0x2b1cb8: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x2b1cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b1cbc: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B1CBCu;
    {
        const bool branch_taken_0x2b1cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CBCu;
        // 0x2b1cc0: 0x26517510  addiu       $s1, $s2, 0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 29968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cbc) {
            ctx->pc = 0x2B1D04u;
            goto label_2b1d04;
        }
    }
    ctx->pc = 0x2B1CC4u;
    // 0x2b1cc4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2b1cc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b1cc8: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1CC8u;
    {
        const bool branch_taken_0x2b1cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2b1cc8) {
            ctx->pc = 0x2B1CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1CC8u;
            // 0x2b1ccc: 0x8e030074  lw          $v1, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1CD8u;
            goto label_2b1cd8;
        }
    }
    ctx->pc = 0x2B1CD0u;
    // 0x2b1cd0: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B1CD0u;
    {
        const bool branch_taken_0x2b1cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CD0u;
        // 0x2b1cd4: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cd0) {
            ctx->pc = 0x2B1CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1cb8;
        }
    }
    ctx->pc = 0x2B1CD8u;
label_2b1cd8:
    // 0x2b1cd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b1cdc: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x2b1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2b1ce0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1ce4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2b1ce4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b1ce8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1CE8u;
    {
        const bool branch_taken_0x2b1ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CE8u;
        // 0x2b1cec: 0x26517510  addiu       $s1, $s2, 0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 29968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ce8) {
            ctx->pc = 0x2B1D04u;
            goto label_2b1d04;
        }
    }
    ctx->pc = 0x2B1CF0u;
    // 0x2b1cf0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x2b1cf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b1cf4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b1cf8: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2b1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2b1cfc: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2B1CFCu;
    {
        const bool branch_taken_0x2b1cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CFCu;
        // 0x2b1d00: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cfc) {
            ctx->pc = 0x2B1CB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1cb4;
        }
    }
    ctx->pc = 0x2B1D04u;
label_2b1d04:
    // 0x2b1d04: 0xc0abcfe  jal         func_2AF3F8
    ctx->pc = 0x2B1D04u;
    SET_GPR_U32(ctx, 31, 0x2B1D0Cu);
    ctx->pc = 0x2B1D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D04u;
    // 0x2b1d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF3F8u, 0x2B1D04u, 0x2B1D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D0Cu;
label_2b1d0c:
    // 0x2b1d0c: 0x8e07008c  lw          $a3, 0x8C($s0)
    ctx->pc = 0x2b1d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b1d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d14: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x2b1d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b1d18: 0xc0abd8a  jal         func_2AF628
    ctx->pc = 0x2B1D18u;
    SET_GPR_U32(ctx, 31, 0x2B1D20u);
    ctx->pc = 0x2B1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D18u;
    // 0x2b1d1c: 0x8e06007c  lw          $a2, 0x7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF628u, 0x2B1D18u, 0x2B1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D20u;
label_2b1d20:
    // 0x2b1d20: 0x8e050078  lw          $a1, 0x78($s0)
    ctx->pc = 0x2b1d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2b1d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d28: 0xc0abd8e  jal         func_2AF638
    ctx->pc = 0x2B1D28u;
    SET_GPR_U32(ctx, 31, 0x2B1D30u);
    ctx->pc = 0x2B1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D28u;
    // 0x2b1d2c: 0x8e060080  lw          $a2, 0x80($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF638u, 0x2B1D28u, 0x2B1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D30u;
label_2b1d30:
    // 0x2b1d30: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x2b1d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2b1d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d38: 0xc0abd92  jal         func_2AF648
    ctx->pc = 0x2B1D38u;
    SET_GPR_U32(ctx, 31, 0x2B1D40u);
    ctx->pc = 0x2B1D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D38u;
    // 0x2b1d3c: 0x8e060068  lw          $a2, 0x68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF648u, 0x2B1D38u, 0x2B1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D40u;
label_2b1d40:
    // 0x2b1d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d44: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b1d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b1d48: 0xc0ab30a  jal         func_2ACC28
    ctx->pc = 0x2B1D48u;
    SET_GPR_U32(ctx, 31, 0x2B1D50u);
    ctx->pc = 0x2B1D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D48u;
    // 0x2b1d4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACC28u, 0x2B1D48u, 0x2B1D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D50u;
label_2b1d50:
    // 0x2b1d50: 0x920300a4  lbu         $v1, 0xA4($s0)
    ctx->pc = 0x2b1d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b1d54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1d58: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B1D58u;
    {
        const bool branch_taken_0x2b1d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D58u;
        // 0x2b1d5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d58) {
            ctx->pc = 0x2B1DD0u;
            goto label_2b1dd0;
        }
    }
    ctx->pc = 0x2B1D60u;
    // 0x2b1d60: 0x860300ae  lh          $v1, 0xAE($s0)
    ctx->pc = 0x2b1d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 174)));
    // 0x2b1d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d68: 0x860200b0  lh          $v0, 0xB0($s0)
    ctx->pc = 0x2b1d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2b1d6c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2b1d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1d70: 0x0  nop
    ctx->pc = 0x2b1d70u;
    // NOP
    // 0x2b1d74: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b1d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b1d78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b1d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b1d7c: 0x0  nop
    ctx->pc = 0x2b1d7cu;
    // NOP
    // 0x2b1d80: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2b1d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2b1d84: 0xc0abd96  jal         func_2AF658
    ctx->pc = 0x2B1D84u;
    SET_GPR_U32(ctx, 31, 0x2B1D8Cu);
    ctx->pc = 0x2B1D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D84u;
    // 0x2b1d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF658u, 0x2B1D84u, 0x2B1D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D8Cu;
label_2b1d8c:
    // 0x2b1d8c: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x2b1d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1d94: 0xc0abda6  jal         func_2AF698
    ctx->pc = 0x2B1D94u;
    SET_GPR_U32(ctx, 31, 0x2B1D9Cu);
    ctx->pc = 0x2B1D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D94u;
    // 0x2b1d98: 0xc60d0058  lwc1        $f13, 0x58($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF698u, 0x2B1D94u, 0x2B1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D9Cu;
label_2b1d9c:
    // 0x2b1d9c: 0x8603005c  lh          $v1, 0x5C($s0)
    ctx->pc = 0x2b1d9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2b1da0: 0x8602005e  lh          $v0, 0x5E($s0)
    ctx->pc = 0x2b1da0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x2b1da4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2b1da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1da8: 0x0  nop
    ctx->pc = 0x2b1da8u;
    // NOP
    // 0x2b1dac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b1dacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b1db0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b1db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b1db4: 0x0  nop
    ctx->pc = 0x2b1db4u;
    // NOP
    // 0x2b1db8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2b1db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2b1dbc: 0xc0abd9a  jal         func_2AF668
    ctx->pc = 0x2B1DBCu;
    SET_GPR_U32(ctx, 31, 0x2B1DC4u);
    ctx->pc = 0x2B1DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DBCu;
    // 0x2b1dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF668u, 0x2B1DBCu, 0x2B1DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DC4u;
label_2b1dc4:
    // 0x2b1dc4: 0x82050060  lb          $a1, 0x60($s0)
    ctx->pc = 0x2b1dc4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2b1dc8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B1DC8u;
    {
        const bool branch_taken_0x2b1dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DC8u;
        // 0x2b1dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1dc8) {
            ctx->pc = 0x2B1E40u;
            goto label_2b1e40;
        }
    }
    ctx->pc = 0x2B1DD0u;
label_2b1dd0:
    // 0x2b1dd0: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B1DD0u;
    {
        const bool branch_taken_0x2b1dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DD0u;
        // 0x2b1dd4: 0x860300ae  lh          $v1, 0xAE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 174)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1dd0) {
            ctx->pc = 0x2B1E50u;
            goto label_2b1e50;
        }
    }
    ctx->pc = 0x2B1DD8u;
    // 0x2b1dd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ddc: 0x860200b0  lh          $v0, 0xB0($s0)
    ctx->pc = 0x2b1ddcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2b1de0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2b1de0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1de4: 0x0  nop
    ctx->pc = 0x2b1de4u;
    // NOP
    // 0x2b1de8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b1de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b1dec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b1decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b1df0: 0x0  nop
    ctx->pc = 0x2b1df0u;
    // NOP
    // 0x2b1df4: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2b1df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2b1df8: 0xc0abd96  jal         func_2AF658
    ctx->pc = 0x2B1DF8u;
    SET_GPR_U32(ctx, 31, 0x2B1E00u);
    ctx->pc = 0x2B1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1DF8u;
    // 0x2b1dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF658u, 0x2B1DF8u, 0x2B1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E00u;
label_2b1e00:
    // 0x2b1e00: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x2b1e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1e04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e08: 0xc0abda6  jal         func_2AF698
    ctx->pc = 0x2B1E08u;
    SET_GPR_U32(ctx, 31, 0x2B1E10u);
    ctx->pc = 0x2B1E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E08u;
    // 0x2b1e0c: 0xc60d0058  lwc1        $f13, 0x58($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF698u, 0x2B1E08u, 0x2B1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E10u;
label_2b1e10:
    // 0x2b1e10: 0x8603005c  lh          $v1, 0x5C($s0)
    ctx->pc = 0x2b1e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2b1e14: 0x8602005e  lh          $v0, 0x5E($s0)
    ctx->pc = 0x2b1e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x2b1e18: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2b1e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1e1c: 0x0  nop
    ctx->pc = 0x2b1e1cu;
    // NOP
    // 0x2b1e20: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b1e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b1e24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b1e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b1e28: 0x0  nop
    ctx->pc = 0x2b1e28u;
    // NOP
    // 0x2b1e2c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2b1e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2b1e30: 0xc0abd9a  jal         func_2AF668
    ctx->pc = 0x2B1E30u;
    SET_GPR_U32(ctx, 31, 0x2B1E38u);
    ctx->pc = 0x2B1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E30u;
    // 0x2b1e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF668u, 0x2B1E30u, 0x2B1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E38u;
label_2b1e38:
    // 0x2b1e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b1e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b1e40:
    // 0x2b1e40: 0xc0abdaa  jal         func_2AF6A8
    ctx->pc = 0x2B1E40u;
    SET_GPR_U32(ctx, 31, 0x2B1E48u);
    ctx->pc = 0x2B1E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E40u;
    // 0x2b1e44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6A8u, 0x2B1E40u, 0x2B1E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E48u;
label_2b1e48:
    // 0x2b1e48: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2B1E48u;
    {
        const bool branch_taken_0x2b1e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E48u;
        // 0x2b1e4c: 0x26517510  addiu       $s1, $s2, 0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 29968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e48) {
            ctx->pc = 0x2B1EE0u;
            goto label_2b1ee0;
        }
    }
    ctx->pc = 0x2B1E50u;
label_2b1e50:
    // 0x2b1e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e54: 0x860200b0  lh          $v0, 0xB0($s0)
    ctx->pc = 0x2b1e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2b1e58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2b1e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1e5c: 0x0  nop
    ctx->pc = 0x2b1e5cu;
    // NOP
    // 0x2b1e60: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b1e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b1e64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b1e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b1e68: 0x0  nop
    ctx->pc = 0x2b1e68u;
    // NOP
    // 0x2b1e6c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2b1e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2b1e70: 0xc0abd96  jal         func_2AF658
    ctx->pc = 0x2B1E70u;
    SET_GPR_U32(ctx, 31, 0x2B1E78u);
    ctx->pc = 0x2B1E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E70u;
    // 0x2b1e74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF658u, 0x2B1E70u, 0x2B1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E78u;
label_2b1e78:
    // 0x2b1e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b1e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b1e80: 0xc0abdaa  jal         func_2AF6A8
    ctx->pc = 0x2B1E80u;
    SET_GPR_U32(ctx, 31, 0x2B1E88u);
    ctx->pc = 0x2B1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E80u;
    // 0x2b1e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6A8u, 0x2B1E80u, 0x2B1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E88u;
label_2b1e88:
    // 0x2b1e88: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b1e8c: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x2b1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2b1e90: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B1E90u;
    {
        const bool branch_taken_0x2b1e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e90) {
            ctx->pc = 0x2B1EBCu;
            goto label_2b1ebc;
        }
    }
    ctx->pc = 0x2B1E98u;
    // 0x2b1e98: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2b1e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2b1e9c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2b1e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2b1ea0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b1ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1ea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1ea8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b1ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b1eac: 0xc0abda6  jal         func_2AF698
    ctx->pc = 0x2B1EACu;
    SET_GPR_U32(ctx, 31, 0x2B1EB4u);
    ctx->pc = 0x2B1EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1EACu;
    // 0x2b1eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF698u, 0x2B1EACu, 0x2B1EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EB4u;
label_2b1eb4:
    // 0x2b1eb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B1EB4u;
    {
        const bool branch_taken_0x2b1eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EB4u;
        // 0x2b1eb8: 0x26517510  addiu       $s1, $s2, 0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 29968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1eb4) {
            ctx->pc = 0x2B1EE0u;
            goto label_2b1ee0;
        }
    }
    ctx->pc = 0x2B1EBCu;
label_2b1ebc:
    // 0x2b1ebc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2b1ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2b1ec0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2b1ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2b1ec4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b1ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1ec8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2b1ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2b1ecc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b1eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b1ed0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b1ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b1ed4: 0xc0abda6  jal         func_2AF698
    ctx->pc = 0x2B1ED4u;
    SET_GPR_U32(ctx, 31, 0x2B1EDCu);
    ctx->pc = 0x2B1ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1ED4u;
    // 0x2b1ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF698u, 0x2B1ED4u, 0x2B1EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EDCu;
label_2b1edc:
    // 0x2b1edc: 0x26517510  addiu       $s1, $s2, 0x7510
    ctx->pc = 0x2b1edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 29968));
label_2b1ee0:
    // 0x2b1ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b1ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1ee4: 0xc0abdae  jal         func_2AF6B8
    ctx->pc = 0x2B1EE4u;
    SET_GPR_U32(ctx, 31, 0x2B1EECu);
    ctx->pc = 0x2B1EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1EE4u;
    // 0x2b1ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6B8u, 0x2B1EE4u, 0x2B1EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EECu;
label_2b1eec:
    // 0x2b1eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ef0: 0xc0abdb8  jal         func_2AF6E0
    ctx->pc = 0x2B1EF0u;
    SET_GPR_U32(ctx, 31, 0x2B1EF8u);
    ctx->pc = 0x2B1EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1EF0u;
    // 0x2b1ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6E0u, 0x2B1EF0u, 0x2B1EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EF8u;
label_2b1ef8:
    // 0x2b1ef8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b1efc: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x2b1efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x2b1f00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b1f04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1F04u;
    {
        const bool branch_taken_0x2b1f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F04u;
        // 0x2b1f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f04) {
            ctx->pc = 0x2B1F1Cu;
            goto label_2b1f1c;
        }
    }
    ctx->pc = 0x2B1F0Cu;
    // 0x2b1f0c: 0x86050094  lh          $a1, 0x94($s0)
    ctx->pc = 0x2b1f0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b1f10: 0xc0abdc2  jal         func_2AF708
    ctx->pc = 0x2B1F10u;
    SET_GPR_U32(ctx, 31, 0x2B1F18u);
    ctx->pc = 0x2B1F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F10u;
    // 0x2b1f14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF708u, 0x2B1F10u, 0x2B1F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F18u;
label_2b1f18:
    // 0x2b1f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f1c:
    // 0x2b1f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1f20: 0xc0abdca  jal         func_2AF728
    ctx->pc = 0x2B1F20u;
    SET_GPR_U32(ctx, 31, 0x2B1F28u);
    ctx->pc = 0x2B1F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F20u;
    // 0x2b1f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF728u, 0x2B1F20u, 0x2B1F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F28u;
label_2b1f28:
    // 0x2b1f28: 0x920300a4  lbu         $v1, 0xA4($s0)
    ctx->pc = 0x2b1f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b1f2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1f30: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B1F30u;
    {
        const bool branch_taken_0x2b1f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F30u;
        // 0x2b1f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f30) {
            ctx->pc = 0x2B1F5Cu;
            goto label_2b1f5c;
        }
    }
    ctx->pc = 0x2B1F38u;
    // 0x2b1f38: 0xc0abdb8  jal         func_2AF6E0
    ctx->pc = 0x2B1F38u;
    SET_GPR_U32(ctx, 31, 0x2B1F40u);
    ctx->pc = 0x2B1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F38u;
    // 0x2b1f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6E0u, 0x2B1F38u, 0x2B1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F40u;
label_2b1f40:
    // 0x2b1f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1f48: 0xc0abdca  jal         func_2AF728
    ctx->pc = 0x2B1F48u;
    SET_GPR_U32(ctx, 31, 0x2B1F50u);
    ctx->pc = 0x2B1F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F48u;
    // 0x2b1f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF728u, 0x2B1F48u, 0x2B1F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F50u;
label_2b1f50:
    // 0x2b1f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1f54: 0xc0abdb8  jal         func_2AF6E0
    ctx->pc = 0x2B1F54u;
    SET_GPR_U32(ctx, 31, 0x2B1F5Cu);
    ctx->pc = 0x2B1F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F54u;
    // 0x2b1f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6E0u, 0x2B1F54u, 0x2B1F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F5Cu;
label_2b1f5c:
    // 0x2b1f5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b1f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1f60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b1f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1f64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b1f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F6Cu;
        // 0x2b1f70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1F74u;
    // 0x2b1f74: 0x0  nop
    ctx->pc = 0x2b1f74u;
    // NOP
    // 0x2b1f78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b1f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b1f7c: 0x0  nop
    ctx->pc = 0x2b1f7cu;
    // NOP
    ctx->pc = 0x2b1f80u;
}
