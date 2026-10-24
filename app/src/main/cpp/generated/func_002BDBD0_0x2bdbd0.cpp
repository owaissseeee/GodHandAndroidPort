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

// Function: func_002BDBD0
// Address: 0x2bdbd0 - 0x2bdc00
void func_002BDBD0_0x2bdbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BDBD0_0x2bdbd0");
#endif

    switch (ctx->pc) {
        case 0x2bdbf4u: goto label_2bdbf4;
        default: break;
    }

    ctx->pc = 0x2bdbd0u;

    // 0x2bdbd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bdbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bdbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bdbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bdbd8: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x2bdbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bdbdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bdbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bdbe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdbe4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDBE4u;
    {
        const bool branch_taken_0x2bdbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBE4u;
        // 0x2bdbe8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbe4) {
            ctx->pc = 0x2BDBF8u;
            goto label_2bdbf8;
        }
    }
    ctx->pc = 0x2BDBECu;
    // 0x2bdbec: 0xc0af700  jal         func_2BDC00
    ctx->pc = 0x2BDBECu;
    SET_GPR_U32(ctx, 31, 0x2BDBF4u);
    ctx->pc = 0x2BDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDC00u, 0x2BDBECu, 0x2BDBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDBF4u;
label_2bdbf4:
    // 0x2bdbf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bdbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bdbf8:
    // 0x2bdbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBF8u;
        // 0x2bdbfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDC00u;
}
