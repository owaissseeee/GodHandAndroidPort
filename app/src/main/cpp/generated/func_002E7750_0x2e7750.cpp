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

// Function: func_002E7750
// Address: 0x2e7750 - 0x2e7e10
void func_002E7750_0x2e7750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E7750_0x2e7750");
#endif

    switch (ctx->pc) {
        case 0x2e7884u: goto label_2e7884;
        case 0x2e7944u: goto label_2e7944;
        case 0x2e7a3cu: goto label_2e7a3c;
        case 0x2e7ae4u: goto label_2e7ae4;
        case 0x2e7b04u: goto label_2e7b04;
        case 0x2e7d78u: goto label_2e7d78;
        case 0x2e7de0u: goto label_2e7de0;
        case 0x2e7decu: goto label_2e7dec;
        default: break;
    }

    ctx->pc = 0x2e7750u;

    // 0x2e7750: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2e7750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2e7754: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2e7754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2e7758: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e7758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e775c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2e775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2e7760: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2e7760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2e7764: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2e7764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2e7768: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e7768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e776c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2e776cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2e7770: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2e7770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e7774: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2e7774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e7778: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2e7778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e777c: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x2e777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2e7780: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e7780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e7784: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2e7784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2e7788: 0x9482016c  lhu         $v0, 0x16C($a0)
    ctx->pc = 0x2e7788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x2e778c: 0xa62202b0  sh          $v0, 0x2B0($s1)
    ctx->pc = 0x2e778cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 688), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7790: 0x94830170  lhu         $v1, 0x170($a0)
    ctx->pc = 0x2e7790u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x2e7794: 0xa62302b2  sh          $v1, 0x2B2($s1)
    ctx->pc = 0x2e7794u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7798: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x2e7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x2e779c: 0xae2202e0  sw          $v0, 0x2E0($s1)
    ctx->pc = 0x2e779cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
    // 0x2e77a0: 0x8c830178  lw          $v1, 0x178($a0)
    ctx->pc = 0x2e77a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x2e77a4: 0xae2302e4  sw          $v1, 0x2E4($s1)
    ctx->pc = 0x2e77a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 3));
    // 0x2e77a8: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2e77a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e77ac: 0xe62002b8  swc1        $f0, 0x2B8($s1)
    ctx->pc = 0x2e77acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 696), bits); }
    // 0x2e77b0: 0xc4810140  lwc1        $f1, 0x140($a0)
    ctx->pc = 0x2e77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e77b4: 0xe62102d0  swc1        $f1, 0x2D0($s1)
    ctx->pc = 0x2e77b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2e77b8: 0xc4800144  lwc1        $f0, 0x144($a0)
    ctx->pc = 0x2e77b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e77bc: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2e77bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2e77c0: 0xc4810154  lwc1        $f1, 0x154($a0)
    ctx->pc = 0x2e77c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e77c4: 0xe62102d8  swc1        $f1, 0x2D8($s1)
    ctx->pc = 0x2e77c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2e77c8: 0xc4800158  lwc1        $f0, 0x158($a0)
    ctx->pc = 0x2e77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e77cc: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2e77ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2e77d0: 0x9082018c  lbu         $v0, 0x18C($a0)
    ctx->pc = 0x2e77d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x2e77d4: 0xa22202c4  sb          $v0, 0x2C4($s1)
    ctx->pc = 0x2e77d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 708), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e77d8: 0x9083018d  lbu         $v1, 0x18D($a0)
    ctx->pc = 0x2e77d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 397)));
    // 0x2e77dc: 0xa22302c5  sb          $v1, 0x2C5($s1)
    ctx->pc = 0x2e77dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 709), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e77e0: 0x9082018e  lbu         $v0, 0x18E($a0)
    ctx->pc = 0x2e77e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 398)));
    // 0x2e77e4: 0xa22202c6  sb          $v0, 0x2C6($s1)
    ctx->pc = 0x2e77e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 710), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e77e8: 0x9083018f  lbu         $v1, 0x18F($a0)
    ctx->pc = 0x2e77e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 399)));
    // 0x2e77ec: 0xa22302c7  sb          $v1, 0x2C7($s1)
    ctx->pc = 0x2e77ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 711), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e77f0: 0x90820190  lbu         $v0, 0x190($a0)
    ctx->pc = 0x2e77f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x2e77f4: 0xa22202c8  sb          $v0, 0x2C8($s1)
    ctx->pc = 0x2e77f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 712), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e77f8: 0x90830191  lbu         $v1, 0x191($a0)
    ctx->pc = 0x2e77f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 401)));
    // 0x2e77fc: 0xa22302c9  sb          $v1, 0x2C9($s1)
    ctx->pc = 0x2e77fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 713), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7800: 0x90820192  lbu         $v0, 0x192($a0)
    ctx->pc = 0x2e7800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 402)));
    // 0x2e7804: 0xa22202ca  sb          $v0, 0x2CA($s1)
    ctx->pc = 0x2e7804u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 714), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e7808: 0x90830193  lbu         $v1, 0x193($a0)
    ctx->pc = 0x2e7808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 403)));
    // 0x2e780c: 0xa22302cd  sb          $v1, 0x2CD($s1)
    ctx->pc = 0x2e780cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 717), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7810: 0x90820194  lbu         $v0, 0x194($a0)
    ctx->pc = 0x2e7810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x2e7814: 0xde2502c0  ld          $a1, 0x2C0($s1)
    ctx->pc = 0x2e7814u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2e7818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e7818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e781c: 0xa22202cf  sb          $v0, 0x2CF($s1)
    ctx->pc = 0x2e781cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 719), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e7820: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2e7820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2e7824: 0x90820196  lbu         $v0, 0x196($a0)
    ctx->pc = 0x2e7824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 406)));
    // 0x2e7828: 0xa22202cc  sb          $v0, 0x2CC($s1)
    ctx->pc = 0x2e7828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 716), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e782c: 0x90830197  lbu         $v1, 0x197($a0)
    ctx->pc = 0x2e782cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 407)));
    // 0x2e7830: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E7830u;
    {
        const bool branch_taken_0x2e7830 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7830u;
        // 0x2e7834: 0xa22302cb  sb          $v1, 0x2CB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 715), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7830) {
            ctx->pc = 0x2E7868u;
            goto label_2e7868;
        }
    }
    ctx->pc = 0x2E7838u;
    // 0x2e7838: 0xde2202c8  ld          $v0, 0x2C8($s1)
    ctx->pc = 0x2e7838u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 712)));
    // 0x2e783c: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x2e783cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2e7840: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2e7840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2e7844: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x2e7844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2e7848: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2e7848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2e784c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e7850: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7850u;
    {
        const bool branch_taken_0x2e7850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7850) {
            ctx->pc = 0x2E7854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7850u;
            // 0x2e7854: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E786Cu;
            goto label_2e786c;
        }
    }
    ctx->pc = 0x2E7858u;
    // 0x2e7858: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e7858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e785c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7860: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2E7860u;
    {
        const bool branch_taken_0x2e7860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7860u;
        // 0x2e7864: 0x24a5e5d0  addiu       $a1, $a1, -0x1A30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7860) {
            ctx->pc = 0x2E7A34u;
            goto label_2e7a34;
        }
    }
    ctx->pc = 0x2E7868u;
