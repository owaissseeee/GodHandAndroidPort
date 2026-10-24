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
// Function: movePlayMotion__15cEventActorWork
// Address: 0x7aafb8 - 0x7ab2d8
void movePlayMotion__15cEventActorWork_0x7aafb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayMotion__15cEventActorWork_0x7aafb8");
#endif

    switch (ctx->pc) {
        case 0x7ab130u: goto label_7ab130;
        case 0x7ab1e4u: goto label_7ab1e4;
        case 0x7ab1fcu: goto label_7ab1fc;
        case 0x7ab2a4u: goto label_7ab2a4;
        default: break;
    }

    ctx->pc = 0x7aafb8u;

    // 0x7aafb8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x7aafb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x7aafbc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x7aafbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x7aafc0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x7aafc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x7aafc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7aafc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aafc8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x7aafc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x7aafcc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x7aafccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x7aafd0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x7aafd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x7aafd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x7aafd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x7aafd8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x7aafd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x7aafdc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x7aafdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x7aafe0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7aafe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7aafe4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x7aafe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x7aafe8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x7aafe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x7aafec: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x7aafecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x7aaff0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7AAFF0u;
    {
        const bool branch_taken_0x7aaff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAFF0u;
        // 0x7aaff4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaff0) {
            ctx->pc = 0x7AB058u;
            goto label_7ab058;
        }
    }
    ctx->pc = 0x7AAFF8u;
    // 0x7aaff8: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7aaff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7aaffc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7aaffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7ab000: 0xc4405294  lwc1        $f0, 0x5294($v0)
    ctx->pc = 0x7ab000u;
    { uint32_t bits = FAST_READ32(0x7B5294u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab004: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7ab004u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab008: 0x0  nop
    ctx->pc = 0x7ab008u;
    // NOP
    // 0x7ab00c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x7AB00Cu;
    {
        const bool branch_taken_0x7ab00c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7AB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB00Cu;
        // 0x7ab010: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab00c) {
            ctx->pc = 0x7AB038u;
            goto label_7ab038;
        }
    }
    ctx->pc = 0x7AB014u;
    // 0x7ab014: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x7ab014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x7ab018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AB018u;
    {
        const bool branch_taken_0x7ab018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB018u;
        // 0x7ab01c: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab018) {
            ctx->pc = 0x7AB028u;
            goto label_7ab028;
        }
    }
    ctx->pc = 0x7AB020u;
    // 0x7ab020: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7AB020u;
    {
        const bool branch_taken_0x7ab020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB020u;
        // 0x7ab024: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab020) {
            ctx->pc = 0x7AB030u;
            goto label_7ab030;
        }
    }
    ctx->pc = 0x7AB028u;
label_7ab028:
    // 0x7ab028: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x7ab028u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ab02c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7ab02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7ab030:
    // 0x7ab030: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x7ab030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x7ab034: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x7ab034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_7ab038:
    // 0x7ab038: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7ab038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7ab03c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x7ab03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x7ab040: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7ab040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7ab044: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7ab044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7ab048: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x7ab048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x7ab04c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7ab04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7ab050: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7AB050u;
    {
        const bool branch_taken_0x7ab050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB050u;
        // 0x7ab054: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab050) {
            ctx->pc = 0x7AB070u;
            goto label_7ab070;
        }
    }
    ctx->pc = 0x7AB058u;
