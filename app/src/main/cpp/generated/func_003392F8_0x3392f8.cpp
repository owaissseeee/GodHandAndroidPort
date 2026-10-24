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

// Function: func_003392F8
// Address: 0x3392f8 - 0x339360
void func_003392F8_0x3392f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003392F8_0x3392f8");
#endif

    switch (ctx->pc) {
        case 0x339324u: goto label_339324;
        case 0x339338u: goto label_339338;
        case 0x339340u: goto label_339340;
        default: break;
    }

    ctx->pc = 0x3392f8u;

    // 0x3392f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3392f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3392fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3392fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x339300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x339304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x339308: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x339308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33930c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x339310: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x339310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339314: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x339314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x339318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x339318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33931c: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33931Cu;
    SET_GPR_U32(ctx, 31, 0x339324u);
    ctx->pc = 0x339320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33931Cu;
    // 0x339320: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33931Cu, 0x339324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339324u;
label_339324:
    // 0x339324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x339324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339328: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33932c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33932cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339330: 0xc0ce4d8  jal         func_339360
    ctx->pc = 0x339330u;
    SET_GPR_U32(ctx, 31, 0x339338u);
    ctx->pc = 0x339334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339330u;
    // 0x339334: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339360u, 0x339330u, 0x339338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339338u;
label_339338:
    // 0x339338: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x339338u;
    SET_GPR_U32(ctx, 31, 0x339340u);
    ctx->pc = 0x33933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339338u;
    // 0x33933c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x339338u, 0x339340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339340u;
label_339340:
    // 0x339340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x339344: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x339344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339348: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x339348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33934c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33934cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339350: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x339350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x339354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339358: 0x3e00008  jr          $ra
    ctx->pc = 0x339358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339358u;
        // 0x33935c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339360u;
}