label_2e7868:
    // 0x2e7868: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2e7868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2e786c:
    // 0x2e786c: 0x80430195  lb          $v1, 0x195($v0)
    ctx->pc = 0x2e786cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 405)));
    // 0x2e7870: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7870u;
    {
        const bool branch_taken_0x2e7870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7870) {
            ctx->pc = 0x2E7874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7870u;
            // 0x2e7874: 0x822202cf  lb          $v0, 0x2CF($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 719)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E788Cu;
            goto label_2e788c;
        }
    }
    ctx->pc = 0x2E7878u;
    // 0x2e7878: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e7878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e787c: 0xc0b64fa  jal         func_2D93E8
    ctx->pc = 0x2E787Cu;
    SET_GPR_U32(ctx, 31, 0x2E7884u);
    ctx->pc = 0x2E7880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E787Cu;
    // 0x2e7880: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D93E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D93E8u, 0x2E787Cu, 0x2E7884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7884u;
label_2e7884:
    // 0x2e7884: 0xa62202b2  sh          $v0, 0x2B2($s1)
    ctx->pc = 0x2e7884u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7888: 0x822202cf  lb          $v0, 0x2CF($s1)
    ctx->pc = 0x2e7888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 719)));
label_2e788c:
    // 0x2e788c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E788Cu;
    {
        const bool branch_taken_0x2e788c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E7890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E788Cu;
        // 0x2e7890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e788c) {
            ctx->pc = 0x2E789Cu;
            goto label_2e789c;
        }
    }
    ctx->pc = 0x2E7894u;
    // 0x2e7894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7894u;
    {
        const bool branch_taken_0x2e7894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7894u;
        // 0x2e7898: 0xa22202ce  sb          $v0, 0x2CE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 718), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7894) {
            ctx->pc = 0x2E78A0u;
            goto label_2e78a0;
        }
    }
    ctx->pc = 0x2E789Cu;
label_2e789c:
    // 0x2e789c: 0xa22002ce  sb          $zero, 0x2CE($s1)
    ctx->pc = 0x2e789cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 718), (uint8_t)GPR_U32(ctx, 0));
