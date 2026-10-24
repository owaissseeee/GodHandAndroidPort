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
// Function: ClutColorSetWorkInterpolate__FP19CLUT_COLOR_SET_WORKPC19CLUT_COLOR_SET_WORKT1f
// Address: 0x7afbc8 - 0x7b0180
void ClutColorSetWorkInterpolate__FP19CLUT_COLOR_SET_WORKPC19CLUT_COLOR_SET_WORKT1f_0x7afbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClutColorSetWorkInterpolate__FP19CLUT_COLOR_SET_WORKPC19CLUT_COLOR_SET_WORKT1f_0x7afbc8");
#endif

    switch (ctx->pc) {
        case 0x7afc40u: goto label_7afc40;
        case 0x7afc98u: goto label_7afc98;
        case 0x7afd00u: goto label_7afd00;
        case 0x7afd58u: goto label_7afd58;
        case 0x7afdb0u: goto label_7afdb0;
        case 0x7afe08u: goto label_7afe08;
        case 0x7afe6cu: goto label_7afe6c;
        case 0x7afed4u: goto label_7afed4;
        case 0x7aff30u: goto label_7aff30;
        case 0x7b0030u: goto label_7b0030;
        case 0x7b0090u: goto label_7b0090;
        case 0x7b0110u: goto label_7b0110;
        default: break;
    }

    ctx->pc = 0x7afbc8u;

    // 0x7afbc8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x7afbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x7afbcc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x7afbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x7afbd0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x7afbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x7afbd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7afbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7afbd8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x7afbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x7afbdc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7afbdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7afbe0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x7afbe0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x7afbe4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x7afbe4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7afbe8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x7afbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x7afbec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x7afbecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x7afbf0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x7afbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x7afbf4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x7afbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x7afbf8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x7afbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x7afbfc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x7afbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x7afc00: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x7afc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x7afc04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7afc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7afc08: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AFC08u;
    {
        const bool branch_taken_0x7afc08 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFC08u;
        // 0x7afc0c: 0xe7b500c8  swc1        $f21, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afc08) {
            ctx->pc = 0x7AFC28u;
            goto label_7afc28;
        }
    }
    ctx->pc = 0x7AFC10u;
    // 0x7afc10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x7afc10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7afc14: 0x0  nop
    ctx->pc = 0x7afc14u;
    // NOP
    // 0x7afc18: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x7afc18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7afc1c: 0x0  nop
    ctx->pc = 0x7afc1cu;
    // NOP
    // 0x7afc20: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x7AFC20u;
    {
        const bool branch_taken_0x7afc20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7afc20) {
            ctx->pc = 0x7AFCD0u;
            goto label_7afcd0;
        }
    }
    ctx->pc = 0x7AFC28u;
label_7afc28:
    // 0x7afc28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7afc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7afc2c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x7afc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x7afc30: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x7afc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x7afc34: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7AFC34u;
    {
        const bool branch_taken_0x7afc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFC34u;
        // 0x7afc38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afc34) {
            ctx->pc = 0x7AFC94u;
            goto label_7afc94;
        }
    }
    ctx->pc = 0x7AFC3Cu;
    // 0x7afc3c: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x7afc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_7afc40:
    // 0x7afc40: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x7afc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x7afc44: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x7afc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x7afc48: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x7afc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x7afc4c: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x7afc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x7afc50: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x7afc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7afc54: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x7afc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7afc58: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x7afc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x7afc5c: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x7afc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x7afc60: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x7afc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afc64: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x7afc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afc68: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x7afc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afc6c: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x7afc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afc70: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x7afc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afc74: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x7afc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afc78: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x7afc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afc7c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x7afc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afc80: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x7afc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x7afc84: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7AFC84u;
    {
        const bool branch_taken_0x7afc84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AFC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFC84u;
        // 0x7afc88: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afc84) {
            ctx->pc = 0x7AFC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afc40;
        }
    }
    ctx->pc = 0x7AFC8Cu;
    // 0x7afc8c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7AFC8Cu;
    {
        const bool branch_taken_0x7afc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7afc8c) {
            ctx->pc = 0x7AFCC4u;
            goto label_7afcc4;
        }
    }
    ctx->pc = 0x7AFC94u;
