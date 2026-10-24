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

// Function: func_00277C48
// Address: 0x277c48 - 0x277d38
void func_00277C48_0x277c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00277C48_0x277c48");
#endif

    switch (ctx->pc) {
        case 0x277c74u: goto label_277c74;
        case 0x277cc0u: goto label_277cc0;
        case 0x277cd4u: goto label_277cd4;
        case 0x277cecu: goto label_277cec;
        case 0x277d10u: goto label_277d10;
        case 0x277d1cu: goto label_277d1c;
        default: break;
    }

    ctx->pc = 0x277c48u;

    // 0x277c48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x277c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x277c4c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x277c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x277c50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x277c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277c54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x277c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x277c58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277c60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277c68: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x277c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x277c6c: 0xc0b76ac  jal         func_2DDAB0
    ctx->pc = 0x277C6Cu;
    SET_GPR_U32(ctx, 31, 0x277C74u);
    ctx->pc = 0x277C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C6Cu;
    // 0x277c70: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDAB0u, 0x277C6Cu, 0x277C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C74u;
label_277c74:
    // 0x277c74: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x277c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277c78: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x277C78u;
    {
        const bool branch_taken_0x277c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C78u;
        // 0x277c7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c78) {
            ctx->pc = 0x277C94u;
            goto label_277c94;
        }
    }
    ctx->pc = 0x277C80u;
    // 0x277c80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277c84: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x277C84u;
    {
        const bool branch_taken_0x277c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x277c84) {
            ctx->pc = 0x277CCCu;
            goto label_277ccc;
        }
    }
    ctx->pc = 0x277C8Cu;
    // 0x277c8c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x277C8Cu;
    {
        const bool branch_taken_0x277c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C8Cu;
        // 0x277c90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c8c) {
            ctx->pc = 0x277D20u;
            goto label_277d20;
        }
    }
    ctx->pc = 0x277C94u;
label_277c94:
    // 0x277c94: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x277c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x277c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277ca0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x277ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277ca4: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x277ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x277ca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x277ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cac: 0x8c460060  lw          $a2, 0x60($v0)
    ctx->pc = 0x277cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x277cb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x277cb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cb4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x277cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x277cb8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x277CB8u;
    SET_GPR_U32(ctx, 31, 0x277CC0u);
    ctx->pc = 0x277CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CB8u;
    // 0x277cbc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x277CB8u, 0x277CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CC0u;
label_277cc0:
    // 0x277cc0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x277cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277cc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277cc8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x277cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_277ccc:
    // 0x277ccc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x277CCCu;
    SET_GPR_U32(ctx, 31, 0x277CD4u);
    ctx->pc = 0x277CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CCCu;
    // 0x277cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x277CCCu, 0x277CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CD4u;
label_277cd4:
    // 0x277cd4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x277CD4u;
    {
        const bool branch_taken_0x277cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277cd4) {
            ctx->pc = 0x277CFCu;
            goto label_277cfc;
        }
    }
    ctx->pc = 0x277CDCu;
    // 0x277cdc: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x277CDCu;
    {
        const bool branch_taken_0x277cdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x277cdc) {
            ctx->pc = 0x277CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277CDCu;
            // 0x277ce0: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277CF0u;
            goto label_277cf0;
        }
    }
    ctx->pc = 0x277CE4u;
    // 0x277ce4: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x277CE4u;
    SET_GPR_U32(ctx, 31, 0x277CECu);
    ctx->pc = 0x277CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CE4u;
    // 0x277ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x277CE4u, 0x277CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CECu;
label_277cec:
    // 0x277cec: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x277cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_277cf0:
    // 0x277cf0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x277cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x277cf4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x277cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x277cf8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x277cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_277cfc:
    // 0x277cfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x277d00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x277d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x277d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d08: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x277D08u;
    SET_GPR_U32(ctx, 31, 0x277D10u);
    ctx->pc = 0x277D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D08u;
    // 0x277d0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x277D08u, 0x277D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D10u;
label_277d10:
    // 0x277d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d14: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x277D14u;
    SET_GPR_U32(ctx, 31, 0x277D1Cu);
    ctx->pc = 0x277D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D14u;
    // 0x277d18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x277D14u, 0x277D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D1Cu;
label_277d1c:
    // 0x277d1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x277d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_277d20:
    // 0x277d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277d28: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x277d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x277D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D2Cu;
        // 0x277d30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277D34u;
    // 0x277d34: 0x0  nop
    ctx->pc = 0x277d34u;
    // NOP
    ctx->pc = 0x277d38u;
}
