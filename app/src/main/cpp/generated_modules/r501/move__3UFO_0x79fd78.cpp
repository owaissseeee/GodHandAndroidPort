#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: move__3UFO
// Address: 0x79fd78 - 0x7a0358
void move__3UFO_0x79fd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move__3UFO_0x79fd78");
#endif

    switch (ctx->pc) {
        case 0x79fdd8u: goto label_79fdd8;
        case 0x79fe1cu: goto label_79fe1c;
        case 0x79fe40u: goto label_79fe40;
        case 0x79fe58u: goto label_79fe58;
        case 0x79feacu: goto label_79feac;
        case 0x79ff44u: goto label_79ff44;
        case 0x79ffccu: goto label_79ffcc;
        case 0x7a00ccu: goto label_7a00cc;
        case 0x7a00dcu: goto label_7a00dc;
        case 0x7a00ecu: goto label_7a00ec;
        case 0x7a029cu: goto label_7a029c;
        case 0x7a02f8u: goto label_7a02f8;
        case 0x7a031cu: goto label_7a031c;
        default: break;
    }

    ctx->pc = 0x79fd78u;

    // 0x79fd78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79fd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79fd7c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79fd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79fd80: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79fd84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79fd84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79fd88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79fd8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79fd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79fd90: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x79fd90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x79fd94: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x79fd94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x79fd98: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x79fd98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x79fd9c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x79fd9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x79fda0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x79fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x79fda4: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x79fda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x79fda8: 0x10400160  beqz        $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x79FDA8u;
    {
        const bool branch_taken_0x79fda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FDA8u;
        // 0x79fdac: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fda8) {
            ctx->pc = 0x7A032Cu;
            goto label_7a032c;
        }
    }
    ctx->pc = 0x79FDB0u;
    // 0x79fdb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79fdb4: 0x244208e0  addiu       $v0, $v0, 0x8E0
    ctx->pc = 0x79fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
    // 0x79fdb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79fdbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79fdc0: 0x800008  jr          $a0
    ctx->pc = 0x79FDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79FDC8u: goto label_79fdc8;
            case 0x79FDD0u: goto label_79fdd0;
            case 0x79FF44u: goto label_79ff44;
            case 0x79FFF0u: goto label_79fff0;
            case 0x7A0090u: goto label_7a0090;
            case 0x7A0124u: goto label_7a0124;
            case 0x7A01A0u: goto label_7a01a0;
            case 0x7A01C0u: goto label_7a01c0;
            case 0x7A01F0u: goto label_7a01f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79FDC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79FDC8u;
label_79fdc8:
    // 0x79fdc8: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x79FDC8u;
    {
        const bool branch_taken_0x79fdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FDC8u;
        // 0x79fdcc: 0xae400040  sw          $zero, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fdc8) {
            ctx->pc = 0x7A032Cu;
            goto label_7a032c;
        }
    }
    ctx->pc = 0x79FDD0u;
label_79fdd0:
    // 0x79fdd0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x79FDD0u;
    SET_GPR_U32(ctx, 31, 0x79FDD8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x79FDD0u, 0x79FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FDD8u;
label_79fdd8:
    // 0x79fdd8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79fdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x79fddc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79fddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79fde0: 0x0  nop
    ctx->pc = 0x79fde0u;
    // NOP
    // 0x79fde4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79fde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79fde8: 0x0  nop
    ctx->pc = 0x79fde8u;
    // NOP
    // 0x79fdec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x79FDECu;
    {
        const bool branch_taken_0x79fdec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FDECu;
        // 0x79fdf0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fdec) {
            ctx->pc = 0x79FDF8u;
            goto label_79fdf8;
        }
    }
    ctx->pc = 0x79FDF4u;
    // 0x79fdf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79fdf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79fdf8:
    // 0x79fdf8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x79fdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x79fdfc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79FDFCu;
    {
        const bool branch_taken_0x79fdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FDFCu;
        // 0x79fe00: 0xa2430090  sb          $v1, 0x90($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fdfc) {
            ctx->pc = 0x79FE24u;
            goto label_79fe24;
        }
    }
    ctx->pc = 0x79FE04u;
    // 0x79fe04: 0x3c01c20c  lui         $at, 0xC20C
    ctx->pc = 0x79fe04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49676 << 16));
    // 0x79fe08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79fe08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79fe0c: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x79fe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x79fe10: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79fe10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79fe14: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79FE14u;
    SET_GPR_U32(ctx, 31, 0x79FE1Cu);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79FE14u, 0x79FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FE1Cu;
