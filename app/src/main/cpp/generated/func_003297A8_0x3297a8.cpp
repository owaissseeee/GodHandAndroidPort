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

// Function: func_003297A8
// Address: 0x3297a8 - 0x3297f0
void func_003297A8_0x3297a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003297A8_0x3297a8");
#endif

    switch (ctx->pc) {
        case 0x3297c4u: goto label_3297c4;
        case 0x3297d0u: goto label_3297d0;
        case 0x3297d8u: goto label_3297d8;
        default: break;
    }

    ctx->pc = 0x3297a8u;

    // 0x3297a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3297a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3297ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3297acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3297b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3297b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3297b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3297b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3297b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3297b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3297bc: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x3297BCu;
    SET_GPR_U32(ctx, 31, 0x3297C4u);
    ctx->pc = 0x3297C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297BCu;
    // 0x3297c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x3297BCu, 0x3297C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297C4u;
label_3297c4:
    // 0x3297c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3297c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3297c8: 0xc0ca5fc  jal         func_3297F0
    ctx->pc = 0x3297C8u;
    SET_GPR_U32(ctx, 31, 0x3297D0u);
    ctx->pc = 0x3297CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297C8u;
    // 0x3297cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3297F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3297F0u, 0x3297C8u, 0x3297D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297D0u;
label_3297d0:
    // 0x3297d0: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x3297D0u;
    SET_GPR_U32(ctx, 31, 0x3297D8u);
    ctx->pc = 0x3297D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297D0u;
    // 0x3297d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x3297D0u, 0x3297D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297D8u;
label_3297d8:
    // 0x3297d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3297d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3297dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3297dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3297e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3297e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3297e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3297e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3297e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3297E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3297ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297E8u;
        // 0x3297ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3297E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3297F0u;
}
