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

// Function: cMc_taskBody
// Address: 0x2ae8a8 - 0x2ae940
void cMc_taskBody_0x2ae8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMc_taskBody_0x2ae8a8");
#endif

    switch (ctx->pc) {
        case 0x2ae8e4u: goto label_2ae8e4;
        case 0x2ae8f0u: goto label_2ae8f0;
        case 0x2ae8f8u: goto label_2ae8f8;
        case 0x2ae924u: goto label_2ae924;
        case 0x2ae92cu: goto label_2ae92c;
        default: break;
    }

    ctx->pc = 0x2ae8a8u;

    // 0x2ae8a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ae8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ae8ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ae8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ae8b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ae8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ae8b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ae8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ae8bc: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x2ae8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x2ae8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae8c4: 0x26317a84  addiu       $s1, $s1, 0x7A84
    ctx->pc = 0x2ae8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31364));
    // 0x2ae8c8: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x2ae8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x2ae8cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ae8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A88u));
    // 0x2ae8d0: 0x26106900  addiu       $s0, $s0, 0x6900
    ctx->pc = 0x2ae8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26880));
    // 0x2ae8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ae8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ae8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ae8dc: 0xc0ab92a  jal         func_2AE4A8
    ctx->pc = 0x2AE8DCu;
    SET_GPR_U32(ctx, 31, 0x2AE8E4u);
    ctx->pc = 0x2AE8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8DCu;
    // 0x2ae8e0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE4A8u, 0x2AE8DCu, 0x2AE8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8E4u;
label_2ae8e4:
    // 0x2ae8e4: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2ae8e4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2AE8E4u) & 0xFFFFu)) << 16));
    // 0x2ae8e8: 0xc000000  jal         func_000000
    ctx->pc = 0x2AE8E8u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x2AE8E8u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x2AE8F0u);
        ctx->pc = 0x2AE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8E8u;
        // 0x2ae8ec: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2AE8ECu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE8E8u, 0x2AE8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE8F0u;
label_2ae8f0:
    // 0x2ae8f0: 0xc0ab97a  jal         func_2AE5E8
    ctx->pc = 0x2AE8F0u;
    SET_GPR_U32(ctx, 31, 0x2AE8F8u);
    ctx->pc = 0x2AE8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8F0u;
    // 0x2ae8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE5E8u, 0x2AE8F0u, 0x2AE8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8F8u;
label_2ae8f8:
    // 0x2ae8f8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2ae8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ae8fc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2ae8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2ae900: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x2ae900u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x2ae904: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ae904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ae908: 0x26102c00  addiu       $s0, $s0, 0x2C00
    ctx->pc = 0x2ae908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
    // 0x2ae90c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ae90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ae910: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ae910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae914: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x2ae914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x2ae918: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2ae918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2ae91c: 0xc0b5656  jal         func_2D5958
    ctx->pc = 0x2AE91Cu;
    SET_GPR_U32(ctx, 31, 0x2AE924u);
    ctx->pc = 0x2AE920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE91Cu;
    // 0x2ae920: 0x24a5da08  addiu       $a1, $a1, -0x25F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5958u, 0x2AE91Cu, 0x2AE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE924u;
label_2ae924:
    // 0x2ae924: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x2AE924u;
    SET_GPR_U32(ctx, 31, 0x2AE92Cu);
    ctx->pc = 0x2AE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE924u;
    // 0x2ae928: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x2AE924u, 0x2AE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE92Cu;
label_2ae92c:
    // 0x2ae92c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ae92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ae930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae938: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE938u;
        // 0x2ae93c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE940u;
}
