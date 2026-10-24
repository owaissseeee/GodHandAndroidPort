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

// Function: func_00161480
// Address: 0x161480 - 0x1614b0
void func_00161480_0x161480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00161480_0x161480");
#endif

    switch (ctx->pc) {
        case 0x1614a4u: goto label_1614a4;
        default: break;
    }

    ctx->pc = 0x161480u;

    // 0x161480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161484: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x161484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x161488: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161488u;
    {
        const bool branch_taken_0x161488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161488u;
        // 0x16148c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161488) {
            ctx->pc = 0x1614A4u;
            goto label_1614a4;
        }
    }
    ctx->pc = 0x161490u;
    // 0x161490: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161490u;
    {
        const bool branch_taken_0x161490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x161494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161490u;
        // 0x161494: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161490) {
            ctx->pc = 0x1614A8u;
            goto label_1614a8;
        }
    }
    ctx->pc = 0x161498u;
    // 0x161498: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x161498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
    // 0x16149c: 0xc0584b2  jal         func_1612C8
    ctx->pc = 0x16149Cu;
    SET_GPR_U32(ctx, 31, 0x1614A4u);
    ctx->pc = 0x1614A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16149Cu;
    // 0x1614a0: 0x24846e50  addiu       $a0, $a0, 0x6E50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1612C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1612C8u, 0x16149Cu, 0x1614A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614A4u;
label_1614a4:
    // 0x1614a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1614a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1614a8:
    // 0x1614a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1614A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1614ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614A8u;
        // 0x1614ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1614A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1614B0u;
}