label_2e78a0:
    // 0x2e78a0: 0x962202b2  lhu         $v0, 0x2B2($s1)
    ctx->pc = 0x2e78a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
    // 0x2e78a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E78A4u;
    {
        const bool branch_taken_0x2e78a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e78a4) {
            ctx->pc = 0x2E78A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E78A4u;
            // 0x2e78a8: 0xde2202c8  ld          $v0, 0x2C8($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 712)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E78BCu;
            goto label_2e78bc;
        }
    }
    ctx->pc = 0x2E78ACu;
    // 0x2e78ac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e78acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e78b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e78b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78b4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2E78B4u;
    {
        const bool branch_taken_0x2e78b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78B4u;
        // 0x2e78b8: 0x24a5e5e8  addiu       $a1, $a1, -0x1A18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78b4) {
            ctx->pc = 0x2E7A34u;
            goto label_2e7a34;
        }
    }
    ctx->pc = 0x2E78BCu;
label_2e78bc:
    // 0x2e78bc: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x2e78bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2e78c0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2e78c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2e78c4: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x2e78c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2e78c8: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2e78c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2e78cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e78ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e78d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E78D0u;
    {
        const bool branch_taken_0x2e78d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78D0u;
        // 0x2e78d4: 0x8e320114  lw          $s2, 0x114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78d0) {
            ctx->pc = 0x2E78F0u;
            goto label_2e78f0;
        }
    }
    ctx->pc = 0x2E78D8u;
    // 0x2e78d8: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E78D8u;
    {
        const bool branch_taken_0x2e78d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e78d8) {
            ctx->pc = 0x2E78DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E78D8u;
            // 0x2e78dc: 0x962302b0  lhu         $v1, 0x2B0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E78F4u;
            goto label_2e78f4;
        }
    }
    ctx->pc = 0x2E78E0u;
    // 0x2e78e0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e78e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e78e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e78e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78e8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2E78E8u;
    {
        const bool branch_taken_0x2e78e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78E8u;
        // 0x2e78ec: 0x24a5e608  addiu       $a1, $a1, -0x19F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78e8) {
            ctx->pc = 0x2E7A34u;
            goto label_2e7a34;
        }
    }
    ctx->pc = 0x2E78F0u;
label_2e78f0:
    // 0x2e78f0: 0x962302b0  lhu         $v1, 0x2B0($s1)
    ctx->pc = 0x2e78f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 688)));
label_2e78f4:
    // 0x2e78f4: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2e78f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e78f8: 0x962202b2  lhu         $v0, 0x2B2($s1)
    ctx->pc = 0x2e78f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
    // 0x2e78fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e78fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7900: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x2e7900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7904: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e7904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7908: 0xc621018c  lwc1        $f1, 0x18C($s1)
    ctx->pc = 0x2e7908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e790c: 0xc6220190  lwc1        $f2, 0x190($s1)
    ctx->pc = 0x2e790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7910: 0xc62302b8  lwc1        $f3, 0x2B8($s1)
    ctx->pc = 0x2e7910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e7914: 0xae3202b4  sw          $s2, 0x2B4($s1)
    ctx->pc = 0x2e7914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 18));
    // 0x2e7918: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x2e7918u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e791c: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x2e791cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7920: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e7920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e7924: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2e7924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e7928: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2e7928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e792c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2e792cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e7930: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2e7930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2e7934: 0xafb20054  sw          $s2, 0x54($sp)
    ctx->pc = 0x2e7934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 18));
    // 0x2e7938: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2e7938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2e793c: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2E793Cu;
    SET_GPR_U32(ctx, 31, 0x2E7944u);
    ctx->pc = 0x2E7940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E793Cu;
    // 0x2e7940: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2E793Cu, 0x2E7944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7944u;
