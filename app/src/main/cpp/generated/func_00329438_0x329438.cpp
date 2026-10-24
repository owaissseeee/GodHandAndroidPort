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

// Function: func_00329438
// Address: 0x329438 - 0x329490
void func_00329438_0x329438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329438_0x329438");
#endif

    switch (ctx->pc) {
        case 0x32945cu: goto label_32945c;
        case 0x32946cu: goto label_32946c;
        case 0x329474u: goto label_329474;
        default: break;
    }

    ctx->pc = 0x329438u;

    // 0x329438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32943c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329444: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x329448: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x329448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32944c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x329450: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x329450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x329454: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x329454u;
    SET_GPR_U32(ctx, 31, 0x32945Cu);
    ctx->pc = 0x329458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329454u;
    // 0x329458: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x329454u, 0x32945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32945Cu;
label_32945c:
    // 0x32945c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329460: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329464: 0xc0ca524  jal         func_329490
    ctx->pc = 0x329464u;
    SET_GPR_U32(ctx, 31, 0x32946Cu);
    ctx->pc = 0x329468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329464u;
    // 0x329468: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329490u, 0x329464u, 0x32946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32946Cu;
label_32946c:
    // 0x32946c: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32946Cu;
    SET_GPR_U32(ctx, 31, 0x329474u);
    ctx->pc = 0x329470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32946Cu;
    // 0x329470: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32946Cu, 0x329474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329474u;
label_329474:
    // 0x329474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329478: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x329478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32947c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32947cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329484: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x329484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x329488: 0x3e00008  jr          $ra
    ctx->pc = 0x329488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329488u;
        // 0x32948c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329490u;
}
