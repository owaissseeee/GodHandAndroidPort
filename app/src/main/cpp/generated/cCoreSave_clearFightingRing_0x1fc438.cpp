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

// Function: cCoreSave_clearFightingRing
// Address: 0x1fc438 - 0x1fc468
void cCoreSave_clearFightingRing_0x1fc438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearFightingRing_0x1fc438");
#endif

    switch (ctx->pc) {
        case 0x1fc458u: goto label_1fc458;
        default: break;
    }

    ctx->pc = 0x1fc438u;

    // 0x1fc438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc440: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc444: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC444u;
    {
        const bool branch_taken_0x1fc444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC444u;
        // 0x1fc448: 0x24840b98  addiu       $a0, $a0, 0xB98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc444) {
            ctx->pc = 0x1FC458u;
            goto label_1fc458;
        }
    }
    ctx->pc = 0x1FC44Cu;
    // 0x1fc44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc450: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1FC450u;
    SET_GPR_U32(ctx, 31, 0x1FC458u);
    ctx->pc = 0x1FC454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC450u;
    // 0x1fc454: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1FC450u, 0x1FC458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC458u;
label_1fc458:
    // 0x1fc458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc45c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC45Cu;
        // 0x1fc460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC464u;
    // 0x1fc464: 0x0  nop
    ctx->pc = 0x1fc464u;
    // NOP
    ctx->pc = 0x1fc468u;
}