label_2e7944:
    // 0x2e7944: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2e7944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7948: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2e7948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2e794c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2e794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7950: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e7950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7954: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x2e7954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7958: 0x24437b00  addiu       $v1, $v0, 0x7B00
    ctx->pc = 0x2e7958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x2e795c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e795cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e7960: 0x262402f0  addiu       $a0, $s1, 0x2F0
    ctx->pc = 0x2e7960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    // 0x2e7964: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2e7964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e7968: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e7968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e796c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2e796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2e7970: 0xc4400148  lwc1        $f0, 0x148($v0)
    ctx->pc = 0x2e7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7974: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e7974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e7978: 0xc441014c  lwc1        $f1, 0x14C($v0)
    ctx->pc = 0x2e7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e797c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2e797cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e7980: 0xc4400150  lwc1        $f0, 0x150($v0)
    ctx->pc = 0x2e7980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7984: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7984u;
    {
        const bool branch_taken_0x2e7984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7984u;
        // 0x2e7988: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7984) {
            ctx->pc = 0x2E79A4u;
            goto label_2e79a4;
        }
    }
    ctx->pc = 0x2E798Cu;
    // 0x2e798c: 0xc6607b00  lwc1        $f0, 0x7B00($s3)
    ctx->pc = 0x2e798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 31488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7990: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x2e7990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x2e7994: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2e7994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7998: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2e7998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2e799c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e79a0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2e79a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2e79a4:
    // 0x2e79a4: 0x922202ca  lbu         $v0, 0x2CA($s1)
    ctx->pc = 0x2e79a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 714)));
    // 0x2e79a8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E79A8u;
    {
        const bool branch_taken_0x2e79a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79A8u;
        // 0x2e79ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79a8) {
            ctx->pc = 0x2E7A5Cu;
            goto label_2e7a5c;
        }
    }
    ctx->pc = 0x2E79B0u;
    // 0x2e79b0: 0x8e2302b4  lw          $v1, 0x2B4($s1)
    ctx->pc = 0x2e79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x2e79b4: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x2e79b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e79b8: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x2e79b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x2e79bc: 0xa22002c9  sb          $zero, 0x2C9($s1)
    ctx->pc = 0x2e79bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 713), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e79c0: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2e79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2e79c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e79c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e79c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e79c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e79cc: 0xc4420084  lwc1        $f2, 0x84($v0)
    ctx->pc = 0x2e79ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e79d0: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x2e79d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e79d4: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x2e79d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e79d8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e79d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e79dc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2e79dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e79e0: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2e79e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e79e4: 0x10900007  beq         $a0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E79E4u;
    {
        const bool branch_taken_0x2e79e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79E4u;
        // 0x2e79e8: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79e4) {
            ctx->pc = 0x2E7A04u;
            goto label_2e7a04;
        }
    }
    ctx->pc = 0x2E79ECu;
    // 0x2e79ec: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2e79ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e79f0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2e79f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e79f4: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x2e79f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
    // 0x2e79f8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2e79f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2e79fc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2e79fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7a00: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2e7a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2e7a04:
    // 0x2e7a04: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x2e7a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x2e7a08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7A08u;
    {
        const bool branch_taken_0x2e7a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A08u;
        // 0x2e7a0c: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a08) {
            ctx->pc = 0x2E7A1Cu;
            goto label_2e7a1c;
        }
    }
    ctx->pc = 0x2E7A10u;
    // 0x2e7a10: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x2e7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x2e7a14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7A14u;
    {
        const bool branch_taken_0x2e7a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A14u;
        // 0x2e7a18: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a14) {
            ctx->pc = 0x2E7A20u;
            goto label_2e7a20;
        }
    }
    ctx->pc = 0x2E7A1Cu;
label_2e7a1c:
    // 0x2e7a1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e7a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7a20:
    // 0x2e7a20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7A20u;
    {
        const bool branch_taken_0x2e7a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A20u;
        // 0x2e7a24: 0xae220350  sw          $v0, 0x350($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a20) {
            ctx->pc = 0x2E7A44u;
            goto label_2e7a44;
        }
    }
    ctx->pc = 0x2E7A28u;
    // 0x2e7a28: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e7a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e7a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a30: 0x24a5e620  addiu       $a1, $a1, -0x19E0
    ctx->pc = 0x2e7a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960672));
label_2e7a34:
    // 0x2e7a34: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2E7A34u;
    SET_GPR_U32(ctx, 31, 0x2E7A3Cu);
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2E7A34u, 0x2E7A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A3Cu;
label_2e7a3c:
    // 0x2e7a3c: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x2E7A3Cu;
    {
        const bool branch_taken_0x2e7a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A3Cu;
        // 0x2e7a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a3c) {
            ctx->pc = 0x2E7DF0u;
            goto label_2e7df0;
        }
    }
    ctx->pc = 0x2E7A44u;
label_2e7a44:
    // 0x2e7a44: 0x922202cc  lbu         $v0, 0x2CC($s1)
    ctx->pc = 0x2e7a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 716)));
    // 0x2e7a48: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2E7A48u;
    {
        const bool branch_taken_0x2e7a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a48) {
            ctx->pc = 0x2E7A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A48u;
            // 0x2e7a4c: 0x922202c9  lbu         $v0, 0x2C9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 713)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A74u;
            goto label_2e7a74;
        }
    }
    ctx->pc = 0x2E7A50u;
    // 0x2e7a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7a54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7A54u;
    {
        const bool branch_taken_0x2e7a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A54u;
        // 0x2e7a58: 0xa22202cc  sb          $v0, 0x2CC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 716), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a54) {
            ctx->pc = 0x2E7A70u;
            goto label_2e7a70;
        }
    }
    ctx->pc = 0x2E7A5Cu;
