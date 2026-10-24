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
// Function: copyFromRoomData__12cEventFilterP15cEventSeqFilteri
// Address: 0x7af690 - 0x7afb70
void copyFromRoomData__12cEventFilterP15cEventSeqFilteri_0x7af690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copyFromRoomData__12cEventFilterP15cEventSeqFilteri_0x7af690");
#endif

    switch (ctx->pc) {
        case 0x7af750u: goto label_7af750;
        case 0x7af7e4u: goto label_7af7e4;
        case 0x7af828u: goto label_7af828;
        case 0x7af87cu: goto label_7af87c;
        case 0x7af8c4u: goto label_7af8c4;
        case 0x7af918u: goto label_7af918;
        case 0x7af960u: goto label_7af960;
        case 0x7af9b4u: goto label_7af9b4;
        case 0x7af9fcu: goto label_7af9fc;
        case 0x7afa50u: goto label_7afa50;
        case 0x7afac0u: goto label_7afac0;
        case 0x7afb14u: goto label_7afb14;
        default: break;
    }

    ctx->pc = 0x7af690u;

    // 0x7af690: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7af690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7af694: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x7af694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x7af698: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x7af698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x7af69c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x7af69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x7af6a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x7af6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x7af6a4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x7af6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x7af6a8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x7af6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x7af6ac: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x7af6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x7af6b0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x7af6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x7af6b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AF6B4u;
    {
        const bool branch_taken_0x7af6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF6B4u;
        // 0x7af6b8: 0x7fb70000  sq          $s7, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af6b4) {
            ctx->pc = 0x7AF6C8u;
            goto label_7af6c8;
        }
    }
    ctx->pc = 0x7AF6BCu;
    // 0x7af6bc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x7af6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x7af6c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7AF6C0u;
    {
        const bool branch_taken_0x7af6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF6C0u;
        // 0x7af6c4: 0x2446afb0  addiu       $a2, $v0, -0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af6c0) {
            ctx->pc = 0x7AF6DCu;
            goto label_7af6dc;
        }
    }
    ctx->pc = 0x7AF6C8u;
label_7af6c8:
    // 0x7af6c8: 0x24030278  addiu       $v1, $zero, 0x278
    ctx->pc = 0x7af6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x7af6cc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x7af6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x7af6d0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x7af6d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x7af6d4: 0x2442b228  addiu       $v0, $v0, -0x4DD8
    ctx->pc = 0x7af6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947368));
    // 0x7af6d8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x7af6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_7af6dc:
    // 0x7af6dc: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x7af6dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7af6e0: 0x24a90024  addiu       $t1, $a1, 0x24
    ctx->pc = 0x7af6e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x7af6e4: 0x24c701fc  addiu       $a3, $a2, 0x1FC
    ctx->pc = 0x7af6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 508));
    // 0x7af6e8: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x7af6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x7af6ec: 0xe91825  or          $v1, $a3, $t1
    ctx->pc = 0x7af6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x7af6f0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x7af6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x7af6f4: 0xc4c00260  lwc1        $f0, 0x260($a2)
    ctx->pc = 0x7af6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7af6f8: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x7af6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x7af6fc: 0xc4c10264  lwc1        $f1, 0x264($a2)
    ctx->pc = 0x7af6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7af700: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x7af700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x7af704: 0x90c2026a  lbu         $v0, 0x26A($a2)
    ctx->pc = 0x7af704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 618)));
    // 0x7af708: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x7AF708u;
    {
        const bool branch_taken_0x7af708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF708u;
        // 0x7af70c: 0xa0a20020  sb          $v0, 0x20($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af708) {
            ctx->pc = 0x7AF7A4u;
            goto label_7af7a4;
        }
    }
    ctx->pc = 0x7AF710u;
    // 0x7af710: 0x24c3025c  addiu       $v1, $a2, 0x25C
    ctx->pc = 0x7af710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 604));
    // 0x7af714: 0x24a80088  addiu       $t0, $a1, 0x88
    ctx->pc = 0x7af714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 136));
    // 0x7af718: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x7af718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x7af71c: 0x24ca0068  addiu       $t2, $a2, 0x68
    ctx->pc = 0x7af71cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 104));
    // 0x7af720: 0x24b800ec  addiu       $t8, $a1, 0xEC
    ctx->pc = 0x7af720u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 236));
    // 0x7af724: 0x24cf006c  addiu       $t7, $a2, 0x6C
    ctx->pc = 0x7af724u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
    // 0x7af728: 0x24cb00cc  addiu       $t3, $a2, 0xCC
    ctx->pc = 0x7af728u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 204));
    // 0x7af72c: 0x24a40150  addiu       $a0, $a1, 0x150
    ctx->pc = 0x7af72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
    // 0x7af730: 0x24d900d0  addiu       $t9, $a2, 0xD0
    ctx->pc = 0x7af730u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x7af734: 0x24cc0130  addiu       $t4, $a2, 0x130
    ctx->pc = 0x7af734u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 304));
    // 0x7af738: 0x24b101b4  addiu       $s1, $a1, 0x1B4
    ctx->pc = 0x7af738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 436));
    // 0x7af73c: 0x24d00134  addiu       $s0, $a2, 0x134
    ctx->pc = 0x7af73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 308));
    // 0x7af740: 0x24cd0194  addiu       $t5, $a2, 0x194
    ctx->pc = 0x7af740u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 404));
    // 0x7af744: 0x24b30284  addiu       $s3, $a1, 0x284
    ctx->pc = 0x7af744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 644));
    // 0x7af748: 0x24d20198  addiu       $s2, $a2, 0x198
    ctx->pc = 0x7af748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 408));
    // 0x7af74c: 0x24ce01f8  addiu       $t6, $a2, 0x1F8
    ctx->pc = 0x7af74cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 504));
