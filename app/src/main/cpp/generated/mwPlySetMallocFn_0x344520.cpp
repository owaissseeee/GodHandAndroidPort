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

// Function: mwPlySetMallocFn
// Address: 0x344520 - 0x344568
void mwPlySetMallocFn_0x344520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwPlySetMallocFn_0x344520");
#endif

    switch (ctx->pc) {
        case 0x344544u: goto label_344544;
        default: break;
    }

    ctx->pc = 0x344520u;

    // 0x344520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344528: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x344528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34452c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34452cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x344530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344534: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x344534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x344538: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x344538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34453c: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x34453Cu;
    SET_GPR_U32(ctx, 31, 0x344544u);
    ctx->pc = 0x344540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34453Cu;
    // 0x344540: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x34453Cu, 0x344544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344544u;
label_344544:
    // 0x344544: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x344544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x344548: 0xac510028  sw          $s1, 0x28($v0)
    ctx->pc = 0x344548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 17));
    // 0x34454c: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x34454cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
    // 0x344550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344554: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344558: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x344558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34455c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34455cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344560: 0x3e00008  jr          $ra
    ctx->pc = 0x344560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344560u;
        // 0x344564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344568u;
}