label_2e7a5c:
    // 0x2e7a5c: 0x922202cd  lbu         $v0, 0x2CD($s1)
    ctx->pc = 0x2e7a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 717)));
    // 0x2e7a60: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7A60u;
    {
        const bool branch_taken_0x2e7a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a60) {
            ctx->pc = 0x2E7A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A60u;
            // 0x2e7a64: 0x922202c9  lbu         $v0, 0x2C9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 713)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A74u;
            goto label_2e7a74;
        }
    }
    ctx->pc = 0x2E7A68u;
    // 0x2e7a68: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x2e7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
    // 0x2e7a6c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2e7a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_2e7a70:
    // 0x2e7a70: 0x922202c9  lbu         $v0, 0x2C9($s1)
    ctx->pc = 0x2e7a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 713)));
label_2e7a74:
    // 0x2e7a74: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E7A74u;
    {
        const bool branch_taken_0x2e7a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a74) {
            ctx->pc = 0x2E7A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A74u;
            // 0x2e7a78: 0xc62002d0  lwc1        $f0, 0x2D0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7AB4u;
            goto label_2e7ab4;
        }
    }
    ctx->pc = 0x2E7A7Cu;
    // 0x2e7a7c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2e7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2e7a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e7a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7a84: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e7a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e7a88: 0xc4420084  lwc1        $f2, 0x84($v0)
    ctx->pc = 0x2e7a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7a8c: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x2e7a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7a90: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x2e7a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7a94: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e7a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e7a98: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2e7a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e7a9c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2e7a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e7aa0: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x2e7aa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2e7aa4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e7aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e7aa8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e7aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e7aac: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2e7aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e7ab0: 0xc62002d0  lwc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2e7ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7ab4:
    // 0x2e7ab4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2e7ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2e7ab8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e7ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e7abc: 0x8e2302e0  lw          $v1, 0x2E0($s1)
    ctx->pc = 0x2e7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2e7ac0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e7ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e7ac4: 0x8e2402e4  lw          $a0, 0x2E4($s1)
    ctx->pc = 0x2e7ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
    // 0x2e7ac8: 0xc62c02d4  lwc1        $f12, 0x2D4($s1)
    ctx->pc = 0x2e7ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7acc: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x2e7accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x2e7ad0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e7ad4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e7ad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e7ad8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2e7ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2e7adc: 0xc0558fc  jal         func_1563F0
    ctx->pc = 0x2E7ADCu;
    SET_GPR_U32(ctx, 31, 0x2E7AE4u);
    ctx->pc = 0x2E7AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7ADCu;
    // 0x2e7ae0: 0xa7a2005e  sh          $v0, 0x5E($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1563F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1563F0u, 0x2E7ADCu, 0x2E7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7AE4u;
label_2e7ae4:
    // 0x2e7ae4: 0xc62002d8  lwc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2e7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7ae8: 0xc62c02dc  lwc1        $f12, 0x2DC($s1)
    ctx->pc = 0x2e7ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7aec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e7aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e7af0: 0xa7a2005c  sh          $v0, 0x5C($sp)
    ctx->pc = 0x2e7af0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7af4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7af4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e7af8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e7af8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e7afc: 0xc0558fc  jal         func_1563F0
    ctx->pc = 0x2E7AFCu;
    SET_GPR_U32(ctx, 31, 0x2E7B04u);
    ctx->pc = 0x2E7B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AFCu;
    // 0x2e7b00: 0xa3a20061  sb          $v0, 0x61($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 97), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1563F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1563F0u, 0x2E7AFCu, 0x2E7B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B04u;
label_2e7b04:
    // 0x2e7b04: 0x922302c4  lbu         $v1, 0x2C4($s1)
    ctx->pc = 0x2e7b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 708)));
    // 0x2e7b08: 0xa7a20062  sh          $v0, 0x62($sp)
    ctx->pc = 0x2e7b08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7b0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7B0Cu;
    {
        const bool branch_taken_0x2e7b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B0Cu;
        // 0x2e7b10: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b0c) {
            ctx->pc = 0x2E7B1Cu;
            goto label_2e7b1c;
        }
    }
    ctx->pc = 0x2E7B14u;
    // 0x2e7b14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e7b18: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2e7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_2e7b1c:
    // 0x2e7b1c: 0x922202c5  lbu         $v0, 0x2C5($s1)
    ctx->pc = 0x2e7b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 709)));
    // 0x2e7b20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7B20u;
    {
        const bool branch_taken_0x2e7b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B20u;
        // 0x2e7b24: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b20) {
            ctx->pc = 0x2E7B38u;
            goto label_2e7b38;
        }
    }
    ctx->pc = 0x2E7B28u;
    // 0x2e7b28: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e7b2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e7b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e7b30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7B30u;
    {
        const bool branch_taken_0x2e7b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B30u;
        // 0x2e7b34: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b30) {
            ctx->pc = 0x2E7B4Cu;
            goto label_2e7b4c;
        }
    }
    ctx->pc = 0x2E7B38u;
