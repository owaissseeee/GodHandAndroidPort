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

// Function: GetOrInit_460D58_2B6528
// Address: 0x2b6528 - 0x2b6568
void GetOrInit_460D58_2B6528_0x2b6528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_460D58_2B6528_0x2b6528");
#endif

    switch (ctx->pc) {
        case 0x2b6554u: goto label_2b6554;
        default: break;
    }

    ctx->pc = 0x2b6528u;

    // 0x2b6528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b652c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2b652cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2b6530: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b6530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b6534: 0x8c620d58  lw          $v0, 0xD58($v1)
    ctx->pc = 0x2b6534u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D58u));
    // 0x2b6538: 0x24700d58  addiu       $s0, $v1, 0xD58
    ctx->pc = 0x2b6538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3416));
    // 0x2b653c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B653Cu;
    {
        const bool branch_taken_0x2b653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B653Cu;
        // 0x2b6540: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b653c) {
            ctx->pc = 0x2B6554u;
            goto label_2b6554;
        }
    }
    ctx->pc = 0x2B6544u;
    // 0x2b6544: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b6544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b6548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b654c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x2B654Cu;
    SET_GPR_U32(ctx, 31, 0x2B6554u);
    ctx->pc = 0x2B6550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B654Cu;
    // 0x2b6550: 0x24a5b330  addiu       $a1, $a1, -0x4CD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x2B654Cu, 0x2B6554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6554u;
label_2b6554:
    // 0x2b6554: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b655c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b655cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6560: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6560u;
        // 0x2b6564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6568u;
}