label_7af750:
    // 0x7af750: 0x68f40007  ldl         $s4, 0x7($a3)
    ctx->pc = 0x7af750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x7af754: 0x6cf40000  ldr         $s4, 0x0($a3)
    ctx->pc = 0x7af754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x7af758: 0x68f5000f  ldl         $s5, 0xF($a3)
    ctx->pc = 0x7af758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x7af75c: 0x6cf50008  ldr         $s5, 0x8($a3)
    ctx->pc = 0x7af75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x7af760: 0x68f60017  ldl         $s6, 0x17($a3)
    ctx->pc = 0x7af760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x7af764: 0x6cf60010  ldr         $s6, 0x10($a3)
    ctx->pc = 0x7af764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x7af768: 0x68f7001f  ldl         $s7, 0x1F($a3)
    ctx->pc = 0x7af768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x7af76c: 0x6cf70018  ldr         $s7, 0x18($a3)
    ctx->pc = 0x7af76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x7af770: 0xb1340007  sdl         $s4, 0x7($t1)
    ctx->pc = 0x7af770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af774: 0xb5340000  sdr         $s4, 0x0($t1)
    ctx->pc = 0x7af774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af778: 0xb135000f  sdl         $s5, 0xF($t1)
    ctx->pc = 0x7af778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af77c: 0xb5350008  sdr         $s5, 0x8($t1)
    ctx->pc = 0x7af77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af780: 0xb1360017  sdl         $s6, 0x17($t1)
    ctx->pc = 0x7af780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af784: 0xb5360010  sdr         $s6, 0x10($t1)
    ctx->pc = 0x7af784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af788: 0xb137001f  sdl         $s7, 0x1F($t1)
    ctx->pc = 0x7af788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af78c: 0xb5370018  sdr         $s7, 0x18($t1)
    ctx->pc = 0x7af78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af790: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x7af790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x7af794: 0x14e3ffee  bne         $a3, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7AF794u;
    {
        const bool branch_taken_0x7af794 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x7AF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF794u;
        // 0x7af798: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af794) {
            ctx->pc = 0x7AF750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af750;
        }
    }
    ctx->pc = 0x7AF79Cu;
    // 0x7af79c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x7AF79Cu;
    {
        const bool branch_taken_0x7af79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF79Cu;
        // 0x7af7a0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af79c) {
            ctx->pc = 0x7AF814u;
            goto label_7af814;
        }
    }
    ctx->pc = 0x7AF7A4u;
