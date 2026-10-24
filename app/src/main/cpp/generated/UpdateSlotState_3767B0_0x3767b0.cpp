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

// Function: UpdateSlotState_3767B0
// Address: 0x3767b0 - 0x376820
void UpdateSlotState_3767B0_0x3767b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSlotState_3767B0_0x3767b0");
#endif

    switch (ctx->pc) {
        case 0x3767f4u: goto label_3767f4;
        case 0x376804u: goto label_376804;
        default: break;
    }

    ctx->pc = 0x3767b0u;

    // 0x3767b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3767b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3767b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3767b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3767b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3767b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3767bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3767bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767c0: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x3767c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3767c4: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x3767c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x3767c8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3767C8u;
    {
        const bool branch_taken_0x3767c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3767c8) {
            ctx->pc = 0x3767CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3767C8u;
            // 0x3767cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376814u;
            goto label_376814;
        }
    }
    ctx->pc = 0x3767D0u;
    // 0x3767d0: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x3767d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3767d4: 0x8602001a  lh          $v0, 0x1A($s0)
    ctx->pc = 0x3767d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x3767d8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3767D8u;
    {
        const bool branch_taken_0x3767d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3767DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767D8u;
        // 0x3767dc: 0x3082feff  andi        $v0, $a0, 0xFEFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65279);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3767d8) {
            ctx->pc = 0x3767FCu;
            goto label_3767fc;
        }
    }
    ctx->pc = 0x3767E0u;
    // 0x3767e0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3767E0u;
    {
        const bool branch_taken_0x3767e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3767E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767E0u;
        // 0x3767e4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3767e0) {
            ctx->pc = 0x376810u;
            goto label_376810;
        }
    }
    ctx->pc = 0x3767E8u;
    // 0x3767e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3767e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767ec: 0xc0ddab8  jal         func_376AE0
    ctx->pc = 0x3767ECu;
    SET_GPR_U32(ctx, 31, 0x3767F4u);
    ctx->pc = 0x3767F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3767ECu;
    // 0x3767f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376AE0u, 0x3767ECu, 0x3767F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3767F4u;
label_3767f4:
    // 0x3767f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3767F4u;
    {
        const bool branch_taken_0x3767f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3767F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767F4u;
        // 0x3767f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3767f4) {
            ctx->pc = 0x376814u;
            goto label_376814;
        }
    }
    ctx->pc = 0x3767FCu;
label_3767fc:
    // 0x3767fc: 0xc0de01c  jal         func_378070
    ctx->pc = 0x3767FCu;
    SET_GPR_U32(ctx, 31, 0x376804u);
    ctx->pc = 0x376800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3767FCu;
    // 0x376800: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378070u, 0x3767FCu, 0x376804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376804u;
label_376804:
    // 0x376804: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x376804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x376808: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x376808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x37680c: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x37680cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_376810:
    // 0x376810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x376810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_376814:
    // 0x376814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376818: 0x3e00008  jr          $ra
    ctx->pc = 0x376818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376818u;
        // 0x37681c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376820u;
}
