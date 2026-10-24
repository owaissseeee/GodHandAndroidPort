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

// Function: func_00335C30
// Address: 0x335c30 - 0x335c68
void func_00335C30_0x335c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335C30_0x335c30");
#endif

    switch (ctx->pc) {
        case 0x335c30u: goto label_335c30;
        case 0x335c34u: goto label_335c34;
        case 0x335c38u: goto label_335c38;
        case 0x335c3cu: goto label_335c3c;
        case 0x335c40u: goto label_335c40;
        case 0x335c44u: goto label_335c44;
        case 0x335c48u: goto label_335c48;
        case 0x335c4cu: goto label_335c4c;
        case 0x335c50u: goto label_335c50;
        case 0x335c54u: goto label_335c54;
        case 0x335c58u: goto label_335c58;
        case 0x335c5cu: goto label_335c5c;
        case 0x335c60u: goto label_335c60;
        case 0x335c64u: goto label_335c64;
        default: break;
    }

    ctx->pc = 0x335c30u;

label_335c30:
    // 0x335c30: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x335c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_335c34:
    // 0x335c34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_335c38:
    // 0x335c38: 0x8c46a4c4  lw          $a2, -0x5B3C($v0)
    ctx->pc = 0x335c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943940)));
label_335c3c:
    // 0x335c3c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_335c40:
    if (ctx->pc == 0x335C40u) {
        ctx->pc = 0x335C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C3Cu;
        // 0x335c40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335C44u;
        goto label_335c44;
    }
    ctx->pc = 0x335C3Cu;
    {
        const bool branch_taken_0x335c3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x335C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C3Cu;
        // 0x335c40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c3c) {
            ctx->pc = 0x335C58u;
            goto label_335c58;
        }
    }
    ctx->pc = 0x335C44u;
label_335c44:
    // 0x335c44: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x335c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_335c48:
    // 0x335c48: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x335c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_335c4c:
    // 0x335c4c: 0x8c44a4c8  lw          $a0, -0x5B38($v0)
    ctx->pc = 0x335c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943944)));
label_335c50:
    // 0x335c50: 0xc0f809  jalr        $a2
label_335c54:
    if (ctx->pc == 0x335C54u) {
        ctx->pc = 0x335C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C50u;
        // 0x335c54: 0x8c65a4cc  lw          $a1, -0x5B34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335C58u;
        goto label_335c58;
    }
    ctx->pc = 0x335C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x335C58u);
        ctx->pc = 0x335C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C50u;
        // 0x335c54: 0x8c65a4cc  lw          $a1, -0x5B34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943948)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335C50u, 0x335C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335C58u;
label_335c58:
    // 0x335c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_335c5c:
    // 0x335c5c: 0x3e00008  jr          $ra
label_335c60:
    if (ctx->pc == 0x335C60u) {
        ctx->pc = 0x335C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C5Cu;
        // 0x335c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335C64u;
        goto label_335c64;
    }
    ctx->pc = 0x335C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C5Cu;
        // 0x335c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335C64u;
label_335c64:
    // 0x335c64: 0x0  nop
    ctx->pc = 0x335c64u;
    // NOP
    ctx->pc = 0x335c68u;
}