label_79fe1c:
    // 0x79fe1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79FE1Cu;
    {
        const bool branch_taken_0x79fe1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79fe1c) {
            ctx->pc = 0x79FE28u;
            goto label_79fe28;
        }
    }
    ctx->pc = 0x79FE24u;
label_79fe24:
    // 0x79fe24: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x79fe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79fe28:
    // 0x79fe28: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x79fe28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x79fe2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79fe2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79fe30: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x79fe30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x79fe34: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79fe34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79fe38: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79FE38u;
    SET_GPR_U32(ctx, 31, 0x79FE40u);
    ctx->pc = 0x79FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79FE38u;
    // 0x79fe3c: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79FE38u, 0x79FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FE40u;
label_79fe40:
    // 0x79fe40: 0x3c01c1c8  lui         $at, 0xC1C8
    ctx->pc = 0x79fe40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49608 << 16));
    // 0x79fe44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79fe44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79fe48: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x79fe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x79fe4c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79fe4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79fe50: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79FE50u;
    SET_GPR_U32(ctx, 31, 0x79FE58u);
    ctx->pc = 0x79FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79FE50u;
    // 0x79fe54: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79FE50u, 0x79FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FE58u;
label_79fe58:
    // 0x79fe58: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x79fe58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x79fe5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79FE5Cu;
    {
        const bool branch_taken_0x79fe5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FE5Cu;
        // 0x79fe60: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fe5c) {
            ctx->pc = 0x79FE8Cu;
            goto label_79fe8c;
        }
    }
    ctx->pc = 0x79FE64u;
    // 0x79fe64: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79fe68: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x79fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x79fe6c: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x79fe6cu;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79fe70: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x79fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x79fe74: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x79fe74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x79fe78: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x79fe78u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79fe7c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79fe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79fe80: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x79fe80u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79fe84: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79FE84u;
    {
        const bool branch_taken_0x79fe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FE84u;
        // 0x79fe88: 0xe4610008  swc1        $f1, 0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fe84) {
            ctx->pc = 0x79FED8u;
            goto label_79fed8;
        }
    }
    ctx->pc = 0x79FE8Cu;
label_79fe8c:
    // 0x79fe8c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x79fe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x79fe90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79fe90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79fe94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79fe94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79fe98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79fe98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79fe9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79fe9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79fea0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79fea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79fea4: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79FEA4u;
    SET_GPR_U32(ctx, 31, 0x79FEACu);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79FEA4u, 0x79FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FEACu;
label_79feac:
    // 0x79feac: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x79feacu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x79feb0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x79feb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79feb4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x79feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79feb8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x79feb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79febc: 0x0  nop
    ctx->pc = 0x79febcu;
    // NOP
    // 0x79fec0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x79FEC0u;
    {
        const bool branch_taken_0x79fec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79fec0) {
            ctx->pc = 0x79FEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79FEC0u;
            // 0x79fec4: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79FEC8u;
            goto label_79fec8;
        }
    }
    ctx->pc = 0x79FEC8u;
label_79fec8:
    // 0x79fec8: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x79fec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x79fecc: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x79feccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x79fed0: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x79fed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79fed4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x79fed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79fed8:
    // 0x79fed8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79fedc: 0x92430090  lbu         $v1, 0x90($s2)
    ctx->pc = 0x79fedcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x79fee0: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x79fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x79fee4: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x79fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x79fee8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79FEE8u;
    {
        const bool branch_taken_0x79fee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FEE8u;
        // 0x79feec: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fee8) {
            ctx->pc = 0x79FEF8u;
            goto label_79fef8;
        }
    }
    ctx->pc = 0x79FEF0u;
    // 0x79fef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79FEF0u;
    {
        const bool branch_taken_0x79fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FEF0u;
        // 0x79fef4: 0xae400064  sw          $zero, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fef0) {
            ctx->pc = 0x79FF00u;
            goto label_79ff00;
        }
    }
    ctx->pc = 0x79FEF8u;
