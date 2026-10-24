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

// Function: func_001BF428
// Address: 0x1bf428 - 0x1bf478
void func_001BF428_0x1bf428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BF428_0x1bf428");
#endif

    switch (ctx->pc) {
        case 0x1bf44cu: goto label_1bf44c;
        case 0x1bf464u: goto label_1bf464;
        default: break;
    }

    ctx->pc = 0x1bf428u;

    // 0x1bf428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf42c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1bf42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1bf430: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bf430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bf434: 0x8c626138  lw          $v0, 0x6138($v1)
    ctx->pc = 0x1bf434u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786138u));
    // 0x1bf438: 0x24706138  addiu       $s0, $v1, 0x6138
    ctx->pc = 0x1bf438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24888));
    // 0x1bf43c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF43Cu;
    {
        const bool branch_taken_0x1bf43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF43Cu;
        // 0x1bf440: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf43c) {
            ctx->pc = 0x1BF464u;
            goto label_1bf464;
        }
    }
    ctx->pc = 0x1BF444u;
    // 0x1bf444: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1BF444u;
    SET_GPR_U32(ctx, 31, 0x1BF44Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1BF444u, 0x1BF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF44Cu;
label_1bf44c:
    // 0x1bf44c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1bf44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1bf450: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1bf450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1bf454: 0x24a596d0  addiu       $a1, $a1, -0x6930
    ctx->pc = 0x1bf454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940368));
    // 0x1bf458: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1bf458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1bf45c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1BF45Cu;
    SET_GPR_U32(ctx, 31, 0x1BF464u);
    ctx->pc = 0x1BF460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF45Cu;
    // 0x1bf460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1BF45Cu, 0x1BF464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF464u;
label_1bf464:
    // 0x1bf464: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bf464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf46c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bf46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf470: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF470u;
        // 0x1bf474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF478u;
}
