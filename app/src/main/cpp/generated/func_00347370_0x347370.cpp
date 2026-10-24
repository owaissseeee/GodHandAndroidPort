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

// Function: func_00347370
// Address: 0x347370 - 0x3473a0
void func_00347370_0x347370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347370_0x347370");
#endif

    switch (ctx->pc) {
        case 0x347370u: goto label_347370;
        case 0x347374u: goto label_347374;
        case 0x347378u: goto label_347378;
        case 0x34737cu: goto label_34737c;
        case 0x347380u: goto label_347380;
        case 0x347384u: goto label_347384;
        case 0x347388u: goto label_347388;
        case 0x34738cu: goto label_34738c;
        case 0x347390u: goto label_347390;
        case 0x347394u: goto label_347394;
        case 0x347398u: goto label_347398;
        case 0x34739cu: goto label_34739c;
        default: break;
    }

    ctx->pc = 0x347370u;

label_347370:
    // 0x347370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_347374:
    // 0x347374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_347378:
    // 0x347378: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x347378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
label_34737c:
    // 0x34737c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_347380:
    if (ctx->pc == 0x347380u) {
        ctx->pc = 0x347380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34737Cu;
        // 0x347380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347384u;
        goto label_347384;
    }
    ctx->pc = 0x34737Cu;
    {
        const bool branch_taken_0x34737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34737Cu;
        // 0x347380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34737c) {
            ctx->pc = 0x347394u;
            goto label_347394;
        }
    }
    ctx->pc = 0x347384u;
label_347384:
    // 0x347384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x347384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_347388:
    // 0x347388: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x347388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_34738c:
    // 0x34738c: 0x60f809  jalr        $v1
label_347390:
    if (ctx->pc == 0x347390u) {
        ctx->pc = 0x347394u;
        goto label_347394;
    }
    ctx->pc = 0x34738Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x347394u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34738Cu, 0x347394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x347394u;
label_347394:
    // 0x347394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_347398:
    // 0x347398: 0x3e00008  jr          $ra
label_34739c:
    if (ctx->pc == 0x34739Cu) {
        ctx->pc = 0x34739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347398u;
        // 0x34739c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3473A0u;
        goto label_fallthrough_0x347398;
    }
    ctx->pc = 0x347398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347398u;
        // 0x34739c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x347398:
    ctx->pc = 0x3473A0u;
}