label_7afc94:
    // 0x7afc94: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x7afc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_7afc98:
    // 0x7afc98: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x7afc98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7afc9c: 0xdcc50008  ld          $a1, 0x8($a2)
    ctx->pc = 0x7afc9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x7afca0: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x7afca0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x7afca4: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x7afca4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x7afca8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x7afca8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x7afcac: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x7afcacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x7afcb0: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x7afcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x7afcb4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x7afcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x7afcb8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x7afcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x7afcbc: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AFCBCu;
    {
        const bool branch_taken_0x7afcbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFCBCu;
        // 0x7afcc0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afcbc) {
            ctx->pc = 0x7AFC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afc98;
        }
    }
    ctx->pc = 0x7AFCC4u;
label_7afcc4:
    // 0x7afcc4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x7afcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7afcc8: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x7AFCC8u;
    {
        const bool branch_taken_0x7afcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFCC8u;
        // 0x7afccc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afcc8) {
            ctx->pc = 0x7B0148u;
            goto label_7b0148;
        }
    }
    ctx->pc = 0x7AFCD0u;
label_7afcd0:
    // 0x7afcd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7afcd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7afcd4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x7afcd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7afcd8: 0x0  nop
    ctx->pc = 0x7afcd8u;
    // NOP
    // 0x7afcdc: 0x460da032  c.eq.s      $f20, $f13
    ctx->pc = 0x7afcdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7afce0: 0x0  nop
    ctx->pc = 0x7afce0u;
    // NOP
    // 0x7afce4: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x7AFCE4u;
    {
        const bool branch_taken_0x7afce4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7AFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFCE4u;
        // 0x7afce8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afce4) {
            ctx->pc = 0x7AFD90u;
            goto label_7afd90;
        }
    }
    ctx->pc = 0x7AFCECu;
    // 0x7afcec: 0x3c41025  or          $v0, $fp, $a0
    ctx->pc = 0x7afcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 4));
    // 0x7afcf0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x7afcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x7afcf4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7AFCF4u;
    {
        const bool branch_taken_0x7afcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFCF4u;
        // 0x7afcf8: 0x3c0182d  daddu       $v1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afcf4) {
            ctx->pc = 0x7AFD54u;
            goto label_7afd54;
        }
    }
    ctx->pc = 0x7AFCFCu;
    // 0x7afcfc: 0x27c20060  addiu       $v0, $fp, 0x60
    ctx->pc = 0x7afcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_7afd00:
    // 0x7afd00: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x7afd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x7afd04: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x7afd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x7afd08: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x7afd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x7afd0c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x7afd0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x7afd10: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x7afd10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x7afd14: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x7afd14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x7afd18: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x7afd18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7afd1c: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x7afd1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7afd20: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x7afd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afd24: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x7afd24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afd28: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x7afd28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afd2c: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x7afd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afd30: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x7afd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afd34: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x7afd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afd38: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x7afd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afd3c: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x7afd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afd40: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7afd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7afd44: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7AFD44u;
    {
        const bool branch_taken_0x7afd44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFD44u;
        // 0x7afd48: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afd44) {
            ctx->pc = 0x7AFD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afd00;
        }
    }
    ctx->pc = 0x7AFD4Cu;
    // 0x7afd4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7AFD4Cu;
    {
        const bool branch_taken_0x7afd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7afd4c) {
            ctx->pc = 0x7AFD84u;
            goto label_7afd84;
        }
    }
    ctx->pc = 0x7AFD54u;
