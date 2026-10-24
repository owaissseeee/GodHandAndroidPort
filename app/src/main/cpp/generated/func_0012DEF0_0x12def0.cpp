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

// Function: func_0012DEF0
// Address: 0x12def0 - 0x12e5c8
void func_0012DEF0_0x12def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012DEF0_0x12def0");
#endif

    switch (ctx->pc) {
        case 0x12df68u: goto label_12df68;
        case 0x12df78u: goto label_12df78;
        case 0x12e0a8u: goto label_12e0a8;
        case 0x12e204u: goto label_12e204;
        case 0x12e214u: goto label_12e214;
        case 0x12e28cu: goto label_12e28c;
        case 0x12e2ccu: goto label_12e2cc;
        case 0x12e2e0u: goto label_12e2e0;
        case 0x12e3f4u: goto label_12e3f4;
        case 0x12e404u: goto label_12e404;
        case 0x12e42cu: goto label_12e42c;
        case 0x12e48cu: goto label_12e48c;
        case 0x12e510u: goto label_12e510;
        case 0x12e524u: goto label_12e524;
        case 0x12e54cu: goto label_12e54c;
        case 0x12e574u: goto label_12e574;
        case 0x12e588u: goto label_12e588;
        default: break;
    }

    ctx->pc = 0x12def0u;

    // 0x12def0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x12def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x12def4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12def4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12def8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x12def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12defc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x12defcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12df00: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x12df00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12df04: 0x27ab0040  addiu       $t3, $sp, 0x40
    ctx->pc = 0x12df04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12df08: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x12df08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12df0c: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x12df0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x12df10: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x12df10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x12df14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12df14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df18: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x12df18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x12df1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12df1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df20: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x12df20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x12df24: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x12df24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12df28: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x12df28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x12df2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12df2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df30: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x12df30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x12df34: 0x3c160042  lui         $s6, 0x42
    ctx->pc = 0x12df34u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)66 << 16));
    // 0x12df38: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x12df38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x12df3c: 0x27b70060  addiu       $s7, $sp, 0x60
    ctx->pc = 0x12df3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12df40: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x12df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x12df44: 0x27be0070  addiu       $fp, $sp, 0x70
    ctx->pc = 0x12df44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12df48: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x12df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x12df4c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x12df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x12df50: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x12df50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x12df54: 0xafa70118  sw          $a3, 0x118($sp)
    ctx->pc = 0x12df54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 7));
    // 0x12df58: 0xafaa011c  sw          $t2, 0x11C($sp)
    ctx->pc = 0x12df58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 10));
    // 0x12df5c: 0xafab0120  sw          $t3, 0x120($sp)
    ctx->pc = 0x12df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 11));
    // 0x12df60: 0xafac0110  sw          $t4, 0x110($sp)
    ctx->pc = 0x12df60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 12));
    // 0x12df64: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x12df64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12df68:
    // 0x12df68: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x12df68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12df6c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x12df6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x12df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12df74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12df74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12df78:
    // 0x12df78: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12df78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12df7c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12df80: 0x0  nop
    ctx->pc = 0x12df80u;
    // NOP
    // 0x12df84: 0x0  nop
    ctx->pc = 0x12df84u;
    // NOP
    // 0x12df88: 0x14a3fffb  bne         $a1, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12DF88u;
    {
        const bool branch_taken_0x12df88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x12DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF88u;
        // 0x12df8c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df88) {
            ctx->pc = 0x12DF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12df78;
        }
    }
    ctx->pc = 0x12DF90u;
    // 0x12df90: 0x26c4d640  addiu       $a0, $s6, -0x29C0
    ctx->pc = 0x12df90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956608));
    // 0x12df94: 0x1042821  addu        $a1, $t0, $a0
    ctx->pc = 0x12df94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x12df98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12df98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12df9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12dfa0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12dfa4: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x12dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x12dfa8: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DFA8u;
    {
        const bool branch_taken_0x12dfa8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x12DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFA8u;
        // 0x12dfac: 0x881821  addu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfa8) {
            ctx->pc = 0x12DFC8u;
            goto label_12dfc8;
        }
    }
    ctx->pc = 0x12DFB0u;
    // 0x12dfb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dfb4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12dfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12dfb8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dfbc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12dfbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12dfc0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dfc4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x12dfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12dfc8:
    // 0x12dfc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12dfcc: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x12dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x12dfd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12dfd4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12dfd8: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x12dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x12dfdc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DFDCu;
    {
        const bool branch_taken_0x12dfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFDCu;
        // 0x12dfe0: 0x881821  addu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfdc) {
            ctx->pc = 0x12DFFCu;
            goto label_12dffc;
        }
    }
    ctx->pc = 0x12DFE4u;
    // 0x12dfe4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dfe8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12dfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12dfec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dff0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12dff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12dff4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dff8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x12dff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12dffc:
    // 0x12dffc: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x12dffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x12e000: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x12e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12e004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12e004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12e008: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12e00c: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x12e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x12e010: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E010u;
    {
        const bool branch_taken_0x12e010 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x12E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E010u;
        // 0x12e014: 0x881821  addu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e010) {
            ctx->pc = 0x12E030u;
            goto label_12e030;
        }
    }
    ctx->pc = 0x12E018u;
    // 0x12e018: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e01c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12e01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12e020: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e024: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12e024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12e028: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e02c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x12e02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_12e030:
    // 0x12e030: 0x8faa011c  lw          $t2, 0x11C($sp)
    ctx->pc = 0x12e030u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x12e034: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x12e038: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12e038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12e03c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12e040: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x12e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x12e044: 0x51420008  beql        $t2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E044u;
    {
        const bool branch_taken_0x12e044 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x12e044) {
            ctx->pc = 0x12E048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E044u;
            // 0x12e048: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E068u;
            goto label_12e068;
        }
    }
    ctx->pc = 0x12E04Cu;
    // 0x12e04c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e050: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12e050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12e054: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e058: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x12e058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x12e05c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e060: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12e060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x12e064: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12e068:
    // 0x12e068: 0x8fab0120  lw          $t3, 0x120($sp)
    ctx->pc = 0x12e068u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12e06c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12e070: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12e074: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x12e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x12e078: 0x51620008  beql        $t3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E078u;
    {
        const bool branch_taken_0x12e078 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        if (branch_taken_0x12e078) {
            ctx->pc = 0x12E07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E078u;
            // 0x12e07c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E09Cu;
            goto label_12e09c;
        }
    }
    ctx->pc = 0x12E080u;
    // 0x12e080: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e084: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x12e084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12e088: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e08c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x12e08cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x12e090: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e094: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x12e094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x12e098: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x12e098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e09c:
    // 0x12e09c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e0a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e0a4: 0x0  nop
    ctx->pc = 0x12e0a4u;
    // NOP