label_7ab058:
    // 0x7ab058: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x7ab058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x7ab05c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x7ab05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x7ab060: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x7ab060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x7ab064: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x7ab064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7ab068: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x7ab068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x7ab06c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x7ab06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_7ab070:
    // 0x7ab070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ab070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ab074: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7ab074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7ab078: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7ab078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7ab07c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7ab07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x7ab080: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x7ab080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x7ab084: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x7ab084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x7ab088: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x7ab088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x7ab08c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AB08Cu;
    {
        const bool branch_taken_0x7ab08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x7AB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB08Cu;
        // 0x7ab090: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab08c) {
            ctx->pc = 0x7AB0A8u;
            goto label_7ab0a8;
        }
    }
    ctx->pc = 0x7AB094u;
    // 0x7ab094: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x7ab094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x7ab098: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x7ab098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ab09c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x7ab09cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x7ab0a0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x7ab0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab0a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7ab0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_7ab0a8:
    // 0x7ab0a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7ab0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7ab0ac: 0x26140100  addiu       $s4, $s0, 0x100
    ctx->pc = 0x7ab0acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x7ab0b0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7ab0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x7ab0b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x7ab0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x7ab0b8: 0x129d0007  beq         $s4, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AB0B8u;
    {
        const bool branch_taken_0x7ab0b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 29));
        ctx->pc = 0x7AB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB0B8u;
        // 0x7ab0bc: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab0b8) {
            ctx->pc = 0x7AB0D8u;
            goto label_7ab0d8;
        }
    }
    ctx->pc = 0x7AB0C0u;
    // 0x7ab0c0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x7ab0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab0c4: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x7ab0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x7ab0c8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x7ab0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ab0cc: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x7ab0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x7ab0d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x7ab0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab0d4: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x7ab0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_7ab0d8:
    // 0x7ab0d8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x7ab0d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x7ab0dc: 0x26120110  addiu       $s2, $s0, 0x110
    ctx->pc = 0x7ab0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x7ab0e0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x7ab0e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x7ab0e4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x7ab0e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x7ab0e8: 0x125d0006  beq         $s2, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AB0E8u;
    {
        const bool branch_taken_0x7ab0e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 29));
        ctx->pc = 0x7AB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB0E8u;
        // 0x7ab0ec: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab0e8) {
            ctx->pc = 0x7AB104u;
            goto label_7ab104;
        }
    }
    ctx->pc = 0x7AB0F0u;
    // 0x7ab0f0: 0xe6020110  swc1        $f2, 0x110($s0)
    ctx->pc = 0x7ab0f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x7ab0f4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x7ab0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab0f8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x7ab0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x7ab0fc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x7ab0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ab100: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x7ab100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_7ab104:
    // 0x7ab104: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x7ab104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x7ab108: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7ab108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab10c: 0x26110310  addiu       $s1, $s0, 0x310
    ctx->pc = 0x7ab10cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x7ab110: 0x26170340  addiu       $s7, $s0, 0x340
    ctx->pc = 0x7ab110u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x7ab114: 0x26150370  addiu       $s5, $s0, 0x370
    ctx->pc = 0x7ab114u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x7ab118: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x7AB118u;
    {
        const bool branch_taken_0x7ab118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB118u;
        // 0x7ab11c: 0x26160320  addiu       $s6, $s0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab118) {
            ctx->pc = 0x7AB1B8u;
            goto label_7ab1b8;
        }
    }
    ctx->pc = 0x7AB120u;
    // 0x7ab120: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x7ab120u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x7ab124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ab124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab128: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x7ab128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x7ab12c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x7ab12cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_7ab130:
    // 0x7ab130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ab130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab134: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x7ab134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x7ab138: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AB138u;
    {
        const bool branch_taken_0x7ab138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB138u;
        // 0x7ab13c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab138) {
            ctx->pc = 0x7AB148u;
            goto label_7ab148;
        }
    }
    ctx->pc = 0x7AB140u;
    // 0x7ab140: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x7ab140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7ab144: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7ab144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ab148:
    // 0x7ab148: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x7ab148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x7ab14c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AB14Cu;
    {
        const bool branch_taken_0x7ab14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB14Cu;
        // 0x7ab150: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab14c) {
            ctx->pc = 0x7AB164u;
            goto label_7ab164;
        }
    }
    ctx->pc = 0x7AB154u;
    // 0x7ab154: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x7ab154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x7ab158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ab158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ab15c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB15Cu;
    {
        const bool branch_taken_0x7ab15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB15Cu;
        // 0x7ab160: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab15c) {
            ctx->pc = 0x7AB168u;
            goto label_7ab168;
        }
    }
    ctx->pc = 0x7AB164u;
