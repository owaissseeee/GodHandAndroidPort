#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: calcNextFrameSetNextCut__9cEventEnv
// Address: 0x7ae168 - 0x7ae1c0
void calcNextFrameSetNextCut__9cEventEnv_0x7ae168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcNextFrameSetNextCut__9cEventEnv_0x7ae168");
#endif

    switch (ctx->pc) {
        case 0x7ae1a0u: goto label_7ae1a0;
        default: break;
    }

    ctx->pc = 0x7ae168u;

    // 0x7ae168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ae168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ae16c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7ae16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae174: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x7ae174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7ae178: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x7ae178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x7ae17c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x7ae17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7ae180: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7ae184: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7ae184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7ae188: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x7ae188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x7ae18c: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AE18Cu;
    {
        const bool branch_taken_0x7ae18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x7ae18c) {
            ctx->pc = 0x7AE190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE18Cu;
            // 0x7ae190: 0x90420001  lbu         $v0, 0x1($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE1A8u;
            goto label_7ae1a8;
        }
    }
    ctx->pc = 0x7AE194u;
    // 0x7ae194: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x7ae194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae198: 0xc1eb924  jal         func_7AE490
    ctx->pc = 0x7AE198u;
    SET_GPR_U32(ctx, 31, 0x7AE1A0u);
    ctx->pc = 0x7AE19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE198u;
    // 0x7ae19c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE490u, 0x7AE198u, 0x7AE1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE1A0u;
label_7ae1a0:
    // 0x7ae1a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7AE1A0u;
    {
        const bool branch_taken_0x7ae1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE1A0u;
        // 0x7ae1a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae1a0) {
            ctx->pc = 0x7AE1B4u;
            goto label_7ae1b4;
        }
    }
    ctx->pc = 0x7AE1A8u;
label_7ae1a8:
    // 0x7ae1a8: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x7ae1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x7ae1ac: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x7ae1acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x7ae1b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7ae1b4:
    // 0x7ae1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE1B4u;
        // 0x7ae1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE1BCu;
    // 0x7ae1bc: 0x0  nop
    ctx->pc = 0x7ae1bcu;
    // NOP
    ctx->pc = 0x7ae1c0u;
}
} // namespace gh_event