label_79fef8:
    // 0x79fef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79fefc: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x79fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_79ff00:
    // 0x79ff00: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x79ff00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x79ff04: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x79ff04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x79ff08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ff08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ff0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79FF0Cu;
    {
        const bool branch_taken_0x79ff0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FF0Cu;
        // 0x79ff10: 0xae400040  sw          $zero, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ff0c) {
            ctx->pc = 0x79FF1Cu;
            goto label_79ff1c;
        }
    }
    ctx->pc = 0x79FF14u;
    // 0x79ff14: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x79ff14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x79ff18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ff18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79ff1c:
    // 0x79ff1c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79ff20: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x79ff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x79ff24: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79ff28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79ff28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ff2c: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x79ff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x79ff30: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79ff30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ff34: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79ff34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ff38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ff38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ff3c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79FF3Cu;
    SET_GPR_U32(ctx, 31, 0x79FF44u);
    ctx->pc = 0x79FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79FF3Cu;
    // 0x79ff40: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79FF3Cu, 0x79FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FF44u;
label_79ff44:
    // 0x79ff44: 0xc6430040  lwc1        $f3, 0x40($s2)
    ctx->pc = 0x79ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x79ff48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79ff48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79ff4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79ff4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79ff50: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x79ff50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x79ff54: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79ff54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79ff58: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x79ff58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x79ff5c: 0x46036041  sub.s       $f1, $f12, $f3
    ctx->pc = 0x79ff5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x79ff60: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x79ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ff64: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x79ff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79ff68: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x79ff68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x79ff6c: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x79ff6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x79ff70: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79ff70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79ff74: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x79ff74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x79ff78: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x79ff78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79ff7c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x79ff7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x79ff80: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x79ff80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x79ff84: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x79ff84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x79ff88: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x79ff88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ff8c: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x79ff8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x79ff90: 0x450000e6  bc1f        . + 4 + (0xE6 << 2)
    ctx->pc = 0x79FF90u;
    {
        const bool branch_taken_0x79ff90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FF90u;
        // 0x79ff94: 0xe6430040  swc1        $f3, 0x40($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ff90) {
            ctx->pc = 0x7A032Cu;
            goto label_7a032c;
        }
    }
    ctx->pc = 0x79FF98u;
    // 0x79ff98: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x79ff98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x79ff9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79FF9Cu;
    {
        const bool branch_taken_0x79ff9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FF9Cu;
        // 0x79ffa0: 0xe64c0040  swc1        $f12, 0x40($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ff9c) {
            ctx->pc = 0x79FFB4u;
            goto label_79ffb4;
        }
    }
    ctx->pc = 0x79FFA4u;
    // 0x79ffa4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x79ffa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x79ffa8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79ffa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79ffac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79FFACu;
    {
        const bool branch_taken_0x79ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ffac) {
            ctx->pc = 0x79FFC4u;
            goto label_79ffc4;
        }
    }
    ctx->pc = 0x79FFB4u;
label_79ffb4:
    // 0x79ffb4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x79ffb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x79ffb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79ffb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79ffbc: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x79ffbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x79ffc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79ffc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_79ffc4:
    // 0x79ffc4: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79FFC4u;
    SET_GPR_U32(ctx, 31, 0x79FFCCu);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79FFC4u, 0x79FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FFCCu;
label_79ffcc:
    // 0x79ffcc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79ffccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x79ffd0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x79ffd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x79ffd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x79ffd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ffd8: 0x0  nop
    ctx->pc = 0x79ffd8u;
    // NOP
    // 0x79ffdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79ffdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79ffe0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79ffe4: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x79ffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x79ffe8: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x79FFE8u;
    {
        const bool branch_taken_0x79ffe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FFE8u;
        // 0x79ffec: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ffe8) {
            ctx->pc = 0x7A032Cu;
            goto label_7a032c;
        }
    }
    ctx->pc = 0x79FFF0u;
