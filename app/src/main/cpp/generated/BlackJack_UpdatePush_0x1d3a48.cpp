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

// Function: BlackJack_UpdatePush
// Address: 0x1d3a48 - 0x1d3ce8
void BlackJack_UpdatePush_0x1d3a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdatePush_0x1d3a48");
#endif

    switch (ctx->pc) {
        case 0x1d3aa8u: goto label_1d3aa8;
        case 0x1d3ab4u: goto label_1d3ab4;
        case 0x1d3ac0u: goto label_1d3ac0;
        case 0x1d3ae4u: goto label_1d3ae4;
        case 0x1d3af0u: goto label_1d3af0;
        case 0x1d3af8u: goto label_1d3af8;
        case 0x1d3b04u: goto label_1d3b04;
        case 0x1d3b10u: goto label_1d3b10;
        case 0x1d3b1cu: goto label_1d3b1c;
        case 0x1d3b28u: goto label_1d3b28;
        case 0x1d3bd8u: goto label_1d3bd8;
        case 0x1d3bf8u: goto label_1d3bf8;
        case 0x1d3c20u: goto label_1d3c20;
        case 0x1d3c34u: goto label_1d3c34;
        case 0x1d3c54u: goto label_1d3c54;
        case 0x1d3c60u: goto label_1d3c60;
        case 0x1d3c6cu: goto label_1d3c6c;
        case 0x1d3c94u: goto label_1d3c94;
        default: break;
    }

    ctx->pc = 0x1d3a48u;

    // 0x1d3a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3a4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d3a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a58: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3a5c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1d3a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d3a60: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1D3A60u;
    {
        const bool branch_taken_0x1d3a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A60u;
        // 0x1d3a64: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a60) {
            ctx->pc = 0x1D3CD8u;
            goto label_1d3cd8;
        }
    }
    ctx->pc = 0x1D3A68u;
    // 0x1d3a68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d3a6c: 0x2442b090  addiu       $v0, $v0, -0x4F70
    ctx->pc = 0x1d3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946960));
    // 0x1d3a70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3a74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d3a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3a78: 0x800008  jr          $a0
    ctx->pc = 0x1D3A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3A80u: goto label_1d3a80;
            case 0x1D3A90u: goto label_1d3a90;
            case 0x1D3AD0u: goto label_1d3ad0;
            case 0x1D3B38u: goto label_1d3b38;
            case 0x1D3B54u: goto label_1d3b54;
            case 0x1D3BA4u: goto label_1d3ba4;
            case 0x1D3C3Cu: goto label_1d3c3c;
            case 0x1D3C7Cu: goto label_1d3c7c;
            case 0x1D3CA4u: goto label_1d3ca4;
            case 0x1D3CCCu: goto label_1d3ccc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3A78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D3A80u;
label_1d3a80:
    // 0x1d3a80: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3a84: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3a88: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1D3A88u;
    {
        const bool branch_taken_0x1d3a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A88u;
        // 0x1d3a8c: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a88) {
            ctx->pc = 0x1D3CB4u;
            goto label_1d3cb4;
        }
    }
    ctx->pc = 0x1D3A90u;
label_1d3a90:
    // 0x1d3a90: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3a94: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1D3A94u;
    {
        const bool branch_taken_0x1d3a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A94u;
        // 0x1d3a98: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a94) {
            ctx->pc = 0x1D3CC4u;
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3A9Cu;
    // 0x1d3a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3aa0: 0xc075b48  jal         func_1D6D20
    ctx->pc = 0x1D3AA0u;
    SET_GPR_U32(ctx, 31, 0x1D3AA8u);
    ctx->pc = 0x1D3AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AA0u;
    // 0x1d3aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6D20u, 0x1D3AA0u, 0x1D3AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AA8u;
label_1d3aa8:
    // 0x1d3aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3aac: 0xc075b5a  jal         func_1D6D68
    ctx->pc = 0x1D3AACu;
    SET_GPR_U32(ctx, 31, 0x1D3AB4u);
    ctx->pc = 0x1D3AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AACu;
    // 0x1d3ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6D68u, 0x1D3AACu, 0x1D3AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AB4u;
label_1d3ab4:
    // 0x1d3ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ab8: 0xc075a9c  jal         func_1D6A70
    ctx->pc = 0x1D3AB8u;
    SET_GPR_U32(ctx, 31, 0x1D3AC0u);
    ctx->pc = 0x1D3ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AB8u;
    // 0x1d3abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A70u, 0x1D3AB8u, 0x1D3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AC0u;
label_1d3ac0:
    // 0x1d3ac0: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3ac4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3ac8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1D3AC8u;
    {
        const bool branch_taken_0x1d3ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AC8u;
        // 0x1d3acc: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ac8) {
            ctx->pc = 0x1D3CB4u;
            goto label_1d3cb4;
        }
    }
    ctx->pc = 0x1D3AD0u;