label_2e7b38:
    // 0x2e7b38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e7b3c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2e7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2e7b40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e7b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e7b44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e7b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e7b48: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2e7b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2e7b4c:
    // 0x2e7b4c: 0x922202c6  lbu         $v0, 0x2C6($s1)
    ctx->pc = 0x2e7b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 710)));
    // 0x2e7b50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7B50u;
    {
        const bool branch_taken_0x2e7b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B50u;
        // 0x2e7b54: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b50) {
            ctx->pc = 0x2E7B68u;
            goto label_2e7b68;
        }
    }
    ctx->pc = 0x2E7B58u;
    // 0x2e7b58: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2e7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2e7b5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e7b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e7b60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7B60u;
    {
        const bool branch_taken_0x2e7b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B60u;
        // 0x2e7b64: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b60) {
            ctx->pc = 0x2E7B7Cu;
            goto label_2e7b7c;
        }
    }
    ctx->pc = 0x2E7B68u;
label_2e7b68:
    // 0x2e7b68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e7b6c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2e7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x2e7b70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e7b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e7b74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e7b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e7b78: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2e7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2e7b7c:
    // 0x2e7b7c: 0x922202c7  lbu         $v0, 0x2C7($s1)
    ctx->pc = 0x2e7b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 711)));
    // 0x2e7b80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7B80u;
    {
        const bool branch_taken_0x2e7b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B80u;
        // 0x2e7b84: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b80) {
            ctx->pc = 0x2E7B98u;
            goto label_2e7b98;
        }
    }
    ctx->pc = 0x2E7B88u;
    // 0x2e7b88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2e7b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2e7b8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e7b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e7b90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7B90u;
    {
        const bool branch_taken_0x2e7b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B90u;
        // 0x2e7b94: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b90) {
            ctx->pc = 0x2E7BACu;
            goto label_2e7bac;
        }
    }
    ctx->pc = 0x2E7B98u;
label_2e7b98:
    // 0x2e7b98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e7b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e7b9c: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x2e7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x2e7ba0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e7ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e7ba4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e7ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e7ba8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2e7ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2e7bac:
    // 0x2e7bac: 0x922202c8  lbu         $v0, 0x2C8($s1)
    ctx->pc = 0x2e7bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 712)));
    // 0x2e7bb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7BB0u;
    {
        const bool branch_taken_0x2e7bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BB0u;
        // 0x2e7bb4: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bb0) {
            ctx->pc = 0x2E7BC8u;
            goto label_2e7bc8;
        }
    }
    ctx->pc = 0x2E7BB8u;
    // 0x2e7bb8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e7bbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e7bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e7bc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7BC0u;
    {
        const bool branch_taken_0x2e7bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BC0u;
        // 0x2e7bc4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bc0) {
            ctx->pc = 0x2E7BDCu;
            goto label_2e7bdc;
        }
    }
    ctx->pc = 0x2E7BC8u;
label_2e7bc8:
    // 0x2e7bc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e7bcc: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2e7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2e7bd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e7bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e7bd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e7bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e7bd8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2e7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2e7bdc:
    // 0x2e7bdc: 0x922202ca  lbu         $v0, 0x2CA($s1)
    ctx->pc = 0x2e7bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 714)));
    // 0x2e7be0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7BE0u;
    {
        const bool branch_taken_0x2e7be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BE0u;
        // 0x2e7be4: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7be0) {
            ctx->pc = 0x2E7BF8u;
            goto label_2e7bf8;
        }
    }
    ctx->pc = 0x2E7BE8u;
    // 0x2e7be8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2e7be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2e7bec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e7becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e7bf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7BF0u;
    {
        const bool branch_taken_0x2e7bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BF0u;
        // 0x2e7bf4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bf0) {
            ctx->pc = 0x2E7C0Cu;
            goto label_2e7c0c;
        }
    }
    ctx->pc = 0x2E7BF8u;
label_2e7bf8:
    // 0x2e7bf8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e7bfc: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x2e7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x2e7c00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e7c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e7c04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e7c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e7c08: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2e7c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2e7c0c:
    // 0x2e7c0c: 0x922202c9  lbu         $v0, 0x2C9($s1)
    ctx->pc = 0x2e7c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 713)));
    // 0x2e7c10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7C10u;
    {
        const bool branch_taken_0x2e7c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C10u;
        // 0x2e7c14: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c10) {
            ctx->pc = 0x2E7C28u;
            goto label_2e7c28;
        }
    }
    ctx->pc = 0x2E7C18u;
    // 0x2e7c18: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2e7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2e7c1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e7c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e7c20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7C20u;
    {
        const bool branch_taken_0x2e7c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C20u;
        // 0x2e7c24: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c20) {
            ctx->pc = 0x2E7C3Cu;
            goto label_2e7c3c;
        }
    }
    ctx->pc = 0x2E7C28u;
