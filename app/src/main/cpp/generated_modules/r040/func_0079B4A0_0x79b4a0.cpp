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
// Function: func_0079B4A0
// Address: 0x79b4a0 - 0x79b638
void func_0079B4A0_0x79b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B4A0_0x79b4a0");
#endif

    switch (ctx->pc) {
        case 0x79b5c8u: goto label_79b5c8;
        case 0x79b5f4u: goto label_79b5f4;
        case 0x79b604u: goto label_79b604;
        case 0x79b62cu: goto label_79b62c;
        default: break;
    }

    ctx->pc = 0x79b4a0u;

    // 0x79b4a0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x79b4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x79b4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b4a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x79b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b4ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79b4b0: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79b4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b4b4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x79b4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79b4b8: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79b4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b4bc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x79b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79b4c0: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x79b4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x79b4c4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x79b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79b4c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x79b4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79b4cc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x79b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b4d0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x79b4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b4d4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x79b4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79b4d8: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x79b4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b4dc: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x79b4dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b4e0: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x79b4e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b4e4: 0x27ac0040  addiu       $t4, $sp, 0x40
    ctx->pc = 0x79b4e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b4e8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79b4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x79b4ec: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x79b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x79b4f0: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79b4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79b4f4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x79b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x79b4f8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x79b4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b4fc: 0xa3a40030  sb          $a0, 0x30($sp)
    ctx->pc = 0x79b4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b500: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79b500u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79b504: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x79b504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x79b508: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79b508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79b50c: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x79b50cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x79b510: 0xa3a70060  sb          $a3, 0x60($sp)
    ctx->pc = 0x79b510u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 7));
    // 0x79b514: 0xa3a80070  sb          $t0, 0x70($sp)
    ctx->pc = 0x79b514u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 8));
    // 0x79b518: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79b518u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79b51c: 0xafa900a4  sw          $t1, 0xA4($sp)
    ctx->pc = 0x79b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 9));
    // 0x79b520: 0xafaa00a8  sw          $t2, 0xA8($sp)
    ctx->pc = 0x79b520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 10));
    // 0x79b524: 0xafab00ac  sw          $t3, 0xAC($sp)
    ctx->pc = 0x79b524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 11));
    // 0x79b528: 0xafac00b0  sw          $t4, 0xB0($sp)
    ctx->pc = 0x79b528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 12));
    // 0x79b52c: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x79b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x79b530: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x79b530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x79b534: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x79b534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x79b538: 0xafbd00a0  sw          $sp, 0xA0($sp)
    ctx->pc = 0x79b538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 29));
    // 0x79b53c: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x79b53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b540: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x79b540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b544: 0x6ba300af  ldl         $v1, 0xAF($sp)
    ctx->pc = 0x79b544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79b548: 0x6fa300a8  ldr         $v1, 0xA8($sp)
    ctx->pc = 0x79b548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79b54c: 0x6ba500b7  ldl         $a1, 0xB7($sp)
    ctx->pc = 0x79b54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79b550: 0x6fa500b0  ldr         $a1, 0xB0($sp)
    ctx->pc = 0x79b550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79b554: 0x6ba600bf  ldl         $a2, 0xBF($sp)
    ctx->pc = 0x79b554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79b558: 0x6fa600b8  ldr         $a2, 0xB8($sp)
    ctx->pc = 0x79b558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79b55c: 0xb3a20087  sdl         $v0, 0x87($sp)
    ctx->pc = 0x79b55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b560: 0xb7a20080  sdr         $v0, 0x80($sp)
    ctx->pc = 0x79b560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b564: 0xb3a3008f  sdl         $v1, 0x8F($sp)
    ctx->pc = 0x79b564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b568: 0xb7a30088  sdr         $v1, 0x88($sp)
    ctx->pc = 0x79b568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b56c: 0xb3a50097  sdl         $a1, 0x97($sp)
    ctx->pc = 0x79b56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b570: 0xb7a50090  sdr         $a1, 0x90($sp)
    ctx->pc = 0x79b570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b574: 0xb3a6009f  sdl         $a2, 0x9F($sp)
    ctx->pc = 0x79b574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b578: 0xb7a60098  sdr         $a2, 0x98($sp)
    ctx->pc = 0x79b578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b57c: 0x2486c5d8  addiu       $a2, $a0, -0x3A28
    ctx->pc = 0x79b57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952408));
    // 0x79b580: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x79b580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b584: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x79b584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b588: 0x68c3000f  ldl         $v1, 0xF($a2)
    ctx->pc = 0x79b588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79b58c: 0x6cc30008  ldr         $v1, 0x8($a2)
    ctx->pc = 0x79b58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79b590: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x79b590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79b594: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x79b594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79b598: 0xb3a200a7  sdl         $v0, 0xA7($sp)
    ctx->pc = 0x79b598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b59c: 0xb7a200a0  sdr         $v0, 0xA0($sp)
    ctx->pc = 0x79b59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b5a0: 0xb3a300af  sdl         $v1, 0xAF($sp)
    ctx->pc = 0x79b5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b5a4: 0xb7a300a8  sdr         $v1, 0xA8($sp)
    ctx->pc = 0x79b5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b5a8: 0xb3a500b7  sdl         $a1, 0xB7($sp)
    ctx->pc = 0x79b5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b5ac: 0xb7a500b0  sdr         $a1, 0xB0($sp)
    ctx->pc = 0x79b5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b5b0: 0x68c2001f  ldl         $v0, 0x1F($a2)
    ctx->pc = 0x79b5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b5b4: 0x6cc20018  ldr         $v0, 0x18($a2)
    ctx->pc = 0x79b5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b5b8: 0xb3a200bf  sdl         $v0, 0xBF($sp)
    ctx->pc = 0x79b5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b5bc: 0xb7a200b8  sdr         $v0, 0xB8($sp)
    ctx->pc = 0x79b5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b5c0: 0x8e02c800  lw          $v0, -0x3800($s0)
    ctx->pc = 0x79b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
    // 0x79b5c4: 0x0  nop
    ctx->pc = 0x79b5c4u;
    // NOP
