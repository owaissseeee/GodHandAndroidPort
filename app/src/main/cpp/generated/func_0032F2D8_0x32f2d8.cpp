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

// Function: func_0032F2D8
// Address: 0x32f2d8 - 0x32f330
void func_0032F2D8_0x32f2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F2D8_0x32f2d8");
#endif

    switch (ctx->pc) {
        case 0x32f2fcu: goto label_32f2fc;
        case 0x32f30cu: goto label_32f30c;
        case 0x32f314u: goto label_32f314;
        default: break;
    }

    ctx->pc = 0x32f2d8u;

    // 0x32f2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32f2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32f2dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f2e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32f2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32f2e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32f2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32f2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32f2f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32f2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32f2f4: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32F2F4u;
    SET_GPR_U32(ctx, 31, 0x32F2FCu);
    ctx->pc = 0x32F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F2F4u;
    // 0x32f2f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32F2F4u, 0x32F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F2FCu;
label_32f2fc:
    // 0x32f2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f300: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32f300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f304: 0xc0cbccc  jal         func_32F330
    ctx->pc = 0x32F304u;
    SET_GPR_U32(ctx, 31, 0x32F30Cu);
    ctx->pc = 0x32F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F304u;
    // 0x32f308: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F330u, 0x32F304u, 0x32F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F30Cu;
label_32f30c:
    // 0x32f30c: 0xc0cff22  jal         func_33FC88
    ctx->pc = 0x32F30Cu;
    SET_GPR_U32(ctx, 31, 0x32F314u);
    ctx->pc = 0x32F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F30Cu;
    // 0x32f310: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32F30Cu, 0x32F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F314u;
label_32f314:
    // 0x32f314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32f314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f318: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32f318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f31c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32f31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f324: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32f324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32f328: 0x3e00008  jr          $ra
    ctx->pc = 0x32F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F328u;
        // 0x32f32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F330u;
}
