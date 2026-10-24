#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_0079A498
// Address: 0x79a498 - 0x79a8a0
void func_0079A498_0x79a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A498_0x79a498");
#endif

    switch (ctx->pc) {
        case 0x79a558u: goto label_79a558;
        case 0x79a560u: goto label_79a560;
        case 0x79a568u: goto label_79a568;
        case 0x79a5c0u: goto label_79a5c0;
        case 0x79a5e8u: goto label_79a5e8;
        case 0x79a618u: goto label_79a618;
        case 0x79a6c0u: goto label_79a6c0;
        case 0x79a6c8u: goto label_79a6c8;
        case 0x79a6d0u: goto label_79a6d0;
        case 0x79a728u: goto label_79a728;
        case 0x79a750u: goto label_79a750;
        case 0x79a780u: goto label_79a780;
        case 0x79a7c8u: goto label_79a7c8;
        case 0x79a7f8u: goto label_79a7f8;
        case 0x79a830u: goto label_79a830;
        case 0x79a860u: goto label_79a860;
        default: break;
    }

    ctx->pc = 0x79a498u;

    // 0x79a498: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x79a49c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a4a0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x79a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x79a4a4: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a4a8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x79a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x79a4ac: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x79a4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4b0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x79a4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x79a4b4: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x79a4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a4b8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x79a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x79a4bc: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x79a4bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a4c0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x79a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x79a4c4: 0x24140032  addiu       $s4, $zero, 0x32
    ctx->pc = 0x79a4c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79a4c8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x79a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x79a4cc: 0x24150064  addiu       $s5, $zero, 0x64
    ctx->pc = 0x79a4ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x79a4d0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x79a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x79a4d4: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x79a4d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a4d8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x79a4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x79a4dc: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x79a4dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a4e0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x79a4e4: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x79a4e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x79a4e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79a4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79a4ec: 0x2447dd48  addiu       $a3, $v0, -0x22B8
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958408));
    // 0x79a4f0: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x79a4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x79a4f4: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x79a4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x79a4f8: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x79a4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79a4fc: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x79a4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79a500: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x79a500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79a504: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x79a504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79a508: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x79a508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a50c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x79a50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a510: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x79a510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a514: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x79a514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a518: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x79a518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a51c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x79a51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a520: 0x2466dd90  addiu       $a2, $v1, -0x2270
    ctx->pc = 0x79a520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958480));
    // 0x79a524: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x79a524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79a528: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x79a528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79a52c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x79a52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x79a530: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x79a530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x79a534: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x79a534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79a538: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x79a538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79a53c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x79a53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a540: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x79a540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a544: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x79a544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a548: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x79a548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a54c: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x79a54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a550: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x79a550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a554: 0x0  nop
    ctx->pc = 0x79a554u;
    // NOP
label_79a558:
    // 0x79a558: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x79A558u;
    SET_GPR_U32(ctx, 31, 0x79A560u);
    ctx->pc = 0x79A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A558u;
    // 0x79a55c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x79A558u, 0x79A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A560u;
label_79a560:
    // 0x79a560: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x79A560u;
    SET_GPR_U32(ctx, 31, 0x79A568u);
    ctx->pc = 0x79A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A560u;
    // 0x79a564: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x79A560u, 0x79A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A568u;
label_79a568:
    // 0x79a568: 0x215001b  divu        $zero, $s0, $s5
    ctx->pc = 0x79a568u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x79a56c: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79A56Cu;
    {
        const bool branch_taken_0x79a56c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a56c) {
            ctx->pc = 0x79A570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A56Cu;
            // 0x79a570: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A574u;
            goto label_79a574;
        }
    }
    ctx->pc = 0x79A574u;
label_79a574:
    // 0x79a574: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x79a574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a578: 0x1810  mfhi        $v1
    ctx->pc = 0x79a578u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x79a57c: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x79a57cu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x79a580: 0x2010  mfhi        $a0
    ctx->pc = 0x79a580u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x79a584: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79a588: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x79a588u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x79a58c: 0x1010  mfhi        $v0
    ctx->pc = 0x79a58cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x79a590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79a594: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x79a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x79a598: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a59c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x79a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x79a5a0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x79a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x79a5a4: 0x641ffec  bgez        $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x79A5A4u;
    {
        const bool branch_taken_0x79a5a4 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x79A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A4u;
        // 0x79a5a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5a4) {
            ctx->pc = 0x79A558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a558;
        }
    }
    ctx->pc = 0x79A5ACu;
    // 0x79a5ac: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a5b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a5b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5b4: 0x24524c58  addiu       $s2, $v0, 0x4C58
    ctx->pc = 0x79a5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79a5b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a5bc: 0x0  nop
    ctx->pc = 0x79a5bcu;
    // NOP
