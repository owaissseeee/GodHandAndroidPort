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

// Function: func_00340538
// Address: 0x340538 - 0x340580
void func_00340538_0x340538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340538_0x340538");
#endif

    switch (ctx->pc) {
        case 0x340554u: goto label_340554;
        case 0x340560u: goto label_340560;
        case 0x340568u: goto label_340568;
        default: break;
    }

    ctx->pc = 0x340538u;

    // 0x340538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34053c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34054c: 0xc0d00f2  jal         func_3403C8
    ctx->pc = 0x34054Cu;
    SET_GPR_U32(ctx, 31, 0x340554u);
    ctx->pc = 0x340550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34054Cu;
    // 0x340550: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403C8u, 0x34054Cu, 0x340554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340554u;
label_340554:
    // 0x340554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340558: 0xc0d0160  jal         func_340580
    ctx->pc = 0x340558u;
    SET_GPR_U32(ctx, 31, 0x340560u);
    ctx->pc = 0x34055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340558u;
    // 0x34055c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340580u, 0x340558u, 0x340560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340560u;
label_340560:
    // 0x340560: 0xc0d00f8  jal         func_3403E0
    ctx->pc = 0x340560u;
    SET_GPR_U32(ctx, 31, 0x340568u);
    ctx->pc = 0x340564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340560u;
    // 0x340564: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403E0u, 0x340560u, 0x340568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340568u;
label_340568:
    // 0x340568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34056c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34056cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340578: 0x3e00008  jr          $ra
    ctx->pc = 0x340578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340578u;
        // 0x34057c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340580u;
}
