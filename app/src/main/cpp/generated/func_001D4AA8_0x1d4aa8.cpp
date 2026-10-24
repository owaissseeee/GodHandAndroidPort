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

// Function: func_001D4AA8
// Address: 0x1d4aa8 - 0x1d4b70
void func_001D4AA8_0x1d4aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D4AA8_0x1d4aa8");
#endif

    switch (ctx->pc) {
        case 0x1d4ac8u: goto label_1d4ac8;
        case 0x1d4ad4u: goto label_1d4ad4;
        case 0x1d4ae0u: goto label_1d4ae0;
        case 0x1d4aecu: goto label_1d4aec;
        case 0x1d4b1cu: goto label_1d4b1c;
        case 0x1d4b30u: goto label_1d4b30;
        case 0x1d4b44u: goto label_1d4b44;
        case 0x1d4b58u: goto label_1d4b58;
        default: break;
    }

    ctx->pc = 0x1d4aa8u;

    // 0x1d4aa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d4aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d4aac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d4aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d4ab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ab8: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1d4ab8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d4abc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4ac0: 0xc075a7a  jal         func_1D69E8
    ctx->pc = 0x1D4AC0u;
    SET_GPR_U32(ctx, 31, 0x1D4AC8u);
    ctx->pc = 0x1D4AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4AC0u;
    // 0x1d4ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D69E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D69E8u, 0x1D4AC0u, 0x1D4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AC8u;
label_1d4ac8:
    // 0x1d4ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4acc: 0xc075b1c  jal         func_1D6C70
    ctx->pc = 0x1D4ACCu;
    SET_GPR_U32(ctx, 31, 0x1D4AD4u);
    ctx->pc = 0x1D4AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4ACCu;
    // 0x1d4ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C70u, 0x1D4ACCu, 0x1D4AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AD4u;
label_1d4ad4:
    // 0x1d4ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ad8: 0xc075b24  jal         func_1D6C90
    ctx->pc = 0x1D4AD8u;
    SET_GPR_U32(ctx, 31, 0x1D4AE0u);
    ctx->pc = 0x1D4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4AD8u;
    // 0x1d4adc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C90u, 0x1D4AD8u, 0x1D4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AE0u;
label_1d4ae0:
    // 0x1d4ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ae4: 0xc075b36  jal         func_1D6CD8
    ctx->pc = 0x1D4AE4u;
    SET_GPR_U32(ctx, 31, 0x1D4AECu);
    ctx->pc = 0x1D4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4AE4u;
    // 0x1d4ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6CD8u, 0x1D4AE4u, 0x1D4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AECu;
label_1d4aec:
    // 0x1d4aec: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1d4aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d4af0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D4AF0u;
    {
        const bool branch_taken_0x1d4af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AF0u;
        // 0x1d4af4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4af0) {
            ctx->pc = 0x1D4B58u;
            goto label_1d4b58;
        }
    }
    ctx->pc = 0x1D4AF8u;
    // 0x1d4af8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d4afc: 0x2442b160  addiu       $v0, $v0, -0x4EA0
    ctx->pc = 0x1d4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947168));
    // 0x1d4b00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4b04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d4b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4b08: 0x800008  jr          $a0
    ctx->pc = 0x1D4B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4B10u: goto label_1d4b10;
            case 0x1D4B24u: goto label_1d4b24;
            case 0x1D4B38u: goto label_1d4b38;
            case 0x1D4B4Cu: goto label_1d4b4c;
            case 0x1D4B58u: goto label_1d4b58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4B08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D4B10u;
label_1d4b10:
    // 0x1d4b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b14: 0xc075a7a  jal         func_1D69E8
    ctx->pc = 0x1D4B14u;
    SET_GPR_U32(ctx, 31, 0x1D4B1Cu);
    ctx->pc = 0x1D4B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B14u;
    // 0x1d4b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D69E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D69E8u, 0x1D4B14u, 0x1D4B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B1Cu;
label_1d4b1c:
    // 0x1d4b1c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D4B1Cu;
    {
        const bool branch_taken_0x1d4b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B1Cu;
        // 0x1d4b20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b1c) {
            ctx->pc = 0x1D4B5Cu;
            goto label_1d4b5c;
        }
    }
    ctx->pc = 0x1D4B24u;
label_1d4b24:
    // 0x1d4b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b28: 0xc075b1c  jal         func_1D6C70
    ctx->pc = 0x1D4B28u;
    SET_GPR_U32(ctx, 31, 0x1D4B30u);
    ctx->pc = 0x1D4B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B28u;
    // 0x1d4b2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C70u, 0x1D4B28u, 0x1D4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B30u;
label_1d4b30:
    // 0x1d4b30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D4B30u;
    {
        const bool branch_taken_0x1d4b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B30u;
        // 0x1d4b34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b30) {
            ctx->pc = 0x1D4B5Cu;
            goto label_1d4b5c;
        }
    }
    ctx->pc = 0x1D4B38u;
label_1d4b38:
    // 0x1d4b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b3c: 0xc075b24  jal         func_1D6C90
    ctx->pc = 0x1D4B3Cu;
    SET_GPR_U32(ctx, 31, 0x1D4B44u);
    ctx->pc = 0x1D4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B3Cu;
    // 0x1d4b40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C90u, 0x1D4B3Cu, 0x1D4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B44u;
label_1d4b44:
    // 0x1d4b44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4B44u;
    {
        const bool branch_taken_0x1d4b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B44u;
        // 0x1d4b48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b44) {
            ctx->pc = 0x1D4B5Cu;
            goto label_1d4b5c;
        }
    }
    ctx->pc = 0x1D4B4Cu;
label_1d4b4c:
    // 0x1d4b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b50: 0xc075b36  jal         func_1D6CD8
    ctx->pc = 0x1D4B50u;
    SET_GPR_U32(ctx, 31, 0x1D4B58u);
    ctx->pc = 0x1D4B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B50u;
    // 0x1d4b54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6CD8u, 0x1D4B50u, 0x1D4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B58u;
label_1d4b58:
    // 0x1d4b58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d4b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4b5c:
    // 0x1d4b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B64u;
        // 0x1d4b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4B6Cu;
    // 0x1d4b6c: 0x0  nop
    ctx->pc = 0x1d4b6cu;
    // NOP
    ctx->pc = 0x1d4b70u;
}
