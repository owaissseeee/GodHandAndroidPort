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

// Function: func_0036CC08
// Address: 0x36cc08 - 0x36cc40
void func_0036CC08_0x36cc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CC08_0x36cc08");
#endif

    switch (ctx->pc) {
        case 0x36cc08u: goto label_36cc08;
        case 0x36cc0cu: goto label_36cc0c;
        case 0x36cc10u: goto label_36cc10;
        case 0x36cc14u: goto label_36cc14;
        case 0x36cc18u: goto label_36cc18;
        case 0x36cc1cu: goto label_36cc1c;
        case 0x36cc20u: goto label_36cc20;
        case 0x36cc24u: goto label_36cc24;
        case 0x36cc28u: goto label_36cc28;
        case 0x36cc2cu: goto label_36cc2c;
        case 0x36cc30u: goto label_36cc30;
        case 0x36cc34u: goto label_36cc34;
        case 0x36cc38u: goto label_36cc38;
        case 0x36cc3cu: goto label_36cc3c;
        default: break;
    }

    ctx->pc = 0x36cc08u;

label_36cc08:
    // 0x36cc08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36cc0c:
    // 0x36cc0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36cc0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36cc10:
    // 0x36cc10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36cc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_36cc14:
    // 0x36cc14: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x36cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36cc18:
    // 0x36cc18: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x36cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_36cc1c:
    // 0x36cc1c: 0x90450014  lbu         $a1, 0x14($v0)
    ctx->pc = 0x36cc1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_36cc20:
    // 0x36cc20: 0x90460015  lbu         $a2, 0x15($v0)
    ctx->pc = 0x36cc20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
label_36cc24:
    // 0x36cc24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_36cc28:
    if (ctx->pc == 0x36CC28u) {
        ctx->pc = 0x36CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC24u;
        // 0x36cc28: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CC2Cu;
        goto label_36cc2c;
    }
    ctx->pc = 0x36CC24u;
    {
        const bool branch_taken_0x36cc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC24u;
        // 0x36cc28: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cc24) {
            ctx->pc = 0x36CC34u;
            goto label_36cc34;
        }
    }
    ctx->pc = 0x36CC2Cu;
label_36cc2c:
    // 0x36cc2c: 0x60f809  jalr        $v1
label_36cc30:
    if (ctx->pc == 0x36CC30u) {
        ctx->pc = 0x36CC34u;
        goto label_36cc34;
    }
    ctx->pc = 0x36CC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36CC34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CC2Cu, 0x36CC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CC34u;
label_36cc34:
    // 0x36cc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36cc38:
    // 0x36cc38: 0x3e00008  jr          $ra
label_36cc3c:
    if (ctx->pc == 0x36CC3Cu) {
        ctx->pc = 0x36CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC38u;
        // 0x36cc3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CC40u;
        goto label_fallthrough_0x36cc38;
    }
    ctx->pc = 0x36CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC38u;
        // 0x36cc3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36cc38:
    ctx->pc = 0x36CC40u;
}
