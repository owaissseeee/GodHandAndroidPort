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

// Function: func_002B5D58
// Address: 0x2b5d58 - 0x2b5e50
void func_002B5D58_0x2b5d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B5D58_0x2b5d58");
#endif

    switch (ctx->pc) {
        case 0x2b5d84u: goto label_2b5d84;
        case 0x2b5d94u: goto label_2b5d94;
        case 0x2b5da4u: goto label_2b5da4;
        case 0x2b5dacu: goto label_2b5dac;
        case 0x2b5dbcu: goto label_2b5dbc;
        case 0x2b5dc8u: goto label_2b5dc8;
        case 0x2b5dd4u: goto label_2b5dd4;
        case 0x2b5de4u: goto label_2b5de4;
        case 0x2b5e18u: goto label_2b5e18;
        default: break;
    }

    ctx->pc = 0x2b5d58u;

    // 0x2b5d58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b5d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b5d5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b5d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2b5d60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b5d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b5d64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b5d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d68: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b5d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2b5d6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b5d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d70: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B5D70u;
    {
        const bool branch_taken_0x2b5d70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D70u;
        // 0x2b5d74: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d70) {
            ctx->pc = 0x2B5DDCu;
            goto label_2b5ddc;
        }
    }
    ctx->pc = 0x2B5D78u;
    // 0x2b5d78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d7c: 0xc0ad820  jal         func_2B6080
    ctx->pc = 0x2B5D7Cu;
    SET_GPR_U32(ctx, 31, 0x2B5D84u);
    ctx->pc = 0x2B5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D7Cu;
    // 0x2b5d80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6080u, 0x2B5D7Cu, 0x2B5D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D84u;
label_2b5d84:
    // 0x2b5d84: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2b5d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5d88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b5d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d8c: 0xc0ad834  jal         func_2B60D0
    ctx->pc = 0x2B5D8Cu;
    SET_GPR_U32(ctx, 31, 0x2B5D94u);
    ctx->pc = 0x2B5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D8Cu;
    // 0x2b5d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2B5D8Cu, 0x2B5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D94u;
label_2b5d94:
    // 0x2b5d94: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2b5d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5d98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b5d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d9c: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2B5D9Cu;
    SET_GPR_U32(ctx, 31, 0x2B5DA4u);
    ctx->pc = 0x2B5DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D9Cu;
    // 0x2b5da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2B5D9Cu, 0x2B5DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DA4u;
label_2b5da4:
    // 0x2b5da4: 0xc0ad7b0  jal         func_2B5EC0
    ctx->pc = 0x2B5DA4u;
    SET_GPR_U32(ctx, 31, 0x2B5DACu);
    ctx->pc = 0x2B5DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DA4u;
    // 0x2b5da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5EC0u, 0x2B5DA4u, 0x2B5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DACu;
label_2b5dac:
    // 0x2b5dac: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2b5dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2b5db0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b5db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5db4: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2B5DB4u;
    SET_GPR_U32(ctx, 31, 0x2B5DBCu);
    ctx->pc = 0x2B5DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DB4u;
    // 0x2b5db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2B5DB4u, 0x2B5DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DBCu;
label_2b5dbc:
    // 0x2b5dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b5dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dc0: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x2B5DC0u;
    SET_GPR_U32(ctx, 31, 0x2B5DC8u);
    ctx->pc = 0x2B5DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DC0u;
    // 0x2b5dc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x2B5DC0u, 0x2B5DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DC8u;
label_2b5dc8:
    // 0x2b5dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b5dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dcc: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2B5DCCu;
    SET_GPR_U32(ctx, 31, 0x2B5DD4u);
    ctx->pc = 0x2B5DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DCCu;
    // 0x2b5dd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2B5DCCu, 0x2B5DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DD4u;
label_2b5dd4:
    // 0x2b5dd4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B5DD4u;
    {
        const bool branch_taken_0x2b5dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DD4u;
        // 0x2b5dd8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dd4) {
            ctx->pc = 0x2B5E3Cu;
            goto label_2b5e3c;
        }
    }
    ctx->pc = 0x2B5DDCu;
label_2b5ddc:
    // 0x2b5ddc: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2B5DDCu;
    SET_GPR_U32(ctx, 31, 0x2B5DE4u);
    ctx->pc = 0x2B5DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DDCu;
    // 0x2b5de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2B5DDCu, 0x2B5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DE4u;
label_2b5de4:
    // 0x2b5de4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B5DE4u;
    {
        const bool branch_taken_0x2b5de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5de4) {
            ctx->pc = 0x2B5DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5DE4u;
            // 0x2b5de8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E3Cu;
            goto label_2b5e3c;
        }
    }
    ctx->pc = 0x2B5DECu;
    // 0x2b5dec: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2b5decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x2b5df0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b5df4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5DF4u;
    {
        const bool branch_taken_0x2b5df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DF4u;
        // 0x2b5df8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5df4) {
            ctx->pc = 0x2B5E04u;
            goto label_2b5e04;
        }
    }
    ctx->pc = 0x2B5DFCu;
    // 0x2b5dfc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B5DFCu;
    {
        const bool branch_taken_0x2b5dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DFCu;
        // 0x2b5e00: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dfc) {
            ctx->pc = 0x2B5E38u;
            goto label_2b5e38;
        }
    }
    ctx->pc = 0x2B5E04u;
label_2b5e04:
    // 0x2b5e04: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b5e08: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5E08u;
    {
        const bool branch_taken_0x2b5e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e08) {
            ctx->pc = 0x2B5E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5E08u;
            // 0x2b5e0c: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E34u;
            goto label_2b5e34;
        }
    }
    ctx->pc = 0x2B5E10u;
    // 0x2b5e10: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2b5e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b5e14: 0x0  nop
    ctx->pc = 0x2b5e14u;
    // NOP
label_2b5e18:
    // 0x2b5e18: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b5e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b5e1c: 0x0  nop
    ctx->pc = 0x2b5e1cu;
    // NOP
    // 0x2b5e20: 0x0  nop
    ctx->pc = 0x2b5e20u;
    // NOP
    // 0x2b5e24: 0x0  nop
    ctx->pc = 0x2b5e24u;
    // NOP
    // 0x2b5e28: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B5E28u;
    {
        const bool branch_taken_0x2b5e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e28) {
            ctx->pc = 0x2B5E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5E28u;
            // 0x2b5e2c: 0x8c630010  lw          $v1, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5e18;
        }
    }
    ctx->pc = 0x2B5E30u;
    // 0x2b5e30: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2b5e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_2b5e34:
    // 0x2b5e34: 0xac720010  sw          $s2, 0x10($v1)
    ctx->pc = 0x2b5e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
label_2b5e38:
    // 0x2b5e38: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b5e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b5e3c:
    // 0x2b5e3c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b5e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5e40: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b5e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5e44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b5e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5e48: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E48u;
        // 0x2b5e4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5E50u;
}
