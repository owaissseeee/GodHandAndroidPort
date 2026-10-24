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

// Function: cOl2b_clearFire
// Address: 0x180648 - 0x180688
void cOl2b_clearFire_0x180648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl2b_clearFire_0x180648");
#endif

    switch (ctx->pc) {
        case 0x180670u: goto label_180670;
        default: break;
    }

    ctx->pc = 0x180648u;

    // 0x180648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18064c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180658: 0x92020a29  lbu         $v0, 0xA29($s0)
    ctx->pc = 0x180658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2601)));
    // 0x18065c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18065Cu;
    {
        const bool branch_taken_0x18065c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18065Cu;
        // 0x180660: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18065c) {
            ctx->pc = 0x180674u;
            goto label_180674;
        }
    }
    ctx->pc = 0x180664u;
    // 0x180664: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180668: 0xc0c185a  jal         func_306168
    ctx->pc = 0x180668u;
    SET_GPR_U32(ctx, 31, 0x180670u);
    ctx->pc = 0x18066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180668u;
    // 0x18066c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x180668u, 0x180670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180670u;
label_180670:
    // 0x180670: 0xa2000a29  sb          $zero, 0xA29($s0)
    ctx->pc = 0x180670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2601), (uint8_t)GPR_U32(ctx, 0));
label_180674:
    // 0x180674: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18067c: 0x3e00008  jr          $ra
    ctx->pc = 0x18067Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18067Cu;
        // 0x180680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18067Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180684u;
    // 0x180684: 0x0  nop
    ctx->pc = 0x180684u;
    // NOP
    ctx->pc = 0x180688u;
}
