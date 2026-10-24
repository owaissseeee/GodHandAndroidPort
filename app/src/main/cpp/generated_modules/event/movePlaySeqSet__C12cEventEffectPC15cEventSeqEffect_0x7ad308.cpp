#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlaySeqSet__C12cEventEffectPC15cEventSeqEffect
// Address: 0x7ad308 - 0x7ad4f8
void movePlaySeqSet__C12cEventEffectPC15cEventSeqEffect_0x7ad308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySeqSet__C12cEventEffectPC15cEventSeqEffect_0x7ad308");
#endif

    switch (ctx->pc) {
        case 0x7ad32cu: goto label_7ad32c;
        case 0x7ad420u: goto label_7ad420;
        case 0x7ad4e4u: goto label_7ad4e4;
        default: break;
    }

    ctx->pc = 0x7ad308u;

    // 0x7ad308: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7ad308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7ad30c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ad30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ad310: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x7ad310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x7ad314: 0x248458d8  addiu       $a0, $a0, 0x58D8
    ctx->pc = 0x7ad314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    // 0x7ad318: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x7ad318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x7ad31c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7ad31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad320: 0x9206000a  lbu         $a2, 0xA($s0)
    ctx->pc = 0x7ad320u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x7ad324: 0xc1ec10e  jal         func_7B0438
    ctx->pc = 0x7AD324u;
    SET_GPR_U32(ctx, 31, 0x7AD32Cu);
    ctx->pc = 0x7AD328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD324u;
    // 0x7ad328: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0438u, 0x7AD324u, 0x7AD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD32Cu;
label_7ad32c:
    // 0x7ad32c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7ad32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad330: 0x3c03007b  lui         $v1, 0x7B
    ctx->pc = 0x7ad330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)123 << 16));
    // 0x7ad334: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x7ad334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7ad338: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x7ad338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x7ad33c: 0x92040012  lbu         $a0, 0x12($s0)
    ctx->pc = 0x7ad33cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x7ad340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7ad340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7ad344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ad344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ad348: 0x14800066  bnez        $a0, . + 4 + (0x66 << 2)
    ctx->pc = 0x7AD348u;
    {
        const bool branch_taken_0x7ad348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD348u;
        // 0x7ad34c: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad348) {
            ctx->pc = 0x7AD4E4u;
            goto label_7ad4e4;
        }
    }
    ctx->pc = 0x7AD350u;
    // 0x7ad350: 0x92050013  lbu         $a1, 0x13($s0)
    ctx->pc = 0x7ad350u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x7ad354: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x7ad354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x7ad358: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7AD358u;
    {
        const bool branch_taken_0x7ad358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ad358) {
            ctx->pc = 0x7AD43Cu;
            goto label_7ad43c;
        }
    }
    ctx->pc = 0x7AD360u;
    // 0x7ad360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ad360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ad364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ad364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ad368: 0x0  nop
    ctx->pc = 0x7ad368u;
    // NOP
    // 0x7ad36c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x7ad36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x7ad370: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x7ad370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x7ad374: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7ad374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x7ad378: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x7ad378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x7ad37c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x7ad37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7ad380: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x7ad380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7ad384: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x7ad384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x7ad388: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x7ad388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7ad38c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x7ad38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x7ad390: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x7ad390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ad394: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x7ad394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x7ad398: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x7ad398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7ad39c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7ad39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x7ad3a0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x7ad3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x7ad3a4: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x7ad3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x7ad3a8: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x7ad3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x7ad3ac: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x7ad3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x7ad3b0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x7ad3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x7ad3b4: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x7ad3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ad3b8: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x7ad3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ad3bc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x7ad3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x7ad3c0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x7ad3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7ad3c4: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x7ad3c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x7ad3c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7ad3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7ad3cc: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x7ad3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x7ad3d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x7ad3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad3d4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x7ad3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7ad3d8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x7ad3d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x7ad3dc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x7ad3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ad3e0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x7ad3e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad3e4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x7ad3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ad3e8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x7ad3e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x7ad3ec: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x7ad3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7ad3f0: 0x92080011  lbu         $t0, 0x11($s0)
    ctx->pc = 0x7ad3f0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x7ad3f4: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x7ad3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x7ad3f8: 0xa3a2004c  sb          $v0, 0x4C($sp)
    ctx->pc = 0x7ad3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x7ad3fc: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x7ad3fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x7ad400: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x7ad400u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x7ad404: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x7ad404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x7ad408: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x7ad408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x7ad40c: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x7ad40cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x7ad410: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x7ad410u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x7ad414: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x7ad414u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ad418: 0xc0c194a  jal         func_306528
    ctx->pc = 0x7AD418u;
    SET_GPR_U32(ctx, 31, 0x7AD420u);
    ctx->pc = 0x7AD41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD418u;
    // 0x7ad41c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x7AD418u, 0x7AD420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD420u;
