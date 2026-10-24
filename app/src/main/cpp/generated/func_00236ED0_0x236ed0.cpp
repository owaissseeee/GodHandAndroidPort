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

// Function: func_00236ED0
// Address: 0x236ed0 - 0x237078
void func_00236ED0_0x236ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00236ED0_0x236ed0");
#endif

    switch (ctx->pc) {
        case 0x236ef8u: goto label_236ef8;
        case 0x236f90u: goto label_236f90;
        case 0x236fa4u: goto label_236fa4;
        case 0x236fd0u: goto label_236fd0;
        case 0x236fdcu: goto label_236fdc;
        case 0x237014u: goto label_237014;
        case 0x237028u: goto label_237028;
        case 0x237054u: goto label_237054;
        case 0x237060u: goto label_237060;
        default: break;
    }

    ctx->pc = 0x236ed0u;

    // 0x236ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236ed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ed8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x236ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x236edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236ee4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x236ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x236ee8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236eec: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x236eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x236ef0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x236EF0u;
    SET_GPR_U32(ctx, 31, 0x236EF8u);
    ctx->pc = 0x236EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EF0u;
    // 0x236ef4: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x236EF0u, 0x236EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EF8u;
label_236ef8:
    // 0x236ef8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x236ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x236efc: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x236efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x236f00: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x236f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x236f04: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x236f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x236f08: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x236f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236f0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236f10: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x236f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x236f14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x236f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x236f18: 0x920702f6  lbu         $a3, 0x2F6($s0)
    ctx->pc = 0x236f18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236f1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x236f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236f20: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x236f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x236f24: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x236f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x236f28: 0x10e6001c  beq         $a3, $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x236F28u;
    {
        const bool branch_taken_0x236f28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x236F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F28u;
        // 0x236f2c: 0xae030250  sw          $v1, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f28) {
            ctx->pc = 0x236F9Cu;
            goto label_236f9c;
        }
    }
    ctx->pc = 0x236F30u;
    // 0x236f30: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x236f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x236f34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x236F34u;
    {
        const bool branch_taken_0x236f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236f34) {
            ctx->pc = 0x236F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236F34u;
            // 0x236f38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236F4Cu;
            goto label_236f4c;
        }
    }
    ctx->pc = 0x236F3Cu;
    // 0x236f3c: 0x50e00009  beql        $a3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x236F3Cu;
    {
        const bool branch_taken_0x236f3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x236f3c) {
            ctx->pc = 0x236F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236F3Cu;
            // 0x236f40: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236F64u;
            goto label_236f64;
        }
    }
    ctx->pc = 0x236F44u;
    // 0x236f44: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x236F44u;
    {
        const bool branch_taken_0x236f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F44u;
        // 0x236f48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f44) {
            ctx->pc = 0x237064u;
            goto label_237064;
        }
    }
    ctx->pc = 0x236F4Cu;
label_236f4c:
    // 0x236f4c: 0x10e20025  beq         $a3, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x236F4Cu;
    {
        const bool branch_taken_0x236f4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x236F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F4Cu;
        // 0x236f50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f4c) {
            ctx->pc = 0x236FE4u;
            goto label_236fe4;
        }
    }
    ctx->pc = 0x236F54u;
    // 0x236f54: 0x10e20032  beq         $a3, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x236F54u;
    {
        const bool branch_taken_0x236f54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x236f54) {
            ctx->pc = 0x237020u;
            goto label_237020;
        }
    }
    ctx->pc = 0x236F5Cu;
    // 0x236f5c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x236F5Cu;
    {
        const bool branch_taken_0x236f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F5Cu;
        // 0x236f60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f5c) {
            ctx->pc = 0x237064u;
            goto label_237064;
        }
    }
    ctx->pc = 0x236F64u;
label_236f64:
    // 0x236f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f68: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x236f68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x236f6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x236f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236f74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f78: 0x8c451ba0  lw          $a1, 0x1BA0($v0)
    ctx->pc = 0x236f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7072)));
    // 0x236f7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x236f7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f80: 0x8c461ba4  lw          $a2, 0x1BA4($v0)
    ctx->pc = 0x236f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7076)));
    // 0x236f84: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x236f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x236f88: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x236F88u;
    SET_GPR_U32(ctx, 31, 0x236F90u);
    ctx->pc = 0x236F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F88u;
    // 0x236f8c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x236F88u, 0x236F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F90u;
