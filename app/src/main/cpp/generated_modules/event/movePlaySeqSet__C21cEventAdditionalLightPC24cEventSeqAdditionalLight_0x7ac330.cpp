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
// Function: movePlaySeqSet__C21cEventAdditionalLightPC24cEventSeqAdditionalLight
// Address: 0x7ac330 - 0x7ac5a8
void movePlaySeqSet__C21cEventAdditionalLightPC24cEventSeqAdditionalLight_0x7ac330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySeqSet__C21cEventAdditionalLightPC24cEventSeqAdditionalLight_0x7ac330");
#endif

    switch (ctx->pc) {
        case 0x7ac570u: goto label_7ac570;
        case 0x7ac57cu: goto label_7ac57c;
        case 0x7ac594u: goto label_7ac594;
        default: break;
    }

    ctx->pc = 0x7ac330u;

    // 0x7ac330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7ac330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7ac334: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x7ac334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac338: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7ac338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7ac33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7ac33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7ac340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ac340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ac344: 0x9143000c  lbu         $v1, 0xC($t2)
    ctx->pc = 0x7ac344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x7ac348: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AC348u;
    {
        const bool branch_taken_0x7ac348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC348u;
        // 0x7ac34c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac348) {
            ctx->pc = 0x7AC360u;
            goto label_7ac360;
        }
    }
    ctx->pc = 0x7AC350u;
    // 0x7ac350: 0x1062008c  beq         $v1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x7AC350u;
    {
        const bool branch_taken_0x7ac350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC350u;
        // 0x7ac354: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac350) {
            ctx->pc = 0x7AC584u;
            goto label_7ac584;
        }
    }
    ctx->pc = 0x7AC358u;
    // 0x7ac358: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x7AC358u;
    {
        const bool branch_taken_0x7ac358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC358u;
        // 0x7ac35c: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac358) {
            ctx->pc = 0x7AC59Cu;
            goto label_7ac59c;
        }
    }
    ctx->pc = 0x7AC360u;
