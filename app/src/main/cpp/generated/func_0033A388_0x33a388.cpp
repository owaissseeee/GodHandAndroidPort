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

// Function: func_0033A388
// Address: 0x33a388 - 0x33a3c0
void func_0033A388_0x33a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A388_0x33a388");
#endif

    switch (ctx->pc) {
        case 0x33a39cu: goto label_33a39c;
        case 0x33a3a4u: goto label_33a3a4;
        case 0x33a3acu: goto label_33a3ac;
        default: break;
    }

    ctx->pc = 0x33a388u;

    // 0x33a388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a38c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a390: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33a394: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33A394u;
    SET_GPR_U32(ctx, 31, 0x33A39Cu);
    ctx->pc = 0x33A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A394u;
    // 0x33a398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33A394u, 0x33A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A39Cu;
label_33a39c:
    // 0x33a39c: 0xc0ce8f0  jal         func_33A3C0
    ctx->pc = 0x33A39Cu;
    SET_GPR_U32(ctx, 31, 0x33A3A4u);
    ctx->pc = 0x33A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A39Cu;
    // 0x33a3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3C0u, 0x33A39Cu, 0x33A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A3A4u;
label_33a3a4:
    // 0x33a3a4: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x33A3A4u;
    SET_GPR_U32(ctx, 31, 0x33A3ACu);
    ctx->pc = 0x33A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A3A4u;
    // 0x33a3a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33A3A4u, 0x33A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A3ACu;
label_33a3ac:
    // 0x33a3ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a3b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33a3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x33A3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3B8u;
        // 0x33a3bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A3C0u;
}