label_2e7c28:
    // 0x2e7c28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e7c2c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x2e7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x2e7c30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e7c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e7c34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e7c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e7c38: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2e7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2e7c3c:
    // 0x2e7c3c: 0x922202c9  lbu         $v0, 0x2C9($s1)
    ctx->pc = 0x2e7c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 713)));
    // 0x2e7c40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7C40u;
    {
        const bool branch_taken_0x2e7c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C40u;
        // 0x2e7c44: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c40) {
            ctx->pc = 0x2E7C58u;
            goto label_2e7c58;
        }
    }
    ctx->pc = 0x2E7C48u;
    // 0x2e7c48: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2e7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2e7c4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e7c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e7c50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7C50u;
    {
        const bool branch_taken_0x2e7c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C50u;
        // 0x2e7c54: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c50) {
            ctx->pc = 0x2E7C6Cu;
            goto label_2e7c6c;
        }
    }
    ctx->pc = 0x2E7C58u;
label_2e7c58:
    // 0x2e7c58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e7c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e7c5c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x2e7c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x2e7c60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e7c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e7c64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e7c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e7c68: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2e7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2e7c6c:
    // 0x2e7c6c: 0x922202ce  lbu         $v0, 0x2CE($s1)
    ctx->pc = 0x2e7c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 718)));
    // 0x2e7c70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7C70u;
    {
        const bool branch_taken_0x2e7c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C70u;
        // 0x2e7c74: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c70) {
            ctx->pc = 0x2E7C88u;
            goto label_2e7c88;
        }
    }
    ctx->pc = 0x2E7C78u;
    // 0x2e7c78: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2e7c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2e7c7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e7c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e7c80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7C80u;
    {
        const bool branch_taken_0x2e7c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C80u;
        // 0x2e7c84: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c80) {
            ctx->pc = 0x2E7C9Cu;
            goto label_2e7c9c;
        }
    }
    ctx->pc = 0x2E7C88u;
label_2e7c88:
    // 0x2e7c88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e7c8c: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x2e7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x2e7c90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e7c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e7c94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e7c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e7c98: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2e7c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2e7c9c:
    // 0x2e7c9c: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x2e7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x2e7ca0: 0x26637b00  addiu       $v1, $s3, 0x7B00
    ctx->pc = 0x2e7ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 31488));
    // 0x2e7ca4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7CA4u;
    {
        const bool branch_taken_0x2e7ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CA4u;
        // 0x2e7ca8: 0xc6607b00  lwc1        $f0, 0x7B00($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 31488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ca4) {
            ctx->pc = 0x2E7CC0u;
            goto label_2e7cc0;
        }
    }
    ctx->pc = 0x2E7CACu;
    // 0x2e7cac: 0xe6200300  swc1        $f0, 0x300($s1)
    ctx->pc = 0x2e7cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 768), bits); }
    // 0x2e7cb0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2e7cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7cb4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e7cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e7cb8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e7cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7cbc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e7cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e7cc0:
    // 0x2e7cc0: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2e7cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7cc4: 0x26250360  addiu       $a1, $s1, 0x360
    ctx->pc = 0x2e7cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x2e7cc8: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x2e7cc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2e7ccc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2e7cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7cd0: 0xa6220360  sh          $v0, 0x360($s1)
    ctx->pc = 0x2e7cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 864), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7cd4: 0x26240370  addiu       $a0, $s1, 0x370
    ctx->pc = 0x2e7cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x2e7cd8: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x2e7cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7cdc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2e7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e7ce0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e7ce4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7CE4u;
    {
        const bool branch_taken_0x2e7ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CE4u;
        // 0x2e7ce8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ce4) {
            ctx->pc = 0x2E7D04u;
            goto label_2e7d04;
        }
    }
    ctx->pc = 0x2E7CECu;
    // 0x2e7cec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e7cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7cf0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2e7cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7cf4: 0xe6200370  swc1        $f0, 0x370($s1)
    ctx->pc = 0x2e7cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 880), bits); }
    // 0x2e7cf8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2e7cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2e7cfc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e7cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7d00: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2e7d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2e7d04:
    // 0x2e7d04: 0x26230380  addiu       $v1, $s1, 0x380
    ctx->pc = 0x2e7d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
    // 0x2e7d08: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2e7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7d0c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7D0Cu;
    {
        const bool branch_taken_0x2e7d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D0Cu;
        // 0x2e7d10: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d0c) {
            ctx->pc = 0x2E7D28u;
            goto label_2e7d28;
        }
    }
    ctx->pc = 0x2E7D14u;
    // 0x2e7d14: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e7d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7d18: 0xe6200380  swc1        $f0, 0x380($s1)
    ctx->pc = 0x2e7d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 896), bits); }
    // 0x2e7d1c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2e7d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e7d20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7d24: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2e7d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2e7d28:
    // 0x2e7d28: 0x26230390  addiu       $v1, $s1, 0x390
    ctx->pc = 0x2e7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x2e7d2c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2e7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e7d30: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7D30u;
    {
        const bool branch_taken_0x2e7d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D30u;
        // 0x2e7d34: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d30) {
            ctx->pc = 0x2E7D4Cu;
            goto label_2e7d4c;
        }
    }
    ctx->pc = 0x2E7D38u;
    // 0x2e7d38: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e7d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7d3c: 0xe6200390  swc1        $f0, 0x390($s1)
    ctx->pc = 0x2e7d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
    // 0x2e7d40: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2e7d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e7d44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e7d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7d48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2e7d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2e7d4c:
    // 0x2e7d4c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2e7d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7d50: 0x262403ac  addiu       $a0, $s1, 0x3AC
    ctx->pc = 0x2e7d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
    // 0x2e7d54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e7d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7d58: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x2e7d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2e7d5c: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x2e7d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x2e7d60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e7d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e7d64: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2e7d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7d68: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x2e7d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x2e7d6c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2e7d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7d70: 0xe4a10048  swc1        $f1, 0x48($a1)
    ctx->pc = 0x2e7d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x2e7d74: 0x0  nop
    ctx->pc = 0x2e7d74u;
    // NOP
