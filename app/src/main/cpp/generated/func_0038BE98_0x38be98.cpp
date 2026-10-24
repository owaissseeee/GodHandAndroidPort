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

// Function: func_0038BE98
// Address: 0x38be98 - 0x38bee8
void func_0038BE98_0x38be98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038BE98_0x38be98");
#endif

    switch (ctx->pc) {
        case 0x38bebcu: goto label_38bebc;
        case 0x38bed4u: goto label_38bed4;
        default: break;
    }

    ctx->pc = 0x38be98u;

    // 0x38be98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38be98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38be9c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x38be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x38bea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38bea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38bea4: 0x8c626778  lw          $v0, 0x6778($v1)
    ctx->pc = 0x38bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786778u));
    // 0x38bea8: 0x24706778  addiu       $s0, $v1, 0x6778
    ctx->pc = 0x38bea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26488));
    // 0x38beac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38BEACu;
    {
        const bool branch_taken_0x38beac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BEACu;
        // 0x38beb0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38beac) {
            ctx->pc = 0x38BED4u;
            goto label_38bed4;
        }
    }
    ctx->pc = 0x38BEB4u;
    // 0x38beb4: 0xc0e305a  jal         func_38C168
    ctx->pc = 0x38BEB4u;
    SET_GPR_U32(ctx, 31, 0x38BEBCu);
    ctx->pc = 0x38C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C168u, 0x38BEB4u, 0x38BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BEBCu;
label_38bebc:
    // 0x38bebc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x38bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x38bec0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x38bec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x38bec4: 0x24a5d360  addiu       $a1, $a1, -0x2CA0
    ctx->pc = 0x38bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955872));
    // 0x38bec8: 0x24c60db0  addiu       $a2, $a2, 0xDB0
    ctx->pc = 0x38bec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3504));
    // 0x38becc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x38BECCu;
    SET_GPR_U32(ctx, 31, 0x38BED4u);
    ctx->pc = 0x38BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BECCu;
    // 0x38bed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x38BECCu, 0x38BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BED4u;
label_38bed4:
    // 0x38bed4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38bed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38bed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38bedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38bedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38bee0: 0x3e00008  jr          $ra
    ctx->pc = 0x38BEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BEE0u;
        // 0x38bee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BEE8u;
}
