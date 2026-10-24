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

// Function: ForwardSequenceItems_373690
// Address: 0x373690 - 0x373708
void ForwardSequenceItems_373690_0x373690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardSequenceItems_373690_0x373690");
#endif

    switch (ctx->pc) {
        case 0x3736b4u: goto label_3736b4;
        case 0x3736d8u: goto label_3736d8;
        case 0x3736ecu: goto label_3736ec;
        default: break;
    }

    ctx->pc = 0x373690u;

    // 0x373690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373694: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373698: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37369c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37369cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3736a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3736a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3736a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3736a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3736ac: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x3736ACu;
    SET_GPR_U32(ctx, 31, 0x3736B4u);
    ctx->pc = 0x3736B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736ACu;
    // 0x3736b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x3736ACu, 0x3736B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736B4u;
label_3736b4:
    // 0x3736b4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3736B4u;
    {
        const bool branch_taken_0x3736b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3736b4) {
            ctx->pc = 0x3736B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3736B4u;
            // 0x3736b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3736F0u;
            goto label_3736f0;
        }
    }
    ctx->pc = 0x3736BCu;
    // 0x3736bc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x3736bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3736c0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3736c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3736c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3736C4u;
    {
        const bool branch_taken_0x3736c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3736C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3736C4u;
        // 0x3736c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3736c4) {
            ctx->pc = 0x3736E0u;
            goto label_3736e0;
        }
    }
    ctx->pc = 0x3736CCu;
    // 0x3736cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3736ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736d0: 0xc0dd208  jal         func_374820
    ctx->pc = 0x3736D0u;
    SET_GPR_U32(ctx, 31, 0x3736D8u);
    ctx->pc = 0x3736D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736D0u;
    // 0x3736d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374820u, 0x3736D0u, 0x3736D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736D8u;
label_3736d8:
    // 0x3736d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3736D8u;
    {
        const bool branch_taken_0x3736d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3736DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3736D8u;
        // 0x3736dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3736d8) {
            ctx->pc = 0x3736F0u;
            goto label_3736f0;
        }
    }
    ctx->pc = 0x3736E0u;
label_3736e0:
    // 0x3736e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3736e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736e4: 0xc0dd048  jal         func_374120
    ctx->pc = 0x3736E4u;
    SET_GPR_U32(ctx, 31, 0x3736ECu);
    ctx->pc = 0x3736E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736E4u;
    // 0x3736e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374120u, 0x3736E4u, 0x3736ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736ECu;
label_3736ec:
    // 0x3736ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3736ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3736f0:
    // 0x3736f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3736f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3736f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3736f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3736f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3736f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3736fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3736FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3736FCu;
        // 0x373700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3736FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373704u;
    // 0x373704: 0x0  nop
    ctx->pc = 0x373704u;
    // NOP
    ctx->pc = 0x373708u;
}
