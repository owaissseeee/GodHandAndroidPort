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
// Function: func_0079AE78
// Address: 0x79ae78 - 0x79b018
void func_0079AE78_0x79ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AE78_0x79ae78");
#endif

    switch (ctx->pc) {
        case 0x79af70u: goto label_79af70;
        case 0x79afa8u: goto label_79afa8;
        case 0x79afc0u: goto label_79afc0;
        case 0x79afd8u: goto label_79afd8;
        case 0x79afe8u: goto label_79afe8;
        case 0x79b010u: goto label_79b010;
        default: break;
    }

    ctx->pc = 0x79ae78u;

    // 0x79ae78: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x79ae78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x79ae7c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x79ae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79ae80: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x79ae80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79ae84: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x79ae84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79ae88: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x79ae88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79ae8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ae94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79ae98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79ae98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79ae9c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x79ae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x79aea0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x79aea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x79aea4: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x79aea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79aea8: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79aea8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79aeac: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x79aeacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79aeb0: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79aeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79aeb4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79aeb8: 0xa3a40030  sb          $a0, 0x30($sp)
    ctx->pc = 0x79aeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x79aebc: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79aec0: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x79aec0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x79aec4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x79aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79aec8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x79aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x79aecc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x79aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79aed0: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x79aed0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x79aed4: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79aed4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79aed8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79aed8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79aedc: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79aedcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79aee0: 0xa3ab0060  sb          $t3, 0x60($sp)
    ctx->pc = 0x79aee0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 11));
    // 0x79aee4: 0xafa70084  sw          $a3, 0x84($sp)
    ctx->pc = 0x79aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
    // 0x79aee8: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x79aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x79aeec: 0xafbd0080  sw          $sp, 0x80($sp)
    ctx->pc = 0x79aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 29));
    // 0x79aef0: 0x6ba60087  ldl         $a2, 0x87($sp)
    ctx->pc = 0x79aef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79aef4: 0x6fa60080  ldr         $a2, 0x80($sp)
    ctx->pc = 0x79aef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79aef8: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x79aef8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x79aefc: 0xb3a60077  sdl         $a2, 0x77($sp)
    ctx->pc = 0x79aefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af00: 0xb7a60070  sdr         $a2, 0x70($sp)
    ctx->pc = 0x79af00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af04: 0xafa70078  sw          $a3, 0x78($sp)
    ctx->pc = 0x79af04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
    // 0x79af08: 0xafaa0090  sw          $t2, 0x90($sp)
    ctx->pc = 0x79af08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 10));
    // 0x79af0c: 0xafa90094  sw          $t1, 0x94($sp)
    ctx->pc = 0x79af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 9));
    // 0x79af10: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x79af10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x79af14: 0x6ba40097  ldl         $a0, 0x97($sp)
    ctx->pc = 0x79af14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x79af18: 0x6fa40090  ldr         $a0, 0x90($sp)
    ctx->pc = 0x79af18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x79af1c: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x79af1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x79af20: 0xb3a40087  sdl         $a0, 0x87($sp)
    ctx->pc = 0x79af20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af24: 0xb7a40080  sdr         $a0, 0x80($sp)
    ctx->pc = 0x79af24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af28: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x79af28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x79af2c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x79af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x79af30: 0x2466c548  addiu       $a2, $v1, -0x3AB8
    ctx->pc = 0x79af30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952264));
    // 0x79af34: 0x68cc0007  ldl         $t4, 0x7($a2)
    ctx->pc = 0x79af34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x79af38: 0x6ccc0000  ldr         $t4, 0x0($a2)
    ctx->pc = 0x79af38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x79af3c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x79af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C550u));
    // 0x79af40: 0xb3ac0097  sdl         $t4, 0x97($sp)
    ctx->pc = 0x79af40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af44: 0xb7ac0090  sdr         $t4, 0x90($sp)
    ctx->pc = 0x79af44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af48: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x79af48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x79af4c: 0x2443c558  addiu       $v1, $v0, -0x3AA8
    ctx->pc = 0x79af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952280));
    // 0x79af50: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x79af50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79af54: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x79af54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79af58: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x79af58u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x79C560u));
    // 0x79af5c: 0xb3a700a7  sdl         $a3, 0xA7($sp)
    ctx->pc = 0x79af5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af60: 0xb7a700a0  sdr         $a3, 0xA0($sp)
    ctx->pc = 0x79af60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af64: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x79af64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
    // 0x79af68: 0xafab00b4  sw          $t3, 0xB4($sp)
    ctx->pc = 0x79af68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 11));
    // 0x79af6c: 0x8e02c800  lw          $v0, -0x3800($s0)
    ctx->pc = 0x79af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
