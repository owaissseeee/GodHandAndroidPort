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

// Function: ForwardAndSyncPosition_102EE0
// Address: 0x102ee0 - 0x102fe8
void ForwardAndSyncPosition_102EE0_0x102ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardAndSyncPosition_102EE0_0x102ee0");
#endif

    switch (ctx->pc) {
        case 0x102ef8u: goto label_102ef8;
        case 0x102f10u: goto label_102f10;
        case 0x102f70u: goto label_102f70;
        case 0x102fd4u: goto label_102fd4;
        default: break;
    }

    ctx->pc = 0x102ee0u;

    // 0x102ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102ee4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x102ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x102ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x102eec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102ef0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x102EF0u;
    SET_GPR_U32(ctx, 31, 0x102EF8u);
    ctx->pc = 0x102EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102EF0u;
    // 0x102ef4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x102EF0u, 0x102EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102EF8u;
label_102ef8:
    // 0x102ef8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x102ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x102efc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f00: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x102f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x102f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f08: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x102F08u;
    SET_GPR_U32(ctx, 31, 0x102F10u);
    ctx->pc = 0x102F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F08u;
    // 0x102f0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x102F08u, 0x102F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F10u;
label_102f10:
    // 0x102f10: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x102f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x102f14: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x102f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x102f18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x102f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102f1c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x102f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x102f20: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x102f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102f24: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x102f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x102f28: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102F28u;
    {
        const bool branch_taken_0x102f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F28u;
        // 0x102f2c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f28) {
            ctx->pc = 0x102F44u;
            goto label_102f44;
        }
    }
    ctx->pc = 0x102F30u;
    // 0x102f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102f34: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x102F34u;
    {
        const bool branch_taken_0x102f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x102f34) {
            ctx->pc = 0x102F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102F34u;
            // 0x102f38: 0x8e0300f0  lw          $v1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102F80u;
            goto label_102f80;
        }
    }
    ctx->pc = 0x102F3Cu;
    // 0x102f3c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x102F3Cu;
    {
        const bool branch_taken_0x102f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F3Cu;
        // 0x102f40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f3c) {
            ctx->pc = 0x102FD8u;
            goto label_102fd8;
        }
    }
    ctx->pc = 0x102F44u;
label_102f44:
    // 0x102f44: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x102f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x102f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x102f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x102f50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f54: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x102f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102f58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f5c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x102f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x102f60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102f60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f64: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x102f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x102f68: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x102F68u;
    SET_GPR_U32(ctx, 31, 0x102F70u);
    ctx->pc = 0x102F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F68u;
    // 0x102f6c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x102F68u, 0x102F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F70u;
label_102f70:
    // 0x102f70: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x102f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102f74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102f78: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x102f78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x102f7c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x102f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_102f80:
    // 0x102f80: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x102f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x102f84: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102F84u;
    {
        const bool branch_taken_0x102f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x102f84) {
            ctx->pc = 0x102F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102F84u;
            // 0x102f88: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102FA8u;
            goto label_102fa8;
        }
    }
    ctx->pc = 0x102F8Cu;
    // 0x102f8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x102f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102f90: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x102f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x102f94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x102f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x102f98: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x102f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x102f9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x102f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102fa0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x102fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x102fa4: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x102fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_102fa8:
    // 0x102fa8: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x102fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x102fac: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102FACu;
    {
        const bool branch_taken_0x102fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x102fac) {
            ctx->pc = 0x102FCCu;
            goto label_102fcc;
        }
    }
    ctx->pc = 0x102FB4u;
    // 0x102fb4: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x102fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102fb8: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x102fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x102fbc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x102fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x102fc0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x102fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x102fc4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x102fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102fc8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x102fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_102fcc:
    // 0x102fcc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x102FCCu;
    SET_GPR_U32(ctx, 31, 0x102FD4u);
    ctx->pc = 0x102FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102FCCu;
    // 0x102fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x102FCCu, 0x102FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FD4u;
label_102fd4:
    // 0x102fd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x102fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_102fd8:
    // 0x102fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x102FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FE0u;
        // 0x102fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102FE8u;
}
