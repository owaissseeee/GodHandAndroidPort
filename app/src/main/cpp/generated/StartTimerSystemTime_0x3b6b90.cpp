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

// Function: StartTimerSystemTime
// Address: 0x3b6b90 - 0x3b6c28
void StartTimerSystemTime_0x3b6b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartTimerSystemTime_0x3b6b90");
#endif

    switch (ctx->pc) {
        case 0x3b6ba4u: goto label_3b6ba4;
        case 0x3b6bd0u: goto label_3b6bd0;
        case 0x3b6becu: goto label_3b6bec;
        case 0x3b6bf4u: goto label_3b6bf4;
        case 0x3b6bfcu: goto label_3b6bfc;
        case 0x3b6c0cu: goto label_3b6c0c;
        default: break;
    }

    ctx->pc = 0x3b6b90u;

    // 0x3b6b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b6b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b6b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b6b9c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B6B9Cu;
    SET_GPR_U32(ctx, 31, 0x3B6BA4u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B6B9Cu, 0x3B6BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6BA4u;
label_3b6ba4:
    // 0x3b6ba4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6ba8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3b6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3b6bac: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x3b6bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x3b6bb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b6bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u));
    // 0x3b6bb4: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x3b6bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3b6bb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6BB8u;
    {
        const bool branch_taken_0x3b6bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6bb8) {
            ctx->pc = 0x3B6BD8u;
            goto label_3b6bd8;
        }
    }
    ctx->pc = 0x3B6BC0u;
    // 0x3b6bc0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B6BC0u;
    {
        const bool branch_taken_0x3b6bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BC0u;
        // 0x3b6bc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6bc0) {
            ctx->pc = 0x3B6C10u;
            goto label_3b6c10;
        }
    }
    ctx->pc = 0x3B6BC8u;
    // 0x3b6bc8: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B6BC8u;
    SET_GPR_U32(ctx, 31, 0x3B6BD0u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B6BC8u, 0x3B6BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6BD0u;
label_3b6bd0:
    // 0x3b6bd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B6BD0u;
    {
        const bool branch_taken_0x3b6bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BD0u;
        // 0x3b6bd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6bd0) {
            ctx->pc = 0x3B6C10u;
            goto label_3b6c10;
        }
    }
    ctx->pc = 0x3B6BD8u;
label_3b6bd8:
    // 0x3b6bd8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b6bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3b6bdc: 0x3484f3ff  ori         $a0, $a0, 0xF3FF
    ctx->pc = 0x3b6bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62463);
    // 0x3b6be0: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x3b6be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3b6be4: 0xc0eda84  jal         func_3B6A10
    ctx->pc = 0x3B6BE4u;
    SET_GPR_U32(ctx, 31, 0x3B6BECu);
    ctx->pc = 0x3B6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6BE4u;
    // 0x3b6be8: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A10u, 0x3B6BE4u, 0x3B6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6BECu;
label_3b6bec:
    // 0x3b6bec: 0xc0edc4c  jal         func_3B7130
    ctx->pc = 0x3B6BECu;
    SET_GPR_U32(ctx, 31, 0x3B6BF4u);
    ctx->pc = 0x3B7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7130u, 0x3B6BECu, 0x3B6BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6BF4u;
label_3b6bf4:
    // 0x3b6bf4: 0xc0edb0a  jal         func_3B6C28
    ctx->pc = 0x3B6BF4u;
    SET_GPR_U32(ctx, 31, 0x3B6BFCu);
    ctx->pc = 0x3B6BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6BF4u;
    // 0x3b6bf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6C28u, 0x3B6BF4u, 0x3B6BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6BFCu;
label_3b6bfc:
    // 0x3b6bfc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6BFCu;
    {
        const bool branch_taken_0x3b6bfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BFCu;
        // 0x3b6c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6bfc) {
            ctx->pc = 0x3B6C10u;
            goto label_3b6c10;
        }
    }
    ctx->pc = 0x3B6C04u;
    // 0x3b6c04: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B6C04u;
    SET_GPR_U32(ctx, 31, 0x3B6C0Cu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B6C04u, 0x3B6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6C0Cu;
label_3b6c0c:
    // 0x3b6c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b6c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6c10:
    // 0x3b6c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b6c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b6c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6c18: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C18u;
        // 0x3b6c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6C20u;
    // 0x3b6c20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b6c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b6c24: 0x0  nop
    ctx->pc = 0x3b6c24u;
    // NOP
    ctx->pc = 0x3b6c28u;
}