label_79a5c0:
    // 0x79a5c0: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x79a5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a5c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5cc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x79a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x79a5d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a5d4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a5d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A5D8u;
    {
        const bool branch_taken_0x79a5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D8u;
        // 0x79a5dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5d8) {
            ctx->pc = 0x79A610u;
            goto label_79a610;
        }
    }
    ctx->pc = 0x79A5E0u;
    // 0x79a5e0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5e4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a5e8:
    // 0x79a5e8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a5ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a5f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a5f4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a5f8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a5f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a5fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A5FCu;
    {
        const bool branch_taken_0x79a5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5FCu;
        // 0x79a600: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5fc) {
            ctx->pc = 0x79A610u;
            goto label_79a610;
        }
    }
    ctx->pc = 0x79A604u;
    // 0x79a604: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a608: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A608u;
    {
        const bool branch_taken_0x79a608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a608) {
            ctx->pc = 0x79A60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A608u;
            // 0x79a60c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5e8;
        }
    }
    ctx->pc = 0x79A610u;
label_79a610:
    // 0x79a610: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A610u;
    SET_GPR_U32(ctx, 31, 0x79A618u);
    ctx->pc = 0x79A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A610u;
    // 0x79a614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A610u, 0x79A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A618u;
label_79a618:
    // 0x79a618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a61c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A61Cu;
    {
        const bool branch_taken_0x79a61c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A61Cu;
        // 0x79a620: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a61c) {
            ctx->pc = 0x79A62Cu;
            goto label_79a62c;
        }
    }
    ctx->pc = 0x79A624u;
    // 0x79a624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a628: 0xac830560  sw          $v1, 0x560($a0)
    ctx->pc = 0x79a628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 3));
label_79a62c:
    // 0x79a62c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x79a62cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a630: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x79a630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x79a634: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x79A634u;
    {
        const bool branch_taken_0x79a634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A634u;
        // 0x79a638: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a634) {
            ctx->pc = 0x79A5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5c0;
        }
    }
    ctx->pc = 0x79A63Cu;
    // 0x79a63c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a640: 0x24150064  addiu       $s5, $zero, 0x64
    ctx->pc = 0x79a640u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x79a644: 0x2446dda8  addiu       $a2, $v0, -0x2258
    ctx->pc = 0x79a644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958504));
    // 0x79a648: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x79a648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79a64c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x79a64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79a650: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x79a650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x79a654: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x79a654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x79a658: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x79a658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79a65c: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x79a65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79a660: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x79a660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a664: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x79a664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a668: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x79a668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a66c: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x79a66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a670: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x79a670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a674: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x79a674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a678: 0x24140032  addiu       $s4, $zero, 0x32
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79a67c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a680: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a684: 0x2445ddf0  addiu       $a1, $v0, -0x2210
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958576));
    // 0x79a688: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x79a688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79a68c: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x79a68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79a690: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x79a690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79a694: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x79a694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79a698: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x79a698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x79a69c: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x79a69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x79a6a0: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x79a6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a6a4: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x79a6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a6a8: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x79a6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a6ac: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x79a6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a6b0: 0xb3a40057  sdl         $a0, 0x57($sp)
    ctx->pc = 0x79a6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a6b4: 0xb7a40050  sdr         $a0, 0x50($sp)
    ctx->pc = 0x79a6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a6b8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x79a6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6bc: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x79a6bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79a6c0:
    // 0x79a6c0: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x79A6C0u;
    SET_GPR_U32(ctx, 31, 0x79A6C8u);
    ctx->pc = 0x79A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6C0u;
    // 0x79a6c4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x79A6C0u, 0x79A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6C8u;