label_12e0a8:
    // 0x12e0a8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e0ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e0b0: 0x0  nop
    ctx->pc = 0x12e0b0u;
    // NOP
    // 0x12e0b4: 0x0  nop
    ctx->pc = 0x12e0b4u;
    // NOP
    // 0x12e0b8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12E0B8u;
    {
        const bool branch_taken_0x12e0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x12E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0B8u;
        // 0x12e0bc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0b8) {
            ctx->pc = 0x12E0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e0a8;
        }
    }
    ctx->pc = 0x12E0C0u;
    // 0x12e0c0: 0x26c4d640  addiu       $a0, $s6, -0x29C0
    ctx->pc = 0x12e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956608));
    // 0x12e0c4: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x12e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x12e0c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e0cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12e0d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12e0d4: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x12e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x12e0d8: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E0D8u;
    {
        const bool branch_taken_0x12e0d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x12E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0D8u;
        // 0x12e0dc: 0x881821  addu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0d8) {
            ctx->pc = 0x12E0F8u;
            goto label_12e0f8;
        }
    }
    ctx->pc = 0x12E0E0u;
    // 0x12e0e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12e0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e0e4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x12e0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x12e0e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12e0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e0ec: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x12e0ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12e0f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e0f4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x12e0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_12e0f8:
    // 0x12e0f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x12e0fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12e100: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12e104: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x12e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x12e108: 0x12e20007  beq         $s7, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E108u;
    {
        const bool branch_taken_0x12e108 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x12E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E108u;
        // 0x12e10c: 0x881821  addu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e108) {
            ctx->pc = 0x12E128u;
            goto label_12e128;
        }
    }
    ctx->pc = 0x12E110u;
    // 0x12e110: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e114: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x12e114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12e118: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e11c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x12e11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x12e120: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e124: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x12e124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_12e128:
    // 0x12e128: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12e12c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12e130: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12e134: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x12e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x12e138: 0x13c20007  beq         $fp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E138u;
    {
        const bool branch_taken_0x12e138 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x12E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E138u;
        // 0x12e13c: 0x881821  addu        $v1, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e138) {
            ctx->pc = 0x12E158u;
            goto label_12e158;
        }
    }
    ctx->pc = 0x12E140u;
    // 0x12e140: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12e140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e144: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x12e144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x12e148: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12e148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e14c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x12e14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x12e150: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e154: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x12e154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_12e158:
    // 0x12e158: 0x8fac0110  lw          $t4, 0x110($sp)
    ctx->pc = 0x12e158u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12e15c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x12e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12e160: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12e160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12e164: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12e168: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x12e168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x12e16c: 0x11820007  beq         $t4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E16Cu;
    {
        const bool branch_taken_0x12e16c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 2));
        ctx->pc = 0x12E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E16Cu;
        // 0x12e170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e16c) {
            ctx->pc = 0x12E18Cu;
            goto label_12e18c;
        }
    }
    ctx->pc = 0x12E174u;
    // 0x12e174: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e178: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x12e178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12e17c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12e17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e180: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x12e180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x12e184: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e188: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x12e188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_12e18c:
    // 0x12e18c: 0x12850056  beq         $s4, $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x12E18Cu;
    {
        const bool branch_taken_0x12e18c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 5));
        ctx->pc = 0x12E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E18Cu;
        // 0x12e190: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e18c) {
            ctx->pc = 0x12E2E8u;
            goto label_12e2e8;
        }
    }
    ctx->pc = 0x12E194u;
    // 0x12e194: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E194u;
    {
        const bool branch_taken_0x12e194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E194u;
        // 0x12e198: 0x2a820020  slti        $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e194) {
            ctx->pc = 0x12E1ACu;
            goto label_12e1ac;
        }
    }
    ctx->pc = 0x12E19Cu;
    // 0x12e19c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E19Cu;
    {
        const bool branch_taken_0x12e19c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E19Cu;
        // 0x12e1a0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e19c) {
            ctx->pc = 0x12E1BCu;
            goto label_12e1bc;
        }
    }
    ctx->pc = 0x12E1A4u;
    // 0x12e1a4: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x12E1A4u;
    {
        const bool branch_taken_0x12e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1A4u;
        // 0x12e1a8: 0x2c620006  sltiu       $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1a4) {
            ctx->pc = 0x12E590u;
            goto label_12e590;
        }
    }
    ctx->pc = 0x12E1ACu;
