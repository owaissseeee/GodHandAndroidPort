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

// Function: func_00224090
// Address: 0x224090 - 0x224a28
void func_00224090_0x224090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00224090_0x224090");
#endif

    switch (ctx->pc) {
        case 0x224144u: goto label_224144;
        case 0x224178u: goto label_224178;
        case 0x2241acu: goto label_2241ac;
        case 0x2241f8u: goto label_2241f8;
        case 0x224218u: goto label_224218;
        case 0x22423cu: goto label_22423c;
        case 0x224268u: goto label_224268;
        case 0x224288u: goto label_224288;
        case 0x2242a8u: goto label_2242a8;
        case 0x2242e0u: goto label_2242e0;
        case 0x2242fcu: goto label_2242fc;
        case 0x224314u: goto label_224314;
        case 0x224334u: goto label_224334;
        case 0x22433cu: goto label_22433c;
        case 0x224364u: goto label_224364;
        case 0x224370u: goto label_224370;
        case 0x224380u: goto label_224380;
        case 0x2243a4u: goto label_2243a4;
        case 0x224468u: goto label_224468;
        case 0x2244a0u: goto label_2244a0;
        case 0x2244d8u: goto label_2244d8;
        case 0x2244f4u: goto label_2244f4;
        case 0x224560u: goto label_224560;
        case 0x2245d8u: goto label_2245d8;
        case 0x2245ecu: goto label_2245ec;
        case 0x224638u: goto label_224638;
        case 0x2246b0u: goto label_2246b0;
        case 0x2246c4u: goto label_2246c4;
        case 0x224720u: goto label_224720;
        case 0x224730u: goto label_224730;
        case 0x224744u: goto label_224744;
        case 0x224790u: goto label_224790;
        case 0x2247fcu: goto label_2247fc;
        case 0x224834u: goto label_224834;
        case 0x224840u: goto label_224840;
        case 0x224888u: goto label_224888;
        case 0x2248a0u: goto label_2248a0;
        case 0x2248b0u: goto label_2248b0;
        case 0x2248fcu: goto label_2248fc;
        case 0x224948u: goto label_224948;
        case 0x224968u: goto label_224968;
        case 0x224984u: goto label_224984;
        case 0x224994u: goto label_224994;
        case 0x2249a8u: goto label_2249a8;
        case 0x2249b4u: goto label_2249b4;
        case 0x2249bcu: goto label_2249bc;
        default: break;
    }

    ctx->pc = 0x224090u;

    // 0x224090: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x224090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x224094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22409c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x22409cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2240a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2240a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2240a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2240a8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2240a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2240ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2240acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2240b0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2240b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2240b4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2240b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2240b8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2240b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2240bc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2240bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2240c0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2240c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2240c4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2240c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2240c8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2240c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2240cc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2240ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2240d0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2240d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2240d4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2240d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2240d8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2240d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2240dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2240dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2240e0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2240e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2240e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2240e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2240e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2240e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2240ec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2240ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2240f0: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x2240f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2240f4: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x2240f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x2240f8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2240f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2240fc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2240fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x224100: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x224100u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x224104: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x224104u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x224108: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x224108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x22410c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x22410cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x224110: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x224110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x224114: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x224114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224118: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x224118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22411c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224120: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x224120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x224124: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x224124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x224128: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x224128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22412c: 0xae2216d4  sw          $v0, 0x16D4($s1)
    ctx->pc = 0x22412cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    // 0x224130: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x224130u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x224134: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x224134u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x224138: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x224138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x22413c: 0xc098a84  jal         func_262A10
    ctx->pc = 0x22413Cu;
    SET_GPR_U32(ctx, 31, 0x224144u);
    ctx->pc = 0x224140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22413Cu;
    // 0x224140: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x22413Cu, 0x224144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224144u;
label_224144:
    // 0x224144: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x224144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x224148: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x224148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x22414c: 0x10400219  beqz        $v0, . + 4 + (0x219 << 2)
    ctx->pc = 0x22414Cu;
    {
        const bool branch_taken_0x22414c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22414Cu;
        // 0x224150: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22414c) {
            ctx->pc = 0x2249B4u;
            goto label_2249b4;
        }
    }
    ctx->pc = 0x224154u;
    // 0x224154: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224158: 0x24428420  addiu       $v0, $v0, -0x7BE0
    ctx->pc = 0x224158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935584));
    // 0x22415c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224160: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224164: 0x800008  jr          $a0
    ctx->pc = 0x224164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22416Cu: goto label_22416c;
            case 0x22430Cu: goto label_22430c;
            case 0x224378u: goto label_224378;
            case 0x2244D0u: goto label_2244d0;
            case 0x2248A8u: goto label_2248a8;
            case 0x22497Cu: goto label_22497c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224164u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22416Cu;
label_22416c:
    // 0x22416c: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x22416cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x224170: 0xc09d91a  jal         func_276468
    ctx->pc = 0x224170u;
    SET_GPR_U32(ctx, 31, 0x224178u);
    ctx->pc = 0x224174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224170u;
    // 0x224174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x224170u, 0x224178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224178u;
label_224178:
    // 0x224178: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x224178u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22417c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x22417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x224180: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x224180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x224184: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x224184u;
    {
        const bool branch_taken_0x224184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224184u;
        // 0x224188: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224184) {
            ctx->pc = 0x224220u;
            goto label_224220;
        }
    }
    ctx->pc = 0x22418Cu;
    // 0x22418c: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x22418Cu;
    {
        const bool branch_taken_0x22418c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22418Cu;
        // 0x224190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22418c) {
            ctx->pc = 0x224270u;
            goto label_224270;
        }
    }
    ctx->pc = 0x224194u;
    // 0x224194: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x224194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x224198: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22419c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x22419cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2241a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2241a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241a4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2241A4u;
    SET_GPR_U32(ctx, 31, 0x2241ACu);
    ctx->pc = 0x2241A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241A4u;
    // 0x2241a8: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2241A4u, 0x2241ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241ACu;
