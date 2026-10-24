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

// Function: func_00279C98
// Address: 0x279c98 - 0x279ce8
void func_00279C98_0x279c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279C98_0x279c98");
#endif

    switch (ctx->pc) {
        case 0x279cbcu: goto label_279cbc;
        case 0x279cd4u: goto label_279cd4;
        default: break;
    }

    ctx->pc = 0x279c98u;

    // 0x279c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279c9c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x279c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x279ca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x279ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x279ca4: 0x8c626208  lw          $v0, 0x6208($v1)
    ctx->pc = 0x279ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786208u));
    // 0x279ca8: 0x24706208  addiu       $s0, $v1, 0x6208
    ctx->pc = 0x279ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25096));
    // 0x279cac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x279CACu;
    {
        const bool branch_taken_0x279cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CACu;
        // 0x279cb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cac) {
            ctx->pc = 0x279CD4u;
            goto label_279cd4;
        }
    }
    ctx->pc = 0x279CB4u;
    // 0x279cb4: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x279CB4u;
    SET_GPR_U32(ctx, 31, 0x279CBCu);
    ctx->pc = 0x28FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FDD0u, 0x279CB4u, 0x279CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CBCu;
label_279cbc:
    // 0x279cbc: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x279cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x279cc0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x279cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x279cc4: 0x24a57e38  addiu       $a1, $a1, 0x7E38
    ctx->pc = 0x279cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32312));
    // 0x279cc8: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    ctx->pc = 0x279cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x279ccc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x279CCCu;
    SET_GPR_U32(ctx, 31, 0x279CD4u);
    ctx->pc = 0x279CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279CCCu;
    // 0x279cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x279CCCu, 0x279CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CD4u;
label_279cd4:
    // 0x279cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x279cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279cdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x279cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x279CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CE0u;
        // 0x279ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279CE8u;
}
