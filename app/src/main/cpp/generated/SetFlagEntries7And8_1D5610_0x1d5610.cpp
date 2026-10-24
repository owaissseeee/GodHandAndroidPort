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

// Function: SetFlagEntries7And8_1D5610
// Address: 0x1d5610 - 0x1d5650
void SetFlagEntries7And8_1D5610_0x1d5610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlagEntries7And8_1D5610_0x1d5610");
#endif

    switch (ctx->pc) {
        case 0x1d562cu: goto label_1d562c;
        case 0x1d563cu: goto label_1d563c;
        default: break;
    }

    ctx->pc = 0x1d5610u;

    // 0x1d5610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5614: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d5614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5618: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d561c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d5620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5624: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5624u;
    SET_GPR_U32(ctx, 31, 0x1D562Cu);
    ctx->pc = 0x1D5628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5624u;
    // 0x1d5628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5624u, 0x1D562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D562Cu;
label_1d562c:
    // 0x1d562c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d562cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5630: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d5634: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5634u;
    SET_GPR_U32(ctx, 31, 0x1D563Cu);
    ctx->pc = 0x1D5638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5634u;
    // 0x1d5638: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5634u, 0x1D563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D563Cu;
label_1d563c:
    // 0x1d563c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d563cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5644: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5644u;
        // 0x1d5648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D564Cu;
    // 0x1d564c: 0x0  nop
    ctx->pc = 0x1d564cu;
    // NOP
    ctx->pc = 0x1d5650u;
}