label_2241ac:
    // 0x2241ac: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x2241acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2241b0: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2241b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2241b4: 0x8ce30950  lw          $v1, 0x950($a3)
    ctx->pc = 0x2241b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2384)));
    // 0x2241b8: 0x8ce40954  lw          $a0, 0x954($a3)
    ctx->pc = 0x2241b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2388)));
    // 0x2241bc: 0x2442fdb0  addiu       $v0, $v0, -0x250
    ctx->pc = 0x2241bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x2241c0: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x2241c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2241c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2241c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2241c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2241C8u;
    {
        const bool branch_taken_0x2241c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241C8u;
        // 0x2241cc: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241c8) {
            ctx->pc = 0x2241D8u;
            goto label_2241d8;
        }
    }
    ctx->pc = 0x2241D0u;
    // 0x2241d0: 0x8ce20958  lw          $v0, 0x958($a3)
    ctx->pc = 0x2241d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2392)));
    // 0x2241d4: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x2241d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2241d8:
    // 0x2241d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2241d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2241dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2241dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2241e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241e4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2241e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2241e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241ec: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2241ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2241f0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2241F0u;
    SET_GPR_U32(ctx, 31, 0x2241F8u);
    ctx->pc = 0x2241F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241F0u;
    // 0x2241f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2241F0u, 0x2241F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241F8u;
label_2241f8:
    // 0x2241f8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2241f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2241fc: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x2241fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x224200: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x224200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x224204: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x224204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224208: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x224208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22420c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22420cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224210: 0xc0c194a  jal         func_306528
    ctx->pc = 0x224210u;
    SET_GPR_U32(ctx, 31, 0x224218u);
    ctx->pc = 0x224214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224210u;
    // 0x224214: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x224210u, 0x224218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224218u;
label_224218:
    // 0x224218: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x224218u;
    {
        const bool branch_taken_0x224218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224218u;
        // 0x22421c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224218) {
            ctx->pc = 0x224300u;
            goto label_224300;
        }
    }
    ctx->pc = 0x224220u;
label_224220:
    // 0x224220: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x224220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x224224: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x224224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x224228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22422c: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x22422cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x224230: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x224230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224234: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x224234u;
    SET_GPR_U32(ctx, 31, 0x22423Cu);
    ctx->pc = 0x224238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224234u;
    // 0x224238: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x224234u, 0x22423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22423Cu;
label_22423c:
    // 0x22423c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224240: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x224240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224244: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x224244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22424c: 0x8c453104  lw          $a1, 0x3104($v0)
    ctx->pc = 0x22424cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12548)));
    // 0x224250: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x224250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x224254: 0x8c463108  lw          $a2, 0x3108($v0)
    ctx->pc = 0x224254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12552)));
    // 0x224258: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x224258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22425c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22425cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x224260: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x224260u;
    SET_GPR_U32(ctx, 31, 0x224268u);
    ctx->pc = 0x224264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224260u;
    // 0x224264: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x224260u, 0x224268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224268u;
label_224268:
    // 0x224268: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x224268u;
    {
        const bool branch_taken_0x224268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224268u;
        // 0x22426c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224268) {
            ctx->pc = 0x224300u;
            goto label_224300;
        }
    }
    ctx->pc = 0x224270u;
label_224270:
    // 0x224270: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x224270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x224274: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x224274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x224278: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x224278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x22427c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22427cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224280: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x224280u;
    SET_GPR_U32(ctx, 31, 0x224288u);
    ctx->pc = 0x224284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224280u;
    // 0x224284: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x224280u, 0x224288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224288u;
label_224288:
    // 0x224288: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x224288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22428c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22428cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x224290: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x224290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x224294: 0x8c433298  lw          $v1, 0x3298($v0)
    ctx->pc = 0x224294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12952)));
    // 0x224298: 0x8c45329c  lw          $a1, 0x329C($v0)
    ctx->pc = 0x224298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12956)));
    // 0x22429c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22429cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2242a0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2242A0u;
    SET_GPR_U32(ctx, 31, 0x2242A8u);
    ctx->pc = 0x2242A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2242A0u;
    // 0x2242a4: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2242A0u, 0x2242A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242A8u;
label_2242a8:
    // 0x2242a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2242a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2242ac: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2242ACu;
    {
        const bool branch_taken_0x2242ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2242ac) {
            ctx->pc = 0x2242C0u;
            goto label_2242c0;
        }
    }
    ctx->pc = 0x2242B4u;
    // 0x2242b4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2242b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2242b8: 0x8c6232a0  lw          $v0, 0x32A0($v1)
    ctx->pc = 0x2242b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12960)));
    // 0x2242bc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2242bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2242c0:
    // 0x2242c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2242c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2242c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2242c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2242c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2242ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242d0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2242d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242d4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2242d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2242d8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2242D8u;
    SET_GPR_U32(ctx, 31, 0x2242E0u);
    ctx->pc = 0x2242DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2242D8u;
    // 0x2242dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2242D8u, 0x2242E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242E0u;
label_2242e0:
    // 0x2242e0: 0x8e240740  lw          $a0, 0x740($s1)
    ctx->pc = 0x2242e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1856)));
    // 0x2242e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2242E4u;
    {
        const bool branch_taken_0x2242e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2242e4) {
            ctx->pc = 0x2242E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2242E4u;
            // 0x2242e8: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224300u;
            goto label_224300;
        }
    }
    ctx->pc = 0x2242ECu;
    // 0x2242ec: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2242ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2242f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2242f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2242f4: 0xc09f744  jal         func_27DD10
    ctx->pc = 0x2242F4u;
    SET_GPR_U32(ctx, 31, 0x2242FCu);
    ctx->pc = 0x27DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD10u, 0x2242F4u, 0x2242FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242FCu;