label_79a6c8:
    // 0x79a6c8: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x79A6C8u;
    SET_GPR_U32(ctx, 31, 0x79A6D0u);
    ctx->pc = 0x79A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6C8u;
    // 0x79a6cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x79A6C8u, 0x79A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6D0u;
label_79a6d0:
    // 0x79a6d0: 0x215001b  divu        $zero, $s0, $s5
    ctx->pc = 0x79a6d0u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x79a6d4: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79A6D4u;
    {
        const bool branch_taken_0x79a6d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6d4) {
            ctx->pc = 0x79A6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6D4u;
            // 0x79a6d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6DCu;
            goto label_79a6dc;
        }
    }
    ctx->pc = 0x79A6DCu;
label_79a6dc:
    // 0x79a6dc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x79a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a6e0: 0x1810  mfhi        $v1
    ctx->pc = 0x79a6e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x79a6e4: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x79a6e4u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x79a6e8: 0x2010  mfhi        $a0
    ctx->pc = 0x79a6e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x79a6ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x79a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79a6f0: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x79a6f0u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x79a6f4: 0x1010  mfhi        $v0
    ctx->pc = 0x79a6f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x79a6f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79a6fc: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x79a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x79a700: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79a700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a704: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x79a704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x79a708: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x79a708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x79a70c: 0x641ffec  bgez        $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x79A70Cu;
    {
        const bool branch_taken_0x79a70c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x79A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A70Cu;
        // 0x79a710: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a70c) {
            ctx->pc = 0x79A6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a6c0;
        }
    }
    ctx->pc = 0x79A714u;
    // 0x79a714: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a718: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a718u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a71c: 0x24524c58  addiu       $s2, $v0, 0x4C58
    ctx->pc = 0x79a71cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79a720: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x79a720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a724: 0x0  nop
    ctx->pc = 0x79a724u;
    // NOP
label_79a728:
    // 0x79a728: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x79a728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a72c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a734: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x79a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x79a738: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a73c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x79a73cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a740: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A740u;
    {
        const bool branch_taken_0x79a740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A740u;
        // 0x79a744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a740) {
            ctx->pc = 0x79A778u;
            goto label_79a778;
        }
    }
    ctx->pc = 0x79A748u;
    // 0x79a748: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a74c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a74cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a750:
    // 0x79a750: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a750u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a754: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a758: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a75c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a760: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a764: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A764u;
    {
        const bool branch_taken_0x79a764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A764u;
        // 0x79a768: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a764) {
            ctx->pc = 0x79A778u;
            goto label_79a778;
        }
    }
    ctx->pc = 0x79A76Cu;
    // 0x79a76c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a76cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a770: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A770u;
    {
        const bool branch_taken_0x79a770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a770) {
            ctx->pc = 0x79A774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A770u;
            // 0x79a774: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a750;
        }
    }
    ctx->pc = 0x79A778u;
label_79a778:
    // 0x79a778: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A778u;
    SET_GPR_U32(ctx, 31, 0x79A780u);
    ctx->pc = 0x79A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A778u;
    // 0x79a77c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A778u, 0x79A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A780u;
label_79a780:
    // 0x79a780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a784: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A784u;
    {
        const bool branch_taken_0x79a784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A784u;
        // 0x79a788: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a784) {
            ctx->pc = 0x79A794u;
            goto label_79a794;
        }
    }
    ctx->pc = 0x79A78Cu;
    // 0x79a78c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a790: 0xac830560  sw          $v1, 0x560($a0)
    ctx->pc = 0x79a790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 3));
