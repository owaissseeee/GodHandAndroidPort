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

// Function: func_001038E0
// Address: 0x1038e0 - 0x104010
void func_001038E0_0x1038e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001038E0_0x1038e0");
#endif

    switch (ctx->pc) {
        case 0x103960u: goto label_103960;
        case 0x103a54u: goto label_103a54;
        case 0x103b2cu: goto label_103b2c;
        case 0x103be0u: goto label_103be0;
        case 0x103c08u: goto label_103c08;
        case 0x103c58u: goto label_103c58;
        case 0x103d20u: goto label_103d20;
        case 0x103dacu: goto label_103dac;
        case 0x103dd4u: goto label_103dd4;
        case 0x103e48u: goto label_103e48;
        case 0x103e70u: goto label_103e70;
        case 0x103ee4u: goto label_103ee4;
        case 0x103f0cu: goto label_103f0c;
        case 0x103f80u: goto label_103f80;
        case 0x103fa8u: goto label_103fa8;
        default: break;
    }

    ctx->pc = 0x1038e0u;

    // 0x1038e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1038e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1038e4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1038e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1038e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1038e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1038ec: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1038ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038f0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1038f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1038f4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1038f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038f8: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1038f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1038fc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1038fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103900: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x103900u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x103904: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x103904u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x103908: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x103908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x10390c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10390cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x103910: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x103910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x103914: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x103914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x103918: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x103918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x10391c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x10391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x103920: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x103920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x103924: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x103924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x103928: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x103928u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x10392c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x103930: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x103930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x103934: 0x104001a4  beqz        $v0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x103934u;
    {
        const bool branch_taken_0x103934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103934u;
        // 0x103938: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103934) {
            ctx->pc = 0x103FC8u;
            goto label_103fc8;
        }
    }
    ctx->pc = 0x10393Cu;
    // 0x10393c: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x10393Cu;
    {
        const bool branch_taken_0x10393c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10393Cu;
        // 0x103940: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10393c) {
            ctx->pc = 0x103D04u;
            goto label_103d04;
        }
    }
    ctx->pc = 0x103944u;
    // 0x103944: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x103944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x103948: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x103948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10394c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x10394cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x103950: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x103950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x103954: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x103954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x103958: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x103958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x10395c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x10395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_103960:
    // 0x103960: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x103960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x103964: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x103964u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103968: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x103968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10396c: 0x108200df  beq         $a0, $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x10396Cu;
    {
        const bool branch_taken_0x10396c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x103970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10396Cu;
        // 0x103970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10396c) {
            ctx->pc = 0x103CECu;
            goto label_103cec;
        }
    }
    ctx->pc = 0x103974u;
    // 0x103974: 0x92c302b4  lbu         $v1, 0x2B4($s6)
    ctx->pc = 0x103974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x103978: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x103978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x10397c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10397Cu;
    {
        const bool branch_taken_0x10397c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10397c) {
            ctx->pc = 0x10398Cu;
            goto label_10398c;
        }
    }
    ctx->pc = 0x103984u;
    // 0x103984: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x103984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x103988: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10398c:
    // 0x10398c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x10398cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x103990: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103990u;
    {
        const bool branch_taken_0x103990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103990u;
        // 0x103994: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103990) {
            ctx->pc = 0x1039A8u;
            goto label_1039a8;
        }
    }
    ctx->pc = 0x103998u;
    // 0x103998: 0x8ec30278  lw          $v1, 0x278($s6)
    ctx->pc = 0x103998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 632)));
    // 0x10399c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1039a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1039A0u;
    {
        const bool branch_taken_0x1039a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1039A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039A0u;
        // 0x1039a4: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039a0) {
            ctx->pc = 0x1039ACu;
            goto label_1039ac;
        }
    }
    ctx->pc = 0x1039A8u;