label_7afd54:
    // 0x7afd54: 0x27c20060  addiu       $v0, $fp, 0x60
    ctx->pc = 0x7afd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_7afd58:
    // 0x7afd58: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x7afd58u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7afd5c: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x7afd5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7afd60: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x7afd60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7afd64: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x7afd64u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x7afd68: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x7afd68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x7afd6c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x7afd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x7afd70: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x7afd70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x7afd74: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x7afd74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x7afd78: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7afd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7afd7c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AFD7Cu;
    {
        const bool branch_taken_0x7afd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFD7Cu;
        // 0x7afd80: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afd7c) {
            ctx->pc = 0x7AFD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afd58;
        }
    }
    ctx->pc = 0x7AFD84u;
label_7afd84:
    // 0x7afd84: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x7afd84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7afd88: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x7AFD88u;
    {
        const bool branch_taken_0x7afd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFD88u;
        // 0x7afd8c: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afd88) {
            ctx->pc = 0x7B0148u;
            goto label_7b0148;
        }
    }
    ctx->pc = 0x7AFD90u;
label_7afd90:
    // 0x7afd90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7afd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7afd94: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x7afd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x7afd98: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x7AFD98u;
    {
        const bool branch_taken_0x7afd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AFD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFD98u;
        // 0x7afd9c: 0x2041025  or          $v0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afd98) {
            ctx->pc = 0x7AFE40u;
            goto label_7afe40;
        }
    }
    ctx->pc = 0x7AFDA0u;
    // 0x7afda0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x7afda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x7afda4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7AFDA4u;
    {
        const bool branch_taken_0x7afda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFDA4u;
        // 0x7afda8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afda4) {
            ctx->pc = 0x7AFE04u;
            goto label_7afe04;
        }
    }
    ctx->pc = 0x7AFDACu;
    // 0x7afdac: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x7afdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_7afdb0:
    // 0x7afdb0: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x7afdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7afdb4: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x7afdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7afdb8: 0x68c8000f  ldl         $t0, 0xF($a2)
    ctx->pc = 0x7afdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x7afdbc: 0x6cc80008  ldr         $t0, 0x8($a2)
    ctx->pc = 0x7afdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x7afdc0: 0x68c30017  ldl         $v1, 0x17($a2)
    ctx->pc = 0x7afdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x7afdc4: 0x6cc30010  ldr         $v1, 0x10($a2)
    ctx->pc = 0x7afdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x7afdc8: 0x68c5001f  ldl         $a1, 0x1F($a2)
    ctx->pc = 0x7afdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x7afdcc: 0x6cc50018  ldr         $a1, 0x18($a2)
    ctx->pc = 0x7afdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x7afdd0: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x7afdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afdd4: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x7afdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afdd8: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x7afdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afddc: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x7afddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afde0: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x7afde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afde4: 0xb4830010  sdr         $v1, 0x10($a0)
    ctx->pc = 0x7afde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afde8: 0xb085001f  sdl         $a1, 0x1F($a0)
    ctx->pc = 0x7afde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afdec: 0xb4850018  sdr         $a1, 0x18($a0)
    ctx->pc = 0x7afdecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afdf0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x7afdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x7afdf4: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7AFDF4u;
    {
        const bool branch_taken_0x7afdf4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AFDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFDF4u;
        // 0x7afdf8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afdf4) {
            ctx->pc = 0x7AFDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afdb0;
        }
    }
    ctx->pc = 0x7AFDFCu;
    // 0x7afdfc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7AFDFCu;
    {
        const bool branch_taken_0x7afdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7afdfc) {
            ctx->pc = 0x7AFE34u;
            goto label_7afe34;
        }
    }
    ctx->pc = 0x7AFE04u;
label_7afe04:
    // 0x7afe04: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x7afe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_7afe08:
    // 0x7afe08: 0xdcc70000  ld          $a3, 0x0($a2)
    ctx->pc = 0x7afe08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7afe0c: 0xdcc80008  ld          $t0, 0x8($a2)
    ctx->pc = 0x7afe0cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x7afe10: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x7afe10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x7afe14: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x7afe14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x7afe18: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x7afe18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x7afe1c: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x7afe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x7afe20: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x7afe20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x7afe24: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x7afe24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x7afe28: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x7afe28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x7afe2c: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AFE2Cu;
    {
        const bool branch_taken_0x7afe2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFE2Cu;
        // 0x7afe30: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afe2c) {
            ctx->pc = 0x7AFE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afe08;
        }
    }
    ctx->pc = 0x7AFE34u;