label_7af7a4:
    // 0x7af7a4: 0x24c3025c  addiu       $v1, $a2, 0x25C
    ctx->pc = 0x7af7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 604));
    // 0x7af7a8: 0x24a80088  addiu       $t0, $a1, 0x88
    ctx->pc = 0x7af7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 136));
    // 0x7af7ac: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x7af7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x7af7b0: 0x24ca0068  addiu       $t2, $a2, 0x68
    ctx->pc = 0x7af7b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 104));
    // 0x7af7b4: 0x24b800ec  addiu       $t8, $a1, 0xEC
    ctx->pc = 0x7af7b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 236));
    // 0x7af7b8: 0x24cf006c  addiu       $t7, $a2, 0x6C
    ctx->pc = 0x7af7b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
    // 0x7af7bc: 0x24cb00cc  addiu       $t3, $a2, 0xCC
    ctx->pc = 0x7af7bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 204));
    // 0x7af7c0: 0x24a40150  addiu       $a0, $a1, 0x150
    ctx->pc = 0x7af7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
    // 0x7af7c4: 0x24d900d0  addiu       $t9, $a2, 0xD0
    ctx->pc = 0x7af7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x7af7c8: 0x24cc0130  addiu       $t4, $a2, 0x130
    ctx->pc = 0x7af7c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 304));
    // 0x7af7cc: 0x24b101b4  addiu       $s1, $a1, 0x1B4
    ctx->pc = 0x7af7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 436));
    // 0x7af7d0: 0x24d00134  addiu       $s0, $a2, 0x134
    ctx->pc = 0x7af7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 308));
    // 0x7af7d4: 0x24cd0194  addiu       $t5, $a2, 0x194
    ctx->pc = 0x7af7d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 404));
    // 0x7af7d8: 0x24b30284  addiu       $s3, $a1, 0x284
    ctx->pc = 0x7af7d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 644));
    // 0x7af7dc: 0x24d20198  addiu       $s2, $a2, 0x198
    ctx->pc = 0x7af7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 408));
    // 0x7af7e0: 0x24ce01f8  addiu       $t6, $a2, 0x1F8
    ctx->pc = 0x7af7e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 504));
label_7af7e4:
    // 0x7af7e4: 0xdcf40000  ld          $s4, 0x0($a3)
    ctx->pc = 0x7af7e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7af7e8: 0xdcf50008  ld          $s5, 0x8($a3)
    ctx->pc = 0x7af7e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x7af7ec: 0xdcf60010  ld          $s6, 0x10($a3)
    ctx->pc = 0x7af7ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x7af7f0: 0xdcf70018  ld          $s7, 0x18($a3)
    ctx->pc = 0x7af7f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x7af7f4: 0xfd340000  sd          $s4, 0x0($t1)
    ctx->pc = 0x7af7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 20));
    // 0x7af7f8: 0xfd350008  sd          $s5, 0x8($t1)
    ctx->pc = 0x7af7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 21));
    // 0x7af7fc: 0xfd360010  sd          $s6, 0x10($t1)
    ctx->pc = 0x7af7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 22));
    // 0x7af800: 0xfd370018  sd          $s7, 0x18($t1)
    ctx->pc = 0x7af800u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 23));
    // 0x7af804: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x7af804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x7af808: 0x14e3fff6  bne         $a3, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AF808u;
    {
        const bool branch_taken_0x7af808 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x7AF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF808u;
        // 0x7af80c: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af808) {
            ctx->pc = 0x7AF7E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af7e4;
        }
    }
    ctx->pc = 0x7AF810u;
    // 0x7af810: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7af810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7af814:
    // 0x7af814: 0x8cf40000  lw          $s4, 0x0($a3)
    ctx->pc = 0x7af814u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7af818: 0x681025  or          $v0, $v1, $t0
    ctx->pc = 0x7af818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x7af81c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x7af81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x7af820: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7AF820u;
    {
        const bool branch_taken_0x7af820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF820u;
        // 0x7af824: 0xad340000  sw          $s4, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af820) {
            ctx->pc = 0x7AF87Cu;
            goto label_7af87c;
        }
    }
    ctx->pc = 0x7AF828u;
