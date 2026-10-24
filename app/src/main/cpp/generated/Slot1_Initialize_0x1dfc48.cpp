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

// Function: Slot1_Initialize
// Address: 0x1dfc48 - 0x1dfd50
void Slot1_Initialize_0x1dfc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot1_Initialize_0x1dfc48");
#endif

    switch (ctx->pc) {
        case 0x1dfcdcu: goto label_1dfcdc;
        case 0x1dfcf0u: goto label_1dfcf0;
        case 0x1dfd04u: goto label_1dfd04;
        case 0x1dfd10u: goto label_1dfd10;
        case 0x1dfd20u: goto label_1dfd20;
        default: break;
    }

    ctx->pc = 0x1dfc48u;

    // 0x1dfc48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1dfc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1dfc4c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1dfc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1dfc50: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1dfc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1dfc54: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1dfc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1dfc58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dfc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc5c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1dfc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1dfc60: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1dfc60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dfc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dfc68: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1dfc68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc6c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1dfc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1dfc70: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1dfc70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc74: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1dfc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1dfc78: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1dfc78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc7c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1dfc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1dfc80: 0x30b6ffff  andi        $s6, $a1, 0xFFFF
    ctx->pc = 0x1dfc80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1dfc84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfc88: 0x8fb70098  lw          $s7, 0x98($sp)
    ctx->pc = 0x1dfc88u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1dfc8c: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DFC8Cu;
    {
        const bool branch_taken_0x1dfc8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC8Cu;
        // 0x1dfc90: 0x97b00090  lhu         $s0, 0x90($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc8c) {
            ctx->pc = 0x1DFD20u;
            goto label_1dfd20;
        }
    }
    ctx->pc = 0x1DFC94u;
    // 0x1dfc94: 0x52400023  beql        $s2, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DFC94u;
    {
        const bool branch_taken_0x1dfc94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc94) {
            ctx->pc = 0x1DFC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFC94u;
            // 0x1dfc98: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFD24u;
            goto label_1dfd24;
        }
    }
    ctx->pc = 0x1DFC9Cu;
    // 0x1dfc9c: 0x52800021  beql        $s4, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DFC9Cu;
    {
        const bool branch_taken_0x1dfc9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc9c) {
            ctx->pc = 0x1DFCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFC9Cu;
            // 0x1dfca0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFD24u;
            goto label_1dfd24;
        }
    }
    ctx->pc = 0x1DFCA4u;
    // 0x1dfca4: 0x50e0001f  beql        $a3, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DFCA4u;
    {
        const bool branch_taken_0x1dfca4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfca4) {
            ctx->pc = 0x1DFCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFCA4u;
            // 0x1dfca8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFD24u;
            goto label_1dfd24;
        }
    }
    ctx->pc = 0x1DFCACu;
    // 0x1dfcac: 0x5260001d  beql        $s3, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DFCACu;
    {
        const bool branch_taken_0x1dfcac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfcac) {
            ctx->pc = 0x1DFCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFCACu;
            // 0x1dfcb0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFD24u;
            goto label_1dfd24;
        }
    }
    ctx->pc = 0x1DFCB4u;
    // 0x1dfcb4: 0x52a0001b  beql        $s5, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DFCB4u;
    {
        const bool branch_taken_0x1dfcb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfcb4) {
            ctx->pc = 0x1DFCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFCB4u;
            // 0x1dfcb8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFD24u;
            goto label_1dfd24;
        }
    }
    ctx->pc = 0x1DFCBCu;
    // 0x1dfcbc: 0x12e00018  beqz        $s7, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DFCBCu;
    {
        const bool branch_taken_0x1dfcbc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCBCu;
        // 0x1dfcc0: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcbc) {
            ctx->pc = 0x1DFD20u;
            goto label_1dfd20;
        }
    }
    ctx->pc = 0x1DFCC4u;
    // 0x1dfcc4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DFCC4u;
    {
        const bool branch_taken_0x1dfcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCC4u;
        // 0x1dfcc8: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcc4) {
            ctx->pc = 0x1DFD20u;
            goto label_1dfd20;
        }
    }
    ctx->pc = 0x1DFCCCu;
    // 0x1dfccc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1dfcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcd0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1dfcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcd4: 0xc079f9a  jal         func_1E7E68
    ctx->pc = 0x1DFCD4u;
    SET_GPR_U32(ctx, 31, 0x1DFCDCu);
    ctx->pc = 0x1DFCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCD4u;
    // 0x1dfcd8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E68u, 0x1DFCD4u, 0x1DFCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCDCu;
label_1dfcdc:
    // 0x1dfcdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dfcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfce0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dfce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfce4: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1dfce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1dfce8: 0xc079f9a  jal         func_1E7E68
    ctx->pc = 0x1DFCE8u;
    SET_GPR_U32(ctx, 31, 0x1DFCF0u);
    ctx->pc = 0x1DFCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCE8u;
    // 0x1dfcec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E68u, 0x1DFCE8u, 0x1DFCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCF0u;
label_1dfcf0:
    // 0x1dfcf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dfcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcf4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1dfcf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcf8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1dfcf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcfc: 0xc079f9a  jal         func_1E7E68
    ctx->pc = 0x1DFCFCu;
    SET_GPR_U32(ctx, 31, 0x1DFD04u);
    ctx->pc = 0x1DFD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCFCu;
    // 0x1dfd00: 0x26240268  addiu       $a0, $s1, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E68u, 0x1DFCFCu, 0x1DFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFD04u;
label_1dfd04:
    // 0x1dfd04: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1dfd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd08: 0xc079e6a  jal         func_1E79A8
    ctx->pc = 0x1DFD08u;
    SET_GPR_U32(ctx, 31, 0x1DFD10u);
    ctx->pc = 0x1DFD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFD08u;
    // 0x1dfd0c: 0x26240370  addiu       $a0, $s1, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E79A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E79A8u, 0x1DFD08u, 0x1DFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFD10u;
label_1dfd10:
    // 0x1dfd10: 0xa636048c  sh          $s6, 0x48C($s1)
    ctx->pc = 0x1dfd10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1164), (uint16_t)GPR_U32(ctx, 22));
    // 0x1dfd14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd18: 0xc078c90  jal         func_1E3240
    ctx->pc = 0x1DFD18u;
    SET_GPR_U32(ctx, 31, 0x1DFD20u);
    ctx->pc = 0x1DFD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFD18u;
    // 0x1dfd1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3240u, 0x1DFD18u, 0x1DFD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFD20u;
label_1dfd20:
    // 0x1dfd20: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1dfd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1dfd24:
    // 0x1dfd24: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1dfd24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dfd28: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1dfd28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dfd2c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1dfd2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dfd30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dfd30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dfd34: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1dfd34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfd38: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1dfd38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfd3c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1dfd3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfd40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD44u;
        // 0x1dfd48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFD4Cu;
    // 0x1dfd4c: 0x0  nop
    ctx->pc = 0x1dfd4cu;
    // NOP
    ctx->pc = 0x1dfd50u;
}