label_1d3ad0:
    // 0x1d3ad0: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3ad4: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1D3AD4u;
    {
        const bool branch_taken_0x1d3ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AD4u;
        // 0x1d3ad8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ad4) {
            ctx->pc = 0x1D3CC4u;
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3ADCu;
    // 0x1d3adc: 0xc0751c8  jal         func_1D4720
    ctx->pc = 0x1D3ADCu;
    SET_GPR_U32(ctx, 31, 0x1D3AE4u);
    ctx->pc = 0x1D3AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3ADCu;
    // 0x1d3ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4720u, 0x1D3ADCu, 0x1D3AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AE4u;
label_1d3ae4:
    // 0x1d3ae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ae8: 0xc075a94  jal         func_1D6A50
    ctx->pc = 0x1D3AE8u;
    SET_GPR_U32(ctx, 31, 0x1D3AF0u);
    ctx->pc = 0x1D3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AE8u;
    // 0x1d3aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A50u, 0x1D3AE8u, 0x1D3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AF0u;
label_1d3af0:
    // 0x1d3af0: 0xc0751fa  jal         func_1D47E8
    ctx->pc = 0x1D3AF0u;
    SET_GPR_U32(ctx, 31, 0x1D3AF8u);
    ctx->pc = 0x1D3AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AF0u;
    // 0x1d3af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D47E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D47E8u, 0x1D3AF0u, 0x1D3AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AF8u;
label_1d3af8:
    // 0x1d3af8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3afc: 0xc075a8c  jal         func_1D6A30
    ctx->pc = 0x1D3AFCu;
    SET_GPR_U32(ctx, 31, 0x1D3B04u);
    ctx->pc = 0x1D3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AFCu;
    // 0x1d3b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A30u, 0x1D3AFCu, 0x1D3B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B04u;
label_1d3b04:
    // 0x1d3b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b08: 0xc075278  jal         func_1D49E0
    ctx->pc = 0x1D3B08u;
    SET_GPR_U32(ctx, 31, 0x1D3B10u);
    ctx->pc = 0x1D3B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B08u;
    // 0x1d3b0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49E0u, 0x1D3B08u, 0x1D3B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B10u;
label_1d3b10:
    // 0x1d3b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b14: 0xc0752aa  jal         func_1D4AA8
    ctx->pc = 0x1D3B14u;
    SET_GPR_U32(ctx, 31, 0x1D3B1Cu);
    ctx->pc = 0x1D3B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B14u;
    // 0x1d3b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AA8u, 0x1D3B14u, 0x1D3B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B1Cu;
label_1d3b1c:
    // 0x1d3b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b20: 0xc07596c  jal         func_1D65B0
    ctx->pc = 0x1D3B20u;
    SET_GPR_U32(ctx, 31, 0x1D3B28u);
    ctx->pc = 0x1D3B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B20u;
    // 0x1d3b24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D65B0u, 0x1D3B20u, 0x1D3B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B28u;
label_1d3b28:
    // 0x1d3b28: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3b2c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3b30: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1D3B30u;
    {
        const bool branch_taken_0x1d3b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B30u;
        // 0x1d3b34: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b30) {
            ctx->pc = 0x1D3CB4u;
            goto label_1d3cb4;
        }
    }
    ctx->pc = 0x1D3B38u;
label_1d3b38:
    // 0x1d3b38: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3b3c: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1D3B3Cu;
    {
        const bool branch_taken_0x1d3b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B3Cu;
        // 0x1d3b40: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b3c) {
            ctx->pc = 0x1D3CC4u;
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3B44u;
    // 0x1d3b44: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3b48: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1d3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d3b4c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1D3B4Cu;
    {
        const bool branch_taken_0x1d3b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B4Cu;
        // 0x1d3b50: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b4c) {
            ctx->pc = 0x1D3CB4u;
            goto label_1d3cb4;
        }
    }
    ctx->pc = 0x1D3B54u;