label_7af828:
    // 0x7af828: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x7af828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x7af82c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x7af82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x7af830: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x7af830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7af834: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x7af834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7af838: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x7af838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x7af83c: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x7af83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x7af840: 0x6874001f  ldl         $s4, 0x1F($v1)
    ctx->pc = 0x7af840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x7af844: 0x6c740018  ldr         $s4, 0x18($v1)
    ctx->pc = 0x7af844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x7af848: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x7af848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af84c: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x7af84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af850: 0xb107000f  sdl         $a3, 0xF($t0)
    ctx->pc = 0x7af850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af854: 0xb5070008  sdr         $a3, 0x8($t0)
    ctx->pc = 0x7af854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af858: 0xb1090017  sdl         $t1, 0x17($t0)
    ctx->pc = 0x7af858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af85c: 0xb5090010  sdr         $t1, 0x10($t0)
    ctx->pc = 0x7af85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af860: 0xb114001f  sdl         $s4, 0x1F($t0)
    ctx->pc = 0x7af860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af864: 0xb5140018  sdr         $s4, 0x18($t0)
    ctx->pc = 0x7af864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af868: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7af868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7af86c: 0x146affee  bne         $v1, $t2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7AF86Cu;
    {
        const bool branch_taken_0x7af86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x7AF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF86Cu;
        // 0x7af870: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af86c) {
            ctx->pc = 0x7AF828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af828;
        }
    }
    ctx->pc = 0x7AF874u;
    // 0x7af874: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7AF874u;
    {
        const bool branch_taken_0x7af874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF874u;
        // 0x7af878: 0x1e0382d  daddu       $a3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af874) {
            ctx->pc = 0x7AF8ACu;
            goto label_7af8ac;
        }
    }
    ctx->pc = 0x7AF87Cu;
label_7af87c:
    // 0x7af87c: 0xdc750000  ld          $s5, 0x0($v1)
    ctx->pc = 0x7af87cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7af880: 0xdc760008  ld          $s6, 0x8($v1)
    ctx->pc = 0x7af880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7af884: 0xdc770010  ld          $s7, 0x10($v1)
    ctx->pc = 0x7af884u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7af888: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x7af888u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x7af88c: 0xfd150000  sd          $s5, 0x0($t0)
    ctx->pc = 0x7af88cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 21));
    // 0x7af890: 0xfd160008  sd          $s6, 0x8($t0)
    ctx->pc = 0x7af890u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 22));
    // 0x7af894: 0xfd170010  sd          $s7, 0x10($t0)
    ctx->pc = 0x7af894u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 23));
    // 0x7af898: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x7af898u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x7af89c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7af89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7af8a0: 0x146afff6  bne         $v1, $t2, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AF8A0u;
    {
        const bool branch_taken_0x7af8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x7AF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF8A0u;
        // 0x7af8a4: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af8a0) {
            ctx->pc = 0x7AF87Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af87c;
        }
    }
    ctx->pc = 0x7AF8A8u;
    // 0x7af8a8: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x7af8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_7af8ac:
    // 0x7af8ac: 0x300482d  daddu       $t1, $t8, $zero
    ctx->pc = 0x7af8acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af8b0: 0xe91025  or          $v0, $a3, $t1
    ctx->pc = 0x7af8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x7af8b4: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x7af8b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7af8b8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x7af8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x7af8bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7AF8BCu;
    {
        const bool branch_taken_0x7af8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF8BCu;
        // 0x7af8c0: 0xad0a0000  sw          $t2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af8bc) {
            ctx->pc = 0x7AF918u;
            goto label_7af918;
        }
    }
    ctx->pc = 0x7AF8C4u;
label_7af8c4:
    // 0x7af8c4: 0x68f60007  ldl         $s6, 0x7($a3)
    ctx->pc = 0x7af8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x7af8c8: 0x6cf60000  ldr         $s6, 0x0($a3)
    ctx->pc = 0x7af8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x7af8cc: 0x68f7000f  ldl         $s7, 0xF($a3)
    ctx->pc = 0x7af8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x7af8d0: 0x6cf70008  ldr         $s7, 0x8($a3)
    ctx->pc = 0x7af8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x7af8d4: 0x68e20017  ldl         $v0, 0x17($a3)
    ctx->pc = 0x7af8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x7af8d8: 0x6ce20010  ldr         $v0, 0x10($a3)
    ctx->pc = 0x7af8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x7af8dc: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x7af8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x7af8e0: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x7af8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x7af8e4: 0xb1360007  sdl         $s6, 0x7($t1)
    ctx->pc = 0x7af8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af8e8: 0xb5360000  sdr         $s6, 0x0($t1)
    ctx->pc = 0x7af8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af8ec: 0xb137000f  sdl         $s7, 0xF($t1)
    ctx->pc = 0x7af8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af8f0: 0xb5370008  sdr         $s7, 0x8($t1)
    ctx->pc = 0x7af8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af8f4: 0xb1220017  sdl         $v0, 0x17($t1)
    ctx->pc = 0x7af8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af8f8: 0xb5220010  sdr         $v0, 0x10($t1)
    ctx->pc = 0x7af8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af8fc: 0xb123001f  sdl         $v1, 0x1F($t1)
    ctx->pc = 0x7af8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af900: 0xb5230018  sdr         $v1, 0x18($t1)
    ctx->pc = 0x7af900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af904: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x7af904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x7af908: 0x14ebffee  bne         $a3, $t3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7AF908u;
    {
        const bool branch_taken_0x7af908 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        ctx->pc = 0x7AF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF908u;
        // 0x7af90c: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af908) {
            ctx->pc = 0x7AF8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af8c4;
        }
    }
    ctx->pc = 0x7AF910u;
    // 0x7af910: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7AF910u;
    {
        const bool branch_taken_0x7af910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF910u;
        // 0x7af914: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af910) {
            ctx->pc = 0x7AF948u;
            goto label_7af948;
        }
    }
    ctx->pc = 0x7AF918u;