label_2242fc:
    // 0x2242fc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2242fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_224300:
    // 0x224300: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x224300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x224304: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224308: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x224308u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22430c:
    // 0x22430c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22430Cu;
    SET_GPR_U32(ctx, 31, 0x224314u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22430Cu, 0x224314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224314u;
label_224314:
    // 0x224314: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x224314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22431c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x224320: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x224320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x224324: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x224324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224328: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x224328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22432c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22432Cu;
    SET_GPR_U32(ctx, 31, 0x224334u);
    ctx->pc = 0x224330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22432Cu;
    // 0x224330: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22432Cu, 0x224334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224334u;
label_224334:
    // 0x224334: 0xc055f06  jal         func_157C18
    ctx->pc = 0x224334u;
    SET_GPR_U32(ctx, 31, 0x22433Cu);
    ctx->pc = 0x224338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224334u;
    // 0x224338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x224334u, 0x22433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22433Cu;
label_22433c:
    // 0x22433c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22433Cu;
    {
        const bool branch_taken_0x22433c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22433c) {
            ctx->pc = 0x224350u;
            goto label_224350;
        }
    }
    ctx->pc = 0x224344u;
    // 0x224344: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x224344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x224348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22434c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22434cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_224350:
    // 0x224350: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224354: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22435c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22435Cu;
    SET_GPR_U32(ctx, 31, 0x224364u);
    ctx->pc = 0x224360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22435Cu;
    // 0x224360: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22435Cu, 0x224364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224364u;
label_224364:
    // 0x224364: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x224364u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x224368: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x224368u;
    SET_GPR_U32(ctx, 31, 0x224370u);
    ctx->pc = 0x22436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224368u;
    // 0x22436c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x224368u, 0x224370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224370u;
label_224370:
    // 0x224370: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x224370u;
    {
        const bool branch_taken_0x224370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224370) {
            ctx->pc = 0x2249B4u;
            goto label_2249b4;
        }
    }
    ctx->pc = 0x224378u;
label_224378:
    // 0x224378: 0xc09d91a  jal         func_276468
    ctx->pc = 0x224378u;
    SET_GPR_U32(ctx, 31, 0x224380u);
    ctx->pc = 0x22437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224378u;
    // 0x22437c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x224378u, 0x224380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224380u;
label_224380:
    // 0x224380: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x224380u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x224384: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x224384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x224388: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x224388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x22438c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x22438Cu;
    {
        const bool branch_taken_0x22438c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22438Cu;
        // 0x224390: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22438c) {
            ctx->pc = 0x224434u;
            goto label_224434;
        }
    }
    ctx->pc = 0x224394u;
    // 0x224394: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x224394u;
    {
        const bool branch_taken_0x224394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224394u;
        // 0x224398: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224394) {
            ctx->pc = 0x22444Cu;
            goto label_22444c;
        }
    }
    ctx->pc = 0x22439Cu;
    // 0x22439c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22439Cu;
    SET_GPR_U32(ctx, 31, 0x2243A4u);
    ctx->pc = 0x2243A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22439Cu;
    // 0x2243a0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22439Cu, 0x2243A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243A4u;
label_2243a4:
    // 0x2243a4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2243a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2243a8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2243a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2243ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2243ACu;
    {
        const bool branch_taken_0x2243ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243ACu;
        // 0x2243b0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243ac) {
            ctx->pc = 0x2243CCu;
            goto label_2243cc;
        }
    }
    ctx->pc = 0x2243B4u;
    // 0x2243b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2243b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2243b8: 0x24428440  addiu       $v0, $v0, -0x7BC0
    ctx->pc = 0x2243b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935616));
    // 0x2243bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2243bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2243c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2243c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2243c4: 0x800008  jr          $a0
    ctx->pc = 0x2243C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2243CCu: goto label_2243cc;
            case 0x2243E0u: goto label_2243e0;
            case 0x2243F4u: goto label_2243f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2243C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2243CCu;
label_2243cc:
    // 0x2243cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2243ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2243d0: 0x8c44095c  lw          $a0, 0x95C($v0)
    ctx->pc = 0x2243d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2396)));
    // 0x2243d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2243d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2243d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2243D8u;
    {
        const bool branch_taken_0x2243d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243D8u;
        // 0x2243dc: 0x8c430960  lw          $v1, 0x960($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243d8) {
            ctx->pc = 0x224404u;
            goto label_224404;
        }
    }
    ctx->pc = 0x2243E0u;
label_2243e0:
    // 0x2243e0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2243e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2243e4: 0x8c44095c  lw          $a0, 0x95C($v0)
    ctx->pc = 0x2243e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2396)));
    // 0x2243e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2243e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2243ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2243ECu;
    {
        const bool branch_taken_0x2243ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243ECu;
        // 0x2243f0: 0x8c430964  lw          $v1, 0x964($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243ec) {
            ctx->pc = 0x224404u;
            goto label_224404;
        }
    }
    ctx->pc = 0x2243F4u;
label_2243f4:
    // 0x2243f4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2243f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2243f8: 0x8c44095c  lw          $a0, 0x95C($v0)
    ctx->pc = 0x2243f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2396)));
    // 0x2243fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2243fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224400: 0x8c430968  lw          $v1, 0x968($v0)
    ctx->pc = 0x224400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_224404:
    // 0x224404: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x224404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x224408: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x224408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22440c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x22440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x224410: 0x2442fdb0  addiu       $v0, $v0, -0x250
    ctx->pc = 0x224410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x224414: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x224414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x224418: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x224418u;
    {
        const bool branch_taken_0x224418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224418) {
            ctx->pc = 0x224480u;
            goto label_224480;
        }
    }
    ctx->pc = 0x224420u;
    // 0x224420: 0x8ce2095c  lw          $v0, 0x95C($a3)
    ctx->pc = 0x224420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2396)));
    // 0x224424: 0x8ce30968  lw          $v1, 0x968($a3)
    ctx->pc = 0x224424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
    // 0x224428: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x224428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22442c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22442Cu;
    {
        const bool branch_taken_0x22442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22442Cu;
        // 0x224430: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22442c) {
            ctx->pc = 0x224480u;
            goto label_224480;
        }
    }
    ctx->pc = 0x224434u;
