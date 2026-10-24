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
// Function: func_0079B1E8
// Address: 0x79b1e8 - 0x79b388
void func_0079B1E8_0x79b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B1E8_0x79b1e8");
#endif

    switch (ctx->pc) {
        case 0x79b2e0u: goto label_79b2e0;
        case 0x79b318u: goto label_79b318;
        case 0x79b330u: goto label_79b330;
        case 0x79b348u: goto label_79b348;
        case 0x79b358u: goto label_79b358;
        case 0x79b380u: goto label_79b380;
        default: break;
    }

    ctx->pc = 0x79b1e8u;

    // 0x79b1e8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x79b1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x79b1ec: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x79b1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b1f0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x79b1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b1f4: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x79b1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b1f8: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x79b1f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79b1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b200: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b204: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b208: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79b208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b20c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x79b20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x79b210: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x79b210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x79b214: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x79b214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b218: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79b218u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b21c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x79b21cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b220: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79b220u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b224: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b228: 0xa3a40030  sb          $a0, 0x30($sp)
    ctx->pc = 0x79b228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b22c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79b230: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x79b230u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x79b234: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x79b234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79b238: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x79b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x79b23c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x79b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79b240: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x79b240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x79b244: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79b244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79b248: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79b248u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79b24c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b24cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b250: 0xa3ab0060  sb          $t3, 0x60($sp)
    ctx->pc = 0x79b250u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 11));
    // 0x79b254: 0xafa70084  sw          $a3, 0x84($sp)
    ctx->pc = 0x79b254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
    // 0x79b258: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x79b258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x79b25c: 0xafbd0080  sw          $sp, 0x80($sp)
    ctx->pc = 0x79b25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 29));
    // 0x79b260: 0x6ba60087  ldl         $a2, 0x87($sp)
    ctx->pc = 0x79b260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79b264: 0x6fa60080  ldr         $a2, 0x80($sp)
    ctx->pc = 0x79b264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79b268: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x79b268u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x79b26c: 0xb3a60077  sdl         $a2, 0x77($sp)
    ctx->pc = 0x79b26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b270: 0xb7a60070  sdr         $a2, 0x70($sp)
    ctx->pc = 0x79b270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b274: 0xafa70078  sw          $a3, 0x78($sp)
    ctx->pc = 0x79b274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
    // 0x79b278: 0xafaa0090  sw          $t2, 0x90($sp)
    ctx->pc = 0x79b278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 10));
    // 0x79b27c: 0xafa90094  sw          $t1, 0x94($sp)
    ctx->pc = 0x79b27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 9));
    // 0x79b280: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x79b280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x79b284: 0x6ba40097  ldl         $a0, 0x97($sp)
    ctx->pc = 0x79b284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x79b288: 0x6fa40090  ldr         $a0, 0x90($sp)
    ctx->pc = 0x79b288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x79b28c: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x79b28cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x79b290: 0xb3a40087  sdl         $a0, 0x87($sp)
    ctx->pc = 0x79b290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b294: 0xb7a40080  sdr         $a0, 0x80($sp)
    ctx->pc = 0x79b294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b298: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x79b298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x79b29c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x79b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x79b2a0: 0x2466c548  addiu       $a2, $v1, -0x3AB8
    ctx->pc = 0x79b2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952264));
    // 0x79b2a4: 0x68cc0007  ldl         $t4, 0x7($a2)
    ctx->pc = 0x79b2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x79b2a8: 0x6ccc0000  ldr         $t4, 0x0($a2)
    ctx->pc = 0x79b2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x79b2ac: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x79b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C550u));
    // 0x79b2b0: 0xb3ac0097  sdl         $t4, 0x97($sp)
    ctx->pc = 0x79b2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b2b4: 0xb7ac0090  sdr         $t4, 0x90($sp)
    ctx->pc = 0x79b2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b2b8: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x79b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x79b2bc: 0x2443c558  addiu       $v1, $v0, -0x3AA8
    ctx->pc = 0x79b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952280));
    // 0x79b2c0: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x79b2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79b2c4: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x79b2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79b2c8: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x79b2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x79C560u));
    // 0x79b2cc: 0xb3a700a7  sdl         $a3, 0xA7($sp)
    ctx->pc = 0x79b2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b2d0: 0xb7a700a0  sdr         $a3, 0xA0($sp)
    ctx->pc = 0x79b2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b2d4: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x79b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
    // 0x79b2d8: 0xafab00b4  sw          $t3, 0xB4($sp)
    ctx->pc = 0x79b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 11));
    // 0x79b2dc: 0x8e02c800  lw          $v0, -0x3800($s0)
    ctx->pc = 0x79b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
