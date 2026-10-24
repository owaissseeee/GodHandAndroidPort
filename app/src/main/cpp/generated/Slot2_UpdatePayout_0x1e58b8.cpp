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

// Function: Slot2_UpdatePayout
// Address: 0x1e58b8 - 0x1e58f8
void Slot2_UpdatePayout_0x1e58b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_UpdatePayout_0x1e58b8");
#endif

    switch (ctx->pc) {
        case 0x1e58b8u: goto label_1e58b8;
        case 0x1e58bcu: goto label_1e58bc;
        case 0x1e58c0u: goto label_1e58c0;
        case 0x1e58c4u: goto label_1e58c4;
        case 0x1e58c8u: goto label_1e58c8;
        case 0x1e58ccu: goto label_1e58cc;
        case 0x1e58d0u: goto label_1e58d0;
        case 0x1e58d4u: goto label_1e58d4;
        case 0x1e58d8u: goto label_1e58d8;
        case 0x1e58dcu: goto label_1e58dc;
        case 0x1e58e0u: goto label_1e58e0;
        case 0x1e58e4u: goto label_1e58e4;
        case 0x1e58e8u: goto label_1e58e8;
        case 0x1e58ecu: goto label_1e58ec;
        case 0x1e58f0u: goto label_1e58f0;
        case 0x1e58f4u: goto label_1e58f4;
        default: break;
    }

    ctx->pc = 0x1e58b8u;

label_1e58b8:
    // 0x1e58b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e58b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e58bc:
    // 0x1e58bc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1e58bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1e58c0:
    // 0x1e58c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e58c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e58c4:
    // 0x1e58c4: 0x2463e168  addiu       $v1, $v1, -0x1E98
    ctx->pc = 0x1e58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959464));
label_1e58c8:
    // 0x1e58c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e58cc:
    // 0x1e58cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e58d0:
    // 0x1e58d0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1e58d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e58d4:
    // 0x1e58d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e58d8:
    // 0x1e58d8: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x1e58d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1e58dc:
    // 0x1e58dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e58e0:
    // 0x1e58e0: 0x40f809  jalr        $v0
label_1e58e4:
    if (ctx->pc == 0x1E58E4u) {
        ctx->pc = 0x1E58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58E0u;
        // 0x1e58e4: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E58E8u;
        goto label_1e58e8;
    }
    ctx->pc = 0x1E58E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E58E8u);
        ctx->pc = 0x1E58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58E0u;
        // 0x1e58e4: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E58E0u, 0x1E58E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E58E8u;
label_1e58e8:
    // 0x1e58e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e58e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e58ec:
    // 0x1e58ec: 0x3e00008  jr          $ra
label_1e58f0:
    if (ctx->pc == 0x1E58F0u) {
        ctx->pc = 0x1E58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58ECu;
        // 0x1e58f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E58F4u;
        goto label_1e58f4;
    }
    ctx->pc = 0x1E58ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58ECu;
        // 0x1e58f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E58ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E58F4u;
label_1e58f4:
    // 0x1e58f4: 0x0  nop
    ctx->pc = 0x1e58f4u;
    // NOP
    ctx->pc = 0x1e58f8u;
}