label_1039a8:
    // 0x1039a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1039a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1039ac:
    // 0x1039ac: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1039acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1039b0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1039b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1039b4: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x1039b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1039b8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1039b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1039bc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1039bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1039c0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1039c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1039c4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1039c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1039c8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1039c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1039cc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1039ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1039d0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1039d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1039d4: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1039d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1039d8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1039d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1039dc: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1039dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1039e0: 0xe6150078  swc1        $f21, 0x78($s0)
    ctx->pc = 0x1039e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1039e4: 0xa2000090  sb          $zero, 0x90($s0)
    ctx->pc = 0x1039e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x1039e8: 0xa2000091  sb          $zero, 0x91($s0)
    ctx->pc = 0x1039e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 145), (uint8_t)GPR_U32(ctx, 0));
    // 0x1039ec: 0x8ee2001c  lw          $v0, 0x1C($s7)
    ctx->pc = 0x1039ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x1039f0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1039f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1039f4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1039f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1039f8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1039f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1039fc: 0x14820051  bne         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1039FCu;
    {
        const bool branch_taken_0x1039fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x103A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039FCu;
        // 0x103a00: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039fc) {
            ctx->pc = 0x103B44u;
            goto label_103b44;
        }
    }
    ctx->pc = 0x103A04u;
    // 0x103a04: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x103a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x103a08: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x103a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x103a0c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x103a0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103a10: 0x5483001c  bnel        $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x103A10u;
    {
        const bool branch_taken_0x103a10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x103a10) {
            ctx->pc = 0x103A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103A10u;
            // 0x103a14: 0x92c302b4  lbu         $v1, 0x2B4($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103A84u;
            goto label_103a84;
        }
    }
    ctx->pc = 0x103A18u;
    // 0x103a18: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x103a18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x103a1c: 0xe6140060  swc1        $f20, 0x60($s0)
    ctx->pc = 0x103a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x103a20: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x103a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x103a24: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x103a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x103a28: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x103a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x103a2c: 0x26850080  addiu       $a1, $s4, 0x80
    ctx->pc = 0x103a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x103a30: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x103a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x103a34: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x103a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x103a38: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x103a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x103a3c: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x103a3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x103a40: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x103a40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103a44: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x103a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103a48: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x103a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103a4c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x103A4Cu;
    SET_GPR_U32(ctx, 31, 0x103A54u);
    ctx->pc = 0x103A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A4Cu;
    // 0x103a50: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x103A4Cu, 0x103A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A54u;
label_103a54:
    // 0x103a54: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x103a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103a58: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x103a58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103a5c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x103a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103a60: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x103a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x103a64: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x103a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x103a68: 0x1043009c  beq         $v0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x103A68u;
    {
        const bool branch_taken_0x103a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x103A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A68u;
        // 0x103a6c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a68) {
            ctx->pc = 0x103CDCu;
            goto label_103cdc;
        }
    }
    ctx->pc = 0x103A70u;
    // 0x103a70: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x103a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x103a74: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x103a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103a78: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x103a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x103a7c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x103A7Cu;
    {
        const bool branch_taken_0x103a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A7Cu;
        // 0x103a80: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a7c) {
            ctx->pc = 0x103CD8u;
            goto label_103cd8;
        }
    }
    ctx->pc = 0x103A84u;
label_103a84:
    // 0x103a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a88: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x103a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x103a8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103A8Cu;
    {
        const bool branch_taken_0x103a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A8Cu;
        // 0x103a90: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a8c) {
            ctx->pc = 0x103A9Cu;
            goto label_103a9c;
        }
    }
    ctx->pc = 0x103A94u;
    // 0x103a94: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x103a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x103a98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103a9c:
    // 0x103a9c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x103a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x103aa0: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x103aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x103aa4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x103aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x103aa8: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x103aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x103aac: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x103aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103ab0: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103AB0u;
    {
        const bool branch_taken_0x103ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x103AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AB0u;
        // 0x103ab4: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ab0) {
            ctx->pc = 0x103AD0u;
            goto label_103ad0;
        }
    }
    ctx->pc = 0x103AB8u;
    // 0x103ab8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x103ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103abc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x103abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x103ac0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x103ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103ac4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x103ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x103ac8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x103ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103acc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x103accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_103ad0:
    // 0x103ad0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x103ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x103ad4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x103ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x103ad8: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x103AD8u;
    {
        const bool branch_taken_0x103ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x103ad8) {
            ctx->pc = 0x103ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103AD8u;
            // 0x103adc: 0x8e8200f0  lw          $v0, 0xF0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103AFCu;
            goto label_103afc;
        }
    }
    ctx->pc = 0x103AE0u;
    // 0x103ae0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x103ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103ae4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x103ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x103ae8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x103ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103aec: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x103aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x103af0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x103af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103af4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x103af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x103af8: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x103af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_103afc:
    // 0x103afc: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x103afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x103b00: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103B00u;
    {
        const bool branch_taken_0x103b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B00u;
        // 0x103b04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b00) {
            ctx->pc = 0x103B20u;
            goto label_103b20;
        }
    }
    ctx->pc = 0x103B08u;
    // 0x103b08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x103b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103b0c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x103b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x103b10: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x103b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103b14: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x103b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x103b18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x103b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103b1c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x103b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_103b20:
    // 0x103b20: 0x26c50080  addiu       $a1, $s6, 0x80
    ctx->pc = 0x103b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x103b24: 0xc07e0d4  jal         func_1F8350
    ctx->pc = 0x103B24u;
    SET_GPR_U32(ctx, 31, 0x103B2Cu);
    ctx->pc = 0x103B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B24u;
    // 0x103b28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x103B24u, 0x103B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B2Cu;
