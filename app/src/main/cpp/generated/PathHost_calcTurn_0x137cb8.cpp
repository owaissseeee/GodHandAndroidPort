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

// Function: PathHost_calcTurn
// Address: 0x137cb8 - 0x137e70
void PathHost_calcTurn_0x137cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PathHost_calcTurn_0x137cb8");
#endif

    switch (ctx->pc) {
        case 0x137dc0u: goto label_137dc0;
        case 0x137dccu: goto label_137dcc;
        case 0x137dd8u: goto label_137dd8;
        case 0x137de0u: goto label_137de0;
        case 0x137e04u: goto label_137e04;
        default: break;
    }

    ctx->pc = 0x137cb8u;

    // 0x137cb8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x137cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x137cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137cc0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x137cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x137cc4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x137cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x137cc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x137cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ccc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x137cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x137cd0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x137cd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137cd4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x137cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x137cd8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x137cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x137cdc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x137cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x137ce0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x137ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x137ce4: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x137ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x137ce8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x137ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x137cec: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x137cecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x137cf0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x137cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x137cf4: 0x8e510030  lw          $s1, 0x30($s2)
    ctx->pc = 0x137cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x137cf8: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x137cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x137cfc: 0x9235003f  lbu         $s5, 0x3F($s1)
    ctx->pc = 0x137cfcu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
    // 0x137d00: 0x16a2004e  bne         $s5, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x137D00u;
    {
        const bool branch_taken_0x137d00 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x137D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D00u;
        // 0x137d04: 0x100b82d  daddu       $s7, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d00) {
            ctx->pc = 0x137E3Cu;
            goto label_137e3c;
        }
    }
    ctx->pc = 0x137D08u;
    // 0x137d08: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x137d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x137d0c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x137d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x137d10: 0x6a220057  ldl         $v0, 0x57($s1)
    ctx->pc = 0x137d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x137d14: 0x6e220050  ldr         $v0, 0x50($s1)
    ctx->pc = 0x137d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x137d18: 0x6a23005f  ldl         $v1, 0x5F($s1)
    ctx->pc = 0x137d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x137d1c: 0x6e230058  ldr         $v1, 0x58($s1)
    ctx->pc = 0x137d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x137d20: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x137d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137d24: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x137d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137d28: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x137d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137d2c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x137d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137d30: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x137d30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137d34: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x137d34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d38: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x137d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x137d3c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x137d3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137d40: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x137d40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x137d44: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x137d44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x137d48: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x137d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137d4c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x137d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137d50: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x137d50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x137d54: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x137d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137d58: 0x13b40006  beq         $sp, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x137D58u;
    {
        const bool branch_taken_0x137d58 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 20));
        ctx->pc = 0x137D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D58u;
        // 0x137d5c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d58) {
            ctx->pc = 0x137D74u;
            goto label_137d74;
        }
    }
    ctx->pc = 0x137D60u;
    // 0x137d60: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x137d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137d64: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x137d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137d68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x137d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x137d6c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x137d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x137d70: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x137d70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_137d74:
    // 0x137d74: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x137d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137d78: 0x121d0006  beq         $s0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x137D78u;
    {
        const bool branch_taken_0x137d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 29));
        ctx->pc = 0x137D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D78u;
        // 0x137d7c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d78) {
            ctx->pc = 0x137D94u;
            goto label_137d94;
        }
    }
    ctx->pc = 0x137D80u;
    // 0x137d80: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x137d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137d84: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x137d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137d88: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x137d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x137d8c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x137d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x137d90: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x137d90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_137d94:
    // 0x137d94: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x137d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x137d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137d9c: 0x0  nop
    ctx->pc = 0x137d9cu;
    // NOP
    // 0x137da0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137da4: 0x0  nop
    ctx->pc = 0x137da4u;
    // NOP
    // 0x137da8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x137DA8u;
    {
        const bool branch_taken_0x137da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137da8) {
            ctx->pc = 0x137DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137DA8u;
            // 0x137dac: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137DB0u;
            goto label_137db0;
        }
    }
    ctx->pc = 0x137DB0u;
label_137db0:
    // 0x137db0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137db4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137db8: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x137DB8u;
    SET_GPR_U32(ctx, 31, 0x137DC0u);
    ctx->pc = 0x137DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DB8u;
    // 0x137dbc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x137DB8u, 0x137DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DC0u;
label_137dc0:
    // 0x137dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dc4: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x137DC4u;
    SET_GPR_U32(ctx, 31, 0x137DCCu);
    ctx->pc = 0x137DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DC4u;
    // 0x137dc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x137DC4u, 0x137DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DCCu;
label_137dcc:
    // 0x137dcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dd0: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x137DD0u;
    SET_GPR_U32(ctx, 31, 0x137DD8u);
    ctx->pc = 0x137DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DD0u;
    // 0x137dd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x137DD0u, 0x137DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DD8u;
label_137dd8:
    // 0x137dd8: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x137DD8u;
    SET_GPR_U32(ctx, 31, 0x137DE0u);
    ctx->pc = 0x137DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DD8u;
    // 0x137ddc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x137DD8u, 0x137DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DE0u;
label_137de0:
    // 0x137de0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x137de0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x137de4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x137de4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137de8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x137de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137dec: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x137decu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x137df0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x137df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137df4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x137df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137df8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x137df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dfc: 0xc04df9c  jal         func_137E70
    ctx->pc = 0x137DFCu;
    SET_GPR_U32(ctx, 31, 0x137E04u);
    ctx->pc = 0x137E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DFCu;
    // 0x137e00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E70u, 0x137DFCu, 0x137E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E04u;
label_137e04:
    // 0x137e04: 0x17d50004  bne         $fp, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x137E04u;
    {
        const bool branch_taken_0x137e04 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        ctx->pc = 0x137E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E04u;
        // 0x137e08: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e04) {
            ctx->pc = 0x137E18u;
            goto label_137e18;
        }
    }
    ctx->pc = 0x137E0Cu;
    // 0x137e0c: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x137e0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x137e10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137E10u;
    {
        const bool branch_taken_0x137e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E10u;
        // 0x137e14: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e10) {
            ctx->pc = 0x137E1Cu;
            goto label_137e1c;
        }
    }
    ctx->pc = 0x137E18u;
label_137e18:
    // 0x137e18: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x137e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_137e1c:
    // 0x137e1c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x137e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x137e20: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x137e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137e24: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x137e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137e28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x137e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137e2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x137e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x137e30: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x137e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x137e34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x137e38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x137e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_137e3c:
    // 0x137e3c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x137e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x137e40: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x137e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x137e44: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x137e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x137e48: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x137e48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137e4c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x137e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x137e50: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x137e50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x137e54: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x137e54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137e58: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x137e58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137e5c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x137e5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137e60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x137e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137e64: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x137e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137e68: 0x3e00008  jr          $ra
    ctx->pc = 0x137E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E68u;
        // 0x137e6c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137E70u;
}