label_12e1ac:
    // 0x12e1ac: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x12E1ACu;
    {
        const bool branch_taken_0x12e1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1ACu;
        // 0x12e1b0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1ac) {
            ctx->pc = 0x12E588u;
            goto label_12e588;
        }
    }
    ctx->pc = 0x12E1B4u;
    // 0x12e1b4: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x12E1B4u;
    {
        const bool branch_taken_0x12e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1B4u;
        // 0x12e1b8: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1b4) {
            ctx->pc = 0x12E40Cu;
            goto label_12e40c;
        }
    }
    ctx->pc = 0x12E1BCu;
label_12e1bc:
    // 0x12e1bc: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x12e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x12e1c0: 0x944400b2  lhu         $a0, 0xB2($v0)
    ctx->pc = 0x12e1c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 178)));
    // 0x12e1c4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x12e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x12e1c8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12E1C8u;
    {
        const bool branch_taken_0x12e1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1C8u;
        // 0x12e1cc: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1c8) {
            ctx->pc = 0x12E21Cu;
            goto label_12e21c;
        }
    }
    ctx->pc = 0x12E1D0u;
    // 0x12e1d0: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E1D0u;
    {
        const bool branch_taken_0x12e1d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1D0u;
        // 0x12e1d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1d0) {
            ctx->pc = 0x12E1E4u;
            goto label_12e1e4;
        }
    }
    ctx->pc = 0x12E1D8u;
    // 0x12e1d8: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e1dc: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x12E1DCu;
    {
        const bool branch_taken_0x12e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1DCu;
        // 0x12e1e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1dc) {
            ctx->pc = 0x12E544u;
            goto label_12e544;
        }
    }
    ctx->pc = 0x12E1E4u;
