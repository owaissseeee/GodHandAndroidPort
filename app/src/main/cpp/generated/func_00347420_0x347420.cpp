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

// Function: func_00347420
// Address: 0x347420 - 0x347450
void func_00347420_0x347420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347420_0x347420");
#endif

    switch (ctx->pc) {
        case 0x347420u: goto label_347420;
        case 0x347424u: goto label_347424;
        case 0x347428u: goto label_347428;
        case 0x34742cu: goto label_34742c;
        case 0x347430u: goto label_347430;
        case 0x347434u: goto label_347434;
        case 0x347438u: goto label_347438;
        case 0x34743cu: goto label_34743c;
        case 0x347440u: goto label_347440;
        case 0x347444u: goto label_347444;
        case 0x347448u: goto label_347448;
        case 0x34744cu: goto label_34744c;
        default: break;
    }

    ctx->pc = 0x347420u;

label_347420:
    // 0x347420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_347424:
    // 0x347424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_347428:
    // 0x347428: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x347428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
label_34742c:
    // 0x34742c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_347430:
    if (ctx->pc == 0x347430u) {
        ctx->pc = 0x347430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34742Cu;
        // 0x347430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347434u;
        goto label_347434;
    }
    ctx->pc = 0x34742Cu;
    {
        const bool branch_taken_0x34742c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34742Cu;
        // 0x347430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34742c) {
            ctx->pc = 0x347444u;
            goto label_347444;
        }
    }
    ctx->pc = 0x347434u;
label_347434:
    // 0x347434: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x347434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_347438:
    // 0x347438: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x347438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_34743c:
    // 0x34743c: 0x60f809  jalr        $v1
label_347440:
    if (ctx->pc == 0x347440u) {
        ctx->pc = 0x347444u;
        goto label_347444;
    }
    ctx->pc = 0x34743Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x347444u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34743Cu, 0x347444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x347444u;
label_347444:
    // 0x347444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_347448:
    // 0x347448: 0x3e00008  jr          $ra
label_34744c:
    if (ctx->pc == 0x34744Cu) {
        ctx->pc = 0x34744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347448u;
        // 0x34744c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347450u;
        goto label_fallthrough_0x347448;
    }
    ctx->pc = 0x347448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347448u;
        // 0x34744c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x347448:
    ctx->pc = 0x347450u;
}
