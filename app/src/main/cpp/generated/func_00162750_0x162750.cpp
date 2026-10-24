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

// Function: func_00162750
// Address: 0x162750 - 0x1627a0
void func_00162750_0x162750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00162750_0x162750");
#endif

    switch (ctx->pc) {
        case 0x162774u: goto label_162774;
        case 0x16278cu: goto label_16278c;
        default: break;
    }

    ctx->pc = 0x162750u;

    // 0x162750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162754: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x162754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x162758: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x162758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16275c: 0x8c625708  lw          $v0, 0x5708($v1)
    ctx->pc = 0x16275cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785708u));
    // 0x162760: 0x24705708  addiu       $s0, $v1, 0x5708
    ctx->pc = 0x162760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22280));
    // 0x162764: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x162764u;
    {
        const bool branch_taken_0x162764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162764u;
        // 0x162768: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162764) {
            ctx->pc = 0x16278Cu;
            goto label_16278c;
        }
    }
    ctx->pc = 0x16276Cu;
    // 0x16276c: 0xc05858a  jal         func_161628
    ctx->pc = 0x16276Cu;
    SET_GPR_U32(ctx, 31, 0x162774u);
    ctx->pc = 0x161628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161628u, 0x16276Cu, 0x162774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162774u;
label_162774:
    // 0x162774: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x162774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x162778: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x162778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x16277c: 0x24a5f3c8  addiu       $a1, $a1, -0xC38
    ctx->pc = 0x16277cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964168));
    // 0x162780: 0x24c60d38  addiu       $a2, $a2, 0xD38
    ctx->pc = 0x162780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3384));
    // 0x162784: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x162784u;
    SET_GPR_U32(ctx, 31, 0x16278Cu);
    ctx->pc = 0x162788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162784u;
    // 0x162788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x162784u, 0x16278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16278Cu;
label_16278c:
    // 0x16278c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16278cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162794: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x162794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162798: 0x3e00008  jr          $ra
    ctx->pc = 0x162798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162798u;
        // 0x16279c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1627A0u;
}