label_79a794:
    // 0x79a794: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x79a794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a798: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x79a798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x79a79c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x79A79Cu;
    {
        const bool branch_taken_0x79a79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A79Cu;
        // 0x79a7a0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a79c) {
            ctx->pc = 0x79A728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a728;
        }
    }
    ctx->pc = 0x79A7A4u;
    // 0x79a7a4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a7a8: 0x83c2de08  lb          $v0, -0x21F8($fp)
    ctx->pc = 0x79a7a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294958600)));
    // 0x79a7ac: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79a7acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a7b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7b4: 0x27c3de08  addiu       $v1, $fp, -0x21F8
    ctx->pc = 0x79a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958600));
    // 0x79a7b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A7B8u;
    {
        const bool branch_taken_0x79a7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B8u;
        // 0x79a7bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7b8) {
            ctx->pc = 0x79A7F0u;
            goto label_79a7f0;
        }
    }
    ctx->pc = 0x79A7C0u;
    // 0x79a7c0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a7c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a7c8:
    // 0x79a7c8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a7cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a7d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a7d4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a7d8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a7d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a7dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A7DCu;
    {
        const bool branch_taken_0x79a7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7DCu;
        // 0x79a7e0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7dc) {
            ctx->pc = 0x79A7F0u;
            goto label_79a7f0;
        }
    }
    ctx->pc = 0x79A7E4u;
    // 0x79a7e4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a7e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a7e8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A7E8u;
    {
        const bool branch_taken_0x79a7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a7e8) {
            ctx->pc = 0x79A7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A7E8u;
            // 0x79a7ec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a7c8;
        }
    }
    ctx->pc = 0x79A7F0u;
label_79a7f0:
    // 0x79a7f0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A7F0u;
    SET_GPR_U32(ctx, 31, 0x79A7F8u);
    ctx->pc = 0x79A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7F0u;
    // 0x79a7f4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A7F0u, 0x79A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7F8u;
label_79a7f8:
    // 0x79a7f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79a7f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79A7FCu;
    {
        const bool branch_taken_0x79a7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7FCu;
        // 0x79a800: 0x240203d9  addiu       $v0, $zero, 0x3D9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7fc) {
            ctx->pc = 0x79A808u;
            goto label_79a808;
        }
    }
    ctx->pc = 0x79A804u;
    // 0x79a804: 0xac620560  sw          $v0, 0x560($v1)
    ctx->pc = 0x79a804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 2));
label_79a808:
    // 0x79a808: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a80c: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x79a810: 0x24a84c58  addiu       $t0, $a1, 0x4C58
    ctx->pc = 0x79a810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 19544));
    // 0x79a814: 0x8082de10  lb          $v0, -0x21F0($a0)
    ctx->pc = 0x79a814u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79DE10u));
    // 0x79a818: 0x2483de10  addiu       $v1, $a0, -0x21F0
    ctx->pc = 0x79a818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958608));
    // 0x79a81c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a820: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A820u;
    {
        const bool branch_taken_0x79a820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A820u;
        // 0x79a824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a820) {
            ctx->pc = 0x79A858u;
            goto label_79a858;
        }
    }
    ctx->pc = 0x79A828u;
    // 0x79a828: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a82c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a82cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a830:
    // 0x79a830: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a834: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a838: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a83c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a840: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a844: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A844u;
    {
        const bool branch_taken_0x79a844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A844u;
        // 0x79a848: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a844) {
            ctx->pc = 0x79A858u;
            goto label_79a858;
        }
    }
    ctx->pc = 0x79A84Cu;
    // 0x79a84c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a84cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a850: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A850u;
    {
        const bool branch_taken_0x79a850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a850) {
            ctx->pc = 0x79A854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A850u;
            // 0x79a854: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a830;
        }
    }
    ctx->pc = 0x79A858u;
label_79a858:
    // 0x79a858: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A858u;
    SET_GPR_U32(ctx, 31, 0x79A860u);
    ctx->pc = 0x79A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A858u;
    // 0x79a85c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A858u, 0x79A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A860u;
label_79a860:
    // 0x79a860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79a860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a864: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79A864u;
    {
        const bool branch_taken_0x79a864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A864u;
        // 0x79a868: 0x2402090a  addiu       $v0, $zero, 0x90A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2314));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a864) {
            ctx->pc = 0x79A870u;
            goto label_79a870;
        }
    }
    ctx->pc = 0x79A86Cu;
    // 0x79a86c: 0xac620560  sw          $v0, 0x560($v1)
    ctx->pc = 0x79a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 2));
label_79a870:
    // 0x79a870: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x79a870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79a874: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x79a874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79a878: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x79a878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79a87c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x79a87cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a880: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x79a880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a884: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x79a884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a888: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x79a888u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a88c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x79a88cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a890: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x79a890u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a894: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79a894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a898: 0x3e00008  jr          $ra
    ctx->pc = 0x79A898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A898u;
        // 0x79a89c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A8A0u;
}
} // namespace gh_r301