label_79fff0:
    // 0x79fff0: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x79fff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x79fff4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x79FFF4u;
    {
        const bool branch_taken_0x79fff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79fff4) {
            ctx->pc = 0x79FFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79FFF4u;
            // 0x79fff8: 0xc641000c  lwc1        $f1, 0xC($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A0028u;
            goto label_7a0028;
        }
    }
    ctx->pc = 0x79FFFCu;
    // 0x79fffc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x79fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7a0000: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x7a0000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x7a0004: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7a0004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x7a0008: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7a0008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7a000c: 0x0  nop
    ctx->pc = 0x7a000cu;
    // NOP
    // 0x7a0010: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x7a0010u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x7a0014: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7a0014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7a0018: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7a0018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7a001c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x7a001cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7a0020: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x7a0020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x7a0024: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x7a0024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_7a0028:
    // 0x7a0028: 0x3c013c83  lui         $at, 0x3C83
    ctx->pc = 0x7a0028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15491 << 16));
    // 0x7a002c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x7a002cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x7a0030: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7a0030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7a0034: 0x0  nop
    ctx->pc = 0x7a0034u;
    // NOP
    // 0x7a0038: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x7a0038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x7a003c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7a003cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7a0040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7a0040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7a0044: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x7a0044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7a0048: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x7a0048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x7a004c: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x7a004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x7a0050: 0xda440020  lqc2        $vf4, 0x20($s2)
    ctx->pc = 0x7a0050u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x7a0054: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x7a0054u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a0058: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x7a0058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x7a005c: 0xfa440020  sqc2        $vf4, 0x20($s2)
    ctx->pc = 0x7a005cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a0060: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x7a0060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7a0064: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7a0064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7a0068: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7a0068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7a006c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x7a006cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7a0070: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x7a0070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x7a0074: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x7a0074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7a0078: 0x0  nop
    ctx->pc = 0x7a0078u;
    // NOP
    // 0x7a007c: 0x450000ab  bc1f        . + 4 + (0xAB << 2)
    ctx->pc = 0x7A007Cu;
    {
        const bool branch_taken_0x7a007c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7A0080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A007Cu;
        // 0x7a0080: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a007c) {
            ctx->pc = 0x7A032Cu;
            goto label_7a032c;
        }
    }
    ctx->pc = 0x7A0084u;
    // 0x7a0084: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7a0084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7a0088: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x7A0088u;
    {
        const bool branch_taken_0x7a0088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0088u;
        // 0x7a008c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0088) {
            ctx->pc = 0x7A032Cu;
            goto label_7a032c;
        }
    }
    ctx->pc = 0x7A0090u;
label_7a0090:
    // 0x7a0090: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x7a0090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x7a0094: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7a0094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x7a0098: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7a0098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x7a009c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7a009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7a00a0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x7a00a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x7a00a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7a00a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x7a00a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7a00a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7a00ac: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x7a00acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x7a00b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7a00b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7a00b4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x7a00b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x7a00b8: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x7a00b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x7a00bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x7a00bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x7a00c0: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x7a00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x7a00c4: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x7A00C4u;
    SET_GPR_U32(ctx, 31, 0x7A00CCu);
    ctx->pc = 0x7A00C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A00C4u;
    // 0x7a00c8: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x7A00C4u, 0x7A00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A00CCu;
label_7a00cc:
    // 0x7a00cc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x7a00ccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x7a00d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x7a00d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x7a00d4: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x7A00D4u;
    SET_GPR_U32(ctx, 31, 0x7A00DCu);
    ctx->pc = 0x7A00D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A00D4u;
    // 0x7a00d8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x7A00D4u, 0x7A00DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A00DCu;
label_7a00dc:
    // 0x7a00dc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x7a00dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x7a00e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x7a00e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x7a00e4: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x7A00E4u;
    SET_GPR_U32(ctx, 31, 0x7A00ECu);
    ctx->pc = 0x7A00E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A00E4u;
    // 0x7a00e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x7A00E4u, 0x7A00ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A00ECu;