label_79b2e0:
    // 0x79b2e0: 0x90440014  lbu         $a0, 0x14($v0)
    ctx->pc = 0x79b2e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79b2e4: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x79b2e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79b2e8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x79B2E8u;
    {
        const bool branch_taken_0x79b2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2E8u;
        // 0x79b2ec: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2e8) {
            ctx->pc = 0x79B370u;
            goto label_79b370;
        }
    }
    ctx->pc = 0x79B2F0u;
    // 0x79b2f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x79b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79b2f4: 0x2442c5b0  addiu       $v0, $v0, -0x3A50
    ctx->pc = 0x79b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952368));
    // 0x79b2f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79b2fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b300: 0x800008  jr          $a0
    ctx->pc = 0x79B300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79B308u: goto label_79b308;
            case 0x79B320u: goto label_79b320;
            case 0x79B338u: goto label_79b338;
            case 0x79B350u: goto label_79b350;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B300u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79B308u;
label_79b308:
    // 0x79b308: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x79b308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79b30c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x79b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x79b310: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79B310u;
    SET_GPR_U32(ctx, 31, 0x79B318u);
    ctx->pc = 0x79B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B310u;
    // 0x79b314: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79B310u, 0x79B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B318u;
label_79b318:
    // 0x79b318: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79B318u;
    {
        const bool branch_taken_0x79b318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B318u;
        // 0x79b31c: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b318) {
            ctx->pc = 0x79B364u;
            goto label_79b364;
        }
    }
    ctx->pc = 0x79B320u;
label_79b320:
    // 0x79b320: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x79b320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x79b324: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x79b324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x79b328: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79B328u;
    SET_GPR_U32(ctx, 31, 0x79B330u);
    ctx->pc = 0x79B32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B328u;
    // 0x79b32c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79B328u, 0x79B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B330u;
label_79b330:
    // 0x79b330: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79B330u;
    {
        const bool branch_taken_0x79b330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B330u;
        // 0x79b334: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b330) {
            ctx->pc = 0x79B364u;
            goto label_79b364;
        }
    }
    ctx->pc = 0x79B338u;
label_79b338:
    // 0x79b338: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x79b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x79b33c: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x79b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x79b340: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79B340u;
    SET_GPR_U32(ctx, 31, 0x79B348u);
    ctx->pc = 0x79B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B340u;
    // 0x79b344: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79B340u, 0x79B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B348u;
label_79b348:
    // 0x79b348: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79B348u;
    {
        const bool branch_taken_0x79b348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B348u;
        // 0x79b34c: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b348) {
            ctx->pc = 0x79B364u;
            goto label_79b364;
        }
    }
    ctx->pc = 0x79B350u;
label_79b350:
    // 0x79b350: 0xc1e6eea  jal         func_79BBA8
    ctx->pc = 0x79B350u;
    SET_GPR_U32(ctx, 31, 0x79B358u);
    ctx->pc = 0x79BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BBA8u, 0x79B350u, 0x79B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B358u;
label_79b358:
    // 0x79b358: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B358u;
    {
        const bool branch_taken_0x79b358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B358u;
        // 0x79b35c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b358) {
            ctx->pc = 0x79B374u;
            goto label_79b374;
        }
    }
    ctx->pc = 0x79B360u;
    // 0x79b360: 0x8e03c800  lw          $v1, -0x3800($s0)
    ctx->pc = 0x79b360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
label_79b364:
    // 0x79b364: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x79b364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79b368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b36c: 0xa0620014  sb          $v0, 0x14($v1)
    ctx->pc = 0x79b36cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 2));
label_79b370:
    // 0x79b370: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b374:
    // 0x79b374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b378: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B378u;
    SET_GPR_U32(ctx, 31, 0x79B380u);
    ctx->pc = 0x79B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B378u;
    // 0x79b37c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B378u, 0x79B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B380u;
label_79b380:
    // 0x79b380: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x79B380u;
    {
        const bool branch_taken_0x79b380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B380u;
        // 0x79b384: 0x8e02c800  lw          $v0, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b380) {
            ctx->pc = 0x79B2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b2e0;
        }
    }
    ctx->pc = 0x79B388u;
}
} // namespace gh_r040
