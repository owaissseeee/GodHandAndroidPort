#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: formatProc__7cMcSave
// Address: 0x7c4da0 - 0x7c4ff0
void formatProc__7cMcSave_0x7c4da0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("formatProc__7cMcSave_0x7c4da0");
#endif

    if (__builtin_expect(ctx->pc != 0x7c4da0u, 0)) {
        switch (ctx->pc) {
            case 0x7c4e0cu: goto label_7c4e0c;
            case 0x7c4e20u: goto label_7c4e20;
            case 0x7c4e50u: goto label_7c4e50;
            case 0x7c4e58u: goto label_7c4e58;
            case 0x7c4e68u: goto label_7c4e68;
            case 0x7c4e7cu: goto label_7c4e7c;
            case 0x7c4e8cu: goto label_7c4e8c;
            case 0x7c4e9cu: goto label_7c4e9c;
            case 0x7c4ebcu: goto label_7c4ebc;
            case 0x7c4ed8u: goto label_7c4ed8;
            case 0x7c4eecu: goto label_7c4eec;
            case 0x7c4efcu: goto label_7c4efc;
            case 0x7c4f2cu: goto label_7c4f2c;
            case 0x7c4f40u: goto label_7c4f40;
            case 0x7c4f50u: goto label_7c4f50;
            case 0x7c4fb4u: goto label_7c4fb4;
            default: break;
        }
    }



    // 0x7c4da0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7c4da4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7c4da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7c4da8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7c4da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7c4dac: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4db0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7c4db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7c4db4: 0x24130001  addiu       $s3, $zero, 0x1
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4db8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7c4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7c4dbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c4dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c4dc0: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x7c4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x7c4dc4: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c4dc8: 0x24440001  addiu       $a0, $v0, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c4dcc: 0x10730036  beq         $v1, $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x7C4DCCu;
    {
        const bool branch_taken_0x7c4dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x7C4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4DCCu;
        // 0x7c4dd0: 0xae2400e8  sw          $a0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4dcc) {
            ctx->pc = 0x7C4EA8u;
            goto label_7c4ea8;
        }
    }
    // 0x7c4dd4: 0x28620002  slti        $v0, $v1, 0x2
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x7c4dd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C4DD8u;
    {
        const bool branch_taken_0x7c4dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4dd8) {
            ctx->pc = 0x7C4DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4DD8u;
            // 0x7c4ddc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4DF0u;
            goto label_7c4df0;
        }
    }
    // 0x7c4de0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C4DE0u;
    {
        const bool branch_taken_0x7c4de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4DE0u;
        // 0x7c4de4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4de0) {
            ctx->pc = 0x7C4E00u;
            goto label_7c4e00;
        }
    }
    // 0x7c4de8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x7C4DE8u;
    {
        const bool branch_taken_0x7c4de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4DE8u;
        // 0x7c4dec: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4de8) {
            ctx->pc = 0x7C4FD8u;
            goto label_7c4fd8;
        }
    }
label_7c4df0:
    // 0x7c4df0: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x7C4DF0u;
    {
        const bool branch_taken_0x7c4df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4DF0u;
        // 0x7c4df4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4df0) {
            ctx->pc = 0x7C4F0Cu;
            goto label_7c4f0c;
        }
    }
    // 0x7c4df8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x7C4DF8u;
    {
        const bool branch_taken_0x7c4df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4DF8u;
        // 0x7c4dfc: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4df8) {
            ctx->pc = 0x7C4FD8u;
            goto label_7c4fd8;
        }
    }
label_7c4e00:
    // 0x7c4e00: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4e04: 0xc1f1eb8  jal         func_7C7AE0
    SET_GPR_U32(ctx, 31, 0x7C4E0Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4E04u;
    // 0x7c4e08: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C4E04u, 0x7C4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4e0c:
    // 0x7c4e0c: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c4e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c4e10: 0x182d  daddu       $v1, $zero, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4e14: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x7c4e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x7c4e18: 0x26220088  addiu       $v0, $s1, 0x88
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c4e1c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x7c4e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_7c4e20:
    // 0x7c4e20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x7c4e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x7c4e24: 0x2463ffff  addiu       $v1, $v1, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7c4e28: 0x0  nop
    // NOP
    // 0x7c4e2c: 0x0  nop
    // NOP
    // 0x7c4e30: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C4E30u;
    {
        const bool branch_taken_0x7c4e30 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x7C4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4E30u;
        // 0x7c4e34: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4e30) {
            ctx->pc = 0x7C4E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c4e20;
        }
    }
    // 0x7c4e38: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x7c4e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x7c4e3c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C4E3Cu;
    {
        const bool branch_taken_0x7c4e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4E3Cu;
        // 0x7c4e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4e3c) {
            ctx->pc = 0x7C4E74u;
            goto label_7c4e74;
        }
    }
    // 0x7c4e44: 0x24065000  addiu       $a2, $zero, 0x5000
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c4e48: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x7C4E50u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4E48u;
    // 0x7c4e4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3A52F0u, 0x7C4E50u)) {
        return;
    }