label_7ab164:
    // 0x7ab164: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x7ab164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ab168:
    // 0x7ab168: 0x54860006  bnel        $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AB168u;
    {
        const bool branch_taken_0x7ab168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x7ab168) {
            ctx->pc = 0x7AB16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB168u;
            // 0x7ab16c: 0xac600100  sw          $zero, 0x100($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB184u;
            goto label_7ab184;
        }
    }
    ctx->pc = 0x7AB170u;
    // 0x7ab170: 0x96620024  lhu         $v0, 0x24($s3)
    ctx->pc = 0x7ab170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x7ab174: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x7ab174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x7ab178: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AB178u;
    {
        const bool branch_taken_0x7ab178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ab178) {
            ctx->pc = 0x7AB17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB178u;
            // 0x7ab17c: 0xac600138  sw          $zero, 0x138($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB190u;
            goto label_7ab190;
        }
    }
    ctx->pc = 0x7AB180u;
    // 0x7ab180: 0xac600100  sw          $zero, 0x100($v1)
    ctx->pc = 0x7ab180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 0));
label_7ab184:
    // 0x7ab184: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x7ab184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x7ab188: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x7ab188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 0));
    // 0x7ab18c: 0xac600138  sw          $zero, 0x138($v1)
    ctx->pc = 0x7ab18cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 0));
label_7ab190:
    // 0x7ab190: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7ab190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7ab194: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x7ab194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x7ab198: 0xe4600114  swc1        $f0, 0x114($v1)
    ctx->pc = 0x7ab198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
    // 0x7ab19c: 0xe4600118  swc1        $f0, 0x118($v1)
    ctx->pc = 0x7ab19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
    // 0x7ab1a0: 0xac600130  sw          $zero, 0x130($v1)
    ctx->pc = 0x7ab1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 0));
    // 0x7ab1a4: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x7ab1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
    // 0x7ab1a8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x7ab1a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x7ab1ac: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x7ab1acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7ab1b0: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x7AB1B0u;
    {
        const bool branch_taken_0x7ab1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ab1b0) {
            ctx->pc = 0x7AB1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB1B0u;
            // 0x7ab1b4: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ab130;
        }
    }
    ctx->pc = 0x7AB1B8u;
label_7ab1b8:
    // 0x7ab1b8: 0x8e020428  lw          $v0, 0x428($s0)
    ctx->pc = 0x7ab1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x7ab1bc: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x7ab1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7ab1c0: 0x1045000a  beq         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x7AB1C0u;
    {
        const bool branch_taken_0x7ab1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x7AB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB1C0u;
        // 0x7ab1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab1c0) {
            ctx->pc = 0x7AB1ECu;
            goto label_7ab1ec;
        }
    }
    ctx->pc = 0x7AB1C8u;
    // 0x7ab1c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ab1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ab1cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7ab1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7ab1d0: 0xc66d0010  lwc1        $f13, 0x10($s3)
    ctx->pc = 0x7ab1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x7ab1d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7ab1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab1d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ab1d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab1dc: 0xc055d5a  jal         func_157568
    ctx->pc = 0x7AB1DCu;
    SET_GPR_U32(ctx, 31, 0x7AB1E4u);
    ctx->pc = 0x7AB1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB1DCu;
    // 0x7ab1e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x7AB1DCu, 0x7AB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB1E4u;
label_7ab1e4:
    // 0x7ab1e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7AB1E4u;
    {
        const bool branch_taken_0x7ab1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab1e4) {
            ctx->pc = 0x7AB1F4u;
            goto label_7ab1f4;
        }
    }
    ctx->pc = 0x7AB1ECu;
label_7ab1ec:
    // 0x7ab1ec: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x7ab1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab1f0: 0xe6000430  swc1        $f0, 0x430($s0)
    ctx->pc = 0x7ab1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1072), bits); }
label_7ab1f4:
    // 0x7ab1f4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x7AB1F4u;
    SET_GPR_U32(ctx, 31, 0x7AB1FCu);
    ctx->pc = 0x7AB1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB1F4u;
    // 0x7ab1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x7AB1F4u, 0x7AB1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB1FCu;
