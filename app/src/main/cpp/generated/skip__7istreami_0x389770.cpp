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

// Function: skip__7istreami
// Address: 0x389770 - 0x3897a8
void skip__7istreami_0x389770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("skip__7istreami_0x389770");
#endif

    ctx->pc = 0x389770u;

    // 0x389770: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x389770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x389774: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x389774u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x389778: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x389778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x38977c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x38977cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x389780: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x389780u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x389784: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x389784u;
    {
        const bool branch_taken_0x389784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x389784) {
            ctx->pc = 0x389788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389784u;
            // 0x389788: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389798u;
            goto label_389798;
        }
    }
    ctx->pc = 0x38978Cu;
    // 0x38978c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389790: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x389790u;
    {
        const bool branch_taken_0x389790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389790u;
        // 0x389794: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389790) {
            ctx->pc = 0x38979Cu;
            goto label_38979c;
        }
    }
    ctx->pc = 0x389798u;
label_389798:
    // 0x389798: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x389798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_38979c:
    // 0x38979c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x38979cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x3897a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3897A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3897A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897A0u;
        // 0x3897a4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3897A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3897A8u;
}
