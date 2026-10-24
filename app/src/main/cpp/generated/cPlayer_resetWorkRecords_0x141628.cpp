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

// Function: cPlayer_resetWorkRecords
// Address: 0x141628 - 0x141678
void cPlayer_resetWorkRecords_0x141628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPlayer_resetWorkRecords_0x141628");
#endif

    switch (ctx->pc) {
        case 0x141640u: goto label_141640;
        case 0x141648u: goto label_141648;
        case 0x141650u: goto label_141650;
        case 0x141658u: goto label_141658;
        case 0x141660u: goto label_141660;
        case 0x141668u: goto label_141668;
        default: break;
    }

    ctx->pc = 0x141628u;

    // 0x141628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14162c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x141630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141638: 0xc04f900  jal         func_13E400
    ctx->pc = 0x141638u;
    SET_GPR_U32(ctx, 31, 0x141640u);
    ctx->pc = 0x14163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141638u;
    // 0x14163c: 0x26041910  addiu       $a0, $s0, 0x1910 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E400u, 0x141638u, 0x141640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141640u;
label_141640:
    // 0x141640: 0xc04f24c  jal         func_13C930
    ctx->pc = 0x141640u;
    SET_GPR_U32(ctx, 31, 0x141648u);
    ctx->pc = 0x141644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141640u;
    // 0x141644: 0x26041dc0  addiu       $a0, $s0, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C930u, 0x141640u, 0x141648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141648u;
label_141648:
    // 0x141648: 0xc04fd44  jal         func_13F510
    ctx->pc = 0x141648u;
    SET_GPR_U32(ctx, 31, 0x141650u);
    ctx->pc = 0x14164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141648u;
    // 0x14164c: 0x26041e90  addiu       $a0, $s0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F510u, 0x141648u, 0x141650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141650u;
label_141650:
    // 0x141650: 0xc04fa42  jal         func_13E908
    ctx->pc = 0x141650u;
    SET_GPR_U32(ctx, 31, 0x141658u);
    ctx->pc = 0x141654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141650u;
    // 0x141654: 0x26042220  addiu       $a0, $s0, 0x2220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E908u, 0x141650u, 0x141658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141658u;
label_141658:
    // 0x141658: 0xc051c62  jal         func_147188
    ctx->pc = 0x141658u;
    SET_GPR_U32(ctx, 31, 0x141660u);
    ctx->pc = 0x14165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141658u;
    // 0x14165c: 0x26041a20  addiu       $a0, $s0, 0x1A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147188u, 0x141658u, 0x141660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141660u;
label_141660:
    // 0x141660: 0xc050d2a  jal         func_1434A8
    ctx->pc = 0x141660u;
    SET_GPR_U32(ctx, 31, 0x141668u);
    ctx->pc = 0x141664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141660u;
    // 0x141664: 0x26040460  addiu       $a0, $s0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x141660u, 0x141668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141668u;
label_141668:
    // 0x141668: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x141668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14166c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14166cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141670: 0x3e00008  jr          $ra
    ctx->pc = 0x141670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141670u;
        // 0x141674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141678u;
}