label_7af918:
    // 0x7af918: 0xdce80000  ld          $t0, 0x0($a3)
    ctx->pc = 0x7af918u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7af91c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x7af91cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x7af920: 0xdcef0010  ld          $t7, 0x10($a3)
    ctx->pc = 0x7af920u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x7af924: 0xdcf40018  ld          $s4, 0x18($a3)
    ctx->pc = 0x7af924u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x7af928: 0xfd280000  sd          $t0, 0x0($t1)
    ctx->pc = 0x7af928u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
    // 0x7af92c: 0xfd2a0008  sd          $t2, 0x8($t1)
    ctx->pc = 0x7af92cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 10));
    // 0x7af930: 0xfd2f0010  sd          $t7, 0x10($t1)
    ctx->pc = 0x7af930u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 15));
    // 0x7af934: 0xfd340018  sd          $s4, 0x18($t1)
    ctx->pc = 0x7af934u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 20));
    // 0x7af938: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x7af938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x7af93c: 0x14ebfff6  bne         $a3, $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AF93Cu;
    {
        const bool branch_taken_0x7af93c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        ctx->pc = 0x7AF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF93Cu;
        // 0x7af940: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af93c) {
            ctx->pc = 0x7AF918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af918;
        }
    }
    ctx->pc = 0x7AF944u;
    // 0x7af944: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x7af944u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7af948:
    // 0x7af948: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x7af948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af94c: 0x10a1025  or          $v0, $t0, $t2
    ctx->pc = 0x7af94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x7af950: 0x8cf50000  lw          $s5, 0x0($a3)
    ctx->pc = 0x7af950u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7af954: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x7af954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x7af958: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7AF958u;
    {
        const bool branch_taken_0x7af958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF958u;
        // 0x7af95c: 0xad350000  sw          $s5, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af958) {
            ctx->pc = 0x7AF9B4u;
            goto label_7af9b4;
        }
    }
    ctx->pc = 0x7AF960u;
label_7af960:
    // 0x7af960: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x7af960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x7af964: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x7af964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x7af968: 0x6907000f  ldl         $a3, 0xF($t0)
    ctx->pc = 0x7af968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7af96c: 0x6d070008  ldr         $a3, 0x8($t0)
    ctx->pc = 0x7af96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7af970: 0x69090017  ldl         $t1, 0x17($t0)
    ctx->pc = 0x7af970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x7af974: 0x6d090010  ldr         $t1, 0x10($t0)
    ctx->pc = 0x7af974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x7af978: 0x690b001f  ldl         $t3, 0x1F($t0)
    ctx->pc = 0x7af978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x7af97c: 0x6d0b0018  ldr         $t3, 0x18($t0)
    ctx->pc = 0x7af97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x7af980: 0xb1440007  sdl         $a0, 0x7($t2)
    ctx->pc = 0x7af980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af984: 0xb5440000  sdr         $a0, 0x0($t2)
    ctx->pc = 0x7af984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af988: 0xb147000f  sdl         $a3, 0xF($t2)
    ctx->pc = 0x7af988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af98c: 0xb5470008  sdr         $a3, 0x8($t2)
    ctx->pc = 0x7af98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af990: 0xb1490017  sdl         $t1, 0x17($t2)
    ctx->pc = 0x7af990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af994: 0xb5490010  sdr         $t1, 0x10($t2)
    ctx->pc = 0x7af994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af998: 0xb14b001f  sdl         $t3, 0x1F($t2)
    ctx->pc = 0x7af998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af99c: 0xb54b0018  sdr         $t3, 0x18($t2)
    ctx->pc = 0x7af99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7af9a0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x7af9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x7af9a4: 0x150cffee  bne         $t0, $t4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7AF9A4u;
    {
        const bool branch_taken_0x7af9a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 12));
        ctx->pc = 0x7AF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF9A4u;
        // 0x7af9a8: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af9a4) {
            ctx->pc = 0x7AF960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af960;
        }
    }
    ctx->pc = 0x7AF9ACu;
    // 0x7af9ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7AF9ACu;
    {
        const bool branch_taken_0x7af9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF9ACu;
        // 0x7af9b0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af9ac) {
            ctx->pc = 0x7AF9E4u;
            goto label_7af9e4;
        }
    }
    ctx->pc = 0x7AF9B4u;