label_224434:
    // 0x224434: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x224434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224438: 0x8c43310c  lw          $v1, 0x310C($v0)
    ctx->pc = 0x224438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12556)));
    // 0x22443c: 0x8c443110  lw          $a0, 0x3110($v0)
    ctx->pc = 0x22443cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12560)));
    // 0x224440: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x224440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224444: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x224444u;
    {
        const bool branch_taken_0x224444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224444u;
        // 0x224448: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224444) {
            ctx->pc = 0x224480u;
            goto label_224480;
        }
    }
    ctx->pc = 0x22444Cu;
label_22444c:
    // 0x22444c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224450: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x224450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x224454: 0x8c4332a4  lw          $v1, 0x32A4($v0)
    ctx->pc = 0x224454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12964)));
    // 0x224458: 0x8c4532a8  lw          $a1, 0x32A8($v0)
    ctx->pc = 0x224458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12968)));
    // 0x22445c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22445cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224460: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x224460u;
    SET_GPR_U32(ctx, 31, 0x224468u);
    ctx->pc = 0x224464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224460u;
    // 0x224464: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x224460u, 0x224468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224468u;
label_224468:
    // 0x224468: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x224468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22446c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22446Cu;
    {
        const bool branch_taken_0x22446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22446c) {
            ctx->pc = 0x224480u;
            goto label_224480;
        }
    }
    ctx->pc = 0x224474u;
    // 0x224474: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x224474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224478: 0x8c6232ac  lw          $v0, 0x32AC($v1)
    ctx->pc = 0x224478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12972)));
    // 0x22447c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22447cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224480:
    // 0x224480: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x224480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224484: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x224484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224488: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x224488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22448c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22448cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224494: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x224494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224498: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x224498u;
    SET_GPR_U32(ctx, 31, 0x2244A0u);
    ctx->pc = 0x22449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224498u;
    // 0x22449c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x224498u, 0x2244A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244A0u;
label_2244a0:
    // 0x2244a0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2244a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2244a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2244a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2244a8: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x2244a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x2244ac: 0x34214ff3  ori         $at, $at, 0x4FF3
    ctx->pc = 0x2244acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20467);
    // 0x2244b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2244b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2244b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2244b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2244b8: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x2244b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x2244bc: 0xe62005d8  swc1        $f0, 0x5D8($s1)
    ctx->pc = 0x2244bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1496), bits); }
    // 0x2244c0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2244c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2244c4: 0xae2005f4  sw          $zero, 0x5F4($s1)
    ctx->pc = 0x2244c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
    // 0x2244c8: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x2244c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x2244cc: 0xe62005d4  swc1        $f0, 0x5D4($s1)
    ctx->pc = 0x2244ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1492), bits); }
label_2244d0:
    // 0x2244d0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2244D0u;
    SET_GPR_U32(ctx, 31, 0x2244D8u);
    ctx->pc = 0x2244D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244D0u;
    // 0x2244d4: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2244D0u, 0x2244D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244D8u;
label_2244d8:
    // 0x2244d8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2244d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2244dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2244dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244e0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2244e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2244e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2244e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2244e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2244e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2244ec: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2244ECu;
    SET_GPR_U32(ctx, 31, 0x2244F4u);
    ctx->pc = 0x2244F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244ECu;
    // 0x2244f0: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2244ECu, 0x2244F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244F4u;
label_2244f4:
    // 0x2244f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2244f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2244f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2244f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2244fc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2244fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224500: 0x0  nop
    ctx->pc = 0x224500u;
    // NOP
    // 0x224504: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x224504u;
    {
        const bool branch_taken_0x224504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224504) {
            ctx->pc = 0x224508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224504u;
            // 0x224508: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22450Cu;
            goto label_22450c;
        }
    }
    ctx->pc = 0x22450Cu;
label_22450c:
    // 0x22450c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x22450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x224510: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x224510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x224514: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x224514u;
    {
        const bool branch_taken_0x224514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224514u;
        // 0x224518: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224514) {
            ctx->pc = 0x2245F4u;
            goto label_2245f4;
        }
    }
    ctx->pc = 0x22451Cu;
    // 0x22451c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22451cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x224520: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x224520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x224524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224528: 0x0  nop
    ctx->pc = 0x224528u;
    // NOP
    // 0x22452c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22452cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224530: 0x0  nop
    ctx->pc = 0x224530u;
    // NOP
    // 0x224534: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x224534u;
    {
        const bool branch_taken_0x224534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224534u;
        // 0x224538: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224534) {
            ctx->pc = 0x2246C8u;
            goto label_2246c8;
        }
    }
    ctx->pc = 0x22453Cu;
    // 0x22453c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x22453cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x224540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224544: 0x0  nop
    ctx->pc = 0x224544u;
    // NOP
    // 0x224548: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22454c: 0x0  nop
    ctx->pc = 0x22454cu;
    // NOP
    // 0x224550: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
    ctx->pc = 0x224550u;
    {
        const bool branch_taken_0x224550 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224550u;
        // 0x224554: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224550) {
            ctx->pc = 0x2246D0u;
            goto label_2246d0;
        }
    }
    ctx->pc = 0x224558u;
    // 0x224558: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x224558u;
    SET_GPR_U32(ctx, 31, 0x224560u);
    ctx->pc = 0x22455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224558u;
    // 0x22455c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x224558u, 0x224560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224560u;
