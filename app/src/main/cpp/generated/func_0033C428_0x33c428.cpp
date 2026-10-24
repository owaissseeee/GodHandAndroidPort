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

// Function: func_0033C428
// Address: 0x33c428 - 0x33c458
void func_0033C428_0x33c428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C428_0x33c428");
#endif

    switch (ctx->pc) {
        case 0x33c428u: goto label_33c428;
        case 0x33c42cu: goto label_33c42c;
        case 0x33c430u: goto label_33c430;
        case 0x33c434u: goto label_33c434;
        case 0x33c438u: goto label_33c438;
        case 0x33c43cu: goto label_33c43c;
        case 0x33c440u: goto label_33c440;
        case 0x33c444u: goto label_33c444;
        case 0x33c448u: goto label_33c448;
        case 0x33c44cu: goto label_33c44c;
        case 0x33c450u: goto label_33c450;
        case 0x33c454u: goto label_33c454;
        default: break;
    }

    ctx->pc = 0x33c428u;

label_33c428:
    // 0x33c428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33c42c:
    // 0x33c42c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33c430:
    // 0x33c430: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x33c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_33c434:
    // 0x33c434: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33c438:
    if (ctx->pc == 0x33C438u) {
        ctx->pc = 0x33C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C434u;
        // 0x33c438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C43Cu;
        goto label_33c43c;
    }
    ctx->pc = 0x33C434u;
    {
        const bool branch_taken_0x33c434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C434u;
        // 0x33c438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c434) {
            ctx->pc = 0x33C44Cu;
            goto label_33c44c;
        }
    }
    ctx->pc = 0x33C43Cu;
label_33c43c:
    // 0x33c43c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33c440:
    // 0x33c440: 0x8c439d24  lw          $v1, -0x62DC($v0)
    ctx->pc = 0x33c440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941988)));
label_33c444:
    // 0x33c444: 0x60f809  jalr        $v1
label_33c448:
    if (ctx->pc == 0x33C448u) {
        ctx->pc = 0x33C44Cu;
        goto label_33c44c;
    }
    ctx->pc = 0x33C444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C44Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C444u, 0x33C44Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C44Cu;
label_33c44c:
    // 0x33c44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c450:
    // 0x33c450: 0x3e00008  jr          $ra
label_33c454:
    if (ctx->pc == 0x33C454u) {
        ctx->pc = 0x33C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C450u;
        // 0x33c454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C458u;
        goto label_fallthrough_0x33c450;
    }
    ctx->pc = 0x33C450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C450u;
        // 0x33c454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33c450:
    ctx->pc = 0x33C458u;
}