label_12e1e4:
    // 0x12e1e4: 0x162500e9  bne         $s1, $a1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x12E1E4u;
    {
        const bool branch_taken_0x12e1e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x12E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1E4u;
        // 0x12e1e8: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1e4) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E1ECu;
    // 0x12e1ec: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e1f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e1f8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12e1f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12e1fc: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12E1FCu;
    SET_GPR_U32(ctx, 31, 0x12E204u);
    ctx->pc = 0x12E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1FCu;
    // 0x12e200: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12E1FCu, 0x12E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E204u;
label_12e204:
    // 0x12e204: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e20c: 0xc04cd2a  jal         func_1334A8
    ctx->pc = 0x12E20Cu;
    SET_GPR_U32(ctx, 31, 0x12E214u);
    ctx->pc = 0x12E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E20Cu;
    // 0x12e210: 0x3c0620ff  lui         $a2, 0x20FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8447 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A8u, 0x12E20Cu, 0x12E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E214u;
label_12e214:
    // 0x12e214: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x12E214u;
    {
        const bool branch_taken_0x12e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E214u;
        // 0x12e218: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e214) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E21Cu;
label_12e21c:
    // 0x12e21c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12E21Cu;
    {
        const bool branch_taken_0x12e21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E21Cu;
        // 0x12e220: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e21c) {
            ctx->pc = 0x12E24Cu;
            goto label_12e24c;
        }
    }
    ctx->pc = 0x12E224u;
    // 0x12e224: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E224u;
    {
        const bool branch_taken_0x12e224 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E224u;
        // 0x12e228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e224) {
            ctx->pc = 0x12E23Cu;
            goto label_12e23c;
        }
    }
    ctx->pc = 0x12E22Cu;
    // 0x12e22c: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e22cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e230: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e234: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x12E234u;
    {
        const bool branch_taken_0x12e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E234u;
        // 0x12e238: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e234) {
            ctx->pc = 0x12E544u;
            goto label_12e544;
        }
    }
    ctx->pc = 0x12E23Cu;
label_12e23c:
    // 0x12e23c: 0x162500d3  bne         $s1, $a1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x12E23Cu;
    {
        const bool branch_taken_0x12e23c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x12E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E23Cu;
        // 0x12e240: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e23c) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E244u;
    // 0x12e244: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x12E244u;
    {
        const bool branch_taken_0x12e244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e244) {
            ctx->pc = 0x12E4F8u;
            goto label_12e4f8;
        }
    }
    ctx->pc = 0x12E24Cu;
label_12e24c:
    // 0x12e24c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E24Cu;
    {
        const bool branch_taken_0x12e24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e24c) {
            ctx->pc = 0x12E294u;
            goto label_12e294;
        }
    }
    ctx->pc = 0x12E254u;
    // 0x12e254: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E254u;
    {
        const bool branch_taken_0x12e254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E254u;
        // 0x12e258: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e254) {
            ctx->pc = 0x12E26Cu;
            goto label_12e26c;
        }
    }
    ctx->pc = 0x12E25Cu;
    // 0x12e25c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x12e25cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x12e260: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e264: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x12E264u;
    {
        const bool branch_taken_0x12e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E264u;
        // 0x12e268: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e264) {
            ctx->pc = 0x12E544u;
            goto label_12e544;
        }
    }
    ctx->pc = 0x12E26Cu;
label_12e26c:
    // 0x12e26c: 0x162500c7  bne         $s1, $a1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x12E26Cu;
    {
        const bool branch_taken_0x12e26c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x12E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E26Cu;
        // 0x12e270: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e26c) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E274u;
    // 0x12e274: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e274u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e278: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e27c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e280: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12e280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12e284: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12E284u;
    SET_GPR_U32(ctx, 31, 0x12E28Cu);
    ctx->pc = 0x12E288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E284u;
    // 0x12e288: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12E284u, 0x12E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E28Cu;
label_12e28c:
    // 0x12e28c: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x12E28Cu;
    {
        const bool branch_taken_0x12e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E28Cu;
        // 0x12e290: 0x3c062000  lui         $a2, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e28c) {
            ctx->pc = 0x12E514u;
            goto label_12e514;
        }
    }
    ctx->pc = 0x12E294u;
label_12e294:
    // 0x12e294: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E294u;
    {
        const bool branch_taken_0x12e294 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E294u;
        // 0x12e298: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e294) {
            ctx->pc = 0x12E2ACu;
            goto label_12e2ac;
        }
    }
    ctx->pc = 0x12E29Cu;
    // 0x12e29c: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x12e29cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x12e2a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e2a4: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x12E2A4u;
    {
        const bool branch_taken_0x12e2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2A4u;
        // 0x12e2a8: 0x34c68080  ori         $a2, $a2, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2a4) {
            ctx->pc = 0x12E544u;
            goto label_12e544;
        }
    }
    ctx->pc = 0x12E2ACu;
