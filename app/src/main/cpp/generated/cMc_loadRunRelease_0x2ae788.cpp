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

// Function: cMc_loadRunRelease
// Address: 0x2ae788 - 0x2ae7f0
void cMc_loadRunRelease_0x2ae788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMc_loadRunRelease_0x2ae788");
#endif

    switch (ctx->pc) {
        case 0x2ae7acu: goto label_2ae7ac;
        case 0x2ae7bcu: goto label_2ae7bc;
        case 0x2ae7c4u: goto label_2ae7c4;
        case 0x2ae7ccu: goto label_2ae7cc;
        case 0x2ae7d8u: goto label_2ae7d8;
        default: break;
    }

    ctx->pc = 0x2ae788u;

    // 0x2ae788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ae788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ae78c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae790: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ae790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ae794: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x2ae794u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x2ae798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ae798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ae79c: 0x26106900  addiu       $s0, $s0, 0x6900
    ctx->pc = 0x2ae79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26880));
    // 0x2ae7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae7a4: 0xc0ab92a  jal         func_2AE4A8
    ctx->pc = 0x2AE7A4u;
    SET_GPR_U32(ctx, 31, 0x2AE7ACu);
    ctx->pc = 0x2AE7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE7A4u;
    // 0x2ae7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE4A8u, 0x2AE7A4u, 0x2AE7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE7ACu;
label_2ae7ac:
    // 0x2ae7ac: 0x3c110000  lui         $s1, 0x0
    ctx->pc = 0x2ae7acu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2AE7ACu) & 0xFFFFu)) << 16));
    // 0x2ae7b0: 0x26310000  addiu       $s1, $s1, 0x0
    ctx->pc = 0x2ae7b0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2AE7B0u) & 0xFFFFu))));
    // 0x2ae7b4: 0xc000000  jal         func_000000
    ctx->pc = 0x2AE7B4u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x2AE7B4u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x2AE7BCu);
        ctx->pc = 0x2AE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7B4u;
        // 0x2ae7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE7B4u, 0x2AE7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE7BCu;
label_2ae7bc:
    // 0x2ae7bc: 0xc000000  jal         func_000000
    ctx->pc = 0x2AE7BCu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x2AE7BCu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x2AE7C4u);
        ctx->pc = 0x2AE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7BCu;
        // 0x2ae7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE7BCu, 0x2AE7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE7C4u;
label_2ae7c4:
    // 0x2ae7c4: 0xc0ab97a  jal         func_2AE5E8
    ctx->pc = 0x2AE7C4u;
    SET_GPR_U32(ctx, 31, 0x2AE7CCu);
    ctx->pc = 0x2AE7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE7C4u;
    // 0x2ae7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE5E8u, 0x2AE7C4u, 0x2AE7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE7CCu;
label_2ae7cc:
    // 0x2ae7cc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2ae7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2ae7d0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x2AE7D0u;
    SET_GPR_U32(ctx, 31, 0x2AE7D8u);
    ctx->pc = 0x2AE7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE7D0u;
    // 0x2ae7d4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x2AE7D0u, 0x2AE7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE7D8u;
label_2ae7d8:
    // 0x2ae7d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ae7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae7dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ae7dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae7e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7E4u;
        // 0x2ae7e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE7ECu;
    // 0x2ae7ec: 0x0  nop
    ctx->pc = 0x2ae7ecu;
    // NOP
    ctx->pc = 0x2ae7f0u;
}