label_7c4e50:
    // 0x7c4e50: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4e54: 0x0  nop
    // NOP
label_7c4e58:
    // 0x7c4e58: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4e5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4e60: 0xc1f23de  jal         func_7C8F78
    SET_GPR_U32(ctx, 31, 0x7C4E68u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4E60u;
    // 0x7c4e64: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F78u, 0x7C4E60u, 0x7C4E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4e68:
    // 0x7c4e68: 0x2a020014  slti        $v0, $s0, 0x14
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c4e6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C4E6Cu;
    {
        const bool branch_taken_0x7c4e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4E6Cu;
        // 0x7c4e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4e6c) {
            ctx->pc = 0x7C4E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c4e58;
        }
    }
label_7c4e74:
    // 0x7c4e74: 0xc1f2336  jal         func_7C8CD8
    SET_GPR_U32(ctx, 31, 0x7C4E7Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4E74u;
    // 0x7c4e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8CD8u, 0x7C4E74u, 0x7C4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4e7c:
    // 0x7c4e7c: 0x3c04007d  lui         $a0, 0x7D
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c4e80: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4e84: 0xc1f0df2  jal         func_7C37C8
    SET_GPR_U32(ctx, 31, 0x7C4E8Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4E84u;
    // 0x7c4e88: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C37C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C37C8u, 0x7C4E84u, 0x7C4E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4e8c:
    // 0x7c4e8c: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4e90: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c4e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c4e94: 0xc1f1b78  jal         func_7C6DE0
    SET_GPR_U32(ctx, 31, 0x7C4E9Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4E94u;
    // 0x7c4e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C4E94u, 0x7C4E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4e9c:
    // 0x7c4e9c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x7C4E9Cu;
    {
        const bool branch_taken_0x7c4e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4E9Cu;
        // 0x7c4ea0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4e9c) {
            ctx->pc = 0x7C4FC0u;
            goto label_7c4fc0;
        }
    }
    // 0x7c4ea4: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c4ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c4ea8:
    // 0x7c4ea8: 0x3c02007d  lui         $v0, 0x7D
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c4eac: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4eb0: 0x24521740  addiu       $s2, $v0, 0x1740
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c4eb4: 0xc1f0c92  jal         func_7C3248
    SET_GPR_U32(ctx, 31, 0x7C4EBCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4EB4u;
    // 0x7c4eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4EB4u, 0x7C4EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4ebc:
    // 0x7c4ebc: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4ec0: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4ec4: 0x56020043  bnel        $s0, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x7C4EC4u;
    {
        const bool branch_taken_0x7c4ec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c4ec4) {
            ctx->pc = 0x7C4EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4EC4u;
            // 0x7c4ec8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4FD4u;
            goto label_7c4fd4;
        }
    }
    // 0x7c4ecc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c4eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c4ed0: 0xc1f1c2c  jal         func_7C70B0
    SET_GPR_U32(ctx, 31, 0x7C4ED8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4ED0u;
    // 0x7c4ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C70B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C70B0u, 0x7C4ED0u, 0x7C4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4ed8:
    // 0x7c4ed8: 0x1450003a  bne         $v0, $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x7C4ED8u;
    {
        const bool branch_taken_0x7c4ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7C4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4ED8u;
        // 0x7c4edc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4ed8) {
            ctx->pc = 0x7C4FC4u;
            goto label_7c4fc4;
        }
    }
    // 0x7c4ee0: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4ee4: 0xc1f0e1c  jal         func_7C3870
    SET_GPR_U32(ctx, 31, 0x7C4EECu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4EE4u;
    // 0x7c4ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3870u, 0x7C4EE4u, 0x7C4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4eec:
    // 0x7c4eec: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4ef0: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4ef4: 0xc1f1b78  jal         func_7C6DE0
    SET_GPR_U32(ctx, 31, 0x7C4EFCu);
    ctx->pc = 0x7C4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4EF4u;
    // 0x7c4ef8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C4EF4u, 0x7C4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4efc:
    // 0x7c4efc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x7C4EFCu;
    {
        const bool branch_taken_0x7c4efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4EFCu;
        // 0x7c4f00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4efc) {
            ctx->pc = 0x7C4FC0u;
            goto label_7c4fc0;
        }
    }
    // 0x7c4f04: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x7C4F04u;
    {
        const bool branch_taken_0x7c4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4F04u;
        // 0x7c4f08: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4f04) {
            ctx->pc = 0x7C4FD0u;
            goto label_7c4fd0;
        }
    }
label_7c4f0c:
    // 0x7c4f0c: 0x288200a0  slti        $v0, $a0, 0xA0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)160) ? 1 : 0);
    // 0x7c4f10: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x7C4F10u;
    {
        const bool branch_taken_0x7c4f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c4f10) {
            ctx->pc = 0x7C4F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4F10u;
            // 0x7c4f14: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4FD8u;
            goto label_7c4fd8;
        }
    }
    // 0x7c4f18: 0x3c02007d  lui         $v0, 0x7D
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c4f1c: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4f20: 0x24521740  addiu       $s2, $v0, 0x1740
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c4f24: 0xc1f0c92  jal         func_7C3248
    SET_GPR_U32(ctx, 31, 0x7C4F2Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4F24u;
    // 0x7c4f28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4F24u, 0x7C4F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4f2c:
    // 0x7c4f2c: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4f30: 0x56130028  bnel        $s0, $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x7C4F30u;
    {
        const bool branch_taken_0x7c4f30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x7c4f30) {
            ctx->pc = 0x7C4F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4F30u;
            // 0x7c4f34: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4FD4u;
            goto label_7c4fd4;
        }
    }
    // 0x7c4f38: 0xc1f1eb8  jal         func_7C7AE0
    SET_GPR_U32(ctx, 31, 0x7C4F40u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4F38u;
    // 0x7c4f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C4F38u, 0x7C4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4f40:
    // 0x7c4f40: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x7c4f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x7c4f44: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4f48: 0xc1f1b8e  jal         func_7C6E38
    SET_GPR_U32(ctx, 31, 0x7C4F50u);
    ctx->pc = 0x7C4F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4F48u;
    // 0x7c4f4c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6E38u, 0x7C4F48u, 0x7C4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4f50:
    // 0x7c4f50: 0x40182d  daddu       $v1, $v0, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4f54: 0x50700009  beql        $v1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C4F54u;
    {
        const bool branch_taken_0x7c4f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x7c4f54) {
            ctx->pc = 0x7C4F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4F54u;
            // 0x7c4f58: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4F7Cu;
            goto label_7c4f7c;
        }
    }
    // 0x7c4f5c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x7C4F5Cu;
    {
        const bool branch_taken_0x7c4f5c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x7C4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4F5Cu;
        // 0x7c4f60: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4f5c) {
            ctx->pc = 0x7C4FC0u;
            goto label_7c4fc0;
        }
    }
    // 0x7c4f64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7C4F64u;
    {
        const bool branch_taken_0x7c4f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4F64u;
        // 0x7c4f68: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4f64) {
            ctx->pc = 0x7C4FC0u;
            goto label_7c4fc0;
        }
    }
    // 0x7c4f6c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x7C4F6Cu;
    {
        const bool branch_taken_0x7c4f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c4f6c) {
            ctx->pc = 0x7C4F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4F6Cu;
            // 0x7c4f70: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4FC4u;
            goto label_7c4fc4;
        }
    }
    // 0x7c4f74: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x7C4F74u;
    {
        const bool branch_taken_0x7c4f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4F74u;
        // 0x7c4f78: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4f74) {
            ctx->pc = 0x7C4FBCu;
            goto label_7c4fbc;
        }
    }