label_12e2ac:
    // 0x12e2ac: 0x162500b7  bne         $s1, $a1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x12E2ACu;
    {
        const bool branch_taken_0x12e2ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x12E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2ACu;
        // 0x12e2b0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2ac) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E2B4u;
    // 0x12e2b4: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e2b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e2c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12e2c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12e2c4: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12E2C4u;
    SET_GPR_U32(ctx, 31, 0x12E2CCu);
    ctx->pc = 0x12E2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2C4u;
    // 0x12e2c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12E2C4u, 0x12E2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2CCu;
label_12e2cc:
    // 0x12e2cc: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x12e2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x12e2d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e2d8: 0xc04cd2a  jal         func_1334A8
    ctx->pc = 0x12E2D8u;
    SET_GPR_U32(ctx, 31, 0x12E2E0u);
    ctx->pc = 0x12E2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2D8u;
    // 0x12e2dc: 0x34c68080  ori         $a2, $a2, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A8u, 0x12E2D8u, 0x12E2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2E0u;
label_12e2e0:
    // 0x12e2e0: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x12E2E0u;
    {
        const bool branch_taken_0x12e2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2E0u;
        // 0x12e2e4: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2e0) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E2E8u;
label_12e2e8:
    // 0x12e2e8: 0x1620001f  bnez        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x12E2E8u;
    {
        const bool branch_taken_0x12e2e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2E8u;
        // 0x12e2ec: 0x2481021  addu        $v0, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2e8) {
            ctx->pc = 0x12E368u;
            goto label_12e368;
        }
    }
    ctx->pc = 0x12E2F0u;
    // 0x12e2f0: 0x944400b0  lhu         $a0, 0xB0($v0)
    ctx->pc = 0x12e2f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x12e2f4: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x12e2f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12e2f8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x12E2F8u;
    {
        const bool branch_taken_0x12e2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2F8u;
        // 0x12e2fc: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2f8) {
            ctx->pc = 0x12E354u;
            goto label_12e354;
        }
    }
    ctx->pc = 0x12E300u;
    // 0x12e300: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12e300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12e304: 0x2442d3c0  addiu       $v0, $v0, -0x2C40
    ctx->pc = 0x12e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955968));
    // 0x12e308: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e30c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e310: 0x800008  jr          $a0
    ctx->pc = 0x12E310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E318u: goto label_12e318;
            case 0x12E324u: goto label_12e324;
            case 0x12E330u: goto label_12e330;
            case 0x12E33Cu: goto label_12e33c;
            case 0x12E348u: goto label_12e348;
            case 0x12E354u: goto label_12e354;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E310u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12E318u;
label_12e318:
    // 0x12e318: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x12e318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x12e31c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12E31Cu;
    {
        const bool branch_taken_0x12e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E31Cu;
        // 0x12e320: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e31c) {
            ctx->pc = 0x12E35Cu;
            goto label_12e35c;
        }
    }
    ctx->pc = 0x12E324u;
label_12e324:
    // 0x12e324: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e328: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12E328u;
    {
        const bool branch_taken_0x12e328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E328u;
        // 0x12e32c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e328) {
            ctx->pc = 0x12E360u;
            goto label_12e360;
        }
    }
    ctx->pc = 0x12E330u;
label_12e330:
    // 0x12e330: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x12e330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x12e334: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12E334u;
    {
        const bool branch_taken_0x12e334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E334u;
        // 0x12e338: 0x34c68080  ori         $a2, $a2, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e334) {
            ctx->pc = 0x12E35Cu;
            goto label_12e35c;
        }
    }
    ctx->pc = 0x12E33Cu;
label_12e33c:
    // 0x12e33c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x12e33cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x12e340: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12E340u;
    {
        const bool branch_taken_0x12e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E340u;
        // 0x12e344: 0x34c6ff00  ori         $a2, $a2, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e340) {
            ctx->pc = 0x12E35Cu;
            goto label_12e35c;
        }
    }
    ctx->pc = 0x12E348u;
label_12e348:
    // 0x12e348: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e34c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E34Cu;
    {
        const bool branch_taken_0x12e34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E34Cu;
        // 0x12e350: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e34c) {
            ctx->pc = 0x12E35Cu;
            goto label_12e35c;
        }
    }
    ctx->pc = 0x12E354u;
label_12e354:
    // 0x12e354: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x12e354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x12e358: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x12e358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
label_12e35c:
    // 0x12e35c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e360:
    // 0x12e360: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x12E360u;
    {
        const bool branch_taken_0x12e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E360u;
        // 0x12e364: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e360) {
            ctx->pc = 0x12E544u;
            goto label_12e544;
        }
    }
    ctx->pc = 0x12E368u;
