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

// Function: func_001A2550
// Address: 0x1a2550 - 0x1a25a0
void func_001A2550_0x1a2550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A2550_0x1a2550");
#endif

    switch (ctx->pc) {
        case 0x1a2574u: goto label_1a2574;
        case 0x1a258cu: goto label_1a258c;
        default: break;
    }

    ctx->pc = 0x1a2550u;

    // 0x1a2550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2554: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a2554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a2558: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a2558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a255c: 0x8c625f28  lw          $v0, 0x5F28($v1)
    ctx->pc = 0x1a255cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785F28u));
    // 0x1a2560: 0x24705f28  addiu       $s0, $v1, 0x5F28
    ctx->pc = 0x1a2560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24360));
    // 0x1a2564: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2564u;
    {
        const bool branch_taken_0x1a2564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2564u;
        // 0x1a2568: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2564) {
            ctx->pc = 0x1A258Cu;
            goto label_1a258c;
        }
    }
    ctx->pc = 0x1A256Cu;
    // 0x1a256c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1A256Cu;
    SET_GPR_U32(ctx, 31, 0x1A2574u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1A256Cu, 0x1A2574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2574u;
label_1a2574:
    // 0x1a2574: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a2574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a2578: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a2578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a257c: 0x24a56f28  addiu       $a1, $a1, 0x6F28
    ctx->pc = 0x1a257cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28456));
    // 0x1a2580: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1a2580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1a2584: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A2584u;
    SET_GPR_U32(ctx, 31, 0x1A258Cu);
    ctx->pc = 0x1A2588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2584u;
    // 0x1a2588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A2584u, 0x1A258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A258Cu;
label_1a258c:
    // 0x1a258c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a258cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2594: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a2594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2598: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2598u;
        // 0x1a259c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A25A0u;
}
