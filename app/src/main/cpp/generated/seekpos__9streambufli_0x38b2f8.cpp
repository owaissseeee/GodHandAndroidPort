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

// Function: seekpos__9streambufli
// Address: 0x38b2f8 - 0x38b328
void seekpos__9streambufli_0x38b2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("seekpos__9streambufli_0x38b2f8");
#endif

    switch (ctx->pc) {
        case 0x38b2f8u: goto label_38b2f8;
        case 0x38b2fcu: goto label_38b2fc;
        case 0x38b300u: goto label_38b300;
        case 0x38b304u: goto label_38b304;
        case 0x38b308u: goto label_38b308;
        case 0x38b30cu: goto label_38b30c;
        case 0x38b310u: goto label_38b310;
        case 0x38b314u: goto label_38b314;
        case 0x38b318u: goto label_38b318;
        case 0x38b31cu: goto label_38b31c;
        case 0x38b320u: goto label_38b320;
        case 0x38b324u: goto label_38b324;
        default: break;
    }

    ctx->pc = 0x38b2f8u;

label_38b2f8:
    // 0x38b2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_38b2fc:
    // 0x38b2fc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x38b2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38b300:
    // 0x38b300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38b304:
    // 0x38b304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38b304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b308:
    // 0x38b308: 0x8c880050  lw          $t0, 0x50($a0)
    ctx->pc = 0x38b308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38b30c:
    // 0x38b30c: 0x85030040  lh          $v1, 0x40($t0)
    ctx->pc = 0x38b30cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 64)));
label_38b310:
    // 0x38b310: 0x8d020044  lw          $v0, 0x44($t0)
    ctx->pc = 0x38b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
label_38b314:
    // 0x38b314: 0x40f809  jalr        $v0
label_38b318:
    if (ctx->pc == 0x38B318u) {
        ctx->pc = 0x38B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B314u;
        // 0x38b318: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B31Cu;
        goto label_38b31c;
    }
    ctx->pc = 0x38B314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B31Cu);
        ctx->pc = 0x38B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B314u;
        // 0x38b318: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B314u, 0x38B31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B31Cu;
label_38b31c:
    // 0x38b31c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38b320:
    // 0x38b320: 0x3e00008  jr          $ra
label_38b324:
    if (ctx->pc == 0x38B324u) {
        ctx->pc = 0x38B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B320u;
        // 0x38b324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B328u;
        goto label_fallthrough_0x38b320;
    }
    ctx->pc = 0x38B320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B320u;
        // 0x38b324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38b320:
    ctx->pc = 0x38B328u;
}