label_103b2c:
    // 0x103b2c: 0xda040040  lqc2        $vf4, 0x40($s0)
    ctx->pc = 0x103b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x103b30: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x103b30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103b34: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x103b34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103b38: 0xfa040040  sqc2        $vf4, 0x40($s0)
    ctx->pc = 0x103b38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103b3c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x103B3Cu;
    {
        const bool branch_taken_0x103b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B3Cu;
        // 0x103b40: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b3c) {
            ctx->pc = 0x103CE0u;
            goto label_103ce0;
        }
    }
    ctx->pc = 0x103B44u;
label_103b44:
    // 0x103b44: 0x92c302b4  lbu         $v1, 0x2B4($s6)
    ctx->pc = 0x103b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x103b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b4c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x103b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x103b50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103B50u;
    {
        const bool branch_taken_0x103b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B50u;
        // 0x103b54: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b50) {
            ctx->pc = 0x103B60u;
            goto label_103b60;
        }
    }
    ctx->pc = 0x103B58u;
    // 0x103b58: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x103b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x103b5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103b60:
    // 0x103b60: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x103b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x103b64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103B64u;
    {
        const bool branch_taken_0x103b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B64u;
        // 0x103b68: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b64) {
            ctx->pc = 0x103B7Cu;
            goto label_103b7c;
        }
    }
    ctx->pc = 0x103B6Cu;
    // 0x103b6c: 0x8ec30278  lw          $v1, 0x278($s6)
    ctx->pc = 0x103b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 632)));
    // 0x103b70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103b74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x103B74u;
    {
        const bool branch_taken_0x103b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B74u;
        // 0x103b78: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b74) {
            ctx->pc = 0x103B80u;
            goto label_103b80;
        }
    }
    ctx->pc = 0x103B7Cu;
label_103b7c:
    // 0x103b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103b80:
    // 0x103b80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x103b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b84: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x103b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x103b88: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x103b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x103b8c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x103B8Cu;
    {
        const bool branch_taken_0x103b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x103b8c) {
            ctx->pc = 0x103B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103B8Cu;
            // 0x103b90: 0x8e8300f0  lw          $v1, 0xF0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103BB0u;
            goto label_103bb0;
        }
    }
    ctx->pc = 0x103B94u;
    // 0x103b94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x103b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103b98: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x103b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x103b9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x103b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103ba0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x103ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x103ba4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x103ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103ba8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x103ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x103bac: 0x8e8300f0  lw          $v1, 0xF0($s4)
    ctx->pc = 0x103bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_103bb0:
    // 0x103bb0: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x103bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x103bb4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x103bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x103bb8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x103bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x103bbc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x103bbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103bc0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x103bc0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103bc4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x103bc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103bc8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x103bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103bcc: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x103bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x103bd0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x103bd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x103bd4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x103bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103bd8: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x103BD8u;
    SET_GPR_U32(ctx, 31, 0x103BE0u);
    ctx->pc = 0x103BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BD8u;
    // 0x103bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x103BD8u, 0x103BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BE0u;