label_224560:
    // 0x224560: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x224560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x224564: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x224564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x224568: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224568u;
    {
        const bool branch_taken_0x224568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224568u;
        // 0x22456c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224568) {
            ctx->pc = 0x224588u;
            goto label_224588;
        }
    }
    ctx->pc = 0x224570u;
    // 0x224570: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224574: 0x24428460  addiu       $v0, $v0, -0x7BA0
    ctx->pc = 0x224574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935648));
    // 0x224578: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22457c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22457cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224580: 0x800008  jr          $a0
    ctx->pc = 0x224580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224588u: goto label_224588;
            case 0x22459Cu: goto label_22459c;
            case 0x2245B0u: goto label_2245b0;
            case 0x2245C4u: goto label_2245c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224580u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224588u;
label_224588:
    // 0x224588: 0x3c013c49  lui         $at, 0x3C49
    ctx->pc = 0x224588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15433 << 16));
    // 0x22458c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22458cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x224590: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224594: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x224594u;
    {
        const bool branch_taken_0x224594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224594) {
            ctx->pc = 0x2245D0u;
            goto label_2245d0;
        }
    }
    ctx->pc = 0x22459Cu;
label_22459c:
    // 0x22459c: 0x3c013cc9  lui         $at, 0x3CC9
    ctx->pc = 0x22459cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15561 << 16));
    // 0x2245a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2245a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2245a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2245a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2245a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2245A8u;
    {
        const bool branch_taken_0x2245a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2245a8) {
            ctx->pc = 0x2245D0u;
            goto label_2245d0;
        }
    }
    ctx->pc = 0x2245B0u;
label_2245b0:
    // 0x2245b0: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x2245b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x2245b4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2245b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2245b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2245b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2245bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2245BCu;
    {
        const bool branch_taken_0x2245bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2245bc) {
            ctx->pc = 0x2245D0u;
            goto label_2245d0;
        }
    }
    ctx->pc = 0x2245C4u;
label_2245c4:
    // 0x2245c4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2245c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2245c8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2245c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2245cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2245ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2245d0:
    // 0x2245d0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2245D0u;
    SET_GPR_U32(ctx, 31, 0x2245D8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2245D0u, 0x2245D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245D8u;
label_2245d8:
    // 0x2245d8: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x2245d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2245dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2245dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2245e0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2245e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2245e4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2245E4u;
    SET_GPR_U32(ctx, 31, 0x2245ECu);
    ctx->pc = 0x2245E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245E4u;
    // 0x2245e8: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2245E4u, 0x2245ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245ECu;
label_2245ec:
    // 0x2245ec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2245ECu;
    {
        const bool branch_taken_0x2245ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2245F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245ECu;
        // 0x2245f0: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245ec) {
            ctx->pc = 0x2246C8u;
            goto label_2246c8;
        }
    }
    ctx->pc = 0x2245F4u;
label_2245f4:
    // 0x2245f4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2245f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x2245f8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2245f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2245fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2245fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224600: 0x0  nop
    ctx->pc = 0x224600u;
    // NOP
    // 0x224604: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x224604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224608: 0x0  nop
    ctx->pc = 0x224608u;
    // NOP
    // 0x22460c: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x22460Cu;
    {
        const bool branch_taken_0x22460c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22460Cu;
        // 0x224610: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22460c) {
            ctx->pc = 0x2246C8u;
            goto label_2246c8;
        }
    }
    ctx->pc = 0x224614u;
    // 0x224614: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x224614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x224618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22461c: 0x0  nop
    ctx->pc = 0x22461cu;
    // NOP
    // 0x224620: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224624: 0x0  nop
    ctx->pc = 0x224624u;
    // NOP
    // 0x224628: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x224628u;
    {
        const bool branch_taken_0x224628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224628u;
        // 0x22462c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224628) {
            ctx->pc = 0x2246D0u;
            goto label_2246d0;
        }
    }
    ctx->pc = 0x224630u;
    // 0x224630: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x224630u;
    SET_GPR_U32(ctx, 31, 0x224638u);
    ctx->pc = 0x224634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224630u;
    // 0x224634: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x224630u, 0x224638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224638u;
label_224638:
    // 0x224638: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x224638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22463c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22463cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x224640: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224640u;
    {
        const bool branch_taken_0x224640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224640u;
        // 0x224644: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224640) {
            ctx->pc = 0x224660u;
            goto label_224660;
        }
    }
    ctx->pc = 0x224648u;
    // 0x224648: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22464c: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x22464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x224650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224654: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224658: 0x800008  jr          $a0
    ctx->pc = 0x224658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224660u: goto label_224660;
            case 0x224674u: goto label_224674;
            case 0x224688u: goto label_224688;
            case 0x22469Cu: goto label_22469c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224658u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224660u;
label_224660:
    // 0x224660: 0x3c013cc9  lui         $at, 0x3CC9
    ctx->pc = 0x224660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15561 << 16));
    // 0x224664: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x224664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x224668: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22466c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22466Cu;
    {
        const bool branch_taken_0x22466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22466c) {
            ctx->pc = 0x2246A8u;
            goto label_2246a8;
        }
    }
    ctx->pc = 0x224674u;
label_224674:
    // 0x224674: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x224674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x224678: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x224678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22467c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22467cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224680: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x224680u;
    {
        const bool branch_taken_0x224680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224680) {
            ctx->pc = 0x2246A8u;
            goto label_2246a8;
        }
    }
    ctx->pc = 0x224688u;
label_224688:
    // 0x224688: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x224688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22468c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22468cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x224690: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224694: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x224694u;
    {
        const bool branch_taken_0x224694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224694) {
            ctx->pc = 0x2246A8u;
            goto label_2246a8;
        }
    }
    ctx->pc = 0x22469Cu;
