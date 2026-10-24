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

// Function: cGameObj_getHitCheckPos
// Address: 0x2a9468 - 0x2a9498
void cGameObj_getHitCheckPos_0x2a9468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_getHitCheckPos_0x2a9468");
#endif

    switch (ctx->pc) {
        case 0x2a9468u: goto label_2a9468;
        case 0x2a946cu: goto label_2a946c;
        case 0x2a9470u: goto label_2a9470;
        case 0x2a9474u: goto label_2a9474;
        case 0x2a9478u: goto label_2a9478;
        case 0x2a947cu: goto label_2a947c;
        case 0x2a9480u: goto label_2a9480;
        case 0x2a9484u: goto label_2a9484;
        case 0x2a9488u: goto label_2a9488;
        case 0x2a948cu: goto label_2a948c;
        case 0x2a9490u: goto label_2a9490;
        case 0x2a9494u: goto label_2a9494;
        default: break;
    }

    ctx->pc = 0x2a9468u;

label_2a9468:
    // 0x2a9468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a946c:
    // 0x2a946c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a9470:
    // 0x2a9470: 0x8c830214  lw          $v1, 0x214($a0)
    ctx->pc = 0x2a9470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_2a9474:
    // 0x2a9474: 0x84650080  lh          $a1, 0x80($v1)
    ctx->pc = 0x2a9474u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2a9478:
    // 0x2a9478: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2a9478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2a947c:
    // 0x2a947c: 0x40f809  jalr        $v0
label_2a9480:
    if (ctx->pc == 0x2A9480u) {
        ctx->pc = 0x2A9480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A947Cu;
        // 0x2a9480: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9484u;
        goto label_2a9484;
    }
    ctx->pc = 0x2A947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9484u);
        ctx->pc = 0x2A9480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A947Cu;
        // 0x2a9480: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A947Cu, 0x2A9484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9484u;
label_2a9484:
    // 0x2a9484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9488:
    // 0x2a9488: 0x3e00008  jr          $ra
label_2a948c:
    if (ctx->pc == 0x2A948Cu) {
        ctx->pc = 0x2A948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9488u;
        // 0x2a948c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9490u;
        goto label_2a9490;
    }
    ctx->pc = 0x2A9488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9488u;
        // 0x2a948c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9490u;
label_2a9490:
    // 0x2a9490: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a9490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a9494:
    // 0x2a9494: 0x0  nop
    ctx->pc = 0x2a9494u;
    // NOP
    ctx->pc = 0x2a9498u;
}