label_79b5c8:
    // 0x79b5c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x79b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x79b5cc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x79b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x79b5d0: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x79b5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79b5d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B5D4u;
    {
        const bool branch_taken_0x79b5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5D4u;
        // 0x79b5d8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5d4) {
            ctx->pc = 0x79B5ECu;
            goto label_79b5ec;
        }
    }
    ctx->pc = 0x79B5DCu;
    // 0x79b5dc: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B5DCu;
    {
        const bool branch_taken_0x79b5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5DCu;
        // 0x79b5e0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5dc) {
            ctx->pc = 0x79B5FCu;
            goto label_79b5fc;
        }
    }
    ctx->pc = 0x79B5E4u;
    // 0x79b5e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79B5E4u;
    {
        const bool branch_taken_0x79b5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5E4u;
        // 0x79b5e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5e4) {
            ctx->pc = 0x79B624u;
            goto label_79b624;
        }
    }
    ctx->pc = 0x79B5ECu;
label_79b5ec:
    // 0x79b5ec: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79B5ECu;
    SET_GPR_U32(ctx, 31, 0x79B5F4u);
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79B5ECu, 0x79B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5F4u;
label_79b5f4:
    // 0x79b5f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79B5F4u;
    {
        const bool branch_taken_0x79b5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5F4u;
        // 0x79b5f8: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5f4) {
            ctx->pc = 0x79B610u;
            goto label_79b610;
        }
    }
    ctx->pc = 0x79B5FCu;
label_79b5fc:
    // 0x79b5fc: 0xc1e6eea  jal         func_79BBA8
    ctx->pc = 0x79B5FCu;
    SET_GPR_U32(ctx, 31, 0x79B604u);
    ctx->pc = 0x79BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BBA8u, 0x79B5FCu, 0x79B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B604u;
label_79b604:
    // 0x79b604: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B604u;
    {
        const bool branch_taken_0x79b604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B604u;
        // 0x79b608: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b604) {
            ctx->pc = 0x79B620u;
            goto label_79b620;
        }
    }
    ctx->pc = 0x79B60Cu;
    // 0x79b60c: 0x8e03c800  lw          $v1, -0x3800($s0)
    ctx->pc = 0x79b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
label_79b610:
    // 0x79b610: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x79b610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79b614: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b618: 0xa0620014  sb          $v0, 0x14($v1)
    ctx->pc = 0x79b618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b61c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79b620:
    // 0x79b620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b624:
    // 0x79b624: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B624u;
    SET_GPR_U32(ctx, 31, 0x79B62Cu);
    ctx->pc = 0x79B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B624u;
    // 0x79b628: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B624u, 0x79B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B62Cu;
label_79b62c:
    // 0x79b62c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x79B62Cu;
    {
        const bool branch_taken_0x79b62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B62Cu;
        // 0x79b630: 0x8e02c800  lw          $v0, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b62c) {
            ctx->pc = 0x79B5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b5c8;
        }
    }
    ctx->pc = 0x79B634u;
    // 0x79b634: 0x0  nop
    ctx->pc = 0x79b634u;
    // NOP
    ctx->pc = 0x79b638u;
}
} // namespace gh_r040
