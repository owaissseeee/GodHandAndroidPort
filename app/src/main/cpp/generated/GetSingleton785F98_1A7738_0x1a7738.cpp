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

// Function: GetSingleton785F98_1A7738
// Address: 0x1a7738 - 0x1a7788
void GetSingleton785F98_1A7738_0x1a7738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton785F98_1A7738_0x1a7738");
#endif

    switch (ctx->pc) {
        case 0x1a775cu: goto label_1a775c;
        case 0x1a7774u: goto label_1a7774;
        default: break;
    }

    ctx->pc = 0x1a7738u;

    // 0x1a7738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a773c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a773cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a7740: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a7740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a7744: 0x8c625f98  lw          $v0, 0x5F98($v1)
    ctx->pc = 0x1a7744u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785F98u));
    // 0x1a7748: 0x24705f98  addiu       $s0, $v1, 0x5F98
    ctx->pc = 0x1a7748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24472));
    // 0x1a774c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A774Cu;
    {
        const bool branch_taken_0x1a774c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A774Cu;
        // 0x1a7750: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a774c) {
            ctx->pc = 0x1A7774u;
            goto label_1a7774;
        }
    }
    ctx->pc = 0x1A7754u;
    // 0x1a7754: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1A7754u;
    SET_GPR_U32(ctx, 31, 0x1A775Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1A7754u, 0x1A775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A775Cu;
label_1a775c:
    // 0x1a775c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a775cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a7760: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a7760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a7764: 0x24a57580  addiu       $a1, $a1, 0x7580
    ctx->pc = 0x1a7764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30080));
    // 0x1a7768: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1a7768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1a776c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A776Cu;
    SET_GPR_U32(ctx, 31, 0x1A7774u);
    ctx->pc = 0x1A7770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A776Cu;
    // 0x1a7770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A776Cu, 0x1A7774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7774u;
label_1a7774:
    // 0x1a7774: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a7774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a777c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a777cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7780: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7780u;
        // 0x1a7784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7788u;
}