label_7af9b4:
    // 0x7af9b4: 0xdd0f0000  ld          $t7, 0x0($t0)
    ctx->pc = 0x7af9b4u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x7af9b8: 0xdd140008  ld          $s4, 0x8($t0)
    ctx->pc = 0x7af9b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x7af9bc: 0xdd150010  ld          $s5, 0x10($t0)
    ctx->pc = 0x7af9bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x7af9c0: 0xdd160018  ld          $s6, 0x18($t0)
    ctx->pc = 0x7af9c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x7af9c4: 0xfd4f0000  sd          $t7, 0x0($t2)
    ctx->pc = 0x7af9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 15));
    // 0x7af9c8: 0xfd540008  sd          $s4, 0x8($t2)
    ctx->pc = 0x7af9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 20));
    // 0x7af9cc: 0xfd550010  sd          $s5, 0x10($t2)
    ctx->pc = 0x7af9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 21));
    // 0x7af9d0: 0xfd560018  sd          $s6, 0x18($t2)
    ctx->pc = 0x7af9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 22));
    // 0x7af9d4: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x7af9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x7af9d8: 0x150cfff6  bne         $t0, $t4, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AF9D8u;
    {
        const bool branch_taken_0x7af9d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 12));
        ctx->pc = 0x7AF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF9D8u;
        // 0x7af9dc: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af9d8) {
            ctx->pc = 0x7AF9B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af9b4;
        }
    }
    ctx->pc = 0x7AF9E0u;
    // 0x7af9e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x7af9e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7af9e4:
    // 0x7af9e4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x7af9e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af9e8: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x7af9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x7af9ec: 0x8d170000  lw          $s7, 0x0($t0)
    ctx->pc = 0x7af9ecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x7af9f0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x7af9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x7af9f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7AF9F4u;
    {
        const bool branch_taken_0x7af9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF9F4u;
        // 0x7af9f8: 0xad570000  sw          $s7, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af9f4) {
            ctx->pc = 0x7AFA50u;
            goto label_7afa50;
        }
    }
    ctx->pc = 0x7AF9FCu;
label_7af9fc:
    // 0x7af9fc: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x7af9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x7afa00: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x7afa00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x7afa04: 0x686f000f  ldl         $t7, 0xF($v1)
    ctx->pc = 0x7afa04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x7afa08: 0x6c6f0008  ldr         $t7, 0x8($v1)
    ctx->pc = 0x7afa08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x7afa0c: 0x68740017  ldl         $s4, 0x17($v1)
    ctx->pc = 0x7afa0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x7afa10: 0x6c740010  ldr         $s4, 0x10($v1)
    ctx->pc = 0x7afa10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x7afa14: 0x6875001f  ldl         $s5, 0x1F($v1)
    ctx->pc = 0x7afa14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x7afa18: 0x6c750018  ldr         $s5, 0x18($v1)
    ctx->pc = 0x7afa18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x7afa1c: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x7afa1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afa20: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x7afa20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afa24: 0xb0ef000f  sdl         $t7, 0xF($a3)
    ctx->pc = 0x7afa24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afa28: 0xb4ef0008  sdr         $t7, 0x8($a3)
    ctx->pc = 0x7afa28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afa2c: 0xb0f40017  sdl         $s4, 0x17($a3)
    ctx->pc = 0x7afa2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afa30: 0xb4f40010  sdr         $s4, 0x10($a3)
    ctx->pc = 0x7afa30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afa34: 0xb0f5001f  sdl         $s5, 0x1F($a3)
    ctx->pc = 0x7afa34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afa38: 0xb4f50018  sdr         $s5, 0x18($a3)
    ctx->pc = 0x7afa38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afa3c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7afa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7afa40: 0x146dffee  bne         $v1, $t5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7AFA40u;
    {
        const bool branch_taken_0x7afa40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        ctx->pc = 0x7AFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFA40u;
        // 0x7afa44: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afa40) {
            ctx->pc = 0x7AF9FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af9fc;
        }
    }
    ctx->pc = 0x7AFA48u;
    // 0x7afa48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7AFA48u;
    {
        const bool branch_taken_0x7afa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7afa48) {
            ctx->pc = 0x7AFA7Cu;
            goto label_7afa7c;
        }
    }
    ctx->pc = 0x7AFA50u;