label_79af70:
    // 0x79af70: 0x90440014  lbu         $a0, 0x14($v0)
    ctx->pc = 0x79af70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79af74: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x79af74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79af78: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x79AF78u;
    {
        const bool branch_taken_0x79af78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF78u;
        // 0x79af7c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af78) {
            ctx->pc = 0x79B000u;
            goto label_79b000;
        }
    }
    ctx->pc = 0x79AF80u;
    // 0x79af80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x79af80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79af84: 0x2442c570  addiu       $v0, $v0, -0x3A90
    ctx->pc = 0x79af84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952304));
    // 0x79af88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79af88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79af8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79af90: 0x800008  jr          $a0
    ctx->pc = 0x79AF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79AF98u: goto label_79af98;
            case 0x79AFB0u: goto label_79afb0;
            case 0x79AFC8u: goto label_79afc8;
            case 0x79AFE0u: goto label_79afe0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AF90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79AF98u;
label_79af98:
    // 0x79af98: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x79af98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79af9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x79af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x79afa0: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79AFA0u;
    SET_GPR_U32(ctx, 31, 0x79AFA8u);
    ctx->pc = 0x79AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFA0u;
    // 0x79afa4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79AFA0u, 0x79AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFA8u;
label_79afa8:
    // 0x79afa8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79AFA8u;
    {
        const bool branch_taken_0x79afa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFA8u;
        // 0x79afac: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afa8) {
            ctx->pc = 0x79AFF4u;
            goto label_79aff4;
        }
    }
    ctx->pc = 0x79AFB0u;
label_79afb0:
    // 0x79afb0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x79afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x79afb4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x79afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x79afb8: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79AFB8u;
    SET_GPR_U32(ctx, 31, 0x79AFC0u);
    ctx->pc = 0x79AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFB8u;
    // 0x79afbc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79AFB8u, 0x79AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFC0u;
label_79afc0:
    // 0x79afc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79AFC0u;
    {
        const bool branch_taken_0x79afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFC0u;
        // 0x79afc4: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afc0) {
            ctx->pc = 0x79AFF4u;
            goto label_79aff4;
        }
    }
    ctx->pc = 0x79AFC8u;
label_79afc8:
    // 0x79afc8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x79afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x79afcc: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x79afccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x79afd0: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79AFD0u;
    SET_GPR_U32(ctx, 31, 0x79AFD8u);
    ctx->pc = 0x79AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFD0u;
    // 0x79afd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79AFD0u, 0x79AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFD8u;
label_79afd8:
    // 0x79afd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79AFD8u;
    {
        const bool branch_taken_0x79afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFD8u;
        // 0x79afdc: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afd8) {
            ctx->pc = 0x79AFF4u;
            goto label_79aff4;
        }
    }
    ctx->pc = 0x79AFE0u;
label_79afe0:
    // 0x79afe0: 0xc1e6eea  jal         func_79BBA8
    ctx->pc = 0x79AFE0u;
    SET_GPR_U32(ctx, 31, 0x79AFE8u);
    ctx->pc = 0x79BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BBA8u, 0x79AFE0u, 0x79AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFE8u;
label_79afe8:
    // 0x79afe8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AFE8u;
    {
        const bool branch_taken_0x79afe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFE8u;
        // 0x79afec: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afe8) {
            ctx->pc = 0x79B004u;
            goto label_79b004;
        }
    }
    ctx->pc = 0x79AFF0u;
    // 0x79aff0: 0x8e03c800  lw          $v1, -0x3800($s0)
    ctx->pc = 0x79aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
label_79aff4:
    // 0x79aff4: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x79aff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79aff8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79affc: 0xa0620014  sb          $v0, 0x14($v1)
    ctx->pc = 0x79affcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 2));
label_79b000:
    // 0x79b000: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b004:
    // 0x79b004: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b008: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B008u;
    SET_GPR_U32(ctx, 31, 0x79B010u);
    ctx->pc = 0x79B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B008u;
    // 0x79b00c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B008u, 0x79B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B010u;
label_79b010:
    // 0x79b010: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x79B010u;
    {
        const bool branch_taken_0x79b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B010u;
        // 0x79b014: 0x8e02c800  lw          $v0, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b010) {
            ctx->pc = 0x79AF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af70;
        }
    }
    ctx->pc = 0x79B018u;
}
} // namespace gh_r040