label_7afe34:
    // 0x7afe34: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x7afe34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7afe38: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x7AFE38u;
    {
        const bool branch_taken_0x7afe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AFE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFE38u;
        // 0x7afe3c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afe38) {
            ctx->pc = 0x7B0148u;
            goto label_7b0148;
        }
    }
    ctx->pc = 0x7AFE40u;
label_7afe40:
    // 0x7afe40: 0x2131025  or          $v0, $s0, $s3
    ctx->pc = 0x7afe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 19));
    // 0x7afe44: 0x46146d41  sub.s       $f21, $f13, $f20
    ctx->pc = 0x7afe44u;
    ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
    // 0x7afe48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7afe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7afe4c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x7afe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x7afe50: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x7AFE50u;
    {
        const bool branch_taken_0x7afe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFE50u;
        // 0x7afe54: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afe50) {
            ctx->pc = 0x7AFEC0u;
            goto label_7afec0;
        }
    }
    ctx->pc = 0x7AFE58u;
    // 0x7afe58: 0x26650024  addiu       $a1, $s3, 0x24
    ctx->pc = 0x7afe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x7afe5c: 0x26660054  addiu       $a2, $s3, 0x54
    ctx->pc = 0x7afe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
    // 0x7afe60: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x7afe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x7afe64: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x7afe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x7afe68: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x7afe68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_7afe6c:
    // 0x7afe6c: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x7afe6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7afe70: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x7afe70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7afe74: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x7afe74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x7afe78: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x7afe78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x7afe7c: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x7afe7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x7afe80: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x7afe80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x7afe84: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x7afe84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x7afe88: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x7afe88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x7afe8c: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x7afe8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afe90: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x7afe90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afe94: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x7afe94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afe98: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x7afe98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afe9c: 0xb0850017  sdl         $a1, 0x17($a0)
    ctx->pc = 0x7afe9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afea0: 0xb4850010  sdr         $a1, 0x10($a0)
    ctx->pc = 0x7afea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afea4: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x7afea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afea8: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x7afea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afeac: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7afeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7afeb0: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7AFEB0u;
    {
        const bool branch_taken_0x7afeb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFEB0u;
        // 0x7afeb4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afeb0) {
            ctx->pc = 0x7AFE6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afe6c;
        }
    }
    ctx->pc = 0x7AFEB8u;
    // 0x7afeb8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x7AFEB8u;
    {
        const bool branch_taken_0x7afeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7afeb8) {
            ctx->pc = 0x7AFF00u;
            goto label_7aff00;
        }
    }
    ctx->pc = 0x7AFEC0u;
label_7afec0:
    // 0x7afec0: 0x26670024  addiu       $a3, $s3, 0x24
    ctx->pc = 0x7afec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x7afec4: 0x26680054  addiu       $t0, $s3, 0x54
    ctx->pc = 0x7afec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
    // 0x7afec8: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x7afec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x7afecc: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x7afeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x7afed0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x7afed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_7afed4:
    // 0x7afed4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x7afed4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7afed8: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x7afed8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7afedc: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x7afedcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7afee0: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x7afee0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x7afee4: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x7afee4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x7afee8: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x7afee8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x7afeec: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x7afeecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x7afef0: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x7afef0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x7afef4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7afef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7afef8: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AFEF8u;
    {
        const bool branch_taken_0x7afef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFEF8u;
        // 0x7afefc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afef8) {
            ctx->pc = 0x7AFED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afed4;
        }
    }
    ctx->pc = 0x7AFF00u;
