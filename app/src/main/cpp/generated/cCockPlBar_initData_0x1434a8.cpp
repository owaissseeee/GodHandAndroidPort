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

// Function: cCockPlBar_initData
// Address: 0x1434a8 - 0x1434d0
void cCockPlBar_initData_0x1434a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCockPlBar_initData_0x1434a8");
#endif

    switch (ctx->pc) {
        case 0x1434a8u: goto label_1434a8;
        case 0x1434acu: goto label_1434ac;
        case 0x1434b0u: goto label_1434b0;
        case 0x1434b4u: goto label_1434b4;
        case 0x1434b8u: goto label_1434b8;
        case 0x1434bcu: goto label_1434bc;
        case 0x1434c0u: goto label_1434c0;
        case 0x1434c4u: goto label_1434c4;
        case 0x1434c8u: goto label_1434c8;
        case 0x1434ccu: goto label_1434cc;
        default: break;
    }

    ctx->pc = 0x1434a8u;

label_1434a8:
    // 0x1434a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1434a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1434ac:
    // 0x1434ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1434acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1434b0:
    // 0x1434b0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1434b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_1434b4:
    // 0x1434b4: 0x84430018  lh          $v1, 0x18($v0)
    ctx->pc = 0x1434b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1434b8:
    // 0x1434b8: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1434b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1434bc:
    // 0x1434bc: 0xa0f809  jalr        $a1
label_1434c0:
    if (ctx->pc == 0x1434C0u) {
        ctx->pc = 0x1434C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434BCu;
        // 0x1434c0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1434C4u;
        goto label_1434c4;
    }
    ctx->pc = 0x1434BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1434C4u);
        ctx->pc = 0x1434C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434BCu;
        // 0x1434c0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434BCu, 0x1434C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1434C4u;
label_1434c4:
    // 0x1434c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1434c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1434c8:
    // 0x1434c8: 0x3e00008  jr          $ra
label_1434cc:
    if (ctx->pc == 0x1434CCu) {
        ctx->pc = 0x1434CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434C8u;
        // 0x1434cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1434D0u;
        goto label_fallthrough_0x1434c8;
    }
    ctx->pc = 0x1434C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1434CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434C8u;
        // 0x1434cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1434c8:
    ctx->pc = 0x1434D0u;
}
