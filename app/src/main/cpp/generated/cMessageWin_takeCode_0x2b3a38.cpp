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

// Function: cMessageWin_takeCode
// Address: 0x2b3a38 - 0x2b3ad0
void cMessageWin_takeCode_0x2b3a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessageWin_takeCode_0x2b3a38");
#endif

    switch (ctx->pc) {
        case 0x2b3a54u: goto label_2b3a54;
        case 0x2b3a68u: goto label_2b3a68;
        case 0x2b3aacu: goto label_2b3aac;
        case 0x2b3ab4u: goto label_2b3ab4;
        default: break;
    }

    ctx->pc = 0x2b3a38u;

    // 0x2b3a38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3a3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b3a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b3a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b3a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b3a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3a4c: 0xc0abc86  jal         func_2AF218
    ctx->pc = 0x2B3A4Cu;
    SET_GPR_U32(ctx, 31, 0x2B3A54u);
    ctx->pc = 0x2B3A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A4Cu;
    // 0x2b3a50: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF218u, 0x2B3A4Cu, 0x2B3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A54u;
label_2b3a54:
    // 0x2b3a54: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2b3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b3a58: 0x8e110090  lw          $s1, 0x90($s0)
    ctx->pc = 0x2b3a58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2b3a5c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2b3a5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b3a60: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2B3A60u;
    SET_GPR_U32(ctx, 31, 0x2B3A68u);
    ctx->pc = 0x2B3A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A60u;
    // 0x2b3a64: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2B3A60u, 0x2B3A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A68u;
label_2b3a68:
    // 0x2b3a68: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2b3a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3a6c: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x2b3a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2b3a70: 0x92060030  lbu         $a2, 0x30($s0)
    ctx->pc = 0x2b3a70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b3a74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b3a78: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2b3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b3a7c: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x2b3a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x2b3a80: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x2b3a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2b3a84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b3a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b3a88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b3a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3a8c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2b3a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2b3a90: 0xae110084  sw          $s1, 0x84($s0)
    ctx->pc = 0x2b3a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
    // 0x2b3a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a98: 0xae110068  sw          $s1, 0x68($s0)
    ctx->pc = 0x2b3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
    // 0x2b3a9c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x2b3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x2b3aa0: 0xa2060030  sb          $a2, 0x30($s0)
    ctx->pc = 0x2b3aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b3aa4: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B3AA4u;
    SET_GPR_U32(ctx, 31, 0x2B3AACu);
    ctx->pc = 0x2B3AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AA4u;
    // 0x2b3aa8: 0xae050014  sw          $a1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B3AA4u, 0x2B3AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3AACu;
label_2b3aac:
    // 0x2b3aac: 0xc0ad17a  jal         func_2B45E8
    ctx->pc = 0x2B3AACu;
    SET_GPR_U32(ctx, 31, 0x2B3AB4u);
    ctx->pc = 0x2B3AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AACu;
    // 0x2b3ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45E8u, 0x2B3AACu, 0x2B3AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3AB4u;
label_2b3ab4:
    // 0x2b3ab4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b3ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b3abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AC4u;
        // 0x2b3ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3ACCu;
    // 0x2b3acc: 0x0  nop
    ctx->pc = 0x2b3accu;
    // NOP
    ctx->pc = 0x2b3ad0u;
}
