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

// Function: UpdateAttackMoveState_102BD8
// Address: 0x102bd8 - 0x102cb0
void UpdateAttackMoveState_102BD8_0x102bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateAttackMoveState_102BD8_0x102bd8");
#endif

    switch (ctx->pc) {
        case 0x102bf4u: goto label_102bf4;
        case 0x102c3cu: goto label_102c3c;
        case 0x102c5cu: goto label_102c5c;
        case 0x102c88u: goto label_102c88;
        case 0x102c94u: goto label_102c94;
        default: break;
    }

    ctx->pc = 0x102bd8u;

    // 0x102bd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x102bdc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x102bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x102be0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x102be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102bec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x102BECu;
    SET_GPR_U32(ctx, 31, 0x102BF4u);
    ctx->pc = 0x102BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BECu;
    // 0x102bf0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x102BECu, 0x102BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BF4u;
label_102bf4:
    // 0x102bf4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x102bf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102bf8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102BF8u;
    {
        const bool branch_taken_0x102bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BF8u;
        // 0x102bfc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bf8) {
            ctx->pc = 0x102C14u;
            goto label_102c14;
        }
    }
    ctx->pc = 0x102C00u;
    // 0x102c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102c04: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x102C04u;
    {
        const bool branch_taken_0x102c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C04u;
        // 0x102c08: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c04) {
            ctx->pc = 0x102C4Cu;
            goto label_102c4c;
        }
    }
    ctx->pc = 0x102C0Cu;
    // 0x102c0c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x102C0Cu;
    {
        const bool branch_taken_0x102c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C0Cu;
        // 0x102c10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c0c) {
            ctx->pc = 0x102C98u;
            goto label_102c98;
        }
    }
    ctx->pc = 0x102C14u;
label_102c14:
    // 0x102c14: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x102c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x102c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x102c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x102c20: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x102c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x102c24: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x102c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x102c28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102c28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102c2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c30: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x102c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x102c34: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x102C34u;
    SET_GPR_U32(ctx, 31, 0x102C3Cu);
    ctx->pc = 0x102C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C34u;
    // 0x102c38: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x102C34u, 0x102C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C3Cu;
label_102c3c:
    // 0x102c3c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x102c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102c40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102c44: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x102c44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x102c48: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x102c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_102c4c:
    // 0x102c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c50: 0xc440c7c0  lwc1        $f0, -0x3840($v0)
    ctx->pc = 0x102c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102c54: 0xc055f06  jal         func_157C18
    ctx->pc = 0x102C54u;
    SET_GPR_U32(ctx, 31, 0x102C5Cu);
    ctx->pc = 0x102C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C54u;
    // 0x102c58: 0xe62015f0  swc1        $f0, 0x15F0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5616), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x102C54u, 0x102C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C5Cu;
label_102c5c:
    // 0x102c5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102C5Cu;
    {
        const bool branch_taken_0x102c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102c5c) {
            ctx->pc = 0x102C74u;
            goto label_102c74;
        }
    }
    ctx->pc = 0x102C64u;
    // 0x102c64: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x102c64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x102c68: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x102c68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x102c6c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x102c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x102c70: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x102c70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_102c74:
    // 0x102c74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x102c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x102c78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x102c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x102c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c80: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x102C80u;
    SET_GPR_U32(ctx, 31, 0x102C88u);
    ctx->pc = 0x102C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C80u;
    // 0x102c84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x102C80u, 0x102C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C88u;
label_102c88:
    // 0x102c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c8c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x102C8Cu;
    SET_GPR_U32(ctx, 31, 0x102C94u);
    ctx->pc = 0x102C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C8Cu;
    // 0x102c90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x102C8Cu, 0x102C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C94u;
label_102c94:
    // 0x102c94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x102c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_102c98:
    // 0x102c98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102c98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102ca0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x102ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x102ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x102CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CA4u;
        // 0x102ca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102CACu;
    // 0x102cac: 0x0  nop
    ctx->pc = 0x102cacu;
    // NOP
    ctx->pc = 0x102cb0u;
}
