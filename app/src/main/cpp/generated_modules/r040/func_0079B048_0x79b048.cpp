#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079B048
// Address: 0x79b048 - 0x79b1e8
void func_0079B048_0x79b048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B048_0x79b048");
#endif

    switch (ctx->pc) {
        case 0x79b148u: goto label_79b148;
        case 0x79b194u: goto label_79b194;
        case 0x79b1a8u: goto label_79b1a8;
        case 0x79b1b8u: goto label_79b1b8;
        case 0x79b1e0u: goto label_79b1e0;
        default: break;
    }

    ctx->pc = 0x79b048u;

    // 0x79b048: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x79b048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x79b04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b050: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x79b050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b054: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79b054u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b058: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79b058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b05c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b060: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x79b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b064: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b068: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b06c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x79b06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b070: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79b070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x79b074: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x79b074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b078: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x79b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x79b07c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x79b07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b080: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x79b080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x79b084: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79b084u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79b088: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x79b088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x79b08c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x79b08cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b090: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x79b090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x79b094: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x79b094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b098: 0xa3a40030  sb          $a0, 0x30($sp)
    ctx->pc = 0x79b098u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b09c: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x79b09cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x79b0a0: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x79b0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x79b0a4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79b0a8: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x79b0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x79b0ac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x79b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79b0b0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x79b0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x79b0b4: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x79b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
    // 0x79b0b8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79b0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79b0bc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x79b0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b0c0: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x79b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x79b0c4: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x79b0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x79b0c8: 0xafbd0070  sw          $sp, 0x70($sp)
    ctx->pc = 0x79b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 29));
    // 0x79b0cc: 0x6ba20077  ldl         $v0, 0x77($sp)
    ctx->pc = 0x79b0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b0d0: 0x6fa20070  ldr         $v0, 0x70($sp)
    ctx->pc = 0x79b0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b0d4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x79b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x79b0d8: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x79b0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b0dc: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x79b0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b0e0: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x79b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x79b0e4: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x79b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x79b0e8: 0xafa80084  sw          $t0, 0x84($sp)
    ctx->pc = 0x79b0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 8));
    // 0x79b0ec: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x79b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x79b0f0: 0x6ba20087  ldl         $v0, 0x87($sp)
    ctx->pc = 0x79b0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b0f4: 0x6fa20080  ldr         $v0, 0x80($sp)
    ctx->pc = 0x79b0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b0f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x79b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x79b0fc: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x79b0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b100: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x79b100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b104: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x79b104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x79b108: 0x24c3c588  addiu       $v1, $a2, -0x3A78
    ctx->pc = 0x79b108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952328));
    // 0x79b10c: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x79b10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x79b110: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x79b110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x79b114: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x79b114u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x79C590u));
    // 0x79b118: 0xb3a90087  sdl         $t1, 0x87($sp)
    ctx->pc = 0x79b118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b11c: 0xb7a90080  sdr         $t1, 0x80($sp)
    ctx->pc = 0x79b11cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b120: 0xafaa0088  sw          $t2, 0x88($sp)
    ctx->pc = 0x79b120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 10));
    // 0x79b124: 0x2489c598  addiu       $t1, $a0, -0x3A68
    ctx->pc = 0x79b124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952344));
    // 0x79b128: 0x69250007  ldl         $a1, 0x7($t1)
    ctx->pc = 0x79b128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79b12c: 0x6d250000  ldr         $a1, 0x0($t1)
    ctx->pc = 0x79b12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79b130: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x79b130u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x79C5A0u));
    // 0x79b134: 0xb3a50097  sdl         $a1, 0x97($sp)
    ctx->pc = 0x79b134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b138: 0xb7a50090  sdr         $a1, 0x90($sp)
    ctx->pc = 0x79b138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b13c: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x79b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x79b140: 0x8e02c800  lw          $v0, -0x3800($s0)
    ctx->pc = 0x79b140u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
    // 0x79b144: 0x0  nop
    ctx->pc = 0x79b144u;
    // NOP
