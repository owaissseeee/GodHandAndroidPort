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

// Function: func_001D49E0
// Address: 0x1d49e0 - 0x1d4aa8
void func_001D49E0_0x1d49e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D49E0_0x1d49e0");
#endif

    switch (ctx->pc) {
        case 0x1d4a00u: goto label_1d4a00;
        case 0x1d4a0cu: goto label_1d4a0c;
        case 0x1d4a18u: goto label_1d4a18;
        case 0x1d4a24u: goto label_1d4a24;
        case 0x1d4a54u: goto label_1d4a54;
        case 0x1d4a68u: goto label_1d4a68;
        case 0x1d4a7cu: goto label_1d4a7c;
        case 0x1d4a90u: goto label_1d4a90;
        default: break;
    }

    ctx->pc = 0x1d49e0u;

    // 0x1d49e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d49e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d49e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d49e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d49e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d49e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d49ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d49ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d49f0: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1d49f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d49f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d49f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d49f8: 0xc075a68  jal         func_1D69A0
    ctx->pc = 0x1D49F8u;
    SET_GPR_U32(ctx, 31, 0x1D4A00u);
    ctx->pc = 0x1D49FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D49F8u;
    // 0x1d49fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D69A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D69A0u, 0x1D49F8u, 0x1D4A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A00u;
label_1d4a00:
    // 0x1d4a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a04: 0xc075af0  jal         func_1D6BC0
    ctx->pc = 0x1D4A04u;
    SET_GPR_U32(ctx, 31, 0x1D4A0Cu);
    ctx->pc = 0x1D4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A04u;
    // 0x1d4a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6BC0u, 0x1D4A04u, 0x1D4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A0Cu;
label_1d4a0c:
    // 0x1d4a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a10: 0xc075af8  jal         func_1D6BE0
    ctx->pc = 0x1D4A10u;
    SET_GPR_U32(ctx, 31, 0x1D4A18u);
    ctx->pc = 0x1D4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A10u;
    // 0x1d4a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6BE0u, 0x1D4A10u, 0x1D4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A18u;
label_1d4a18:
    // 0x1d4a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a1c: 0xc075b0a  jal         func_1D6C28
    ctx->pc = 0x1D4A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A24u);
    ctx->pc = 0x1D4A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A1Cu;
    // 0x1d4a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C28u, 0x1D4A1Cu, 0x1D4A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A24u;
label_1d4a24:
    // 0x1d4a24: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1d4a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d4a28: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D4A28u;
    {
        const bool branch_taken_0x1d4a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A28u;
        // 0x1d4a2c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a28) {
            ctx->pc = 0x1D4A90u;
            goto label_1d4a90;
        }
    }
    ctx->pc = 0x1D4A30u;
    // 0x1d4a30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d4a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d4a34: 0x2442b140  addiu       $v0, $v0, -0x4EC0
    ctx->pc = 0x1d4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947136));
    // 0x1d4a38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4a3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4a40: 0x800008  jr          $a0
    ctx->pc = 0x1D4A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4A48u: goto label_1d4a48;
            case 0x1D4A5Cu: goto label_1d4a5c;
            case 0x1D4A70u: goto label_1d4a70;
            case 0x1D4A84u: goto label_1d4a84;
            case 0x1D4A90u: goto label_1d4a90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4A40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D4A48u;
label_1d4a48:
    // 0x1d4a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a4c: 0xc075a68  jal         func_1D69A0
    ctx->pc = 0x1D4A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A54u);
    ctx->pc = 0x1D4A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A4Cu;
    // 0x1d4a50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D69A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D69A0u, 0x1D4A4Cu, 0x1D4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A54u;
label_1d4a54:
    // 0x1d4a54: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D4A54u;
    {
        const bool branch_taken_0x1d4a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A54u;
        // 0x1d4a58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a54) {
            ctx->pc = 0x1D4A94u;
            goto label_1d4a94;
        }
    }
    ctx->pc = 0x1D4A5Cu;
label_1d4a5c:
    // 0x1d4a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a60: 0xc075af0  jal         func_1D6BC0
    ctx->pc = 0x1D4A60u;
    SET_GPR_U32(ctx, 31, 0x1D4A68u);
    ctx->pc = 0x1D4A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A60u;
    // 0x1d4a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6BC0u, 0x1D4A60u, 0x1D4A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A68u;
label_1d4a68:
    // 0x1d4a68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D4A68u;
    {
        const bool branch_taken_0x1d4a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A68u;
        // 0x1d4a6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a68) {
            ctx->pc = 0x1D4A94u;
            goto label_1d4a94;
        }
    }
    ctx->pc = 0x1D4A70u;
label_1d4a70:
    // 0x1d4a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a74: 0xc075af8  jal         func_1D6BE0
    ctx->pc = 0x1D4A74u;
    SET_GPR_U32(ctx, 31, 0x1D4A7Cu);
    ctx->pc = 0x1D4A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A74u;
    // 0x1d4a78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6BE0u, 0x1D4A74u, 0x1D4A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A7Cu;
label_1d4a7c:
    // 0x1d4a7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4A7Cu;
    {
        const bool branch_taken_0x1d4a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A7Cu;
        // 0x1d4a80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a7c) {
            ctx->pc = 0x1D4A94u;
            goto label_1d4a94;
        }
    }
    ctx->pc = 0x1D4A84u;
label_1d4a84:
    // 0x1d4a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a88: 0xc075b0a  jal         func_1D6C28
    ctx->pc = 0x1D4A88u;
    SET_GPR_U32(ctx, 31, 0x1D4A90u);
    ctx->pc = 0x1D4A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A88u;
    // 0x1d4a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C28u, 0x1D4A88u, 0x1D4A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A90u;
label_1d4a90:
    // 0x1d4a90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d4a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4a94:
    // 0x1d4a94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A9Cu;
        // 0x1d4aa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4AA4u;
    // 0x1d4aa4: 0x0  nop
    ctx->pc = 0x1d4aa4u;
    // NOP
    ctx->pc = 0x1d4aa8u;
}