label_7ac360:
    // 0x7ac360: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7ac360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7ac364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ac364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ac368: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7ac368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7ac36c: 0x24a44fa0  addiu       $a0, $a1, 0x4FA0
    ctx->pc = 0x7ac36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20384));
    // 0x7ac370: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x7ac370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ac374: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x7ac374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7B4FF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FF4u, _value); } while (0);
    // 0x7ac378: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x7ac378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x7ac37c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x7ac37cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7B4FA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FA4u, _value); } while (0);
    // 0x7ac380: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x7ac380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7ac384: 0x24880030  addiu       $t0, $a0, 0x30
    ctx->pc = 0x7ac384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x7ac388: 0x9142000e  lbu         $v0, 0xE($t2)
    ctx->pc = 0x7ac388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 14)));
    // 0x7ac38c: 0xa4a24fa0  sh          $v0, 0x4FA0($a1)
    ctx->pc = 0x7ac38cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7B4FA0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7B4FA0u, _value); } while (0);
    // 0x7ac390: 0x95430010  lhu         $v1, 0x10($t2)
    ctx->pc = 0x7ac390u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x7ac394: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x7ac394u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7B4FA2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7B4FA2u, _value); } while (0);
    // 0x7ac398: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x7ac398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ac39c: 0xc5410018  lwc1        $f1, 0x18($t2)
    ctx->pc = 0x7ac39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ac3a0: 0xc542001c  lwc1        $f2, 0x1C($t2)
    ctx->pc = 0x7ac3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7ac3a4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x7ac3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FB0u, _value); } while (0); }
    // 0x7ac3a8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x7ac3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FB4u, _value); } while (0); }
    // 0x7ac3ac: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x7ac3acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FB8u, _value); } while (0); }
    // 0x7ac3b0: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x7ac3b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FBCu, _value); } while (0); }
    // 0x7ac3b4: 0xc5400020  lwc1        $f0, 0x20($t2)
    ctx->pc = 0x7ac3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ac3b8: 0xc5410024  lwc1        $f1, 0x24($t2)
    ctx->pc = 0x7ac3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ac3bc: 0xc5420028  lwc1        $f2, 0x28($t2)
    ctx->pc = 0x7ac3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7ac3c0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x7ac3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FC0u, _value); } while (0); }
    // 0x7ac3c4: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x7ac3c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FC4u, _value); } while (0); }
    // 0x7ac3c8: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x7ac3c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FC8u, _value); } while (0); }
    // 0x7ac3cc: 0xe4e3000c  swc1        $f3, 0xC($a3)
    ctx->pc = 0x7ac3ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FCCu, _value); } while (0); }
    // 0x7ac3d0: 0xc540002c  lwc1        $f0, 0x2C($t2)
    ctx->pc = 0x7ac3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ac3d4: 0xc5410030  lwc1        $f1, 0x30($t2)
    ctx->pc = 0x7ac3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ac3d8: 0xc5420034  lwc1        $f2, 0x34($t2)
    ctx->pc = 0x7ac3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7ac3dc: 0xe503000c  swc1        $f3, 0xC($t0)
    ctx->pc = 0x7ac3dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FDCu, _value); } while (0); }
    // 0x7ac3e0: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x7ac3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FD0u, _value); } while (0); }
    // 0x7ac3e4: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x7ac3e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FD4u, _value); } while (0); }
    // 0x7ac3e8: 0xe5020008  swc1        $f2, 0x8($t0)
    ctx->pc = 0x7ac3e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FD8u, _value); } while (0); }
    // 0x7ac3ec: 0xc5400038  lwc1        $f0, 0x38($t2)
    ctx->pc = 0x7ac3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ac3f0: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x7ac3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7B4FE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FE0u, _value); } while (0); }
    // 0x7ac3f4: 0x95420040  lhu         $v0, 0x40($t2)
    ctx->pc = 0x7ac3f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x7ac3f8: 0xa482005e  sh          $v0, 0x5E($a0)
    ctx->pc = 0x7ac3f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7B4FFEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7B4FFEu, _value); } while (0);
    // 0x7ac3fc: 0x95430042  lhu         $v1, 0x42($t2)
    ctx->pc = 0x7ac3fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 66)));
    // 0x7ac400: 0xa483005c  sh          $v1, 0x5C($a0)
    ctx->pc = 0x7ac400u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7B4FFCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7B4FFCu, _value); } while (0);
    // 0x7ac404: 0x9142003c  lbu         $v0, 0x3C($t2)
    ctx->pc = 0x7ac404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x7ac408: 0xa0820060  sb          $v0, 0x60($a0)
    ctx->pc = 0x7ac408u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7B5000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7B5000u, _value); } while (0);
    // 0x7ac40c: 0x9143003d  lbu         $v1, 0x3D($t2)
    ctx->pc = 0x7ac40cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 61)));
    // 0x7ac410: 0xa0830061  sb          $v1, 0x61($a0)
    ctx->pc = 0x7ac410u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7B5001u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7B5001u, _value); } while (0);
    // 0x7ac414: 0x9542003e  lhu         $v0, 0x3E($t2)
    ctx->pc = 0x7ac414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 62)));
    // 0x7ac418: 0xac890050  sw          $t1, 0x50($a0)
    ctx->pc = 0x7ac418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x7B4FF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FF0u, _value); } while (0);
    // 0x7ac41c: 0xa4820062  sh          $v0, 0x62($a0)
    ctx->pc = 0x7ac41cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7B5002u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7B5002u, _value); } while (0);
    // 0x7ac420: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x7ac420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7B4FF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FF8u, _value); } while (0);
    // 0x7ac424: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x7ac424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7B4FECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7B4FECu, _value); } while (0);
    // 0x7ac428: 0x9143000f  lbu         $v1, 0xF($t2)
    ctx->pc = 0x7ac428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 15)));
    // 0x7ac42c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7ac42cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7ac430: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AC430u;
    {
        const bool branch_taken_0x7ac430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC430u;
        // 0x7ac434: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac430) {
            ctx->pc = 0x7AC454u;
            goto label_7ac454;
        }
    }
    ctx->pc = 0x7AC438u;
    // 0x7ac438: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7ac438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7ac43c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7ac43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7ac440: 0x24424e30  addiu       $v0, $v0, 0x4E30
    ctx->pc = 0x7ac440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
    // 0x7ac444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7ac444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7ac448: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7ac448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7ac44c: 0x800008  jr          $a0
    ctx->pc = 0x7AC44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7AC454u: goto label_7ac454;
            case 0x7AC490u: goto label_7ac490;
            case 0x7AC4B4u: goto label_7ac4b4;
            case 0x7AC4C0u: goto label_7ac4c0;
            case 0x7AC4CCu: goto label_7ac4cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC44Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7AC454u;
