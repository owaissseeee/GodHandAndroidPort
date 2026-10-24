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

// Function: func_0033C4E8
// Address: 0x33c4e8 - 0x33c520
void func_0033C4E8_0x33c4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C4E8_0x33c4e8");
#endif

    switch (ctx->pc) {
        case 0x33c4e8u: goto label_33c4e8;
        case 0x33c4ecu: goto label_33c4ec;
        case 0x33c4f0u: goto label_33c4f0;
        case 0x33c4f4u: goto label_33c4f4;
        case 0x33c4f8u: goto label_33c4f8;
        case 0x33c4fcu: goto label_33c4fc;
        case 0x33c500u: goto label_33c500;
        case 0x33c504u: goto label_33c504;
        case 0x33c508u: goto label_33c508;
        case 0x33c50cu: goto label_33c50c;
        case 0x33c510u: goto label_33c510;
        case 0x33c514u: goto label_33c514;
        case 0x33c518u: goto label_33c518;
        case 0x33c51cu: goto label_33c51c;
        default: break;
    }

    ctx->pc = 0x33c4e8u;

label_33c4e8:
    // 0x33c4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33c4ec:
    // 0x33c4ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33c4f0:
    // 0x33c4f0: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x33c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_33c4f4:
    // 0x33c4f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33c4f8:
    if (ctx->pc == 0x33C4F8u) {
        ctx->pc = 0x33C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4F4u;
        // 0x33c4f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C4FCu;
        goto label_33c4fc;
    }
    ctx->pc = 0x33C4F4u;
    {
        const bool branch_taken_0x33c4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4F4u;
        // 0x33c4f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c4f4) {
            ctx->pc = 0x33C50Cu;
            goto label_33c50c;
        }
    }
    ctx->pc = 0x33C4FCu;
label_33c4fc:
    // 0x33c4fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33c500:
    // 0x33c500: 0x8c439d2c  lw          $v1, -0x62D4($v0)
    ctx->pc = 0x33c500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941996)));
label_33c504:
    // 0x33c504: 0x60f809  jalr        $v1
label_33c508:
    if (ctx->pc == 0x33C508u) {
        ctx->pc = 0x33C50Cu;
        goto label_33c50c;
    }
    ctx->pc = 0x33C504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C50Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C504u, 0x33C50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C50Cu;
label_33c50c:
    // 0x33c50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c510:
    // 0x33c510: 0x3e00008  jr          $ra
label_33c514:
    if (ctx->pc == 0x33C514u) {
        ctx->pc = 0x33C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C510u;
        // 0x33c514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C518u;
        goto label_33c518;
    }
    ctx->pc = 0x33C510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C510u;
        // 0x33c514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C518u;
label_33c518:
    // 0x33c518: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33c518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33c51c:
    // 0x33c51c: 0x0  nop
    ctx->pc = 0x33c51cu;
    // NOP
    ctx->pc = 0x33c520u;
}
