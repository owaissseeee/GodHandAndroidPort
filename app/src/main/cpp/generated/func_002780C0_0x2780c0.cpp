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

// Function: func_002780C0
// Address: 0x2780c0 - 0x278110
void func_002780C0_0x2780c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002780C0_0x2780c0");
#endif

    switch (ctx->pc) {
        case 0x2780e8u: goto label_2780e8;
        case 0x2780f0u: goto label_2780f0;
        case 0x2780fcu: goto label_2780fc;
        default: break;
    }

    ctx->pc = 0x2780c0u;

    // 0x2780c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2780c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2780c4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2780c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2780c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2780c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2780cc: 0x24427d48  addiu       $v0, $v0, 0x7D48
    ctx->pc = 0x2780ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32072));
    // 0x2780d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2780d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2780d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2780d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2780d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2780dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2780dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780e0: 0xc0aa12a  jal         func_2A84A8
    ctx->pc = 0x2780E0u;
    SET_GPR_U32(ctx, 31, 0x2780E8u);
    ctx->pc = 0x2780E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2780E0u;
    // 0x2780e4: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84A8u, 0x2780E0u, 0x2780E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780E8u;
label_2780e8:
    // 0x2780e8: 0xc09e0da  jal         func_278368
    ctx->pc = 0x2780E8u;
    SET_GPR_U32(ctx, 31, 0x2780F0u);
    ctx->pc = 0x2780ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2780E8u;
    // 0x2780ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278368u, 0x2780E8u, 0x2780F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780F0u;
label_2780f0:
    // 0x2780f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2780f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780f4: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x2780F4u;
    SET_GPR_U32(ctx, 31, 0x2780FCu);
    ctx->pc = 0x2780F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2780F4u;
    // 0x2780f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x2780F4u, 0x2780FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780FCu;
label_2780fc:
    // 0x2780fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2780fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x278100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278108: 0x3e00008  jr          $ra
    ctx->pc = 0x278108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278108u;
        // 0x27810c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278110u;
}