label_7aff00:
    // 0x7aff00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7aff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7aff04: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x7aff04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x7aff08: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x7aff08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7aff0c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x7AFF0Cu;
    {
        const bool branch_taken_0x7aff0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFF0Cu;
        // 0x7aff10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aff0c) {
            ctx->pc = 0x7B0054u;
            goto label_7b0054;
        }
    }
    ctx->pc = 0x7AFF14u;
    // 0x7aff14: 0x8fb70004  lw          $s7, 0x4($sp)
    ctx->pc = 0x7aff14u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x7aff18: 0x26160024  addiu       $s6, $s0, 0x24
    ctx->pc = 0x7aff18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x7aff1c: 0x26750004  addiu       $s5, $s3, 0x4
    ctx->pc = 0x7aff1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x7aff20: 0x27d20004  addiu       $s2, $fp, 0x4
    ctx->pc = 0x7aff20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x7aff24: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x7aff24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x7aff28: 0x27d40024  addiu       $s4, $fp, 0x24
    ctx->pc = 0x7aff28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
    // 0x7aff2c: 0x0  nop
    ctx->pc = 0x7aff2cu;
    // NOP
label_7aff30:
    // 0x7aff30: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x7aff30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x7aff34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7aff34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7aff38: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x7aff38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x7aff3c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7aff3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7aff40: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x7aff40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x7aff44: 0x0  nop
    ctx->pc = 0x7aff44u;
    // NOP
    // 0x7aff48: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x7aff48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x7aff4c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x7aff4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7aff50: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x7aff50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7aff54: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x7aff54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x7aff58: 0x0  nop
    ctx->pc = 0x7aff58u;
    // NOP
    // 0x7aff5c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x7aff5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x7aff60: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x7aff60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x7aff64: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x7aff64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7aff68: 0x0  nop
    ctx->pc = 0x7aff68u;
    // NOP
    // 0x7aff6c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x7aff6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x7aff70: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x7aff70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x7aff74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x7aff74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7aff78: 0x0  nop
    ctx->pc = 0x7aff78u;
    // NOP
    // 0x7aff7c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x7aff7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x7aff80: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x7aff80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7aff84: 0x0  nop
    ctx->pc = 0x7aff84u;
    // NOP
    // 0x7aff88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7aff88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7aff8c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x7aff8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x7aff90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x7aff90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7aff94: 0x0  nop
    ctx->pc = 0x7aff94u;
    // NOP
    // 0x7aff98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7aff98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7aff9c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x7aff9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x7affa0: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x7affa0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x7affa4: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x7affa4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x7affa8: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x7affa8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x7affac: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x7affacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x7affb0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x7affb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x7affb4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x7affb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x7affb8: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x7affb8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x7affbc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x7affbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x7affc0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x7affc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x7affc4: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7affc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7affc8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x7affc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x7affcc: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7affccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7affd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x7affd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7affd4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7affd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7affd8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x7affd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x7affdc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x7affdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x7affe0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x7affe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x7affe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7affe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7affe8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x7affe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x7affec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7affecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7afff0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x7afff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x7afff4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7afff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7afff8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x7afff8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x7afffc: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x7afffcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x7b0000: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x7b0000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x7b0004: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x7b0004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x7b0008: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x7b0008u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x7b000c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7b000cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b0010: 0x0  nop
    ctx->pc = 0x7b0010u;
    // NOP
    // 0x7b0014: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b0014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b0018: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x7b0018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x7b001c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x7b001cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b0020: 0x0  nop
    ctx->pc = 0x7b0020u;
    // NOP
    // 0x7b0024: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b0024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b0028: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B0028u;
    SET_GPR_U32(ctx, 31, 0x7B0030u);
    ctx->pc = 0x7B002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0028u;
    // 0x7b002c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B0028u, 0x7B0030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0030u;