label_103be0:
    // 0x103be0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x103be0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x103be4: 0x0  nop
    ctx->pc = 0x103be4u;
    // NOP
    // 0x103be8: 0x0  nop
    ctx->pc = 0x103be8u;
    // NOP
    // 0x103bec: 0x460c0004  c1          0xC0004
    ctx->pc = 0x103becu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x103bf0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x103bf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103bf4: 0x0  nop
    ctx->pc = 0x103bf4u;
    // NOP
    // 0x103bf8: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x103BF8u;
    {
        const bool branch_taken_0x103bf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x103bf8) {
            ctx->pc = 0x103BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103BF8u;
            // 0x103bfc: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x103C0Cu;
            goto label_103c0c;
        }
    }
    ctx->pc = 0x103C00u;
    // 0x103c00: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x103C00u;
    SET_GPR_U32(ctx, 31, 0x103C08u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x103C00u, 0x103C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C08u;
label_103c08:
    // 0x103c08: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x103c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_103c0c:
    // 0x103c0c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x103c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x103c10: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x103c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x103c14: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x103c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x103c18: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x103c18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103c1c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x103c1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103c20: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x103c20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103c24: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x103c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103c28: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x103c28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x103c2c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x103c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103c30: 0x12130006  beq         $s0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x103C30u;
    {
        const bool branch_taken_0x103c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x103C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C30u;
        // 0x103c34: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c30) {
            ctx->pc = 0x103C4Cu;
            goto label_103c4c;
        }
    }
    ctx->pc = 0x103C38u;
    // 0x103c38: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x103c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x103c3c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x103c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103c40: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x103c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x103c44: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x103c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103c48: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x103c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_103c4c:
    // 0x103c4c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x103c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x103c50: 0xc04078a  jal         func_101E28
    ctx->pc = 0x103C50u;
    SET_GPR_U32(ctx, 31, 0x103C58u);
    ctx->pc = 0x103C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C50u;
    // 0x103c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x103C50u, 0x103C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C58u;
label_103c58:
    // 0x103c58: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x103c58u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x103c5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x103c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103c60: 0x0  nop
    ctx->pc = 0x103c60u;
    // NOP
    // 0x103c64: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x103c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103c68: 0x0  nop
    ctx->pc = 0x103c68u;
    // NOP
    // 0x103c6c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x103C6Cu;
    {
        const bool branch_taken_0x103c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103c6c) {
            ctx->pc = 0x103CB4u;
            goto label_103cb4;
        }
    }
    ctx->pc = 0x103C74u;
    // 0x103c74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x103c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x103c78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x103c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x103c7c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x103c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103c80: 0x0  nop
    ctx->pc = 0x103c80u;
    // NOP
    // 0x103c84: 0x0  nop
    ctx->pc = 0x103c84u;
    // NOP
    // 0x103c88: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x103c88u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x103c8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x103c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x103c90: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x103c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x103c94: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x103c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103c98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x103c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x103c9c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x103c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x103ca0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x103ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103ca4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x103ca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x103ca8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x103ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x103cac: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x103cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103cb0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x103cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_103cb4:
    // 0x103cb4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x103cb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x103cb8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x103cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103cbc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x103cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x103cc0: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x103CC0u;
    {
        const bool branch_taken_0x103cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x103CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CC0u;
        // 0x103cc4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103cc0) {
            ctx->pc = 0x103CDCu;
            goto label_103cdc;
        }
    }
    ctx->pc = 0x103CC8u;
    // 0x103cc8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x103cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x103ccc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x103cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103cd0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x103cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x103cd4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x103cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_103cd8:
    // 0x103cd8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x103cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_103cdc:
    // 0x103cdc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x103cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_103ce0:
    // 0x103ce0: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x103ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x103ce4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x103ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x103ce8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x103ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_103cec:
    // 0x103cec: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x103cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x103cf0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x103cf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x103cf4: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x103cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x103cf8: 0x5440ff19  bnel        $v0, $zero, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x103CF8u;
    {
        const bool branch_taken_0x103cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103cf8) {
            ctx->pc = 0x103CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103CF8u;
            // 0x103cfc: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103960;
        }
    }
    ctx->pc = 0x103D00u;
    // 0x103d00: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x103d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_103d04:
    // 0x103d04: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x103D04u;
    {
        const bool branch_taken_0x103d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D04u;
        // 0x103d08: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d04) {
            ctx->pc = 0x103FC4u;
            goto label_103fc4;
        }
    }
    ctx->pc = 0x103D0Cu;
    // 0x103d0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x103d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x103d10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x103d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x103d14: 0x241200a0  addiu       $s2, $zero, 0xA0
    ctx->pc = 0x103d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x103d18: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x103d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x103d1c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x103d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_103d20:
    // 0x103d20: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x103d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x103d24: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x103d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x103d28: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x103d28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103d2c: 0x108300a0  beq         $a0, $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x103D2Cu;
    {
        const bool branch_taken_0x103d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x103D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D2Cu;
        // 0x103d30: 0x921818  mult        $v1, $a0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d2c) {
            ctx->pc = 0x103FB0u;
            goto label_103fb0;
        }
    }
    ctx->pc = 0x103D34u;
    // 0x103d34: 0x92c202b4  lbu         $v0, 0x2B4($s6)
    ctx->pc = 0x103d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x103d38: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x103d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x103d3c: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x103d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x103d40: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x103D40u;
    {
        const bool branch_taken_0x103d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D40u;
        // 0x103d44: 0x7e8021  addu        $s0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d40) {
            ctx->pc = 0x103DDCu;
            goto label_103ddc;
        }
    }
    ctx->pc = 0x103D48u;
    // 0x103d48: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x103d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x103d4c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x103d4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103d50: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x103d50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x103d54: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x103D54u;
    {
        const bool branch_taken_0x103d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D54u;
        // 0x103d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d54) {
            ctx->pc = 0x103DDCu;
            goto label_103ddc;
        }
    }
    ctx->pc = 0x103D5Cu;
    // 0x103d5c: 0x92c302b4  lbu         $v1, 0x2B4($s6)
    ctx->pc = 0x103d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x103d60: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x103d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x103d64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103D64u;
    {
        const bool branch_taken_0x103d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D64u;
        // 0x103d68: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d64) {
            ctx->pc = 0x103D74u;
            goto label_103d74;
        }
    }
    ctx->pc = 0x103D6Cu;
    // 0x103d6c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x103d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x103d70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103d74:
    // 0x103d74: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x103d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x103d78: 0x921818  mult        $v1, $a0, $s2
    ctx->pc = 0x103d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x103d7c: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x103d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x103d80: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x103d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x103d84: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x103d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x103d88: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x103d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x103d8c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x103d8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103d90: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x103d90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103d94: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x103d94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103d98: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x103d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103d9c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x103d9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103da0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x103da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103da4: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x103DA4u;
    SET_GPR_U32(ctx, 31, 0x103DACu);
    ctx->pc = 0x103DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DA4u;
    // 0x103da8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x103DA4u, 0x103DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DACu;
