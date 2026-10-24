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

// Function: SetFlagEntries5And6_1D5650
// Address: 0x1d5650 - 0x1d5690
void SetFlagEntries5And6_1D5650_0x1d5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlagEntries5And6_1D5650_0x1d5650");
#endif

    switch (ctx->pc) {
        case 0x1d566cu: goto label_1d566c;
        case 0x1d567cu: goto label_1d567c;
        default: break;
    }

    ctx->pc = 0x1d5650u;

    // 0x1d5650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5654: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d5654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5658: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d565c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d565cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d5660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5664: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5664u;
    SET_GPR_U32(ctx, 31, 0x1D566Cu);
    ctx->pc = 0x1D5668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5664u;
    // 0x1d5668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5664u, 0x1D566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D566Cu;
label_1d566c:
    // 0x1d566c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5670: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d5670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d5674: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5674u;
    SET_GPR_U32(ctx, 31, 0x1D567Cu);
    ctx->pc = 0x1D5678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5674u;
    // 0x1d5678: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5674u, 0x1D567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D567Cu;
label_1d567c:
    // 0x1d567c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d567cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5684: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5684u;
        // 0x1d5688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D568Cu;
    // 0x1d568c: 0x0  nop
    ctx->pc = 0x1d568cu;
    // NOP
    ctx->pc = 0x1d5690u;
}