label_79b148:
    // 0x79b148: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x79b148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79b14c: 0x10730018  beq         $v1, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x79B14Cu;
    {
        const bool branch_taken_0x79b14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x79B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B14Cu;
        // 0x79b150: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b14c) {
            ctx->pc = 0x79B1B0u;
            goto label_79b1b0;
        }
    }
    ctx->pc = 0x79B154u;
    // 0x79b154: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B154u;
    {
        const bool branch_taken_0x79b154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b154) {
            ctx->pc = 0x79B16Cu;
            goto label_79b16c;
        }
    }
    ctx->pc = 0x79B15Cu;
    // 0x79b15c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B15Cu;
    {
        const bool branch_taken_0x79b15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B15Cu;
        // 0x79b160: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b15c) {
            ctx->pc = 0x79B184u;
            goto label_79b184;
        }
    }
    ctx->pc = 0x79B164u;
    // 0x79b164: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x79B164u;
    {
        const bool branch_taken_0x79b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B164u;
        // 0x79b168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b164) {
            ctx->pc = 0x79B1D8u;
            goto label_79b1d8;
        }
    }
    ctx->pc = 0x79B16Cu;
label_79b16c:
    // 0x79b16c: 0x1072000b  beq         $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x79B16Cu;
    {
        const bool branch_taken_0x79b16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x79B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B16Cu;
        // 0x79b170: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b16c) {
            ctx->pc = 0x79B19Cu;
            goto label_79b19c;
        }
    }
    ctx->pc = 0x79B174u;
    // 0x79b174: 0x1071000e  beq         $v1, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x79B174u;
    {
        const bool branch_taken_0x79b174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x79B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B174u;
        // 0x79b178: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b174) {
            ctx->pc = 0x79B1B0u;
            goto label_79b1b0;
        }
    }
    ctx->pc = 0x79B17Cu;
    // 0x79b17c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x79B17Cu;
    {
        const bool branch_taken_0x79b17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B17Cu;
        // 0x79b180: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b17c) {
            ctx->pc = 0x79B1D8u;
            goto label_79b1d8;
        }
    }
    ctx->pc = 0x79B184u;
label_79b184:
    // 0x79b184: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x79b184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79b188: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x79b188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x79b18c: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79B18Cu;
    SET_GPR_U32(ctx, 31, 0x79B194u);
    ctx->pc = 0x79B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B18Cu;
    // 0x79b190: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79B18Cu, 0x79B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B194u;
label_79b194:
    // 0x79b194: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x79B194u;
    {
        const bool branch_taken_0x79b194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B194u;
        // 0x79b198: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b194) {
            ctx->pc = 0x79B1C4u;
            goto label_79b1c4;
        }
    }
    ctx->pc = 0x79B19Cu;
label_79b19c:
    // 0x79b19c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x79b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x79b1a0: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79B1A0u;
    SET_GPR_U32(ctx, 31, 0x79B1A8u);
    ctx->pc = 0x79B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1A0u;
    // 0x79b1a4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79B1A0u, 0x79B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1A8u;
label_79b1a8:
    // 0x79b1a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79B1A8u;
    {
        const bool branch_taken_0x79b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1A8u;
        // 0x79b1ac: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1a8) {
            ctx->pc = 0x79B1C4u;
            goto label_79b1c4;
        }
    }
    ctx->pc = 0x79B1B0u;
label_79b1b0:
    // 0x79b1b0: 0xc1e6eea  jal         func_79BBA8
    ctx->pc = 0x79B1B0u;
    SET_GPR_U32(ctx, 31, 0x79B1B8u);
    ctx->pc = 0x79BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BBA8u, 0x79B1B0u, 0x79B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1B8u;
label_79b1b8:
    // 0x79b1b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B1B8u;
    {
        const bool branch_taken_0x79b1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1B8u;
        // 0x79b1bc: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1b8) {
            ctx->pc = 0x79B1D4u;
            goto label_79b1d4;
        }
    }
    ctx->pc = 0x79B1C0u;
    // 0x79b1c0: 0x8e03c800  lw          $v1, -0x3800($s0)
    ctx->pc = 0x79b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
label_79b1c4:
    // 0x79b1c4: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x79b1c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79b1c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b1cc: 0xa0620014  sb          $v0, 0x14($v1)
    ctx->pc = 0x79b1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b1d0: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_79b1d4:
    // 0x79b1d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b1d8:
    // 0x79b1d8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B1D8u;
    SET_GPR_U32(ctx, 31, 0x79B1E0u);
    ctx->pc = 0x79B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1D8u;
    // 0x79b1dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B1D8u, 0x79B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1E0u;
label_79b1e0:
    // 0x79b1e0: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x79B1E0u;
    {
        const bool branch_taken_0x79b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E0u;
        // 0x79b1e4: 0x8e02c800  lw          $v0, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1e0) {
            ctx->pc = 0x79B148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b148;
        }
    }
    ctx->pc = 0x79B1E8u;
}
} // namespace gh_r040