label_103dac:
    // 0x103dac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x103dacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x103db0: 0x0  nop
    ctx->pc = 0x103db0u;
    // NOP
    // 0x103db4: 0x0  nop
    ctx->pc = 0x103db4u;
    // NOP
    // 0x103db8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x103db8u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x103dbc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x103dbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103dc0: 0x0  nop
    ctx->pc = 0x103dc0u;
    // NOP
    // 0x103dc4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x103DC4u;
    {
        const bool branch_taken_0x103dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x103dc4) {
            ctx->pc = 0x103DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103DC4u;
            // 0x103dc8: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DD8u;
            goto label_103dd8;
        }
    }
    ctx->pc = 0x103DCCu;
    // 0x103dcc: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x103DCCu;
    SET_GPR_U32(ctx, 31, 0x103DD4u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x103DCCu, 0x103DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DD4u;
label_103dd4:
    // 0x103dd4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x103dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_103dd8:
    // 0x103dd8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x103dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_103ddc:
    // 0x103ddc: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x103ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x103de0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x103DE0u;
    {
        const bool branch_taken_0x103de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DE0u;
        // 0x103de4: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103de0) {
            ctx->pc = 0x103E78u;
            goto label_103e78;
        }
    }
    ctx->pc = 0x103DE8u;
    // 0x103de8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x103de8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103dec: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x103decu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x103df0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x103DF0u;
    {
        const bool branch_taken_0x103df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DF0u;
        // 0x103df4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103df0) {
            ctx->pc = 0x103E78u;
            goto label_103e78;
        }
    }
    ctx->pc = 0x103DF8u;
    // 0x103df8: 0x92c302b4  lbu         $v1, 0x2B4($s6)
    ctx->pc = 0x103df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x103dfc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x103dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x103e00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103E00u;
    {
        const bool branch_taken_0x103e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E00u;
        // 0x103e04: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e00) {
            ctx->pc = 0x103E10u;
            goto label_103e10;
        }
    }
    ctx->pc = 0x103E08u;
    // 0x103e08: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x103e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x103e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103e10:
    // 0x103e10: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x103e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x103e14: 0x921818  mult        $v1, $a0, $s2
    ctx->pc = 0x103e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x103e18: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x103e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x103e1c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x103e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x103e20: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x103e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x103e24: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x103e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x103e28: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x103e28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103e2c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x103e2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103e30: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x103e30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103e34: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x103e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103e38: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x103e38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103e3c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x103e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103e40: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x103E40u;
    SET_GPR_U32(ctx, 31, 0x103E48u);
    ctx->pc = 0x103E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E40u;
    // 0x103e44: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x103E40u, 0x103E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E48u;
