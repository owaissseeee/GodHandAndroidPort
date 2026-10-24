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

// Function: InitObjectSetVtable_4F270_2FFED0
// Address: 0x2ffed0 - 0x2fff10
void InitObjectSetVtable_4F270_2FFED0_0x2ffed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4F270_2FFED0_0x2ffed0");
#endif

    switch (ctx->pc) {
        case 0x2ffeecu: goto label_2ffeec;
        default: break;
    }

    ctx->pc = 0x2ffed0u;

    // 0x2ffed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffed4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffedc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFEDCu;
    {
        const bool branch_taken_0x2ffedc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEDCu;
        // 0x2ffee0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffedc) {
            ctx->pc = 0x2FFEF8u;
            goto label_2ffef8;
        }
    }
    ctx->pc = 0x2FFEE4u;
    // 0x2ffee4: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFEE4u;
    SET_GPR_U32(ctx, 31, 0x2FFEECu);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFEE4u, 0x2FFEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFEECu;
label_2ffeec:
    // 0x2ffeec: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffef0: 0x2463f270  addiu       $v1, $v1, -0xD90
    ctx->pc = 0x2ffef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963824));
    // 0x2ffef4: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_2ffef8:
    // 0x2ffef8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffefc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fff00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fff00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fff04: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF04u;
        // 0x2fff08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFF0Cu;
    // 0x2fff0c: 0x0  nop
    ctx->pc = 0x2fff0cu;
    // NOP
    ctx->pc = 0x2fff10u;
}