label_22469c:
    // 0x22469c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22469cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2246a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2246a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2246a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2246a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2246a8:
    // 0x2246a8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2246A8u;
    SET_GPR_U32(ctx, 31, 0x2246B0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2246A8u, 0x2246B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246B0u;
label_2246b0:
    // 0x2246b0: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x2246b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2246b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2246b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246b8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2246b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2246bc: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2246BCu;
    SET_GPR_U32(ctx, 31, 0x2246C4u);
    ctx->pc = 0x2246C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246BCu;
    // 0x2246c0: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2246BCu, 0x2246C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246C4u;
label_2246c4:
    // 0x2246c4: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2246c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2246c8:
    // 0x2246c8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2246c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2246cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2246ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2246d0:
    // 0x2246d0: 0x0  nop
    ctx->pc = 0x2246d0u;
    // NOP
    // 0x2246d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2246d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2246d8: 0x0  nop
    ctx->pc = 0x2246d8u;
    // NOP
    // 0x2246dc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2246DCu;
    {
        const bool branch_taken_0x2246dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2246dc) {
            ctx->pc = 0x2246E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2246DCu;
            // 0x2246e0: 0x8e220670  lw          $v0, 0x670($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224700u;
            goto label_224700;
        }
    }
    ctx->pc = 0x2246E4u;
    // 0x2246e4: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x2246e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x2246e8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2246e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2246ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2246ECu;
    {
        const bool branch_taken_0x2246ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2246ec) {
            ctx->pc = 0x2246F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2246ECu;
            // 0x2246f0: 0x8e220670  lw          $v0, 0x670($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224700u;
            goto label_224700;
        }
    }
    ctx->pc = 0x2246F4u;
    // 0x2246f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2246f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2246f8: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x2246f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x2246fc: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x2246fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_224700:
    // 0x224700: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x224700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x224704: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x224704u;
    {
        const bool branch_taken_0x224704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x224708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224704u;
        // 0x224708: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224704) {
            ctx->pc = 0x224710u;
            goto label_224710;
        }
    }
    ctx->pc = 0x22470Cu;
    // 0x22470c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22470cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_224710:
    // 0x224710: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x224710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x224714: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x224714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x224718: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x224718u;
    SET_GPR_U32(ctx, 31, 0x224720u);
    ctx->pc = 0x22471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224718u;
    // 0x22471c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x224718u, 0x224720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224720u;
label_224720:
    // 0x224720: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224720u;
    {
        const bool branch_taken_0x224720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224720u;
        // 0x224724: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224720) {
            ctx->pc = 0x224738u;
            goto label_224738;
        }
    }
    ctx->pc = 0x224728u;
    // 0x224728: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x224728u;
    SET_GPR_U32(ctx, 31, 0x224730u);
    ctx->pc = 0x22472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224728u;
    // 0x22472c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x224728u, 0x224730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224730u;
label_224730:
    // 0x224730: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x224730u;
    {
        const bool branch_taken_0x224730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224730u;
        // 0x224734: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224730) {
            ctx->pc = 0x22473Cu;
            goto label_22473c;
        }
    }
    ctx->pc = 0x224738u;
label_224738:
    // 0x224738: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x224738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22473c:
    // 0x22473c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22473Cu;
    SET_GPR_U32(ctx, 31, 0x224744u);
    ctx->pc = 0x224740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22473Cu;
    // 0x224740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22473Cu, 0x224744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224744u;
label_224744:
    // 0x224744: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x224744u;
    {
        const bool branch_taken_0x224744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224744) {
            ctx->pc = 0x224748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224744u;
            // 0x224748: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2247CCu;
            goto label_2247cc;
        }
    }
    ctx->pc = 0x22474Cu;
    // 0x22474c: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x22474cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x224750: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x224750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x224754: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224754u;
    {
        const bool branch_taken_0x224754 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x224758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224754u;
        // 0x224758: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224754) {
            ctx->pc = 0x224764u;
            goto label_224764;
        }
    }
    ctx->pc = 0x22475Cu;
    // 0x22475c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x224760: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x224760u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_224764:
    // 0x224764: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x224764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x224768: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x224768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22476c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22476Cu;
    {
        const bool branch_taken_0x22476c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22476Cu;
        // 0x224770: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22476c) {
            ctx->pc = 0x2247C8u;
            goto label_2247c8;
        }
    }
    ctx->pc = 0x224774u;
    // 0x224774: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x224774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x224778: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224778u;
    {
        const bool branch_taken_0x224778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224778u;
        // 0x22477c: 0x24020245  addiu       $v0, $zero, 0x245 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224778) {
            ctx->pc = 0x224788u;
            goto label_224788;
        }
    }
    ctx->pc = 0x224780u;
    // 0x224780: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x224780u;
    {
        const bool branch_taken_0x224780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x224784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224780u;
        // 0x224784: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224780) {
            ctx->pc = 0x2247D0u;
            goto label_2247d0;
        }
    }
    ctx->pc = 0x224788u;
label_224788:
    // 0x224788: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x224788u;
    SET_GPR_U32(ctx, 31, 0x224790u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x224788u, 0x224790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224790u;
label_224790:
    // 0x224790: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x224790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224794: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x224794u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x224798: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x224798u;
    {
        const bool branch_taken_0x224798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x224798) {
            ctx->pc = 0x22479Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224798u;
            // 0x22479c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2247A0u;
            goto label_2247a0;
        }
    }
    ctx->pc = 0x2247A0u;