label_7ab1fc:
    // 0x7ab1fc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x7ab1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x7ab200: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AB200u;
    {
        const bool branch_taken_0x7ab200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x7ab200) {
            ctx->pc = 0x7AB204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB200u;
            // 0x7ab204: 0xc6000340  lwc1        $f0, 0x340($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB224u;
            goto label_7ab224;
        }
    }
    ctx->pc = 0x7AB208u;
    // 0x7ab208: 0xc6000310  lwc1        $f0, 0x310($s0)
    ctx->pc = 0x7ab208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab20c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x7ab20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x7ab210: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x7ab210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ab214: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x7ab214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x7ab218: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x7ab218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab21c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7ab21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x7ab220: 0xc6000340  lwc1        $f0, 0x340($s0)
    ctx->pc = 0x7ab220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7ab224:
    // 0x7ab224: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x7ab224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x7ab228: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x7ab228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ab22c: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x7ab22cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x7ab230: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x7ab230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab234: 0x12550007  beq         $s2, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AB234u;
    {
        const bool branch_taken_0x7ab234 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x7AB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB234u;
        // 0x7ab238: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab234) {
            ctx->pc = 0x7AB254u;
            goto label_7ab254;
        }
    }
    ctx->pc = 0x7AB23Cu;
    // 0x7ab23c: 0xc6000370  lwc1        $f0, 0x370($s0)
    ctx->pc = 0x7ab23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab240: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x7ab240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x7ab244: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x7ab244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ab248: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x7ab248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x7ab24c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x7ab24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab250: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x7ab250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_7ab254:
    // 0x7ab254: 0x12d10007  beq         $s6, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AB254u;
    {
        const bool branch_taken_0x7ab254 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 17));
        if (branch_taken_0x7ab254) {
            ctx->pc = 0x7AB274u;
            goto label_7ab274;
        }
    }
    ctx->pc = 0x7AB25Cu;
    // 0x7ab25c: 0xc6000310  lwc1        $f0, 0x310($s0)
    ctx->pc = 0x7ab25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab260: 0xe6000320  swc1        $f0, 0x320($s0)
    ctx->pc = 0x7ab260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 800), bits); }
    // 0x7ab264: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x7ab264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ab268: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x7ab268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x7ab26c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x7ab26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab270: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x7ab270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_7ab274:
    // 0x7ab274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ab274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ab278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ab278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ab27c: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x7ab27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x7ab280: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x7ab280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x7ab284: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x7ab284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x7ab288: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x7ab288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x7ab28c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AB28Cu;
    {
        const bool branch_taken_0x7ab28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB28Cu;
        // 0x7ab290: 0xae000338  sw          $zero, 0x338($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab28c) {
            ctx->pc = 0x7AB2A4u;
            goto label_7ab2a4;
        }
    }
    ctx->pc = 0x7AB294u;
    // 0x7ab294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7ab294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab298: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x7ab298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab29c: 0xc1eae24  jal         func_7AB890
    ctx->pc = 0x7AB29Cu;
    SET_GPR_U32(ctx, 31, 0x7AB2A4u);
    ctx->pc = 0x7AB2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB29Cu;
    // 0x7ab2a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB890u, 0x7AB29Cu, 0x7AB2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB2A4u;
label_7ab2a4:
    // 0x7ab2a4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x7ab2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7ab2a8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x7ab2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7ab2ac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x7ab2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7ab2b0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x7ab2b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7ab2b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x7ab2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7ab2b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x7ab2b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ab2bc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x7ab2bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ab2c0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x7ab2c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ab2c4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x7ab2c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ab2c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7ab2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ab2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB2CCu;
        // 0x7ab2d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB2D4u;
    // 0x7ab2d4: 0x0  nop
    ctx->pc = 0x7ab2d4u;
    // NOP
    ctx->pc = 0x7ab2d8u;
}
} // namespace gh_event
