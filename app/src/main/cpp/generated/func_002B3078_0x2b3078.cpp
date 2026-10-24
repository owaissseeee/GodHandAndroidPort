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

// Function: func_002B3078
// Address: 0x2b3078 - 0x2b3158
void func_002B3078_0x2b3078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3078_0x2b3078");
#endif

    switch (ctx->pc) {
        case 0x2b30c8u: goto label_2b30c8;
        case 0x2b3108u: goto label_2b3108;
        case 0x2b3124u: goto label_2b3124;
        case 0x2b3134u: goto label_2b3134;
        default: break;
    }

    ctx->pc = 0x2b3078u;

    // 0x2b3078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b307c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3080: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b3080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b3084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b308c: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x2b308cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2b3090: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B3090u;
    {
        const bool branch_taken_0x2b3090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3090u;
        // 0x2b3094: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3090) {
            ctx->pc = 0x2B3100u;
            goto label_2b3100;
        }
    }
    ctx->pc = 0x2B3098u;
    // 0x2b3098: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3098u;
    {
        const bool branch_taken_0x2b3098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3098) {
            ctx->pc = 0x2B309Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3098u;
            // 0x2b309c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B30B0u;
            goto label_2b30b0;
        }
    }
    ctx->pc = 0x2B30A0u;
    // 0x2b30a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B30A0u;
    {
        const bool branch_taken_0x2b30a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b30a0) {
            ctx->pc = 0x2B30C0u;
            goto label_2b30c0;
        }
    }
    ctx->pc = 0x2B30A8u;
    // 0x2b30a8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2B30A8u;
    {
        const bool branch_taken_0x2b30a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30A8u;
        // 0x2b30ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30a8) {
            ctx->pc = 0x2B314Cu;
            goto label_2b314c;
        }
    }
    ctx->pc = 0x2B30B0u;
label_2b30b0:
    // 0x2b30b0: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B30B0u;
    {
        const bool branch_taken_0x2b30b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b30b0) {
            ctx->pc = 0x2B311Cu;
            goto label_2b311c;
        }
    }
    ctx->pc = 0x2B30B8u;
    // 0x2b30b8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2B30B8u;
    {
        const bool branch_taken_0x2b30b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30B8u;
        // 0x2b30bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30b8) {
            ctx->pc = 0x2B314Cu;
            goto label_2b314c;
        }
    }
    ctx->pc = 0x2B30C0u;
label_2b30c0:
    // 0x2b30c0: 0xc0acc56  jal         func_2B3158
    ctx->pc = 0x2B30C0u;
    SET_GPR_U32(ctx, 31, 0x2B30C8u);
    ctx->pc = 0x2B30C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B30C0u;
    // 0x2b30c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3158u, 0x2B30C0u, 0x2B30C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B30C8u;
label_2b30c8:
    // 0x2b30c8: 0x920300a4  lbu         $v1, 0xA4($s0)
    ctx->pc = 0x2b30c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b30cc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2b30ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b30d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B30D0u;
    {
        const bool branch_taken_0x2b30d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30D0u;
        // 0x2b30d4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30d0) {
            ctx->pc = 0x2B3100u;
            goto label_2b3100;
        }
    }
    ctx->pc = 0x2B30D8u;
    // 0x2b30d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b30d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b30dc: 0x2442b1f0  addiu       $v0, $v0, -0x4E10
    ctx->pc = 0x2b30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947312));
    // 0x2b30e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b30e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b30e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b30e8: 0x800008  jr          $a0
    ctx->pc = 0x2B30E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B30F0u: goto label_2b30f0;
            case 0x2B30F8u: goto label_2b30f8;
            case 0x2B3100u: goto label_2b3100;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B30E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B30F0u;
label_2b30f0:
    // 0x2b30f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B30F0u;
    {
        const bool branch_taken_0x2b30f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30F0u;
        // 0x2b30f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30f0) {
            ctx->pc = 0x2B30FCu;
            goto label_2b30fc;
        }
    }
    ctx->pc = 0x2B30F8u;
label_2b30f8:
    // 0x2b30f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b30fc:
    // 0x2b30fc: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2b30fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
label_2b3100:
    // 0x2b3100: 0xc0acc64  jal         func_2B3190
    ctx->pc = 0x2B3100u;
    SET_GPR_U32(ctx, 31, 0x2B3108u);
    ctx->pc = 0x2B3104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3100u;
    // 0x2b3104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3190u, 0x2B3100u, 0x2B3108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3108u;
label_2b3108:
    // 0x2b3108: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B3108u;
    {
        const bool branch_taken_0x2b3108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3108) {
            ctx->pc = 0x2B310Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3108u;
            // 0x2b310c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B314Cu;
            goto label_2b314c;
        }
    }
    ctx->pc = 0x2B3110u;
    // 0x2b3110: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x2b3110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2b3114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b3114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b3118: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2b3118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
label_2b311c:
    // 0x2b311c: 0xc0acc7e  jal         func_2B31F8
    ctx->pc = 0x2B311Cu;
    SET_GPR_U32(ctx, 31, 0x2B3124u);
    ctx->pc = 0x2B3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B311Cu;
    // 0x2b3120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B31F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B31F8u, 0x2B311Cu, 0x2B3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3124u;
label_2b3124:
    // 0x2b3124: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3124u;
    {
        const bool branch_taken_0x2b3124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3124) {
            ctx->pc = 0x2B3128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3124u;
            // 0x2b3128: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B314Cu;
            goto label_2b314c;
        }
    }
    ctx->pc = 0x2B312Cu;
    // 0x2b312c: 0xc0acc8c  jal         func_2B3230
    ctx->pc = 0x2B312Cu;
    SET_GPR_U32(ctx, 31, 0x2B3134u);
    ctx->pc = 0x2B3130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B312Cu;
    // 0x2b3130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3230u, 0x2B312Cu, 0x2B3134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3134u;
label_2b3134:
    // 0x2b3134: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3138: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b3138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b313c: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2b313cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3140: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2b3140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3144: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2b3144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3148: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b3148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b314c:
    // 0x2b314c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3150: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3150u;
        // 0x2b3154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3158u;
}