label_7a00ec:
    // 0x7a00ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7a00ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7a00f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7a00f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7a00f4: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x7a00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x7a00f8: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x7a00f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x7a00fc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7a00fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x7a0100: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x7a0100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x7a0104: 0x105d0005  beq         $v0, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x7A0104u;
    {
        const bool branch_taken_0x7a0104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x7A0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0104u;
        // 0x7a0108: 0xe7b60004  swc1        $f22, 0x4($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0104) {
            ctx->pc = 0x7A011Cu;
            goto label_7a011c;
        }
    }
    ctx->pc = 0x7A010Cu;
    // 0x7a010c: 0xe6570080  swc1        $f23, 0x80($s2)
    ctx->pc = 0x7a010cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x7a0110: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x7a0110u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x7a0114: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x7a0114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7a0118: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7a0118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_7a011c:
    // 0x7a011c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x7a011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7a0120: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x7a0120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_7a0124:
    // 0x7a0124: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x7a0124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x7a0128: 0xda440020  lqc2        $vf4, 0x20($s2)
    ctx->pc = 0x7a0128u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x7a012c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x7a012cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a0130: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x7a0130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x7a0134: 0xfa440020  sqc2        $vf4, 0x20($s2)
    ctx->pc = 0x7a0134u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a0138: 0xc6440040  lwc1        $f4, 0x40($s2)
    ctx->pc = 0x7a0138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x7a013c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x7a013cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x7a0140: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x7a0140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x7a0144: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x7a0144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x7a0148: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x7a0148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x7a014c: 0x46043841  sub.s       $f1, $f7, $f4
    ctx->pc = 0x7a014cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x7a0150: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x7a0150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7a0154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7a0154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7a0158: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x7a0158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x7a015c: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x7a015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7a0160: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x7a0160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x7a0164: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x7a0164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x7a0168: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7a0168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7a016c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x7a016cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x7a0170: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x7a0170u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x7a0174: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x7a0174u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x7a0178: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x7a0178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7a017c: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x7a017cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x7a0180: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x7a0180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x7a0184: 0x45000069  bc1f        . + 4 + (0x69 << 2)
    ctx->pc = 0x7A0184u;
    {
        const bool branch_taken_0x7a0184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7A0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0184u;
        // 0x7a0188: 0xe6440040  swc1        $f4, 0x40($s2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0184) {
            ctx->pc = 0x7A032Cu;
            goto label_7a032c;
        }
    }
    ctx->pc = 0x7A018Cu;
    // 0x7a018c: 0x92420091  lbu         $v0, 0x91($s2)
    ctx->pc = 0x7a018cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
    // 0x7a0190: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x7A0190u;
    {
        const bool branch_taken_0x7a0190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0190u;
        // 0x7a0194: 0xe6470040  swc1        $f7, 0x40($s2) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0190) {
            ctx->pc = 0x7A0328u;
            goto label_7a0328;
        }
    }
    ctx->pc = 0x7A0198u;
    // 0x7a0198: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x7A0198u;
    {
        const bool branch_taken_0x7a0198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0198u;
        // 0x7a019c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0198) {
            ctx->pc = 0x7A01E8u;
            goto label_7a01e8;
        }
    }
    ctx->pc = 0x7A01A0u;
label_7a01a0:
    // 0x7a01a0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x7a01a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x7a01a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7a01a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7a01a8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7a01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7a01ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7a01acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7a01b0: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x7a01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x7a01b4: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x7a01b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x7a01b8: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x7a01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x7a01bc: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x7a01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
label_7a01c0:
    // 0x7a01c0: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x7a01c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7a01c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7a01c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7a01c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7a01c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7a01cc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x7a01ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7a01d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x7a01d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x7a01d4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x7a01d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7a01d8: 0x0  nop
    ctx->pc = 0x7a01d8u;
    // NOP
    // 0x7a01dc: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x7A01DCu;
    {
        const bool branch_taken_0x7a01dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7A01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A01DCu;
        // 0x7a01e0: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a01dc) {
            ctx->pc = 0x7A032Cu;
            goto label_7a032c;
        }
    }
    ctx->pc = 0x7A01E4u;
    // 0x7a01e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7a01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7a01e8:
    // 0x7a01e8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x7A01E8u;
    {
        const bool branch_taken_0x7a01e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A01E8u;
        // 0x7a01ec: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a01e8) {
            ctx->pc = 0x7A032Cu;
            goto label_7a032c;
        }
    }
    ctx->pc = 0x7A01F0u;