label_103e48:
    // 0x103e48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x103e48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x103e4c: 0x0  nop
    ctx->pc = 0x103e4cu;
    // NOP
    // 0x103e50: 0x0  nop
    ctx->pc = 0x103e50u;
    // NOP
    // 0x103e54: 0x460c0004  c1          0xC0004
    ctx->pc = 0x103e54u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x103e58: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x103e58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103e5c: 0x0  nop
    ctx->pc = 0x103e5cu;
    // NOP
    // 0x103e60: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x103E60u;
    {
        const bool branch_taken_0x103e60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x103e60) {
            ctx->pc = 0x103E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103E60u;
            // 0x103e64: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x103E74u;
            goto label_103e74;
        }
    }
    ctx->pc = 0x103E68u;
    // 0x103e68: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x103E68u;
    SET_GPR_U32(ctx, 31, 0x103E70u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x103E68u, 0x103E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E70u;
label_103e70:
    // 0x103e70: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x103e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_103e74:
    // 0x103e74: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x103e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_103e78:
    // 0x103e78: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x103e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x103e7c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x103E7Cu;
    {
        const bool branch_taken_0x103e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E7Cu;
        // 0x103e80: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e7c) {
            ctx->pc = 0x103F14u;
            goto label_103f14;
        }
    }
    ctx->pc = 0x103E84u;
    // 0x103e84: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x103e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103e88: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x103e88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x103e8c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x103E8Cu;
    {
        const bool branch_taken_0x103e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E8Cu;
        // 0x103e90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e8c) {
            ctx->pc = 0x103F14u;
            goto label_103f14;
        }
    }
    ctx->pc = 0x103E94u;
    // 0x103e94: 0x92c302b4  lbu         $v1, 0x2B4($s6)
    ctx->pc = 0x103e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x103e98: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x103e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x103e9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103E9Cu;
    {
        const bool branch_taken_0x103e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E9Cu;
        // 0x103ea0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e9c) {
            ctx->pc = 0x103EACu;
            goto label_103eac;
        }
    }
    ctx->pc = 0x103EA4u;
    // 0x103ea4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x103ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x103ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103eac:
    // 0x103eac: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x103eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x103eb0: 0x921818  mult        $v1, $a0, $s2
    ctx->pc = 0x103eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x103eb4: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x103eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x103eb8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x103eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x103ebc: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x103ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x103ec0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x103ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x103ec4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x103ec4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103ec8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x103ec8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103ecc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x103eccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103ed0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x103ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103ed4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x103ed4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103ed8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x103ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103edc: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x103EDCu;
    SET_GPR_U32(ctx, 31, 0x103EE4u);
    ctx->pc = 0x103EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103EDCu;
    // 0x103ee0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x103EDCu, 0x103EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EE4u;
label_103ee4:
    // 0x103ee4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x103ee4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x103ee8: 0x0  nop
    ctx->pc = 0x103ee8u;
    // NOP
    // 0x103eec: 0x0  nop
    ctx->pc = 0x103eecu;
    // NOP
    // 0x103ef0: 0x460c0004  c1          0xC0004
    ctx->pc = 0x103ef0u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x103ef4: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x103ef4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103ef8: 0x0  nop
    ctx->pc = 0x103ef8u;
    // NOP
    // 0x103efc: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x103EFCu;
    {
        const bool branch_taken_0x103efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x103efc) {
            ctx->pc = 0x103F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103EFCu;
            // 0x103f00: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F10u;
            goto label_103f10;
        }
    }
    ctx->pc = 0x103F04u;
    // 0x103f04: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x103F04u;
    SET_GPR_U32(ctx, 31, 0x103F0Cu);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x103F04u, 0x103F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F0Cu;