label_2247a0:
    // 0x2247a0: 0x2010  mfhi        $a0
    ctx->pc = 0x2247a0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2247a4: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2247A4u;
    {
        const bool branch_taken_0x2247a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2247a4) {
            ctx->pc = 0x2247A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2247A4u;
            // 0x2247a8: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2247CCu;
            goto label_2247cc;
        }
    }
    ctx->pc = 0x2247ACu;
    // 0x2247ac: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x2247acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2247b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2247b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2247b4: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x2247b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x2247b8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x2247b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x2247bc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x2247bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2247c0: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2247C0u;
    {
        const bool branch_taken_0x2247c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247C0u;
        // 0x2247c4: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247c0) {
            ctx->pc = 0x224A04u;
            goto label_224a04;
        }
    }
    ctx->pc = 0x2247C8u;
label_2247c8:
    // 0x2247c8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2247c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2247cc:
    // 0x2247cc: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x2247ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_2247d0:
    // 0x2247d0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2247D0u;
    {
        const bool branch_taken_0x2247d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2247d0) {
            ctx->pc = 0x224820u;
            goto label_224820;
        }
    }
    ctx->pc = 0x2247D8u;
    // 0x2247d8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2247d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2247dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2247dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2247e0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2247e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2247e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2247e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2247e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2247e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2247ec: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2247ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2247f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2247f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2247f4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2247F4u;
    SET_GPR_U32(ctx, 31, 0x2247FCu);
    ctx->pc = 0x2247F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247F4u;
    // 0x2247f8: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2247F4u, 0x2247FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247FCu;
label_2247fc:
    // 0x2247fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2247fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x224800: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x224800u;
    {
        const bool branch_taken_0x224800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x224800) {
            ctx->pc = 0x224820u;
            goto label_224820;
        }
    }
    ctx->pc = 0x224808u;
    // 0x224808: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x224808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22480c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22480cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x224810: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x224810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x224814: 0x0  nop
    ctx->pc = 0x224814u;
    // NOP
    // 0x224818: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x224818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22481c: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x22481cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_224820:
    // 0x224820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224824: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22482c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22482Cu;
    SET_GPR_U32(ctx, 31, 0x224834u);
    ctx->pc = 0x224830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22482Cu;
    // 0x224830: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22482Cu, 0x224834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224834u;
label_224834:
    // 0x224834: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x224834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x224838: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x224838u;
    SET_GPR_U32(ctx, 31, 0x224840u);
    ctx->pc = 0x22483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224838u;
    // 0x22483c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x224838u, 0x224840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224840u;
label_224840:
    // 0x224840: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x224840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x224844: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x224844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x224848: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224848u;
    {
        const bool branch_taken_0x224848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224848u;
        // 0x22484c: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224848) {
            ctx->pc = 0x224868u;
            goto label_224868;
        }
    }
    ctx->pc = 0x224850u;
    // 0x224850: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224850u;
    {
        const bool branch_taken_0x224850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x224850) {
            ctx->pc = 0x224878u;
            goto label_224878;
        }
    }
    ctx->pc = 0x224858u;
    // 0x224858: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x224858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22485c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22485cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224860: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x224860u;
    {
        const bool branch_taken_0x224860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224860) {
            ctx->pc = 0x224880u;
            goto label_224880;
        }
    }
    ctx->pc = 0x224868u;
label_224868:
    // 0x224868: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x224868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x22486c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22486cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224870: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x224870u;
    {
        const bool branch_taken_0x224870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224870) {
            ctx->pc = 0x224880u;
            goto label_224880;
        }
    }
    ctx->pc = 0x224878u;
label_224878:
    // 0x224878: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x224878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x22487c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22487cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_224880:
    // 0x224880: 0xc09d622  jal         func_275888
    ctx->pc = 0x224880u;
    SET_GPR_U32(ctx, 31, 0x224888u);
    ctx->pc = 0x224884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224880u;
    // 0x224884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275888u, 0x224880u, 0x224888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224888u;
label_224888:
    // 0x224888: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x224888u;
    {
        const bool branch_taken_0x224888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224888u;
        // 0x22488c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224888) {
            ctx->pc = 0x224894u;
            goto label_224894;
        }
    }
    ctx->pc = 0x224890u;
    // 0x224890: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x224890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_224894:
    // 0x224894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224898: 0xc0989d4  jal         func_262750
    ctx->pc = 0x224898u;
    SET_GPR_U32(ctx, 31, 0x2248A0u);
    ctx->pc = 0x22489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224898u;
    // 0x22489c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x224898u, 0x2248A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248A0u;
label_2248a0:
    // 0x2248a0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2248A0u;
    {
        const bool branch_taken_0x2248a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2248a0) {
            ctx->pc = 0x2249B4u;
            goto label_2249b4;
        }
    }
    ctx->pc = 0x2248A8u;
label_2248a8:
    // 0x2248a8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2248A8u;
    SET_GPR_U32(ctx, 31, 0x2248B0u);
    ctx->pc = 0x2248ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2248A8u;
    // 0x2248ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2248A8u, 0x2248B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248B0u;
label_2248b0:
    // 0x2248b0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2248b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2248b4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2248b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2248b8: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x2248b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x2248bc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2248BCu;
    {
        const bool branch_taken_0x2248bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2248C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248BCu;
        // 0x2248c0: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248bc) {
            ctx->pc = 0x224904u;
            goto label_224904;
        }
    }
    ctx->pc = 0x2248C4u;
    // 0x2248c4: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2248C4u;
    {
        const bool branch_taken_0x2248c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2248C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248C4u;
        // 0x2248c8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248c4) {
            ctx->pc = 0x22491Cu;
            goto label_22491c;
        }
    }
    ctx->pc = 0x2248CCu;
    // 0x2248cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2248ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2248d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2248d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2248d4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2248d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2248d8: 0x8c43096c  lw          $v1, 0x96C($v0)
    ctx->pc = 0x2248d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2412)));
    // 0x2248dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2248dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2248e0: 0x8c4a0970  lw          $t2, 0x970($v0)
    ctx->pc = 0x2248e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2416)));
    // 0x2248e4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2248e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2248e8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2248e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2248ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2248ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2248f0: 0x1428021  addu        $s0, $t2, $v0
    ctx->pc = 0x2248f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2248f4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2248F4u;
    SET_GPR_U32(ctx, 31, 0x2248FCu);
    ctx->pc = 0x2248F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2248F4u;
    // 0x2248f8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2248F4u, 0x2248FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248FCu;