label_7ad420:
    // 0x7ad420: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x7ad420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x7ad424: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x7ad424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x7ad428: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x7AD428u;
    {
        const bool branch_taken_0x7ad428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD428u;
        // 0x7ad42c: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad428) {
            ctx->pc = 0x7AD4E4u;
            goto label_7ad4e4;
        }
    }
    ctx->pc = 0x7AD430u;
    // 0x7ad430: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x7ad430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x7ad434: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x7AD434u;
    {
        const bool branch_taken_0x7ad434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD434u;
        // 0x7ad438: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad434) {
            ctx->pc = 0x7AD4E4u;
            goto label_7ad4e4;
        }
    }
    ctx->pc = 0x7AD43Cu;
label_7ad43c:
    // 0x7ad43c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ad43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ad440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ad440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ad444: 0x0  nop
    ctx->pc = 0x7ad444u;
    // NOP
    // 0x7ad448: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x7ad448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x7ad44c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x7ad44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x7ad450: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7ad450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x7ad454: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x7ad454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x7ad458: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x7ad458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7ad45c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x7ad45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7ad460: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x7ad460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7ad464: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x7ad464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x7ad468: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x7ad468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x7ad46c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x7ad46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ad470: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x7ad470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x7ad474: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x7ad474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7ad478: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7ad478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x7ad47c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x7ad47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x7ad480: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x7ad480u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x7ad484: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x7ad484u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x7ad488: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x7ad488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x7ad48c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x7ad48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x7ad490: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x7ad490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ad494: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x7ad494u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ad498: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x7ad498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x7ad49c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x7ad49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7ad4a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7ad4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7ad4a4: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x7ad4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x7ad4a8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x7ad4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x7ad4ac: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x7ad4acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x7ad4b0: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x7ad4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x7ad4b4: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x7ad4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ad4b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AD4B8u;
    {
        const bool branch_taken_0x7ad4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD4B8u;
        // 0x7ad4bc: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad4b8) {
            ctx->pc = 0x7AD4C8u;
            goto label_7ad4c8;
        }
    }
    ctx->pc = 0x7AD4C0u;
    // 0x7ad4c0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7ad4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7ad4c4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x7ad4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_7ad4c8:
    // 0x7ad4c8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x7ad4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x7ad4cc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x7ad4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad4d0: 0x92080011  lbu         $t0, 0x11($s0)
    ctx->pc = 0x7ad4d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x7ad4d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x7ad4d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad4d8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x7ad4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7ad4dc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x7AD4DCu;
    SET_GPR_U32(ctx, 31, 0x7AD4E4u);
    ctx->pc = 0x7AD4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD4DCu;
    // 0x7ad4e0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x7AD4DCu, 0x7AD4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD4E4u;
label_7ad4e4:
    // 0x7ad4e4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x7ad4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7ad4e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x7ad4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7ad4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD4ECu;
        // 0x7ad4f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD4F4u;
    // 0x7ad4f4: 0x0  nop
    ctx->pc = 0x7ad4f4u;
    // NOP
    ctx->pc = 0x7ad4f8u;
}
} // namespace gh_event