label_2e7d78:
    // 0x2e7d78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7d7c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e7d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e7d80: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2e7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2e7d84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e7d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2e7d88: 0x14c8fffb  bne         $a2, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E7D88u;
    {
        const bool branch_taken_0x2e7d88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x2E7D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D88u;
        // 0x2e7d8c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d88) {
            ctx->pc = 0x2E7D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7d78;
        }
    }
    ctx->pc = 0x2E7D90u;
    // 0x2e7d90: 0x8ce30054  lw          $v1, 0x54($a3)
    ctx->pc = 0x2e7d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x2e7d94: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2e7d94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2e7d98: 0x26104700  addiu       $s0, $s0, 0x4700
    ctx->pc = 0x2e7d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18176));
    // 0x2e7d9c: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x2e7d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
    // 0x2e7da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7da4: 0x8ce20058  lw          $v0, 0x58($a3)
    ctx->pc = 0x2e7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x2e7da8: 0xaca20058  sw          $v0, 0x58($a1)
    ctx->pc = 0x2e7da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 2));
    // 0x2e7dac: 0x94e3005c  lhu         $v1, 0x5C($a3)
    ctx->pc = 0x2e7dacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x2e7db0: 0xa4a3005c  sh          $v1, 0x5C($a1)
    ctx->pc = 0x2e7db0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7db4: 0x94e2005e  lhu         $v0, 0x5E($a3)
    ctx->pc = 0x2e7db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 94)));
    // 0x2e7db8: 0xa4a2005e  sh          $v0, 0x5E($a1)
    ctx->pc = 0x2e7db8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7dbc: 0x90e30060  lbu         $v1, 0x60($a3)
    ctx->pc = 0x2e7dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x2e7dc0: 0xa0a30060  sb          $v1, 0x60($a1)
    ctx->pc = 0x2e7dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7dc4: 0x90e20061  lbu         $v0, 0x61($a3)
    ctx->pc = 0x2e7dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 97)));
    // 0x2e7dc8: 0xa0a20061  sb          $v0, 0x61($a1)
    ctx->pc = 0x2e7dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e7dcc: 0x94e30062  lhu         $v1, 0x62($a3)
    ctx->pc = 0x2e7dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 98)));
    // 0x2e7dd0: 0xa4a30062  sh          $v1, 0x62($a1)
    ctx->pc = 0x2e7dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 98), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7dd4: 0x8e2602b4  lw          $a2, 0x2B4($s1)
    ctx->pc = 0x2e7dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x2e7dd8: 0xc0b6456  jal         func_2D9158
    ctx->pc = 0x2E7DD8u;
    SET_GPR_U32(ctx, 31, 0x2E7DE0u);
    ctx->pc = 0x2E7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7DD8u;
    // 0x2e7ddc: 0x962502b2  lhu         $a1, 0x2B2($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 690)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9158u, 0x2E7DD8u, 0x2E7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DE0u;
label_2e7de0:
    // 0x2e7de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7de4: 0xc0b642c  jal         func_2D90B0
    ctx->pc = 0x2E7DE4u;
    SET_GPR_U32(ctx, 31, 0x2E7DECu);
    ctx->pc = 0x2E7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7DE4u;
    // 0x2e7de8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D90B0u, 0x2E7DE4u, 0x2E7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DECu;
label_2e7dec:
    // 0x2e7dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7df0:
    // 0x2e7df0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2e7df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e7df4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2e7df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e7df8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2e7df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e7dfc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2e7dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e7e00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e7e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e7e04: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2e7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e7e08: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E08u;
        // 0x2e7e0c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7E10u;
}
