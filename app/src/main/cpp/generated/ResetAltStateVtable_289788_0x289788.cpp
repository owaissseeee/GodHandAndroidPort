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

// Function: ResetAltStateVtable_289788
// Address: 0x289788 - 0x2897f0
void ResetAltStateVtable_289788_0x289788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetAltStateVtable_289788_0x289788");
#endif

    switch (ctx->pc) {
        case 0x2897b0u: goto label_2897b0;
        case 0x2897c4u: goto label_2897c4;
        case 0x2897d0u: goto label_2897d0;
        case 0x2897dcu: goto label_2897dc;
        default: break;
    }

    ctx->pc = 0x289788u;

    // 0x289788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x289788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28978c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28978cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x289790: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x289790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x289794: 0x24428e20  addiu       $v0, $v0, -0x71E0
    ctx->pc = 0x289794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938144));
    // 0x289798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28979c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28979cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2897a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2897a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2897a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897a8: 0xc0aa12a  jal         func_2A84A8
    ctx->pc = 0x2897A8u;
    SET_GPR_U32(ctx, 31, 0x2897B0u);
    ctx->pc = 0x2897ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897A8u;
    // 0x2897ac: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84A8u, 0x2897A8u, 0x2897B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897B0u;
label_2897b0:
    // 0x2897b0: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x2897b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2897b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2897B4u;
    {
        const bool branch_taken_0x2897b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2897b4) {
            ctx->pc = 0x2897C8u;
            goto label_2897c8;
        }
    }
    ctx->pc = 0x2897BCu;
    // 0x2897bc: 0xc0708dc  jal         func_1C2370
    ctx->pc = 0x2897BCu;
    SET_GPR_U32(ctx, 31, 0x2897C4u);
    ctx->pc = 0x1C2370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2370u, 0x2897BCu, 0x2897C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897C4u;
label_2897c4:
    // 0x2897c4: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x2897c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
label_2897c8:
    // 0x2897c8: 0xc0a2784  jal         func_289E10
    ctx->pc = 0x2897C8u;
    SET_GPR_U32(ctx, 31, 0x2897D0u);
    ctx->pc = 0x2897CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897C8u;
    // 0x2897cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289E10u, 0x2897C8u, 0x2897D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897D0u;
label_2897d0:
    // 0x2897d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2897d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897d4: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x2897D4u;
    SET_GPR_U32(ctx, 31, 0x2897DCu);
    ctx->pc = 0x2897D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897D4u;
    // 0x2897d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x2897D4u, 0x2897DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2897DCu;
label_2897dc:
    // 0x2897dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2897dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2897e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2897e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2897e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2897e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2897e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2897E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2897ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897E8u;
        // 0x2897ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2897E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2897F0u;
}