label_236f90:
    // 0x236f90: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x236f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236f94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236f98: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x236f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_236f9c:
    // 0x236f9c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236F9Cu;
    SET_GPR_U32(ctx, 31, 0x236FA4u);
    ctx->pc = 0x236FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F9Cu;
    // 0x236fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236F9Cu, 0x236FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FA4u;
label_236fa4:
    // 0x236fa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236FA4u;
    {
        const bool branch_taken_0x236fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FA4u;
        // 0x236fa8: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fa4) {
            ctx->pc = 0x236FBCu;
            goto label_236fbc;
        }
    }
    ctx->pc = 0x236FACu;
    // 0x236fac: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x236facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x236fb0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x236fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x236fb4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x236fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x236fb8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x236fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_236fbc:
    // 0x236fbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236fc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x236fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fc8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236FC8u;
    SET_GPR_U32(ctx, 31, 0x236FD0u);
    ctx->pc = 0x236FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FC8u;
    // 0x236fcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236FC8u, 0x236FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FD0u;
label_236fd0:
    // 0x236fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fd4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x236FD4u;
    SET_GPR_U32(ctx, 31, 0x236FDCu);
    ctx->pc = 0x236FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FD4u;
    // 0x236fd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x236FD4u, 0x236FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FDCu;
label_236fdc:
    // 0x236fdc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x236FDCu;
    {
        const bool branch_taken_0x236fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FDCu;
        // 0x236fe0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fdc) {
            ctx->pc = 0x237064u;
            goto label_237064;
        }
    }
    ctx->pc = 0x236FE4u;
label_236fe4:
    // 0x236fe4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x236fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x236fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fec: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x236fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x236ff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x236ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x236ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236ff8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ffc: 0x8c451ba8  lw          $a1, 0x1BA8($v0)
    ctx->pc = 0x236ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7080)));
    // 0x237000: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237004: 0x8c461bac  lw          $a2, 0x1BAC($v0)
    ctx->pc = 0x237004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7084)));
    // 0x237008: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23700c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23700Cu;
    SET_GPR_U32(ctx, 31, 0x237014u);
    ctx->pc = 0x237010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23700Cu;
    // 0x237010: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23700Cu, 0x237014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237014u;
label_237014:
    // 0x237014: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x237014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x237018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23701c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23701cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_237020:
    // 0x237020: 0xc055f06  jal         func_157C18
    ctx->pc = 0x237020u;
    SET_GPR_U32(ctx, 31, 0x237028u);
    ctx->pc = 0x237024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237020u;
    // 0x237024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x237020u, 0x237028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237028u;
label_237028:
    // 0x237028: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237028u;
    {
        const bool branch_taken_0x237028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237028u;
        // 0x23702c: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237028) {
            ctx->pc = 0x237040u;
            goto label_237040;
        }
    }
    ctx->pc = 0x237030u;
    // 0x237030: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x237030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x237034: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x237034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x237038: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x237038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23703c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23703cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_237040:
    // 0x237040: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x237044: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x237044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x237048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23704c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23704Cu;
    SET_GPR_U32(ctx, 31, 0x237054u);
    ctx->pc = 0x237050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23704Cu;
    // 0x237050: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23704Cu, 0x237054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237054u;
label_237054:
    // 0x237054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237058: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x237058u;
    SET_GPR_U32(ctx, 31, 0x237060u);
    ctx->pc = 0x23705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237058u;
    // 0x23705c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x237058u, 0x237060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237060u;
label_237060:
    // 0x237060: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x237060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_237064:
    // 0x237064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237068: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x237068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23706c: 0x3e00008  jr          $ra
    ctx->pc = 0x23706Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23706Cu;
        // 0x237070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23706Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237074u;
    // 0x237074: 0x0  nop
    ctx->pc = 0x237074u;
    // NOP
    ctx->pc = 0x237078u;
}
