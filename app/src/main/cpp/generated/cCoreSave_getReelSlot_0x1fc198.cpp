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

// Function: cCoreSave_getReelSlot
// Address: 0x1fc198 - 0x1fc1c8
void cCoreSave_getReelSlot_0x1fc198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getReelSlot_0x1fc198");
#endif

    ctx->pc = 0x1fc198u;

    // 0x1fc198: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc19c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC19Cu;
    {
        const bool branch_taken_0x1fc19c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC19Cu;
        // 0x1fc1a0: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc19c) {
            ctx->pc = 0x1FC1ACu;
            goto label_1fc1ac;
        }
    }
    ctx->pc = 0x1FC1A4u;
    // 0x1fc1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1A4u;
        // 0x1fc1a8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC1ACu;
label_1fc1ac:
    // 0x1fc1ac: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1fc1acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc1b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC1B0u;
    {
        const bool branch_taken_0x1fc1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1B0u;
        // 0x1fc1b4: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1b0) {
            ctx->pc = 0x1FC1C0u;
            goto label_1fc1c0;
        }
    }
    ctx->pc = 0x1FC1B8u;
    // 0x1fc1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1B8u;
        // 0x1fc1bc: 0x90620098  lbu         $v0, 0x98($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC1C0u;
label_1fc1c0:
    // 0x1fc1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1C0u;
        // 0x1fc1c4: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC1C8u;
}
