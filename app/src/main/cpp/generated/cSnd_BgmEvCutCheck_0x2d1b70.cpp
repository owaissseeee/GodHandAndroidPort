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

// Function: cSnd_BgmEvCutCheck
// Address: 0x2d1b70 - 0x2d1c78
void cSnd_BgmEvCutCheck_0x2d1b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvCutCheck_0x2d1b70");
#endif

    switch (ctx->pc) {
        case 0x2d1ba0u: goto label_2d1ba0;
        case 0x2d1ba8u: goto label_2d1ba8;
        case 0x2d1bc0u: goto label_2d1bc0;
        case 0x2d1bccu: goto label_2d1bcc;
        case 0x2d1be8u: goto label_2d1be8;
        case 0x2d1bf0u: goto label_2d1bf0;
        case 0x2d1bfcu: goto label_2d1bfc;
        case 0x2d1c30u: goto label_2d1c30;
        default: break;
    }

    ctx->pc = 0x2d1b70u;

    // 0x2d1b70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d1b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d1b74: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d1b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d1b78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d1b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d1b7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d1b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b84: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d1b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d1b88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d1b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d1b8c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d1b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2d1b90: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2d1b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2d1b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1b98: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D1B98u;
    SET_GPR_U32(ctx, 31, 0x2D1BA0u);
    ctx->pc = 0x2D1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B98u;
    // 0x2d1b9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D1B98u, 0x2D1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BA0u;
label_2d1ba0:
    // 0x2d1ba0: 0xc0b3fda  jal         func_2CFF68
    ctx->pc = 0x2D1BA0u;
    SET_GPR_U32(ctx, 31, 0x2D1BA8u);
    ctx->pc = 0x2D1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1BA0u;
    // 0x2d1ba4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF68u, 0x2D1BA0u, 0x2D1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BA8u;
label_2d1ba8:
    // 0x2d1ba8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1BA8u;
    {
        const bool branch_taken_0x2d1ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1BA8u;
        // 0x2d1bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ba8) {
            ctx->pc = 0x2D1BB8u;
            goto label_2d1bb8;
        }
    }
    ctx->pc = 0x2D1BB0u;
    // 0x2d1bb0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2D1BB0u;
    {
        const bool branch_taken_0x2d1bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1BB0u;
        // 0x2d1bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1bb0) {
            ctx->pc = 0x2D1C50u;
            goto label_2d1c50;
        }
    }
    ctx->pc = 0x2D1BB8u;
label_2d1bb8:
    // 0x2d1bb8: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D1BB8u;
    SET_GPR_U32(ctx, 31, 0x2D1BC0u);
    ctx->pc = 0x2D1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1BB8u;
    // 0x2d1bbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D1BB8u, 0x2D1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BC0u;
label_2d1bc0:
    // 0x2d1bc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d1bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bc4: 0xc0b413e  jal         func_2D04F8
    ctx->pc = 0x2D1BC4u;
    SET_GPR_U32(ctx, 31, 0x2D1BCCu);
    ctx->pc = 0x2D1BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1BC4u;
    // 0x2d1bc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D04F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04F8u, 0x2D1BC4u, 0x2D1BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BCCu;
label_2d1bcc:
    // 0x2d1bcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d1bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1bd4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D1BD4u;
    {
        const bool branch_taken_0x2d1bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1BD4u;
        // 0x2d1bd8: 0x24150080  addiu       $s5, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1bd4) {
            ctx->pc = 0x2D1C4Cu;
            goto label_2d1c4c;
        }
    }
    ctx->pc = 0x2D1BDCu;
    // 0x2d1bdc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d1bdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1be4: 0x0  nop
    ctx->pc = 0x2d1be4u;
    // NOP
label_2d1be8:
    // 0x2d1be8: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D1BE8u;
    SET_GPR_U32(ctx, 31, 0x2D1BF0u);
    ctx->pc = 0x2D1BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1BE8u;
    // 0x2d1bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D1BE8u, 0x2D1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BF0u;
label_2d1bf0:
    // 0x2d1bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bf4: 0xc0b414a  jal         func_2D0528
    ctx->pc = 0x2D1BF4u;
    SET_GPR_U32(ctx, 31, 0x2D1BFCu);
    ctx->pc = 0x2D1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1BF4u;
    // 0x2d1bf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0528u, 0x2D1BF4u, 0x2D1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BFCu;
label_2d1bfc:
    // 0x2d1bfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d1bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c00: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1C00u;
    {
        const bool branch_taken_0x2d1c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c00) {
            ctx->pc = 0x2D1C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1C00u;
            // 0x2d1c04: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C3Cu;
            goto label_2d1c3c;
        }
    }
    ctx->pc = 0x2D1C08u;
    // 0x2d1c08: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x2d1c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x2d1c0c: 0x5055000b  beql        $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1C0Cu;
    {
        const bool branch_taken_0x2d1c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d1c0c) {
            ctx->pc = 0x2D1C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1C0Cu;
            // 0x2d1c10: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C3Cu;
            goto label_2d1c3c;
        }
    }
    ctx->pc = 0x2D1C14u;
    // 0x2d1c14: 0x90620011  lbu         $v0, 0x11($v1)
    ctx->pc = 0x2d1c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x2d1c18: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1C18u;
    {
        const bool branch_taken_0x2d1c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2d1c18) {
            ctx->pc = 0x2D1C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1C18u;
            // 0x2d1c1c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C3Cu;
            goto label_2d1c3c;
        }
    }
    ctx->pc = 0x2D1C20u;
    // 0x2d1c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d1c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1c28: 0xc0b4774  jal         func_2D1DD0
    ctx->pc = 0x2D1C28u;
    SET_GPR_U32(ctx, 31, 0x2D1C30u);
    ctx->pc = 0x2D1C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C28u;
    // 0x2d1c2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1DD0u, 0x2D1C28u, 0x2D1C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C30u;
label_2d1c30:
    // 0x2d1c30: 0x14540007  bne         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1C30u;
    {
        const bool branch_taken_0x2d1c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2D1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C30u;
        // 0x2d1c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c30) {
            ctx->pc = 0x2D1C50u;
            goto label_2d1c50;
        }
    }
    ctx->pc = 0x2D1C38u;
    // 0x2d1c38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d1c3c:
    // 0x2d1c3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d1c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d1c40: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d1c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d1c44: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2D1C44u;
    {
        const bool branch_taken_0x2d1c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C44u;
        // 0x2d1c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c44) {
            ctx->pc = 0x2D1BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1be8;
        }
    }
    ctx->pc = 0x2D1C4Cu;
label_2d1c4c:
    // 0x2d1c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1c50:
    // 0x2d1c50: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d1c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1c54: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d1c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1c58: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d1c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1c60: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d1c60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1c64: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2d1c64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C6Cu;
        // 0x2d1c70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1C74u;
    // 0x2d1c74: 0x0  nop
    ctx->pc = 0x2d1c74u;
    // NOP
    ctx->pc = 0x2d1c78u;
}