label_7ac454:
    // 0x7ac454: 0x3c03007b  lui         $v1, 0x7B
    ctx->pc = 0x7ac454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)123 << 16));
    // 0x7ac458: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x7ac458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x7ac45c: 0x8c624ff8  lw          $v0, 0x4FF8($v1)
    ctx->pc = 0x7ac45cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7B4FF8u));
    // 0x7ac460: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x7ac460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x7ac464: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x7ac464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x7ac468: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x7ac468u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x7ac46c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7ac46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7ac470: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x7ac470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x7ac474: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x7ac474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7ac478: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x7ac478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac47c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x7ac47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x7ac480: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x7ac480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x7ac484: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7ac484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7ac488: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x7AC488u;
    {
        const bool branch_taken_0x7ac488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC488u;
        // 0x7ac48c: 0xac624ff8  sw          $v0, 0x4FF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac488) {
            ctx->pc = 0x7AC4E4u;
            goto label_7ac4e4;
        }
    }
    ctx->pc = 0x7AC490u;
label_7ac490:
    // 0x7ac490: 0x3c03007b  lui         $v1, 0x7B
    ctx->pc = 0x7ac490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)123 << 16));
    // 0x7ac494: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x7ac494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x7ac498: 0x8c624ff8  lw          $v0, 0x4FF8($v1)
    ctx->pc = 0x7ac498u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7B4FF8u));
    // 0x7ac49c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x7ac49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x7ac4a0: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x7ac4a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac4a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x7ac4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7ac4a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7ac4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7ac4ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7AC4ACu;
    {
        const bool branch_taken_0x7ac4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC4ACu;
        // 0x7ac4b0: 0xac624ff8  sw          $v0, 0x4FF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac4ac) {
            ctx->pc = 0x7AC4E4u;
            goto label_7ac4e4;
        }
    }
    ctx->pc = 0x7AC4B4u;
label_7ac4b4:
    // 0x7ac4b4: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7ac4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7ac4b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7AC4B8u;
    {
        const bool branch_taken_0x7ac4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC4B8u;
        // 0x7ac4bc: 0x3c044000  lui         $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac4b8) {
            ctx->pc = 0x7AC4D4u;
            goto label_7ac4d4;
        }
    }
    ctx->pc = 0x7AC4C0u;
label_7ac4c0:
    // 0x7ac4c0: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7ac4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7ac4c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7AC4C4u;
    {
        const bool branch_taken_0x7ac4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC4C4u;
        // 0x7ac4c8: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac4c4) {
            ctx->pc = 0x7AC4D4u;
            goto label_7ac4d4;
        }
    }
    ctx->pc = 0x7AC4CCu;
label_7ac4cc:
    // 0x7ac4cc: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7ac4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7ac4d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x7ac4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_7ac4d4:
    // 0x7ac4d4: 0x8c434ff8  lw          $v1, 0x4FF8($v0)
    ctx->pc = 0x7ac4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20472)));
    // 0x7ac4d8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x7ac4d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac4dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7ac4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7ac4e0: 0xac434ff8  sw          $v1, 0x4FF8($v0)
    ctx->pc = 0x7ac4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20472), GPR_U32(ctx, 3));
label_7ac4e4:
    // 0x7ac4e4: 0x9142000d  lbu         $v0, 0xD($t2)
    ctx->pc = 0x7ac4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 13)));
    // 0x7ac4e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7ac4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7ac4ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AC4ECu;
    {
        const bool branch_taken_0x7ac4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC4ECu;
        // 0x7ac4f0: 0x8d224ff8  lw          $v0, 0x4FF8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac4ec) {
            ctx->pc = 0x7AC500u;
            goto label_7ac500;
        }
    }
    ctx->pc = 0x7AC4F4u;
    // 0x7ac4f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x7ac4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x7ac4f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7ac4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7ac4fc: 0xad224ff8  sw          $v0, 0x4FF8($t1)
    ctx->pc = 0x7ac4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20472), GPR_U32(ctx, 2));
