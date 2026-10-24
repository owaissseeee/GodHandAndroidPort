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

// Function: ColiseumBattle_StartFade
// Address: 0x1efc48 - 0x1efd00
void ColiseumBattle_StartFade_0x1efc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_StartFade_0x1efc48");
#endif

    switch (ctx->pc) {
        case 0x1efc80u: goto label_1efc80;
        case 0x1efcd8u: goto label_1efcd8;
        default: break;
    }

    ctx->pc = 0x1efc48u;

    // 0x1efc48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1efc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1efc4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1efc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1efc50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1efc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1efc54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1efc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1efc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1efc5c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1efc5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1efc60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efc64: 0x9e020054  lwu         $v0, 0x54($s0)
    ctx->pc = 0x1efc64u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1efc68: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1efc68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1efc6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1efc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1efc70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFC70u;
    {
        const bool branch_taken_0x1efc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC70u;
        // 0x1efc74: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc70) {
            ctx->pc = 0x1EFC90u;
            goto label_1efc90;
        }
    }
    ctx->pc = 0x1EFC78u;
    // 0x1efc78: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x1EFC78u;
    SET_GPR_U32(ctx, 31, 0x1EFC80u);
    ctx->pc = 0x1EFC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC78u;
    // 0x1efc7c: 0x26447470  addiu       $a0, $s2, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1EFC78u, 0x1EFC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC80u;
label_1efc80:
    // 0x1efc80: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1efc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1efc84: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1efc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1efc88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1efc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1efc8c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1efc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1efc90:
    // 0x1efc90: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFC90u;
    {
        const bool branch_taken_0x1efc90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC90u;
        // 0x1efc94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc90) {
            ctx->pc = 0x1EFCA0u;
            goto label_1efca0;
        }
    }
    ctx->pc = 0x1EFC98u;
    // 0x1efc98: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFC98u;
    {
        const bool branch_taken_0x1efc98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC98u;
        // 0x1efc9c: 0x26447470  addiu       $a0, $s2, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc98) {
            ctx->pc = 0x1EFCBCu;
            goto label_1efcbc;
        }
    }
    ctx->pc = 0x1EFCA0u;
label_1efca0:
    // 0x1efca0: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x1efca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
    // 0x1efca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1efca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efca8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1efca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1efcac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1efcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcb0: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1efcb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1efcb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFCB4u;
    {
        const bool branch_taken_0x1efcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCB4u;
        // 0x1efcb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcb4) {
            ctx->pc = 0x1EFCD0u;
            goto label_1efcd0;
        }
    }
    ctx->pc = 0x1EFCBCu;
label_1efcbc:
    // 0x1efcbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1efcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcc0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1efcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1efcc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1efcc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1efcc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efccc: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1efcccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_1efcd0:
    // 0x1efcd0: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1EFCD0u;
    SET_GPR_U32(ctx, 31, 0x1EFCD8u);
    ctx->pc = 0x1EFCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFCD0u;
    // 0x1efcd4: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1EFCD0u, 0x1EFCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFCD8u;
label_1efcd8:
    // 0x1efcd8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1efcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1efcdc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1efcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1efce0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1efce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1efce4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1efce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efce8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1efce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efcec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1efcecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efcf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCF4u;
        // 0x1efcf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFCFCu;
    // 0x1efcfc: 0x0  nop
    ctx->pc = 0x1efcfcu;
    // NOP
    ctx->pc = 0x1efd00u;
}