label_2248fc:
    // 0x2248fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2248FCu;
    {
        const bool branch_taken_0x2248fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2248fc) {
            ctx->pc = 0x224948u;
            goto label_224948;
        }
    }
    ctx->pc = 0x224904u;
label_224904:
    // 0x224904: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x224904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224908: 0x8c433114  lw          $v1, 0x3114($v0)
    ctx->pc = 0x224908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12564)));
    // 0x22490c: 0x8c443118  lw          $a0, 0x3118($v0)
    ctx->pc = 0x22490cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12568)));
    // 0x224910: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x224910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224914: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x224914u;
    {
        const bool branch_taken_0x224914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224914u;
        // 0x224918: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224914) {
            ctx->pc = 0x224948u;
            goto label_224948;
        }
    }
    ctx->pc = 0x22491Cu;
label_22491c:
    // 0x22491c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x22491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224920: 0x8e270740  lw          $a3, 0x740($s1)
    ctx->pc = 0x224920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1856)));
    // 0x224924: 0x8c4332b0  lw          $v1, 0x32B0($v0)
    ctx->pc = 0x224924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12976)));
    // 0x224928: 0x8c4432b4  lw          $a0, 0x32B4($v0)
    ctx->pc = 0x224928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12980)));
    // 0x22492c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22492cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224930: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x224930u;
    {
        const bool branch_taken_0x224930 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x224934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224930u;
        // 0x224934: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224930) {
            ctx->pc = 0x224948u;
            goto label_224948;
        }
    }
    ctx->pc = 0x224938u;
    // 0x224938: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x224938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22493c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22493cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224940: 0xc09f744  jal         func_27DD10
    ctx->pc = 0x224940u;
    SET_GPR_U32(ctx, 31, 0x224948u);
    ctx->pc = 0x224944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224940u;
    // 0x224944: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD10u, 0x224940u, 0x224948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224948u;
label_224948:
    // 0x224948: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x224948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22494c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22494cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224950: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x224950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224954: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x224954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22495c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22495cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224960: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x224960u;
    SET_GPR_U32(ctx, 31, 0x224968u);
    ctx->pc = 0x224964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224960u;
    // 0x224964: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x224960u, 0x224968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224968u;
label_224968:
    // 0x224968: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x224968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22496c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x224970: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x224970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x224974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224978: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x224978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22497c:
    // 0x22497c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22497Cu;
    SET_GPR_U32(ctx, 31, 0x224984u);
    ctx->pc = 0x224980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22497Cu;
    // 0x224980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22497Cu, 0x224984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224984u;
label_224984:
    // 0x224984: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224984u;
    {
        const bool branch_taken_0x224984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224984) {
            ctx->pc = 0x224994u;
            goto label_224994;
        }
    }
    ctx->pc = 0x22498Cu;
    // 0x22498c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22498Cu;
    SET_GPR_U32(ctx, 31, 0x224994u);
    ctx->pc = 0x224990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22498Cu;
    // 0x224990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22498Cu, 0x224994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224994u;
label_224994:
    // 0x224994: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224998: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22499c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2249a0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2249A0u;
    SET_GPR_U32(ctx, 31, 0x2249A8u);
    ctx->pc = 0x2249A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249A0u;
    // 0x2249a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2249A0u, 0x2249A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249A8u;
label_2249a8:
    // 0x2249a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2249a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2249ac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2249ACu;
    SET_GPR_U32(ctx, 31, 0x2249B4u);
    ctx->pc = 0x2249B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249ACu;
    // 0x2249b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2249ACu, 0x2249B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249B4u;
label_2249b4:
    // 0x2249b4: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x2249B4u;
    SET_GPR_U32(ctx, 31, 0x2249BCu);
    ctx->pc = 0x2249B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249B4u;
    // 0x2249b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x2249B4u, 0x2249BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249BCu;
label_2249bc:
    // 0x2249bc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2249bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2249c0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2249c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2249c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2249C4u;
    {
        const bool branch_taken_0x2249c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2249C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249C4u;
        // 0x2249c8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2249c4) {
            ctx->pc = 0x2249E4u;
            goto label_2249e4;
        }
    }
    ctx->pc = 0x2249CCu;
    // 0x2249cc: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2249ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2249d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2249d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2249d4: 0xae2316f8  sw          $v1, 0x16F8($s1)
    ctx->pc = 0x2249d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5880), GPR_U32(ctx, 3));
    // 0x2249d8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2249d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2249dc: 0xae2405fc  sw          $a0, 0x5FC($s1)
    ctx->pc = 0x2249dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 4));
    // 0x2249e0: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x2249e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_2249e4:
    // 0x2249e4: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x2249e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x2249e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2249E8u;
    {
        const bool branch_taken_0x2249e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2249ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249E8u;
        // 0x2249ec: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2249e8) {
            ctx->pc = 0x224A08u;
            goto label_224a08;
        }
    }
    ctx->pc = 0x2249F0u;
    // 0x2249f0: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x2249f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2249f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2249f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2249f8: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x2249f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2249fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2249fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x224a00: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x224a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_224a04:
    // 0x224a04: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x224a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_224a08:
    // 0x224a08: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x224a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x224a0c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x224a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x224a10: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x224a10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x224a14: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x224a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x224a18: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x224a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x224a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x224A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A1Cu;
        // 0x224a20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224A24u;
    // 0x224a24: 0x0  nop
    ctx->pc = 0x224a24u;
    // NOP
    ctx->pc = 0x224a28u;
}