label_12e368:
    // 0x12e368: 0x16340088  bne         $s1, $s4, . + 4 + (0x88 << 2)
    ctx->pc = 0x12E368u;
    {
        const bool branch_taken_0x12e368 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x12E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E368u;
        // 0x12e36c: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e368) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E370u;
    // 0x12e370: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x12e370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x12e374: 0x944400b0  lhu         $a0, 0xB0($v0)
    ctx->pc = 0x12e374u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x12e378: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x12e378u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12e37c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12E37Cu;
    {
        const bool branch_taken_0x12e37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E37Cu;
        // 0x12e380: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e37c) {
            ctx->pc = 0x12E3D4u;
            goto label_12e3d4;
        }
    }
    ctx->pc = 0x12E384u;
    // 0x12e384: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12e384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12e388: 0x2442d3f0  addiu       $v0, $v0, -0x2C10
    ctx->pc = 0x12e388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956016));
    // 0x12e38c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e390: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e394: 0x800008  jr          $a0
    ctx->pc = 0x12E394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E39Cu: goto label_12e39c;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3B0u: goto label_12e3b0;
            case 0x12E3BCu: goto label_12e3bc;
            case 0x12E3C8u: goto label_12e3c8;
            case 0x12E3D4u: goto label_12e3d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E394u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12E39Cu;
label_12e39c:
    // 0x12e39c: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x12e39cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x12e3a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12E3A0u;
    {
        const bool branch_taken_0x12e3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3A0u;
        // 0x12e3a4: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3a0) {
            ctx->pc = 0x12E3DCu;
            goto label_12e3dc;
        }
    }
    ctx->pc = 0x12E3A8u;
label_12e3a8:
    // 0x12e3a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12E3A8u;
    {
        const bool branch_taken_0x12e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3A8u;
        // 0x12e3ac: 0x3c1020ff  lui         $s0, 0x20FF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8447 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3a8) {
            ctx->pc = 0x12E3DCu;
            goto label_12e3dc;
        }
    }
    ctx->pc = 0x12E3B0u;
label_12e3b0:
    // 0x12e3b0: 0x3c102080  lui         $s0, 0x2080
    ctx->pc = 0x12e3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8320 << 16));
    // 0x12e3b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12E3B4u;
    {
        const bool branch_taken_0x12e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3B4u;
        // 0x12e3b8: 0x36108080  ori         $s0, $s0, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3b4) {
            ctx->pc = 0x12E3DCu;
            goto label_12e3dc;
        }
    }
    ctx->pc = 0x12E3BCu;
label_12e3bc:
    // 0x12e3bc: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x12e3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x12e3c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12E3C0u;
    {
        const bool branch_taken_0x12e3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3C0u;
        // 0x12e3c4: 0x3610ff00  ori         $s0, $s0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3c0) {
            ctx->pc = 0x12E3DCu;
            goto label_12e3dc;
        }
    }
    ctx->pc = 0x12E3C8u;
label_12e3c8:
    // 0x12e3c8: 0x3c1020ff  lui         $s0, 0x20FF
    ctx->pc = 0x12e3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8447 << 16));
    // 0x12e3cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E3CCu;
    {
        const bool branch_taken_0x12e3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3CCu;
        // 0x12e3d0: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3cc) {
            ctx->pc = 0x12E3DCu;
            goto label_12e3dc;
        }
    }
    ctx->pc = 0x12E3D4u;
label_12e3d4:
    // 0x12e3d4: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x12e3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x12e3d8: 0x361000ff  ori         $s0, $s0, 0xFF
    ctx->pc = 0x12e3d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)255);
label_12e3dc:
    // 0x12e3dc: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e3e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e3e8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12e3e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12e3ec: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12E3ECu;
    SET_GPR_U32(ctx, 31, 0x12E3F4u);
    ctx->pc = 0x12E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3ECu;
    // 0x12e3f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12E3ECu, 0x12E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E3F4u;
label_12e3f4:
    // 0x12e3f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12e3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3fc: 0xc04cd2a  jal         func_1334A8
    ctx->pc = 0x12E3FCu;
    SET_GPR_U32(ctx, 31, 0x12E404u);
    ctx->pc = 0x12E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3FCu;
    // 0x12e400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A8u, 0x12E3FCu, 0x12E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E404u;
