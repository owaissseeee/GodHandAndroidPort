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

// Function: ColiseumEmSelect_Main
// Address: 0x1f38f0 - 0x1f3930
void ColiseumEmSelect_Main_0x1f38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumEmSelect_Main_0x1f38f0");
#endif

    switch (ctx->pc) {
        case 0x1f38f0u: goto label_1f38f0;
        case 0x1f38f4u: goto label_1f38f4;
        case 0x1f38f8u: goto label_1f38f8;
        case 0x1f38fcu: goto label_1f38fc;
        case 0x1f3900u: goto label_1f3900;
        case 0x1f3904u: goto label_1f3904;
        case 0x1f3908u: goto label_1f3908;
        case 0x1f390cu: goto label_1f390c;
        case 0x1f3910u: goto label_1f3910;
        case 0x1f3914u: goto label_1f3914;
        case 0x1f3918u: goto label_1f3918;
        case 0x1f391cu: goto label_1f391c;
        case 0x1f3920u: goto label_1f3920;
        case 0x1f3924u: goto label_1f3924;
        case 0x1f3928u: goto label_1f3928;
        case 0x1f392cu: goto label_1f392c;
        default: break;
    }

    ctx->pc = 0x1f38f0u;

label_1f38f0:
    // 0x1f38f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f38f4:
    // 0x1f38f4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f38f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1f38f8:
    // 0x1f38f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f38f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f38fc:
    // 0x1f38fc: 0x2463f0a8  addiu       $v1, $v1, -0xF58
    ctx->pc = 0x1f38fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963368));
label_1f3900:
    // 0x1f3900: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f3900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f3904:
    // 0x1f3904: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f3904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f3908:
    // 0x1f3908: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f3908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f390c:
    // 0x1f390c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f390cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3910:
    // 0x1f3910: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x1f3910u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3914:
    // 0x1f3914: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f3918:
    // 0x1f3918: 0x40f809  jalr        $v0
label_1f391c:
    if (ctx->pc == 0x1F391Cu) {
        ctx->pc = 0x1F391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3918u;
        // 0x1f391c: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3920u;
        goto label_1f3920;
    }
    ctx->pc = 0x1F3918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3920u);
        ctx->pc = 0x1F391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3918u;
        // 0x1f391c: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3918u, 0x1F3920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3920u;
label_1f3920:
    // 0x1f3920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3924:
    // 0x1f3924: 0x3e00008  jr          $ra
label_1f3928:
    if (ctx->pc == 0x1F3928u) {
        ctx->pc = 0x1F3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3924u;
        // 0x1f3928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F392Cu;
        goto label_1f392c;
    }
    ctx->pc = 0x1F3924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3924u;
        // 0x1f3928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F392Cu;
label_1f392c:
    // 0x1f392c: 0x0  nop
    ctx->pc = 0x1f392cu;
    // NOP
    ctx->pc = 0x1f3930u;
}