label_1d3b54:
    // 0x1d3b54: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d3b58: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1d3b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1d3b5c: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1d3b5cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1d3b60: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d3b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d3b64: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3B64u;
    {
        const bool branch_taken_0x1d3b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b64) {
            ctx->pc = 0x1D3B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3B64u;
            // 0x1d3b68: 0x8e041814  lw          $a0, 0x1814($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3B7Cu;
            goto label_1d3b7c;
        }
    }
    ctx->pc = 0x1D3B6Cu;
    // 0x1d3b6c: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3b70: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1D3B70u;
    {
        const bool branch_taken_0x1d3b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B70u;
        // 0x1d3b74: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b70) {
            ctx->pc = 0x1D3CC4u;
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3B78u;
    // 0x1d3b78: 0x8e041814  lw          $a0, 0x1814($s0)
    ctx->pc = 0x1d3b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
label_1d3b7c:
    // 0x1d3b7c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3b80: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D3B80u;
    {
        const bool branch_taken_0x1d3b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b80) {
            ctx->pc = 0x1D3B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3B80u;
            // 0x1d3b84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3B88u;
            goto label_1d3b88;
        }
    }
    ctx->pc = 0x1D3B88u;
label_1d3b88:
    // 0x1d3b88: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1d3b88u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d3b8c: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3b90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3b94: 0xae031808  sw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
    // 0x1d3b98: 0x2012  mflo        $a0
    ctx->pc = 0x1d3b98u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d3b9c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1D3B9Cu;
    {
        const bool branch_taken_0x1d3b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B9Cu;
        // 0x1d3ba0: 0xae04180c  sw          $a0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b9c) {
            ctx->pc = 0x1D3CD8u;
            goto label_1d3cd8;
        }
    }
    ctx->pc = 0x1D3BA4u;
label_1d3ba4:
    // 0x1d3ba4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d3ba8: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1d3ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1d3bac: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1d3bacu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1d3bb0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d3bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d3bb4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3BB4u;
    {
        const bool branch_taken_0x1d3bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3bb4) {
            ctx->pc = 0x1D3BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3BB4u;
            // 0x1d3bb8: 0xae001814  sw          $zero, 0x1814($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3BCCu;
            goto label_1d3bcc;
        }
    }
    ctx->pc = 0x1D3BBCu;
    // 0x1d3bbc: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3bc0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D3BC0u;
    {
        const bool branch_taken_0x1d3bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3bc0) {
            ctx->pc = 0x1D3BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3BC0u;
            // 0x1d3bc4: 0x8e021814  lw          $v0, 0x1814($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3C08u;
            goto label_1d3c08;
        }
    }
    ctx->pc = 0x1D3BC8u;
    // 0x1d3bc8: 0xae001814  sw          $zero, 0x1814($s0)
    ctx->pc = 0x1d3bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 0));
label_1d3bcc:
    // 0x1d3bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bd0: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D3BD0u;
    SET_GPR_U32(ctx, 31, 0x1D3BD8u);
    ctx->pc = 0x1D3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BD0u;
    // 0x1d3bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D3BD0u, 0x1D3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BD8u;
label_1d3bd8:
    // 0x1d3bd8: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3bdc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d3bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3be0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d3be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3be8: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1d3be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d3bec: 0x2812  mflo        $a1
    ctx->pc = 0x1d3becu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1d3bf0: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D3BF0u;
    SET_GPR_U32(ctx, 31, 0x1D3BF8u);
    ctx->pc = 0x1D3BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BF0u;
    // 0x1d3bf4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D3BF0u, 0x1D3BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BF8u;
label_1d3bf8:
    // 0x1d3bf8: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3bfc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3c00: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1D3C00u;
    {
        const bool branch_taken_0x1d3c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C00u;
        // 0x1d3c04: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c00) {
            ctx->pc = 0x1D3CB4u;
            goto label_1d3cb4;
        }
    }
    ctx->pc = 0x1D3C08u;
label_1d3c08:
    // 0x1d3c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3C08u;
    {
        const bool branch_taken_0x1d3c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C08u;
        // 0x1d3c0c: 0x2442fff6  addiu       $v0, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c08) {
            ctx->pc = 0x1D3C20u;
            goto label_1d3c20;
        }
    }
    ctx->pc = 0x1D3C10u;
    // 0x1d3c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c18: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D3C18u;
    SET_GPR_U32(ctx, 31, 0x1D3C20u);
    ctx->pc = 0x1D3C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C18u;
    // 0x1d3c1c: 0xae021814  sw          $v0, 0x1814($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D3C18u, 0x1D3C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C20u;