label_103f0c:
    // 0x103f0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x103f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_103f10:
    // 0x103f10: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x103f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_103f14:
    // 0x103f14: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x103f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x103f18: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x103F18u;
    {
        const bool branch_taken_0x103f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F18u;
        // 0x103f1c: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f18) {
            ctx->pc = 0x103FB0u;
            goto label_103fb0;
        }
    }
    ctx->pc = 0x103F20u;
    // 0x103f20: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x103f20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103f24: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x103f24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x103f28: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x103F28u;
    {
        const bool branch_taken_0x103f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F28u;
        // 0x103f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f28) {
            ctx->pc = 0x103FB0u;
            goto label_103fb0;
        }
    }
    ctx->pc = 0x103F30u;
    // 0x103f30: 0x92c302b4  lbu         $v1, 0x2B4($s6)
    ctx->pc = 0x103f30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x103f34: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x103f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x103f38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103F38u;
    {
        const bool branch_taken_0x103f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F38u;
        // 0x103f3c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f38) {
            ctx->pc = 0x103F48u;
            goto label_103f48;
        }
    }
    ctx->pc = 0x103F40u;
    // 0x103f40: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x103f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x103f44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103f48:
    // 0x103f48: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x103f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x103f4c: 0x921818  mult        $v1, $a0, $s2
    ctx->pc = 0x103f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x103f50: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x103f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x103f54: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x103f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x103f58: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x103f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x103f5c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x103f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x103f60: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x103f60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103f64: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x103f64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103f68: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x103f68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103f6c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x103f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103f70: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x103f70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103f74: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x103f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x103f78: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x103F78u;
    SET_GPR_U32(ctx, 31, 0x103F80u);
    ctx->pc = 0x103F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F78u;
    // 0x103f7c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x103F78u, 0x103F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F80u;
label_103f80:
    // 0x103f80: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x103f80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x103f84: 0x0  nop
    ctx->pc = 0x103f84u;
    // NOP
    // 0x103f88: 0x0  nop
    ctx->pc = 0x103f88u;
    // NOP
    // 0x103f8c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x103f8cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x103f90: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x103f90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103f94: 0x0  nop
    ctx->pc = 0x103f94u;
    // NOP
    // 0x103f98: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x103F98u;
    {
        const bool branch_taken_0x103f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x103f98) {
            ctx->pc = 0x103F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103F98u;
            // 0x103f9c: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x103FACu;
            goto label_103fac;
        }
    }
    ctx->pc = 0x103FA0u;
    // 0x103fa0: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x103FA0u;
    SET_GPR_U32(ctx, 31, 0x103FA8u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x103FA0u, 0x103FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FA8u;
label_103fa8:
    // 0x103fa8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x103fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_103fac:
    // 0x103fac: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x103facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_103fb0:
    // 0x103fb0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x103fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x103fb4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x103fb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x103fb8: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x103fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x103fbc: 0x5440ff58  bnel        $v0, $zero, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x103FBCu;
    {
        const bool branch_taken_0x103fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103fbc) {
            ctx->pc = 0x103FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103FBCu;
            // 0x103fc0: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103d20;
        }
    }
    ctx->pc = 0x103FC4u;
label_103fc4:
    // 0x103fc4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x103fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_103fc8:
    // 0x103fc8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x103fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x103fcc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x103fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x103fd0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x103fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x103fd4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x103fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x103fd8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x103fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x103fdc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x103fdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x103fe0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x103fe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103fe4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x103fe4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103fe8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x103fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103fec: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x103fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x103ff0: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x103ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x103ff4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x103ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x103FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FF8u;
        // 0x103ffc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104000u;
    // 0x104000: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x104000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x104004: 0x0  nop
    ctx->pc = 0x104004u;
    // NOP
    // 0x104008: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x104008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x10400c: 0x0  nop
    ctx->pc = 0x10400cu;
    // NOP
    ctx->pc = 0x104010u;
}
