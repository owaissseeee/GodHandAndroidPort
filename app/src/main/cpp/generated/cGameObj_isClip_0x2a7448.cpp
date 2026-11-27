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

// Function: cGameObj_isClip
// Address: 0x2a7448 - 0x2a7498
void cGameObj_isClip_0x2a7448(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_isClip_0x2a7448");
#endif

    if (__builtin_expect(ctx->pc != 0x2a7448u, 0)) {
        switch (ctx->pc) {
            case 0x2a7478u: goto label_2a7478;
            default: break;
        }
    }


    // 0x2a7448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a744c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a7450: 0x9c8305a0  lwu         $v1, 0x5A0($a0)
    ctx->pc = 0x2a7450u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 1440)));
    // 0x2a7454: 0x30620001  andi        $v0, $v1, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a7458: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7458u;
    {
        const bool branch_taken_0x2a7458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7458u;
        // 0x2a745c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7458) {
            ctx->pc = 0x2A747Cu;
            goto label_2a747c;
        }
    }
    // 0x2a7460: 0x3107b  dsra        $v0, $v1, 1
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x2a7464: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a7468: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7468u;
    {
        const bool branch_taken_0x2a7468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7468u;
        // 0x2a746c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7468) {
            ctx->pc = 0x2A747Cu;
            goto label_2a747c;
        }
    }
    // 0x2a7470: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x2A7470u;
    SET_GPR_U32(ctx, 31, 0x2A7478u);
    if (!runtime->callDirectStatic(rdram, ctx, &IsTargetVisible_14B470_0x14b470, 0x14b470u, 0x2a7478u)) {
        return;
    }
label_2a7478:
    // 0x2a7478: 0x2102b  sltu        $v0, $zero, $v0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a747c:
    // 0x2a747c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a747cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7480: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7480u;
        // 0x2a7484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2a7488: 0x27bd0020  addiu       $sp, $sp, 0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a748c: 0x0  nop
    // NOP
    // 0x2a7490: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a7494: 0x0  nop
    // NOP
    ctx->pc = 0x2a7498u;
}