label_1d3c20:
    // 0x1d3c20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d3c24: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d3c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3c28: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1d3c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d3c2c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D3C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C34u);
    ctx->pc = 0x1D3C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C2Cu;
    // 0x1d3c30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D3C2Cu, 0x1D3C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C34u;
label_1d3c34:
    // 0x1d3c34: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D3C34u;
    {
        const bool branch_taken_0x1d3c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C34u;
        // 0x1d3c38: 0x8e02180c  lw          $v0, 0x180C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c34) {
            ctx->pc = 0x1D3CC0u;
            goto label_1d3cc0;
        }
    }
    ctx->pc = 0x1D3C3Cu;
label_1d3c3c:
    // 0x1d3c3c: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3c40: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D3C40u;
    {
        const bool branch_taken_0x1d3c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C40u;
        // 0x1d3c44: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c40) {
            ctx->pc = 0x1D3CC4u;
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3C48u;
    // 0x1d3c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c4c: 0xc075278  jal         func_1D49E0
    ctx->pc = 0x1D3C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C54u);
    ctx->pc = 0x1D3C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C4Cu;
    // 0x1d3c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49E0u, 0x1D3C4Cu, 0x1D3C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C54u;
label_1d3c54:
    // 0x1d3c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c58: 0xc0752aa  jal         func_1D4AA8
    ctx->pc = 0x1D3C58u;
    SET_GPR_U32(ctx, 31, 0x1D3C60u);
    ctx->pc = 0x1D3C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C58u;
    // 0x1d3c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AA8u, 0x1D3C58u, 0x1D3C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C60u;
label_1d3c60:
    // 0x1d3c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c64: 0xc07596c  jal         func_1D65B0
    ctx->pc = 0x1D3C64u;
    SET_GPR_U32(ctx, 31, 0x1D3C6Cu);
    ctx->pc = 0x1D3C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C64u;
    // 0x1d3c68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D65B0u, 0x1D3C64u, 0x1D3C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C6Cu;
label_1d3c6c:
    // 0x1d3c6c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3c70: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3c74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D3C74u;
    {
        const bool branch_taken_0x1d3c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C74u;
        // 0x1d3c78: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c74) {
            ctx->pc = 0x1D3CB4u;
            goto label_1d3cb4;
        }
    }
    ctx->pc = 0x1D3C7Cu;
label_1d3c7c:
    // 0x1d3c7c: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3c80: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3C80u;
    {
        const bool branch_taken_0x1d3c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C80u;
        // 0x1d3c84: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c80) {
            ctx->pc = 0x1D3CC4u;
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3C88u;
    // 0x1d3c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c8c: 0xc075a9c  jal         func_1D6A70
    ctx->pc = 0x1D3C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C94u);
    ctx->pc = 0x1D3C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C8Cu;
    // 0x1d3c90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A70u, 0x1D3C8Cu, 0x1D3C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C94u;
label_1d3c94:
    // 0x1d3c94: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3c98: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3c9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3C9Cu;
    {
        const bool branch_taken_0x1d3c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C9Cu;
        // 0x1d3ca0: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c9c) {
            ctx->pc = 0x1D3CB4u;
            goto label_1d3cb4;
        }
    }
    ctx->pc = 0x1D3CA4u;
label_1d3ca4:
    // 0x1d3ca4: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3ca8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3CA8u;
    {
        const bool branch_taken_0x1d3ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CA8u;
        // 0x1d3cac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ca8) {
            ctx->pc = 0x1D3CC4u;
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3CB0u;
    // 0x1d3cb0: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
label_1d3cb4:
    // 0x1d3cb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3cb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3CB8u;
    {
        const bool branch_taken_0x1d3cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CB8u;
        // 0x1d3cbc: 0xae021808  sw          $v0, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cb8) {
            ctx->pc = 0x1D3CD8u;
            goto label_1d3cd8;
        }
    }
    ctx->pc = 0x1D3CC0u;
label_1d3cc0:
    // 0x1d3cc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d3cc4:
    // 0x1d3cc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3CC4u;
    {
        const bool branch_taken_0x1d3cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CC4u;
        // 0x1d3cc8: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cc4) {
            ctx->pc = 0x1D3CD8u;
            goto label_1d3cd8;
        }
    }
    ctx->pc = 0x1D3CCCu;
label_1d3ccc:
    // 0x1d3ccc: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1d3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d3cd0: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d3cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d3cd4: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d3cd8:
    // 0x1d3cd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CE0u;
        // 0x1d3ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3CE8u;
}