label_7afa50:
    // 0x7afa50: 0xdc760000  ld          $s6, 0x0($v1)
    ctx->pc = 0x7afa50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7afa54: 0xdc770008  ld          $s7, 0x8($v1)
    ctx->pc = 0x7afa54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7afa58: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x7afa58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7afa5c: 0xdc640018  ld          $a0, 0x18($v1)
    ctx->pc = 0x7afa5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x7afa60: 0xfcf60000  sd          $s6, 0x0($a3)
    ctx->pc = 0x7afa60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 22));
    // 0x7afa64: 0xfcf70008  sd          $s7, 0x8($a3)
    ctx->pc = 0x7afa64u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 23));
    // 0x7afa68: 0xfce20010  sd          $v0, 0x10($a3)
    ctx->pc = 0x7afa68u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    // 0x7afa6c: 0xfce40018  sd          $a0, 0x18($a3)
    ctx->pc = 0x7afa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 4));
    // 0x7afa70: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7afa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7afa74: 0x146dfff6  bne         $v1, $t5, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AFA74u;
    {
        const bool branch_taken_0x7afa74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        ctx->pc = 0x7AFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFA74u;
        // 0x7afa78: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afa74) {
            ctx->pc = 0x7AFA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afa50;
        }
    }
    ctx->pc = 0x7AFA7Cu;
label_7afa7c:
    // 0x7afa7c: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x7afa7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7afa80: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x7afa80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x7afa84: 0x90c30268  lbu         $v1, 0x268($a2)
    ctx->pc = 0x7afa84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 616)));
    // 0x7afa88: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x7afa88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7afa8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x7afa8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7afa90: 0xa0a3027c  sb          $v1, 0x27C($a1)
    ctx->pc = 0x7afa90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 636), (uint8_t)GPR_U32(ctx, 3));
    // 0x7afa94: 0xe82025  or          $a0, $a3, $t0
    ctx->pc = 0x7afa94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x7afa98: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x7afa98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x7afa9c: 0x90c20269  lbu         $v0, 0x269($a2)
    ctx->pc = 0x7afa9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 617)));
    // 0x7afaa0: 0xa0a2027d  sb          $v0, 0x27D($a1)
    ctx->pc = 0x7afaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 637), (uint8_t)GPR_U32(ctx, 2));
    // 0x7afaa4: 0x94c3026c  lhu         $v1, 0x26C($a2)
    ctx->pc = 0x7afaa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 620)));
    // 0x7afaa8: 0xa4a3027e  sh          $v1, 0x27E($a1)
    ctx->pc = 0x7afaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 638), (uint16_t)GPR_U32(ctx, 3));
    // 0x7afaac: 0x94c2026e  lhu         $v0, 0x26E($a2)
    ctx->pc = 0x7afaacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 622)));
    // 0x7afab0: 0xa4a20280  sh          $v0, 0x280($a1)
    ctx->pc = 0x7afab0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 640), (uint16_t)GPR_U32(ctx, 2));
    // 0x7afab4: 0x94c30270  lhu         $v1, 0x270($a2)
    ctx->pc = 0x7afab4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 624)));
    // 0x7afab8: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7AFAB8u;
    {
        const bool branch_taken_0x7afab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFAB8u;
        // 0x7afabc: 0xa4a30282  sh          $v1, 0x282($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 642), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afab8) {
            ctx->pc = 0x7AFB14u;
            goto label_7afb14;
        }
    }
    ctx->pc = 0x7AFAC0u;
