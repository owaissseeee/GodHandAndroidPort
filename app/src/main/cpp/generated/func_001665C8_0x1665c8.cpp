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

// Function: func_001665C8
// Address: 0x1665c8 - 0x166618
void func_001665C8_0x1665c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001665C8_0x1665c8");
#endif

    switch (ctx->pc) {
        case 0x1665ecu: goto label_1665ec;
        case 0x166604u: goto label_166604;
        default: break;
    }

    ctx->pc = 0x1665c8u;

    // 0x1665c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1665c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1665cc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1665ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1665d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1665d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1665d4: 0x8c625728  lw          $v0, 0x5728($v1)
    ctx->pc = 0x1665d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785728u));
    // 0x1665d8: 0x24705728  addiu       $s0, $v1, 0x5728
    ctx->pc = 0x1665d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22312));
    // 0x1665dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1665DCu;
    {
        const bool branch_taken_0x1665dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1665E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665DCu;
        // 0x1665e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665dc) {
            ctx->pc = 0x166604u;
            goto label_166604;
        }
    }
    ctx->pc = 0x1665E4u;
    // 0x1665e4: 0xc05858a  jal         func_161628
    ctx->pc = 0x1665E4u;
    SET_GPR_U32(ctx, 31, 0x1665ECu);
    ctx->pc = 0x161628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161628u, 0x1665E4u, 0x1665ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665ECu;
label_1665ec:
    // 0x1665ec: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1665ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1665f0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1665f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1665f4: 0x24a5f708  addiu       $a1, $a1, -0x8F8
    ctx->pc = 0x1665f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965000));
    // 0x1665f8: 0x24c60d38  addiu       $a2, $a2, 0xD38
    ctx->pc = 0x1665f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3384));
    // 0x1665fc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1665FCu;
    SET_GPR_U32(ctx, 31, 0x166604u);
    ctx->pc = 0x166600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665FCu;
    // 0x166600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1665FCu, 0x166604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166604u;
label_166604:
    // 0x166604: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x166604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16660c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16660cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166610: 0x3e00008  jr          $ra
    ctx->pc = 0x166610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166610u;
        // 0x166614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166618u;
}