label_12e404:
    // 0x12e404: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x12E404u;
    {
        const bool branch_taken_0x12e404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E404u;
        // 0x12e408: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e404) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E40Cu;
label_12e40c:
    // 0x12e40c: 0x2446d2e0  addiu       $a2, $v0, -0x2D20
    ctx->pc = 0x12e40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955744));
    // 0x12e410: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x12e410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e414: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x12e414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x12e418: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12E418u;
    {
        const bool branch_taken_0x12e418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E418u;
        // 0x12e41c: 0x2687fffe  addiu       $a3, $s4, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e418) {
            ctx->pc = 0x12E480u;
            goto label_12e480;
        }
    }
    ctx->pc = 0x12E420u;
    // 0x12e420: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x12e420u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x12e424: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x12e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x12e428: 0x264400b4  addiu       $a0, $s2, 0xB4
    ctx->pc = 0x12e428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
label_12e42c:
    // 0x12e42c: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x12e42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12e430: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x12e430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12e434: 0x68ca000f  ldl         $t2, 0xF($a2)
    ctx->pc = 0x12e434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x12e438: 0x6cca0008  ldr         $t2, 0x8($a2)
    ctx->pc = 0x12e438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x12e43c: 0x68cb0017  ldl         $t3, 0x17($a2)
    ctx->pc = 0x12e43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x12e440: 0x6ccb0010  ldr         $t3, 0x10($a2)
    ctx->pc = 0x12e440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x12e444: 0x68cc001f  ldl         $t4, 0x1F($a2)
    ctx->pc = 0x12e444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x12e448: 0x6ccc0018  ldr         $t4, 0x18($a2)
    ctx->pc = 0x12e448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x12e44c: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x12e44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e450: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x12e450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e454: 0xb06a000f  sdl         $t2, 0xF($v1)
    ctx->pc = 0x12e454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e458: 0xb46a0008  sdr         $t2, 0x8($v1)
    ctx->pc = 0x12e458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e45c: 0xb06b0017  sdl         $t3, 0x17($v1)
    ctx->pc = 0x12e45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e460: 0xb46b0010  sdr         $t3, 0x10($v1)
    ctx->pc = 0x12e460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e464: 0xb06c001f  sdl         $t4, 0x1F($v1)
    ctx->pc = 0x12e464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e468: 0xb46c0018  sdr         $t4, 0x18($v1)
    ctx->pc = 0x12e468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e46c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12e46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12e470: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12E470u;
    {
        const bool branch_taken_0x12e470 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E470u;
        // 0x12e474: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e470) {
            ctx->pc = 0x12E42Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e42c;
        }
    }
    ctx->pc = 0x12E478u;
    // 0x12e478: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12E478u;
    {
        const bool branch_taken_0x12e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E478u;
        // 0x12e47c: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e478) {
            ctx->pc = 0x12E4BCu;
            goto label_12e4bc;
        }
    }
    ctx->pc = 0x12E480u;
label_12e480:
    // 0x12e480: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x12e480u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x12e484: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x12e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x12e488: 0x264400b4  addiu       $a0, $s2, 0xB4
    ctx->pc = 0x12e488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
label_12e48c:
    // 0x12e48c: 0xdcc70000  ld          $a3, 0x0($a2)
    ctx->pc = 0x12e48cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12e490: 0xdcca0008  ld          $t2, 0x8($a2)
    ctx->pc = 0x12e490u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12e494: 0xdccb0010  ld          $t3, 0x10($a2)
    ctx->pc = 0x12e494u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x12e498: 0xdccc0018  ld          $t4, 0x18($a2)
    ctx->pc = 0x12e498u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x12e49c: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x12e49cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x12e4a0: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x12e4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x12e4a4: 0xfc6b0010  sd          $t3, 0x10($v1)
    ctx->pc = 0x12e4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 11));
    // 0x12e4a8: 0xfc6c0018  sd          $t4, 0x18($v1)
    ctx->pc = 0x12e4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 12));
    // 0x12e4ac: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12e4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12e4b0: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12E4B0u;
    {
        const bool branch_taken_0x12e4b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4B0u;
        // 0x12e4b4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4b0) {
            ctx->pc = 0x12E48Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e48c;
        }
    }
    ctx->pc = 0x12E4B8u;
    // 0x12e4b8: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x12e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_12e4bc:
    // 0x12e4bc: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x12e4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x12e4c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e4c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e4c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12e4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12e4cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x12E4CCu;
    {
        const bool branch_taken_0x12e4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e4cc) {
            ctx->pc = 0x12E52Cu;
            goto label_12e52c;
        }
    }
    ctx->pc = 0x12E4D4u;
    // 0x12e4d4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E4D4u;
    {
        const bool branch_taken_0x12e4d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4D4u;
        // 0x12e4d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4d4) {
            ctx->pc = 0x12E4F0u;
            goto label_12e4f0;
        }
    }
    ctx->pc = 0x12E4DCu;
    // 0x12e4dc: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e4e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e4e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12E4E8u;
    {
        const bool branch_taken_0x12e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4E8u;
        // 0x12e4ec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4e8) {
            ctx->pc = 0x12E544u;
            goto label_12e544;
        }
    }
    ctx->pc = 0x12E4F0u;
