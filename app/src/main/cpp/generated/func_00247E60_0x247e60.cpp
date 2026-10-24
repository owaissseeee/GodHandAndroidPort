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

// Function: func_00247E60
// Address: 0x247e60 - 0x248058
void func_00247E60_0x247e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00247E60_0x247e60");
#endif

    switch (ctx->pc) {
        case 0x247eacu: goto label_247eac;
        case 0x247ef0u: goto label_247ef0;
        case 0x247f0cu: goto label_247f0c;
        case 0x247f18u: goto label_247f18;
        case 0x247fb4u: goto label_247fb4;
        case 0x247fc4u: goto label_247fc4;
        case 0x248008u: goto label_248008;
        case 0x248034u: goto label_248034;
        case 0x248040u: goto label_248040;
        default: break;
    }

    ctx->pc = 0x247e60u;

    // 0x247e60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x247e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x247e64: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x247e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x247e68: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x247e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x247e6c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x247e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x247e70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e74: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x247e74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x247e78: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x247e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x247e7c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x247e7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x247e80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x247e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x247e84: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247E84u;
    {
        const bool branch_taken_0x247e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E84u;
        // 0x247e88: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e84) {
            ctx->pc = 0x247EA0u;
            goto label_247ea0;
        }
    }
    ctx->pc = 0x247E8Cu;
    // 0x247e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247e90: 0x50820058  beql        $a0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x247E90u;
    {
        const bool branch_taken_0x247e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x247e90) {
            ctx->pc = 0x247E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247E90u;
            // 0x247e94: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247FF4u;
            goto label_247ff4;
        }
    }
    ctx->pc = 0x247E98u;
    // 0x247e98: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x247E98u;
    {
        const bool branch_taken_0x247e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E98u;
        // 0x247e9c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e98) {
            ctx->pc = 0x248044u;
            goto label_248044;
        }
    }
    ctx->pc = 0x247EA0u;
label_247ea0:
    // 0x247ea0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x247ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x247ea4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x247EA4u;
    SET_GPR_U32(ctx, 31, 0x247EACu);
    ctx->pc = 0x247EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247EA4u;
    // 0x247ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x247EA4u, 0x247EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EACu;
label_247eac:
    // 0x247eac: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x247eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x247eb0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x247eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x247eb4: 0x8e0416d4  lw          $a0, 0x16D4($s0)
    ctx->pc = 0x247eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x247eb8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x247eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247ebc: 0x8c6538c0  lw          $a1, 0x38C0($v1)
    ctx->pc = 0x247ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14528)));
    // 0x247ec0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x247ec4: 0x8c6638c4  lw          $a2, 0x38C4($v1)
    ctx->pc = 0x247ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14532)));
    // 0x247ec8: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x247ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x247ecc: 0xae0416d4  sw          $a0, 0x16D4($s0)
    ctx->pc = 0x247eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
    // 0x247ed0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x247ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247ed4: 0xa209186c  sb          $t1, 0x186C($s0)
    ctx->pc = 0x247ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6252), (uint8_t)GPR_U32(ctx, 9));
    // 0x247ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247edc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x247edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247ee0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x247ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x247ee4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x247ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x247ee8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x247EE8u;
    SET_GPR_U32(ctx, 31, 0x247EF0u);
    ctx->pc = 0x247EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247EE8u;
    // 0x247eec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x247EE8u, 0x247EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EF0u;
label_247ef0:
    // 0x247ef0: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x247ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x247ef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247ef8: 0x8e040744  lw          $a0, 0x744($s0)
    ctx->pc = 0x247ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
    // 0x247efc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247EFCu;
    {
        const bool branch_taken_0x247efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EFCu;
        // 0x247f00: 0xe6001768  swc1        $f0, 0x1768($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5992), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x247efc) {
            ctx->pc = 0x247F18u;
            goto label_247f18;
        }
    }
    ctx->pc = 0x247F04u;
    // 0x247f04: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x247F04u;
    SET_GPR_U32(ctx, 31, 0x247F0Cu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x247F04u, 0x247F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F0Cu;
label_247f0c:
    // 0x247f0c: 0xae000744  sw          $zero, 0x744($s0)
    ctx->pc = 0x247f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1860), GPR_U32(ctx, 0));
    // 0x247f10: 0xc09d76a  jal         func_275DA8
    ctx->pc = 0x247F10u;
    SET_GPR_U32(ctx, 31, 0x247F18u);
    ctx->pc = 0x247F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F10u;
    // 0x247f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275DA8u, 0x247F10u, 0x247F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F18u;