label_7c4f7c:
    // 0x7c4f7c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C4F7Cu;
    {
        const bool branch_taken_0x7c4f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4F7Cu;
        // 0x7c4f80: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4f7c) {
            ctx->pc = 0x7C4F9Cu;
            goto label_7c4f9c;
        }
    }
    // 0x7c4f84: 0x24020007  addiu       $v0, $zero, 0x7
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c4f88: 0x2403000f  addiu       $v1, $zero, 0xF
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7c4f8c: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x7c4f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x7c4f90: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x7c4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x7c4f94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C4F94u;
    {
        const bool branch_taken_0x7c4f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4F94u;
        // 0x7c4f98: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4f94) {
            ctx->pc = 0x7C4FCCu;
            goto label_7c4fcc;
        }
    }
label_7c4f9c:
    // 0x7c4f9c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c4f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c4fa0: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c4fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c4fa4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4fa8: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c4fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c4fac: 0xc1f1eb8  jal         func_7C7AE0
    SET_GPR_U32(ctx, 31, 0x7C4FB4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4FACu;
    // 0x7c4fb0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C4FACu, 0x7C4FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c4fb4:
    // 0x7c4fb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7C4FB4u;
    {
        const bool branch_taken_0x7c4fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4FB4u;
        // 0x7c4fb8: 0xae300078  sw          $s0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4fb4) {
            ctx->pc = 0x7C4FD0u;
            goto label_7c4fd0;
        }
    }
label_7c4fbc:
    // 0x7c4fbc: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x7c4fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_7c4fc0:
    // 0x7c4fc0: 0x2402000f  addiu       $v0, $zero, 0xF
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7c4fc4:
    // 0x7c4fc4: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c4fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c4fc8: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c4fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_7c4fcc:
    // 0x7c4fcc: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c4fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c4fd0:
    // 0x7c4fd0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7c4fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7c4fd4:
    // 0x7c4fd4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7c4fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7c4fd8:
    // 0x7c4fd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7c4fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c4fdc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7c4fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c4fe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c4fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c4fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C4FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4FE4u;
        // 0x7c4fe8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C4FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x7c4fec: 0x0  nop
    // NOP
    ctx->pc = 0x7c4ff0u;
}
} // namespace gh_mcport