label_12e4f0:
    // 0x12e4f0: 0x16220026  bne         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x12E4F0u;
    {
        const bool branch_taken_0x12e4f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4F0u;
        // 0x12e4f4: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4f0) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E4F8u;
label_12e4f8:
    // 0x12e4f8: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e4fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e500: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e504: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12e504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12e508: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12E508u;
    SET_GPR_U32(ctx, 31, 0x12E510u);
    ctx->pc = 0x12E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E508u;
    // 0x12e50c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12E508u, 0x12E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E510u;
label_12e510:
    // 0x12e510: 0x3c0620ff  lui         $a2, 0x20FF
    ctx->pc = 0x12e510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8447 << 16));
label_12e514:
    // 0x12e514: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e51c: 0xc04cd2a  jal         func_1334A8
    ctx->pc = 0x12E51Cu;
    SET_GPR_U32(ctx, 31, 0x12E524u);
    ctx->pc = 0x12E520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E51Cu;
    // 0x12e520: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A8u, 0x12E51Cu, 0x12E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E524u;
label_12e524:
    // 0x12e524: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12E524u;
    {
        const bool branch_taken_0x12e524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E524u;
        // 0x12e528: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e524) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E52Cu;
label_12e52c:
    // 0x12e52c: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E52Cu;
    {
        const bool branch_taken_0x12e52c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E52Cu;
        // 0x12e530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e52c) {
            ctx->pc = 0x12E554u;
            goto label_12e554;
        }
    }
    ctx->pc = 0x12E534u;
    // 0x12e534: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x12e534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x12e538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e53c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e540: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x12e540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
label_12e544:
    // 0x12e544: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12E544u;
    SET_GPR_U32(ctx, 31, 0x12E54Cu);
    ctx->pc = 0x12E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E544u;
    // 0x12e548: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12E544u, 0x12E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E54Cu;
label_12e54c:
    // 0x12e54c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12E54Cu;
    {
        const bool branch_taken_0x12e54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E54Cu;
        // 0x12e550: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e54c) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E554u;
label_12e554:
    // 0x12e554: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12E554u;
    {
        const bool branch_taken_0x12e554 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E554u;
        // 0x12e558: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e554) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E55Cu;
    // 0x12e55c: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12e55cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12e560: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e564: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12e564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e568: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12e568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12e56c: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12E56Cu;
    SET_GPR_U32(ctx, 31, 0x12E574u);
    ctx->pc = 0x12E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E56Cu;
    // 0x12e570: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12E56Cu, 0x12E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E574u;
label_12e574:
    // 0x12e574: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x12e574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x12e578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e57c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e580: 0xc04cd2a  jal         func_1334A8
    ctx->pc = 0x12E580u;
    SET_GPR_U32(ctx, 31, 0x12E588u);
    ctx->pc = 0x12E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E580u;
    // 0x12e584: 0x34c600ff  ori         $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A8u, 0x12E580u, 0x12E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E588u;
label_12e588:
    // 0x12e588: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x12e588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12e58c:
    // 0x12e58c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x12e58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_12e590:
    // 0x12e590: 0x1440fe75  bnez        $v0, . + 4 + (-0x18B << 2)
    ctx->pc = 0x12E590u;
    {
        const bool branch_taken_0x12e590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E590u;
        // 0x12e594: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e590) {
            ctx->pc = 0x12DF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12df68;
        }
    }
    ctx->pc = 0x12E598u;
    // 0x12e598: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x12e598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x12e59c: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x12e59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x12e5a0: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x12e5a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x12e5a4: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x12e5a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x12e5a8: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x12e5a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x12e5ac: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x12e5acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x12e5b0: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x12e5b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x12e5b4: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x12e5b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x12e5b8: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x12e5b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12e5bc: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x12e5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x12e5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x12E5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5C0u;
        // 0x12e5c4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E5C8u;
}