label_247f18:
    // 0x247f18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f20: 0x0  nop
    ctx->pc = 0x247f20u;
    // NOP
    // 0x247f24: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x247f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x247f28: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x247f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x247f2c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x247f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x247f30: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x247f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x247f34: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x247f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x247f38: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x247f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x247f3c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x247f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x247f40: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x247f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247f44: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x247f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x247f48: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x247f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x247f4c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x247f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x247f50: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x247f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x247f54: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x247f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x247f58: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x247f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x247f5c: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x247f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x247f60: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x247f60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x247f64: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x247f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x247f68: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x247f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x247f6c: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x247f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x247f70: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x247f70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x247f74: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x247f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x247f78: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x247f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x247f7c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x247f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247f80: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x247f80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x247f84: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x247f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x247f88: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x247f88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x247f8c: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x247f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x247f90: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x247f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x247f94: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x247f94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x247f98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x247f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f9c: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x247f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x247fa0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x247fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fa4: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x247fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x247fa8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x247fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247fac: 0xc0c194a  jal         func_306528
    ctx->pc = 0x247FACu;
    SET_GPR_U32(ctx, 31, 0x247FB4u);
    ctx->pc = 0x247FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FACu;
    // 0x247fb0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x247FACu, 0x247FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FB4u;
label_247fb4:
    // 0x247fb4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x247fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x247fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fbc: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x247FBCu;
    SET_GPR_U32(ctx, 31, 0x247FC4u);
    ctx->pc = 0x247FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FBCu;
    // 0x247fc0: 0x24a5cad0  addiu       $a1, $a1, -0x3530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x247FBCu, 0x247FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FC4u;
label_247fc4:
    // 0x247fc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x247fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fc8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x247FC8u;
    {
        const bool branch_taken_0x247fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247fc8) {
            ctx->pc = 0x247FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247FC8u;
            // 0x247fcc: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247FE8u;
            goto label_247fe8;
        }
    }
    ctx->pc = 0x247FD0u;
    // 0x247fd0: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x247fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x247fd4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x247fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x247fd8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x247fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x247fdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x247fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x247fe0: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x247fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x247fe4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x247fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_247fe8:
    // 0x247fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247fec: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x247fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x247ff0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x247ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_247ff4:
    // 0x247ff4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x247ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x247ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ffc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x247ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x248000: 0xc055f06  jal         func_157C18
    ctx->pc = 0x248000u;
    SET_GPR_U32(ctx, 31, 0x248008u);
    ctx->pc = 0x248004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248000u;
    // 0x248004: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x248000u, 0x248008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248008u;
label_248008:
    // 0x248008: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248008u;
    {
        const bool branch_taken_0x248008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248008u;
        // 0x24800c: 0x2402009c  addiu       $v0, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248008) {
            ctx->pc = 0x248020u;
            goto label_248020;
        }
    }
    ctx->pc = 0x248010u;
    // 0x248010: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x248010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x248014: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x248014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x248018: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x248018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24801c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24801cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_248020:
    // 0x248020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248024: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x248024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x248028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24802c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24802Cu;
    SET_GPR_U32(ctx, 31, 0x248034u);
    ctx->pc = 0x248030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24802Cu;
    // 0x248030: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24802Cu, 0x248034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248034u;
label_248034:
    // 0x248034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248038: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x248038u;
    SET_GPR_U32(ctx, 31, 0x248040u);
    ctx->pc = 0x24803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248038u;
    // 0x24803c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x248038u, 0x248040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248040u;
label_248040:
    // 0x248040: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x248040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_248044:
    // 0x248044: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x248044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x248048: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x248048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24804c: 0x3e00008  jr          $ra
    ctx->pc = 0x24804Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24804Cu;
        // 0x248050: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24804Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248054u;
    // 0x248054: 0x0  nop
    ctx->pc = 0x248054u;
    // NOP
    ctx->pc = 0x248058u;
}
