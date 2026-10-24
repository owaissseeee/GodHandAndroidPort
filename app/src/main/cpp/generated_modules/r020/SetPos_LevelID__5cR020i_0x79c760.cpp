#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: SetPos_LevelID__5cR020i
// Address: 0x79c760 - 0x79c918
void SetPos_LevelID__5cR020i_0x79c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos_LevelID__5cR020i_0x79c760");
#endif

    switch (ctx->pc) {
        case 0x79c850u: goto label_79c850;
        case 0x79c868u: goto label_79c868;
        case 0x79c880u: goto label_79c880;
        case 0x79c898u: goto label_79c898;
        case 0x79c8b4u: goto label_79c8b4;
        case 0x79c8c8u: goto label_79c8c8;
        case 0x79c8e0u: goto label_79c8e0;
        default: break;
    }

    ctx->pc = 0x79c760u;

    // 0x79c760: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x79c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x79c764: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79c764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79c768: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x79c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x79c76c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79c770: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x79c770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x79c774: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x79c774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x79c778: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x79c778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x79c77c: 0x24910080  addiu       $s1, $a0, 0x80
    ctx->pc = 0x79c77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x79c780: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x79c780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x79c784: 0xbd9021  addu        $s2, $a1, $sp
    ctx->pc = 0x79c784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x79c788: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x79c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x79c78c: 0x24900058  addiu       $s0, $a0, 0x58
    ctx->pc = 0x79c78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x79c790: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x79c790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x79c794: 0x24940030  addiu       $s4, $a0, 0x30
    ctx->pc = 0x79c794u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x79c798: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x79c798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x79c79c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x79c79cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c7a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79c7a4: 0x2449cd40  addiu       $t1, $v0, -0x32C0
    ctx->pc = 0x79c7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954304));
    // 0x79c7a8: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x79c7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79c7ac: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x79c7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79c7b0: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x79c7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79c7b4: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x79c7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79c7b8: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x79c7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x79c7bc: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x79c7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x79c7c0: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x79c7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c7c4: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x79c7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c7c8: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x79c7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c7cc: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x79c7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c7d0: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x79c7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c7d4: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x79c7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c7d8: 0x6926001f  ldl         $a2, 0x1F($t1)
    ctx->pc = 0x79c7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79c7dc: 0x6d260018  ldr         $a2, 0x18($t1)
    ctx->pc = 0x79c7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79c7e0: 0x8d270020  lw          $a3, 0x20($t1)
    ctx->pc = 0x79c7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x79c7e4: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x79c7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c7e8: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x79c7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c7ec: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x79c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x79c7f0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x79c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79c7f4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x79c7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x79c7f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79c7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79c7fc: 0x2469cd68  addiu       $t1, $v1, -0x3298
    ctx->pc = 0x79c7fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954344));
    // 0x79c800: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x79c800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79c804: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x79c804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79c808: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x79c808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79c80c: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x79c80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79c810: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x79c810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x79c814: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x79c814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x79c818: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x79c818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c81c: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x79c81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c820: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x79c820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c824: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x79c824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c828: 0xb3a80047  sdl         $t0, 0x47($sp)
    ctx->pc = 0x79c828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c82c: 0xb7a80040  sdr         $t0, 0x40($sp)
    ctx->pc = 0x79c82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c830: 0x6926001f  ldl         $a2, 0x1F($t1)
    ctx->pc = 0x79c830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79c834: 0x6d260018  ldr         $a2, 0x18($t1)
    ctx->pc = 0x79c834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79c838: 0x8d270020  lw          $a3, 0x20($t1)
    ctx->pc = 0x79c838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x79c83c: 0xb3a6004f  sdl         $a2, 0x4F($sp)
    ctx->pc = 0x79c83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c840: 0xb7a60048  sdr         $a2, 0x48($sp)
    ctx->pc = 0x79c840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c844: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x79c844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x79c848: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x79c848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x79c84c: 0x0  nop
    ctx->pc = 0x79c84cu;
    // NOP
label_79c850:
    // 0x79c850: 0xe6940000  swc1        $f20, 0x0($s4)
    ctx->pc = 0x79c850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x79c854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79c854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c858: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x79c858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x79c85c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x79c85cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x79c860: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C860u;
    SET_GPR_U32(ctx, 31, 0x79C868u);
    ctx->pc = 0x79C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C860u;
    // 0x79c864: 0x8e05fff8  lw          $a1, -0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C860u, 0x79C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C868u;
label_79c868:
    // 0x79c868: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x79c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c86c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79c86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79c870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79c870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c874: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79c874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79c878: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C878u;
    SET_GPR_U32(ctx, 31, 0x79C880u);
    ctx->pc = 0x79C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C878u;
    // 0x79c87c: 0x8e05fffc  lw          $a1, -0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C878u, 0x79C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C880u;
label_79c880:
    // 0x79c880: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x79c880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c884: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79c884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79c888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79c888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c88c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79c88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79c890: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C890u;
    SET_GPR_U32(ctx, 31, 0x79C898u);
    ctx->pc = 0x79C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C890u;
    // 0x79c894: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C890u, 0x79C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C898u;
label_79c898:
    // 0x79c898: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x79c898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c89c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79c89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79c8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c8a4: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x79c8a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x79c8a8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79c8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79c8ac: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C8ACu;
    SET_GPR_U32(ctx, 31, 0x79C8B4u);
    ctx->pc = 0x79C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C8ACu;
    // 0x79c8b0: 0x8e05fff8  lw          $a1, -0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C8ACu, 0x79C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C8B4u;
label_79c8b4:
    // 0x79c8b4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x79c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c8bc: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x79c8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x79c8c0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C8C0u;
    SET_GPR_U32(ctx, 31, 0x79C8C8u);
    ctx->pc = 0x79C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C8C0u;
    // 0x79c8c4: 0x8e05fffc  lw          $a1, -0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C8C0u, 0x79C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C8C8u;
label_79c8c8:
    // 0x79c8c8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x79c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c8cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79c8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c8d0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x79c8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x79c8d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79c8d8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C8D8u;
    SET_GPR_U32(ctx, 31, 0x79C8E0u);
    ctx->pc = 0x79C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C8D8u;
    // 0x79c8dc: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C8D8u, 0x79C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C8E0u;
label_79c8e0:
    // 0x79c8e0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x79c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c8e4: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x79c8e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x79c8e8: 0x6a1ffd9  bgez        $s5, . + 4 + (-0x27 << 2)
    ctx->pc = 0x79C8E8u;
    {
        const bool branch_taken_0x79c8e8 = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x79C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8E8u;
        // 0x79c8ec: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8e8) {
            ctx->pc = 0x79C850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c850;
        }
    }
    ctx->pc = 0x79C8F0u;
    // 0x79c8f0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x79c8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79c8f4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x79c8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79c8f8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x79c8f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79c8fc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x79c8fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79c900: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x79c900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79c904: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x79c904u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79c908: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79c90c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x79c90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79c910: 0x3e00008  jr          $ra
    ctx->pc = 0x79C910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C910u;
        // 0x79c914: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C918u;
}
} // namespace gh_r020
