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

// Function: func_002F9DC8
// Address: 0x2f9dc8 - 0x2f9e80
void func_002F9DC8_0x2f9dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F9DC8_0x2f9dc8");
#endif

    switch (ctx->pc) {
        case 0x2f9decu: goto label_2f9dec;
        case 0x2f9e38u: goto label_2f9e38;
        case 0x2f9e64u: goto label_2f9e64;
        case 0x2f9e6cu: goto label_2f9e6c;
        default: break;
    }

    ctx->pc = 0x2f9dc8u;

    // 0x2f9dc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f9dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f9dcc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f9dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f9dd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f9dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f9dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9dd8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x2f9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2f9ddc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9DDCu;
    {
        const bool branch_taken_0x2f9ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ddc) {
            ctx->pc = 0x2F9DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9DDCu;
            // 0x2f9de0: 0x906502b4  lbu         $a1, 0x2B4($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9DF4u;
            goto label_2f9df4;
        }
    }
    ctx->pc = 0x2F9DE4u;
    // 0x2f9de4: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2F9DE4u;
    SET_GPR_U32(ctx, 31, 0x2F9DECu);
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2F9DE4u, 0x2F9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9DECu;
label_2f9dec:
    // 0x2f9dec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F9DECu;
    {
        const bool branch_taken_0x2f9dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DECu;
        // 0x2f9df0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9dec) {
            ctx->pc = 0x2F9E70u;
            goto label_2f9e70;
        }
    }
    ctx->pc = 0x2F9DF4u;
label_2f9df4:
    // 0x2f9df4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9df8: 0x8e0402b4  lw          $a0, 0x2B4($s0)
    ctx->pc = 0x2f9df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2f9dfc: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9DFCu;
    {
        const bool branch_taken_0x2f9dfc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DFCu;
        // 0x2f9e00: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9dfc) {
            ctx->pc = 0x2F9E08u;
            goto label_2f9e08;
        }
    }
    ctx->pc = 0x2F9E04u;
    // 0x2f9e04: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2f9e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2f9e08:
    // 0x2f9e08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9e0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9E0Cu;
    {
        const bool branch_taken_0x2f9e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E0Cu;
        // 0x2f9e10: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e0c) {
            ctx->pc = 0x2F9E24u;
            goto label_2f9e24;
        }
    }
    ctx->pc = 0x2F9E14u;
    // 0x2f9e14: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x2f9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x2f9e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9e1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9E1Cu;
    {
        const bool branch_taken_0x2f9e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E1Cu;
        // 0x2f9e20: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e1c) {
            ctx->pc = 0x2F9E28u;
            goto label_2f9e28;
        }
    }
    ctx->pc = 0x2F9E24u;
label_2f9e24:
    // 0x2f9e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e28:
    // 0x2f9e28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9E28u;
    {
        const bool branch_taken_0x2f9e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E28u;
        // 0x2f9e2c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e28) {
            ctx->pc = 0x2F9E40u;
            goto label_2f9e40;
        }
    }
    ctx->pc = 0x2F9E30u;
    // 0x2f9e30: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2F9E30u;
    SET_GPR_U32(ctx, 31, 0x2F9E38u);
    ctx->pc = 0x2F9E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9E30u;
    // 0x2f9e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2F9E30u, 0x2F9E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9E38u;
label_2f9e38:
    // 0x2f9e38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F9E38u;
    {
        const bool branch_taken_0x2f9e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E38u;
        // 0x2f9e3c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e38) {
            ctx->pc = 0x2F9E70u;
            goto label_2f9e70;
        }
    }
    ctx->pc = 0x2F9E40u;
label_2f9e40:
    // 0x2f9e40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f9e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f9e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f9e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9e48: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2f9e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2f9e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e50: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2f9e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2f9e54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f9e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e58: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2f9e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2f9e5c: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F9E5Cu;
    SET_GPR_U32(ctx, 31, 0x2F9E64u);
    ctx->pc = 0x2F9E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9E5Cu;
    // 0x2f9e60: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F9E5Cu, 0x2F9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9E64u;
label_2f9e64:
    // 0x2f9e64: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F9E64u;
    SET_GPR_U32(ctx, 31, 0x2F9E6Cu);
    ctx->pc = 0x2F9E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9E64u;
    // 0x2f9e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F9E64u, 0x2F9E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9E6Cu;
label_2f9e6c:
    // 0x2f9e6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f9e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f9e70:
    // 0x2f9e70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f9e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9e74: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E74u;
        // 0x2f9e78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9E7Cu;
    // 0x2f9e7c: 0x0  nop
    ctx->pc = 0x2f9e7cu;
    // NOP
    ctx->pc = 0x2f9e80u;
}