label_7a01f0:
    // 0x7a01f0: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x7a01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7a01f4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x7a01f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x7a01f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7a01f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x7a01fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7a01fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7a0200: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x7a0200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7a0204: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x7a0204u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x7a0208: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x7a0208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x7a020c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x7a020cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x7a0210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7a0210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7a0214: 0x0  nop
    ctx->pc = 0x7a0214u;
    // NOP
    // 0x7a0218: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x7a0218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x7a021c: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x7a021cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x7a0220: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7a0220u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7a0224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7a0224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7a0228: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x7a0228u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7a022c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x7a022cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7a0230: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x7a0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7a0234: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x7a0234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7a0238: 0x0  nop
    ctx->pc = 0x7a0238u;
    // NOP
    // 0x7a023c: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x7A023Cu;
    {
        const bool branch_taken_0x7a023c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7A0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A023Cu;
        // 0x7a0240: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a023c) {
            ctx->pc = 0x7A032Cu;
            goto label_7a032c;
        }
    }
    ctx->pc = 0x7A0244u;
    // 0x7a0244: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x7a0244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7a0248: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x7a0248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x7a024c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x7a024cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7a0250: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x7a0250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x7a0254: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a0254u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a0258: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7a0258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a025c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7a025cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a0260: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x7a0260u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7a0264: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x7a0264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x7a0268: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7a0268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a026c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x7a026cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7a0270: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7a0270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a0274: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x7a0274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7a0278: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x7a0278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x7a027c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x7a027cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x7a0280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7a0280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7a0284: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x7a0284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x7a0288: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x7a0288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x7a028c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7a028cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7a0290: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x7a0290u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x7a0294: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x7A0294u;
    SET_GPR_U32(ctx, 31, 0x7A029Cu);
    ctx->pc = 0x7A0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A0294u;
    // 0x7a0298: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x7A0294u, 0x7A029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A029Cu;
label_7a029c:
    // 0x7a029c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7a029cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7a02a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7a02a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7a02a4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x7a02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7a02a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x7a02a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x7a02ac: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x7a02acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x7a02b0: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x7a02b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x7a02b4: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x7a02b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x7a02b8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x7a02b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7a02bc: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x7a02bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a02c0: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x7a02c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a02c4: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x7a02c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7a02c8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x7a02c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x7a02cc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x7a02ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a02d0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a02d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a02d4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7a02d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a02d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x7a02d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x7a02dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7a02dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7a02e0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x7a02e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a02e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7a02e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a02e8: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x7a02e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x7a02ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7a02ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a02f0: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x7A02F0u;
    SET_GPR_U32(ctx, 31, 0x7A02F8u);
    ctx->pc = 0x7A02F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A02F0u;
    // 0x7a02f4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x7A02F0u, 0x7A02F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A02F8u;
label_7a02f8:
    // 0x7a02f8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7a02f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7a02fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7a02fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7a0300: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7a0300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7a0304: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x7a0304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x7a0308: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7a0308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7a030c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7a030cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7a0310: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7a0310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a0314: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7A0314u;
    SET_GPR_U32(ctx, 31, 0x7A031Cu);
    ctx->pc = 0x7A0318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A0314u;
    // 0x7a0318: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7A0314u, 0x7A031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A031Cu;
label_7a031c:
    // 0x7a031c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7a031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7a0320: 0xe6540040  swc1        $f20, 0x40($s2)
    ctx->pc = 0x7a0320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x7a0324: 0xa2430092  sb          $v1, 0x92($s2)
    ctx->pc = 0x7a0324u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 146), (uint8_t)GPR_U32(ctx, 3));
label_7a0328:
    // 0x7a0328: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x7a0328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_7a032c:
    // 0x7a032c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x7a032cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7a0330: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x7a0330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7a0334: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x7a0334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7a0338: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7a0338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7a033c: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x7a033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x7a0340: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x7a0340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7a0344: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x7a0344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7a0348: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x7a0348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7a034c: 0x3e00008  jr          $ra
    ctx->pc = 0x7A034Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A034Cu;
        // 0x7a0350: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A034Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A0354u;
    // 0x7a0354: 0x0  nop
    ctx->pc = 0x7a0354u;
    // NOP
    ctx->pc = 0x7a0358u;
}
} // namespace gh_r501
