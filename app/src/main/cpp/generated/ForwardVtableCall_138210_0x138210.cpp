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

// Function: ForwardVtableCall_138210
// Address: 0x138210 - 0x138238
void ForwardVtableCall_138210_0x138210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardVtableCall_138210_0x138210");
#endif

    switch (ctx->pc) {
        case 0x138210u: goto label_138210;
        case 0x138214u: goto label_138214;
        case 0x138218u: goto label_138218;
        case 0x13821cu: goto label_13821c;
        case 0x138220u: goto label_138220;
        case 0x138224u: goto label_138224;
        case 0x138228u: goto label_138228;
        case 0x13822cu: goto label_13822c;
        case 0x138230u: goto label_138230;
        case 0x138234u: goto label_138234;
        default: break;
    }

    ctx->pc = 0x138210u;

label_138210:
    // 0x138210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_138214:
    // 0x138214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_138218:
    // 0x138218: 0x8c82035c  lw          $v0, 0x35C($a0)
    ctx->pc = 0x138218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 860)));
label_13821c:
    // 0x13821c: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x13821cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_138220:
    // 0x138220: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x138220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_138224:
    // 0x138224: 0xa0f809  jalr        $a1
label_138228:
    if (ctx->pc == 0x138228u) {
        ctx->pc = 0x138228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138224u;
        // 0x138228: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13822Cu;
        goto label_13822c;
    }
    ctx->pc = 0x138224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x13822Cu);
        ctx->pc = 0x138228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138224u;
        // 0x138228: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138224u, 0x13822Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13822Cu;
label_13822c:
    // 0x13822c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13822cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_138230:
    // 0x138230: 0x3e00008  jr          $ra
label_138234:
    if (ctx->pc == 0x138234u) {
        ctx->pc = 0x138234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138230u;
        // 0x138234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138238u;
        goto label_fallthrough_0x138230;
    }
    ctx->pc = 0x138230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138230u;
        // 0x138234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x138230:
    ctx->pc = 0x138238u;
}