label_7b0030:
    // 0x7b0030: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b0030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b0034: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b0034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b0038: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x7b0038u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b003c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x7b003cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b0040: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x7b0040u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b0044: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x7b0044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b0048: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x7B0048u;
    {
        const bool branch_taken_0x7b0048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0048u;
        // 0x7b004c: 0x26f70002  addiu       $s7, $s7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0048) {
            ctx->pc = 0x7AFF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7aff30;
        }
    }
    ctx->pc = 0x7B0050u;
    // 0x7b0050: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x7b0050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_7b0054:
    // 0x7b0054: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x7b0054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7b0058: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x7b0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x7b005c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7b005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7b0060: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x7b0060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x7b0064: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x7b0064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7b0068: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x7b0068u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x7b006c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x7b006cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b0070: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x7B0070u;
    {
        const bool branch_taken_0x7b0070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B0074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0070u;
        // 0x7b0074: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0070) {
            ctx->pc = 0x7B012Cu;
            goto label_7b012c;
        }
    }
    ctx->pc = 0x7B0078u;
    // 0x7b0078: 0x26760034  addiu       $s6, $s3, 0x34
    ctx->pc = 0x7b0078u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x7b007c: 0x8fb40000  lw          $s4, 0x0($sp)
    ctx->pc = 0x7b007cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b0080: 0x27d50034  addiu       $s5, $fp, 0x34
    ctx->pc = 0x7b0080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 52));
    // 0x7b0084: 0x27d30054  addiu       $s3, $fp, 0x54
    ctx->pc = 0x7b0084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 84));
    // 0x7b0088: 0x26120054  addiu       $s2, $s0, 0x54
    ctx->pc = 0x7b0088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x7b008c: 0x26110034  addiu       $s1, $s0, 0x34
    ctx->pc = 0x7b008cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_7b0090:
    // 0x7b0090: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x7b0090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x7b0094: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7b0094u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7b0098: 0x92a30003  lbu         $v1, 0x3($s5)
    ctx->pc = 0x7b0098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x7b009c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x7b009cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x7b00a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x7b00a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7b00a4: 0x0  nop
    ctx->pc = 0x7b00a4u;
    // NOP
    // 0x7b00a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7b00a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7b00ac: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x7b00acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x7b00b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x7b00b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b00b4: 0x0  nop
    ctx->pc = 0x7b00b4u;
    // NOP
    // 0x7b00b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b00b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b00bc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x7b00bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x7b00c0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x7b00c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x7b00c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x7b00c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x7b00c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x7b00c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x7b00cc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b00ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7b00d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x7b00d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b00d4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x7b00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x7b00d8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x7b00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x7b00dc: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x7b00dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x7b00e0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x7b00e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x7b00e4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x7b00e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7b00e8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x7b00e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x7b00ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7b00ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7b00f0: 0x0  nop
    ctx->pc = 0x7b00f0u;
    // NOP
    // 0x7b00f4: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7b00f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7b00f8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x7b00f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x7b00fc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7b00fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b0100: 0x0  nop
    ctx->pc = 0x7b0100u;
    // NOP
    // 0x7b0104: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b0104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b0108: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7B0108u;
    SET_GPR_U32(ctx, 31, 0x7B0110u);
    ctx->pc = 0x7B010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0108u;
    // 0x7b010c: 0x460dab40  add.s       $f13, $f21, $f13 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7B0108u, 0x7B0110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0110u;
label_7b0110:
    // 0x7b0110: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b0110u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7b0114: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7b0114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7b0118: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x7b0118u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b011c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x7b011cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b0120: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x7b0120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b0124: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x7B0124u;
    {
        const bool branch_taken_0x7b0124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0124u;
        // 0x7b0128: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0124) {
            ctx->pc = 0x7B0090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b0090;
        }
    }
    ctx->pc = 0x7B012Cu;
label_7b012c:
    // 0x7b012c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x7b012cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b0130: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x7b0130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7b0134: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x7b0134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b0138: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7b0138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7b013c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x7b013cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x7b0140: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x7b0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x7b0144: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x7b0144u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_7b0148:
    // 0x7b0148: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x7b0148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7b014c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x7b014cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7b0150: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x7b0150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7b0154: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x7b0154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7b0158: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x7b0158u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7b015c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x7b015cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b0160: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x7b0160u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b0164: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x7b0164u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b0168: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x7b0168u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b016c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7b016cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b0170: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x7b0170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7b0174: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x7b0174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7b0178: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0178u;
        // 0x7b017c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0180u;
}
} // namespace gh_event