label_7afac0:
    // 0x7afac0: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x7afac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x7afac4: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x7afac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x7afac8: 0x68ef000f  ldl         $t7, 0xF($a3)
    ctx->pc = 0x7afac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x7afacc: 0x6cef0008  ldr         $t7, 0x8($a3)
    ctx->pc = 0x7afaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x7afad0: 0x68f40017  ldl         $s4, 0x17($a3)
    ctx->pc = 0x7afad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x7afad4: 0x6cf40010  ldr         $s4, 0x10($a3)
    ctx->pc = 0x7afad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x7afad8: 0x68f5001f  ldl         $s5, 0x1F($a3)
    ctx->pc = 0x7afad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x7afadc: 0x6cf50018  ldr         $s5, 0x18($a3)
    ctx->pc = 0x7afadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x7afae0: 0xb10c0007  sdl         $t4, 0x7($t0)
    ctx->pc = 0x7afae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afae4: 0xb50c0000  sdr         $t4, 0x0($t0)
    ctx->pc = 0x7afae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afae8: 0xb10f000f  sdl         $t7, 0xF($t0)
    ctx->pc = 0x7afae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afaec: 0xb50f0008  sdr         $t7, 0x8($t0)
    ctx->pc = 0x7afaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afaf0: 0xb1140017  sdl         $s4, 0x17($t0)
    ctx->pc = 0x7afaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afaf4: 0xb5140010  sdr         $s4, 0x10($t0)
    ctx->pc = 0x7afaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afaf8: 0xb115001f  sdl         $s5, 0x1F($t0)
    ctx->pc = 0x7afaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afafc: 0xb5150018  sdr         $s5, 0x18($t0)
    ctx->pc = 0x7afafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7afb00: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x7afb00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x7afb04: 0x14eeffee  bne         $a3, $t6, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7AFB04u;
    {
        const bool branch_taken_0x7afb04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 14));
        ctx->pc = 0x7AFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFB04u;
        // 0x7afb08: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afb04) {
            ctx->pc = 0x7AFAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afac0;
        }
    }
    ctx->pc = 0x7AFB0Cu;
    // 0x7afb0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7AFB0Cu;
    {
        const bool branch_taken_0x7afb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7afb0c) {
            ctx->pc = 0x7AFB40u;
            goto label_7afb40;
        }
    }
    ctx->pc = 0x7AFB14u;
label_7afb14:
    // 0x7afb14: 0xdcf60000  ld          $s6, 0x0($a3)
    ctx->pc = 0x7afb14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7afb18: 0xdcf70008  ld          $s7, 0x8($a3)
    ctx->pc = 0x7afb18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x7afb1c: 0xdce20010  ld          $v0, 0x10($a3)
    ctx->pc = 0x7afb1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x7afb20: 0xdce30018  ld          $v1, 0x18($a3)
    ctx->pc = 0x7afb20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x7afb24: 0xfd160000  sd          $s6, 0x0($t0)
    ctx->pc = 0x7afb24u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 22));
    // 0x7afb28: 0xfd170008  sd          $s7, 0x8($t0)
    ctx->pc = 0x7afb28u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 23));
    // 0x7afb2c: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x7afb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x7afb30: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x7afb30u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x7afb34: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x7afb34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x7afb38: 0x14eefff6  bne         $a3, $t6, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AFB38u;
    {
        const bool branch_taken_0x7afb38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 14));
        ctx->pc = 0x7AFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFB38u;
        // 0x7afb3c: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afb38) {
            ctx->pc = 0x7AFB14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afb14;
        }
    }
    ctx->pc = 0x7AFB40u;
label_7afb40:
    // 0x7afb40: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x7afb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7afb44: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x7afb44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x7afb48: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x7afb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7afb4c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x7afb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7afb50: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x7afb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7afb54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x7afb54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7afb58: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x7afb58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7afb5c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x7afb5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7afb60: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x7afb60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7afb64: 0x7bb70000  lq          $s7, 0x0($sp)
    ctx->pc = 0x7afb64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7afb68: 0x3e00008  jr          $ra
    ctx->pc = 0x7AFB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AFB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFB68u;
        // 0x7afb6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AFB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AFB70u;
}
} // namespace gh_event