label_7ac500:
    // 0x7ac500: 0x9142000d  lbu         $v0, 0xD($t2)
    ctx->pc = 0x7ac500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 13)));
    // 0x7ac504: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x7ac504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x7ac508: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AC508u;
    {
        const bool branch_taken_0x7ac508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC508u;
        // 0x7ac50c: 0x8d224ff8  lw          $v0, 0x4FF8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac508) {
            ctx->pc = 0x7AC51Cu;
            goto label_7ac51c;
        }
    }
    ctx->pc = 0x7AC510u;
    // 0x7ac510: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x7ac510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x7ac514: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7ac514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7ac518: 0xad224ff8  sw          $v0, 0x4FF8($t1)
    ctx->pc = 0x7ac518u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20472), GPR_U32(ctx, 2));
label_7ac51c:
    // 0x7ac51c: 0x9142000d  lbu         $v0, 0xD($t2)
    ctx->pc = 0x7ac51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 13)));
    // 0x7ac520: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ac520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ac524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AC524u;
    {
        const bool branch_taken_0x7ac524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC524u;
        // 0x7ac528: 0x8d224ff8  lw          $v0, 0x4FF8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac524) {
            ctx->pc = 0x7AC538u;
            goto label_7ac538;
        }
    }
    ctx->pc = 0x7AC52Cu;
    // 0x7ac52c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x7ac52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x7ac530: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7ac530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7ac534: 0xad224ff8  sw          $v0, 0x4FF8($t1)
    ctx->pc = 0x7ac534u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20472), GPR_U32(ctx, 2));
label_7ac538:
    // 0x7ac538: 0x9142000d  lbu         $v0, 0xD($t2)
    ctx->pc = 0x7ac538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 13)));
    // 0x7ac53c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x7ac53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x7ac540: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AC540u;
    {
        const bool branch_taken_0x7ac540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC540u;
        // 0x7ac544: 0x8d224ff8  lw          $v0, 0x4FF8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac540) {
            ctx->pc = 0x7AC554u;
            goto label_7ac554;
        }
    }
    ctx->pc = 0x7AC548u;
    // 0x7ac548: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x7ac548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x7ac54c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7ac54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7ac550: 0xad224ff8  sw          $v0, 0x4FF8($t1)
    ctx->pc = 0x7ac550u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20472), GPR_U32(ctx, 2));
label_7ac554:
    // 0x7ac554: 0x26314fa0  addiu       $s1, $s1, 0x4FA0
    ctx->pc = 0x7ac554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20384));
    // 0x7ac558: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7ac558u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7ac55c: 0x26104700  addiu       $s0, $s0, 0x4700
    ctx->pc = 0x7ac55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18176));
    // 0x7ac560: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x7ac560u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x7ac564: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x7ac564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x7ac568: 0xc0b6456  jal         func_2D9158
    ctx->pc = 0x7AC568u;
    SET_GPR_U32(ctx, 31, 0x7AC570u);
    ctx->pc = 0x7AC56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC568u;
    // 0x7ac56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9158u, 0x7AC568u, 0x7AC570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC570u;
label_7ac570:
    // 0x7ac570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ac570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac574: 0xc0b642c  jal         func_2D90B0
    ctx->pc = 0x7AC574u;
    SET_GPR_U32(ctx, 31, 0x7AC57Cu);
    ctx->pc = 0x7AC578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC574u;
    // 0x7ac578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D90B0u, 0x7AC574u, 0x7AC57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC57Cu;
label_7ac57c:
    // 0x7ac57c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7AC57Cu;
    {
        const bool branch_taken_0x7ac57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC57Cu;
        // 0x7ac580: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac57c) {
            ctx->pc = 0x7AC598u;
            goto label_7ac598;
        }
    }
    ctx->pc = 0x7AC584u;
label_7ac584:
    // 0x7ac584: 0x95450010  lhu         $a1, 0x10($t2)
    ctx->pc = 0x7ac584u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x7ac588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7ac588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac58c: 0xc1eaf98  jal         func_7ABE60
    ctx->pc = 0x7AC58Cu;
    SET_GPR_U32(ctx, 31, 0x7AC594u);
    ctx->pc = 0x7AC590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC58Cu;
    // 0x7ac590: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ABE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ABE60u, 0x7AC58Cu, 0x7AC594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC594u;
label_7ac594:
    // 0x7ac594: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7ac594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7ac598:
    // 0x7ac598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7ac598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7ac59c:
    // 0x7ac59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ac59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ac5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC5A0u;
        // 0x7ac5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC5A8u;
}
} // namespace gh_event
