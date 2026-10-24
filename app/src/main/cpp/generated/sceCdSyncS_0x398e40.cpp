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

// Function: sceCdSyncS
// Address: 0x398e40 - 0x398eb0
void sceCdSyncS_0x398e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdSyncS_0x398e40");
#endif

    switch (ctx->pc) {
        case 0x398e68u: goto label_398e68;
        case 0x398e70u: goto label_398e70;
        case 0x398e78u: goto label_398e78;
        case 0x398e80u: goto label_398e80;
        case 0x398e9cu: goto label_398e9c;
        default: break;
    }

    ctx->pc = 0x398e40u;

    // 0x398e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x398e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x398e48: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x398E48u;
    {
        const bool branch_taken_0x398e48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x398E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E48u;
        // 0x398e4c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e48) {
            ctx->pc = 0x398E90u;
            goto label_398e90;
        }
    }
    ctx->pc = 0x398E50u;
    // 0x398e50: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398e54: 0x8c438650  lw          $v1, -0x79B0($v0)
    ctx->pc = 0x398e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8650u));
    // 0x398e58: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x398E58u;
    {
        const bool branch_taken_0x398e58 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x398E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E58u;
        // 0x398e5c: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e58) {
            ctx->pc = 0x398E68u;
            goto label_398e68;
        }
    }
    ctx->pc = 0x398E60u;
    // 0x398e60: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x398E60u;
    SET_GPR_U32(ctx, 31, 0x398E68u);
    ctx->pc = 0x398E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398E60u;
    // 0x398e64: 0x2484e2b0  addiu       $a0, $a0, -0x1D50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x398E60u, 0x398E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398E68u;
label_398e68:
    // 0x398e68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x398E68u;
    {
        const bool branch_taken_0x398e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E68u;
        // 0x398e6c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e68) {
            ctx->pc = 0x398E78u;
            goto label_398e78;
        }
    }
    ctx->pc = 0x398E70u;
label_398e70:
    // 0x398e70: 0xc0ec2b8  jal         func_3B0AE0
    ctx->pc = 0x398E70u;
    SET_GPR_U32(ctx, 31, 0x398E78u);
    ctx->pc = 0x398E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398E70u;
    // 0x398e74: 0x24040fa0  addiu       $a0, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0AE0u, 0x398E70u, 0x398E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398E78u;
label_398e78:
    // 0x398e78: 0xc0eccca  jal         func_3B3328
    ctx->pc = 0x398E78u;
    SET_GPR_U32(ctx, 31, 0x398E80u);
    ctx->pc = 0x398E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398E78u;
    // 0x398e7c: 0x2604a1c0  addiu       $a0, $s0, -0x5E40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3328u, 0x398E78u, 0x398E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398E80u;
label_398e80:
    // 0x398e80: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x398E80u;
    {
        const bool branch_taken_0x398e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E80u;
        // 0x398e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e80) {
            ctx->pc = 0x398E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398e70;
        }
    }
    ctx->pc = 0x398E88u;
    // 0x398e88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x398E88u;
    {
        const bool branch_taken_0x398e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E88u;
        // 0x398e8c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e88) {
            ctx->pc = 0x398EA0u;
            goto label_398ea0;
        }
    }
    ctx->pc = 0x398E90u;
label_398e90:
    // 0x398e90: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x398e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x398e94: 0xc0eccca  jal         func_3B3328
    ctx->pc = 0x398E94u;
    SET_GPR_U32(ctx, 31, 0x398E9Cu);
    ctx->pc = 0x398E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398E94u;
    // 0x398e98: 0x2484a1c0  addiu       $a0, $a0, -0x5E40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3328u, 0x398E94u, 0x398E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398E9Cu;
label_398e9c:
    // 0x398e9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_398ea0:
    // 0x398ea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x398EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EA4u;
        // 0x398ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398EACu;
    // 0x398eac: 0x0  nop
    ctx->pc = 0x398eacu;
    // NOP
    ctx->pc = 0x398eb0u;
}
