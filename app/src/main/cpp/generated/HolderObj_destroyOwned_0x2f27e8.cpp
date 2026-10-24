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

// Function: HolderObj_destroyOwned
// Address: 0x2f27e8 - 0x2f2848
void HolderObj_destroyOwned_0x2f27e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HolderObj_destroyOwned_0x2f27e8");
#endif

    switch (ctx->pc) {
        case 0x2f2828u: goto label_2f2828;
        case 0x2f2834u: goto label_2f2834;
        default: break;
    }

    ctx->pc = 0x2f27e8u;

    // 0x2f27e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f27e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f27ec: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2f27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2f27f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f27f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f27f4: 0x2442ee38  addiu       $v0, $v0, -0x11C8
    ctx->pc = 0x2f27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962744));
    // 0x2f27f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f27f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f27fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f27fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f2800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f2804: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2f2804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2f2808: 0x8e0302b0  lw          $v1, 0x2B0($s0)
    ctx->pc = 0x2f2808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f280c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F280Cu;
    {
        const bool branch_taken_0x2f280c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F280Cu;
        // 0x2f2810: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f280c) {
            ctx->pc = 0x2F2828u;
            goto label_2f2828;
        }
    }
    ctx->pc = 0x2F2814u;
    // 0x2f2814: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2f2814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2f2818: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f2818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2f281c: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x2f281cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x2f2820: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x2F2820u;
    SET_GPR_U32(ctx, 31, 0x2F2828u);
    ctx->pc = 0x2F2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2820u;
    // 0x2f2824: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x2F2820u, 0x2F2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2828u;
label_2f2828:
    // 0x2f2828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f282c: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x2F282Cu;
    SET_GPR_U32(ctx, 31, 0x2F2834u);
    ctx->pc = 0x2F2830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F282Cu;
    // 0x2f2830: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x2F282Cu, 0x2F2834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2834u;
label_2f2834:
    // 0x2f2834: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f2834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f283c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f283cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2840: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2840u;
        // 0x2f2844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2848u;
}
