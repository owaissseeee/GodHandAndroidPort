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

// Function: func_0024AA68
// Address: 0x24aa68 - 0x24abc0
void func_0024AA68_0x24aa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024AA68_0x24aa68");
#endif

    switch (ctx->pc) {
        case 0x24aab8u: goto label_24aab8;
        case 0x24aae4u: goto label_24aae4;
        case 0x24aaf8u: goto label_24aaf8;
        case 0x24ab0cu: goto label_24ab0c;
        case 0x24ab20u: goto label_24ab20;
        case 0x24ab74u: goto label_24ab74;
        case 0x24aba0u: goto label_24aba0;
        case 0x24abacu: goto label_24abac;
        default: break;
    }

    ctx->pc = 0x24aa68u;

    // 0x24aa68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24aa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24aa6c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x24aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x24aa70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24aa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24aa74: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x24aa74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x24aa78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24aa7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24aa7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa80: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x24aa80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24aa84: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24aa88: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x24aa88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24aa8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24aa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24aa90: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24AA90u;
    {
        const bool branch_taken_0x24aa90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA90u;
        // 0x24aa94: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa90) {
            ctx->pc = 0x24AAACu;
            goto label_24aaac;
        }
    }
    ctx->pc = 0x24AA98u;
    // 0x24aa98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24aa9c: 0x50820027  beql        $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x24AA9Cu;
    {
        const bool branch_taken_0x24aa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24aa9c) {
            ctx->pc = 0x24AAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AA9Cu;
            // 0x24aaa0: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AB3Cu;
            goto label_24ab3c;
        }
    }
    ctx->pc = 0x24AAA4u;
    // 0x24aaa4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x24AAA4u;
    {
        const bool branch_taken_0x24aaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAA4u;
        // 0x24aaa8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aaa4) {
            ctx->pc = 0x24ABB0u;
            goto label_24abb0;
        }
    }
    ctx->pc = 0x24AAACu;
label_24aaac:
    // 0x24aaac: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x24aaacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24aab0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24AAB0u;
    SET_GPR_U32(ctx, 31, 0x24AAB8u);
    ctx->pc = 0x24AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAB0u;
    // 0x24aab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24AAB0u, 0x24AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAB8u;
label_24aab8:
    // 0x24aab8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x24aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24aabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aac0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24aac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24aac4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24aac4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24aac8: 0x8c653d94  lw          $a1, 0x3D94($v1)
    ctx->pc = 0x24aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15764)));
    // 0x24aacc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24aaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24aad0: 0x8c663d98  lw          $a2, 0x3D98($v1)
    ctx->pc = 0x24aad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15768)));
    // 0x24aad4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24aad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aad8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24aadc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24AADCu;
    SET_GPR_U32(ctx, 31, 0x24AAE4u);
    ctx->pc = 0x24AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AADCu;
    // 0x24aae0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24AADCu, 0x24AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAE4u;
label_24aae4:
    // 0x24aae4: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x24aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x24aae8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AAE8u;
    {
        const bool branch_taken_0x24aae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aae8) {
            ctx->pc = 0x24AAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AAE8u;
            // 0x24aaec: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AAFCu;
            goto label_24aafc;
        }
    }
    ctx->pc = 0x24AAF0u;
    // 0x24aaf0: 0xc0a04ce  jal         func_281338
    ctx->pc = 0x24AAF0u;
    SET_GPR_U32(ctx, 31, 0x24AAF8u);
    ctx->pc = 0x281338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281338u, 0x24AAF0u, 0x24AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAF8u;
label_24aaf8:
    // 0x24aaf8: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_24aafc:
    // 0x24aafc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AAFCu;
    {
        const bool branch_taken_0x24aafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aafc) {
            ctx->pc = 0x24AB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AAFCu;
            // 0x24ab00: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AB10u;
            goto label_24ab10;
        }
    }
    ctx->pc = 0x24AB04u;
    // 0x24ab04: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x24AB04u;
    SET_GPR_U32(ctx, 31, 0x24AB0Cu);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x24AB04u, 0x24AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB0Cu;
label_24ab0c:
    // 0x24ab0c: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_24ab10:
    // 0x24ab10: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AB10u;
    {
        const bool branch_taken_0x24ab10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ab10) {
            ctx->pc = 0x24AB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AB10u;
            // 0x24ab14: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AB24u;
            goto label_24ab24;
        }
    }
    ctx->pc = 0x24AB18u;
    // 0x24ab18: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x24AB18u;
    SET_GPR_U32(ctx, 31, 0x24AB20u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x24AB18u, 0x24AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB20u;
label_24ab20:
    // 0x24ab20: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24ab20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_24ab24:
    // 0x24ab24: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x24ab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x24ab28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ab28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ab2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24ab30: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24ab30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x24ab34: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24ab34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ab38: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x24ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ab3c:
    // 0x24ab3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24ab3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ab40: 0x0  nop
    ctx->pc = 0x24ab40u;
    // NOP
    // 0x24ab44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24ab44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ab48: 0x0  nop
    ctx->pc = 0x24ab48u;
    // NOP
    // 0x24ab4c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24AB4Cu;
    {
        const bool branch_taken_0x24ab4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB4Cu;
        // 0x24ab50: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab4c) {
            ctx->pc = 0x24AB6Cu;
            goto label_24ab6c;
        }
    }
    ctx->pc = 0x24AB54u;
    // 0x24ab54: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ab58: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24ab5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24ab5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24ab60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24ab60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24ab64: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x24ab64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x24ab68: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24ab68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_24ab6c:
    // 0x24ab6c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24AB6Cu;
    SET_GPR_U32(ctx, 31, 0x24AB74u);
    ctx->pc = 0x24AB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB6Cu;
    // 0x24ab70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24AB6Cu, 0x24AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB74u;
label_24ab74:
    // 0x24ab74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24AB74u;
    {
        const bool branch_taken_0x24ab74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB74u;
        // 0x24ab78: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab74) {
            ctx->pc = 0x24AB8Cu;
            goto label_24ab8c;
        }
    }
    ctx->pc = 0x24AB7Cu;
    // 0x24ab7c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24ab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ab80: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24ab80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ab84: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24ab84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ab88: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24ab88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24ab8c:
    // 0x24ab8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ab8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ab90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24ab90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24ab94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab98: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24AB98u;
    SET_GPR_U32(ctx, 31, 0x24ABA0u);
    ctx->pc = 0x24AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB98u;
    // 0x24ab9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24AB98u, 0x24ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABA0u;
label_24aba0:
    // 0x24aba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aba4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24ABA4u;
    SET_GPR_U32(ctx, 31, 0x24ABACu);
    ctx->pc = 0x24ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABA4u;
    // 0x24aba8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24ABA4u, 0x24ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABACu;
label_24abac:
    // 0x24abac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24abacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24abb0:
    // 0x24abb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24abb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24abb4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x24abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24abb8: 0x3e00008  jr          $ra
    ctx->pc = 0x24ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABB8u;
        // 0x24abbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ABC0u;
}
