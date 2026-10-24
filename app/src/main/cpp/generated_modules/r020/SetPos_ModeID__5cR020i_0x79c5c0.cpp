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
// Function: SetPos_ModeID__5cR020i
// Address: 0x79c5c0 - 0x79c760
void SetPos_ModeID__5cR020i_0x79c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos_ModeID__5cR020i_0x79c5c0");
#endif

    switch (ctx->pc) {
        case 0x79c6b8u: goto label_79c6b8;
        case 0x79c6ccu: goto label_79c6cc;
        case 0x79c6e8u: goto label_79c6e8;
        case 0x79c708u: goto label_79c708;
        case 0x79c720u: goto label_79c720;
        default: break;
    }

    ctx->pc = 0x79c5c0u;

    // 0x79c5c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x79c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x79c5c4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79c5c8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x79c5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x79c5cc: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79c5d0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x79c5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x79c5d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x79c5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x79c5d8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x79c5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x79c5dc: 0xbd8021  addu        $s0, $a1, $sp
    ctx->pc = 0x79c5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x79c5e0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x79c5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x79c5e4: 0x24920080  addiu       $s2, $a0, 0x80
    ctx->pc = 0x79c5e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x79c5e8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x79c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x79c5ec: 0x24130031  addiu       $s3, $zero, 0x31
    ctx->pc = 0x79c5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x79c5f0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x79c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x79c5f4: 0x24940040  addiu       $s4, $a0, 0x40
    ctx->pc = 0x79c5f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x79c5f8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x79c5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x79c5fc: 0x24150033  addiu       $s5, $zero, 0x33
    ctx->pc = 0x79c5fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79c600: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x79c600u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x79c604: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x79c604u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c608: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79c608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79c60c: 0x2449ccf0  addiu       $t1, $v0, -0x3310
    ctx->pc = 0x79c60cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954224));
    // 0x79c610: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x79c610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79c614: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x79c614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79c618: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x79c618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79c61c: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x79c61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79c620: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x79c620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x79c624: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x79c624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x79c628: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x79c628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c62c: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x79c62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c630: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x79c630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c634: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x79c634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c638: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x79c638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c63c: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x79c63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c640: 0x6926001f  ldl         $a2, 0x1F($t1)
    ctx->pc = 0x79c640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79c644: 0x6d260018  ldr         $a2, 0x18($t1)
    ctx->pc = 0x79c644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79c648: 0x8d270020  lw          $a3, 0x20($t1)
    ctx->pc = 0x79c648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x79c64c: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x79c64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c650: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x79c650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c654: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x79c654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x79c658: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x79c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79c65c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x79c65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x79c660: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79c660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79c664: 0x2469cd18  addiu       $t1, $v1, -0x32E8
    ctx->pc = 0x79c664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954264));
    // 0x79c668: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x79c668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79c66c: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x79c66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79c670: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x79c670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79c674: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x79c674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79c678: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x79c678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x79c67c: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x79c67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x79c680: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x79c680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c684: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x79c684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c688: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x79c688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c68c: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x79c68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c690: 0xb3a80047  sdl         $t0, 0x47($sp)
    ctx->pc = 0x79c690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c694: 0xb7a80040  sdr         $t0, 0x40($sp)
    ctx->pc = 0x79c694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c698: 0x6926001f  ldl         $a2, 0x1F($t1)
    ctx->pc = 0x79c698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79c69c: 0x6d260018  ldr         $a2, 0x18($t1)
    ctx->pc = 0x79c69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79c6a0: 0x8d270020  lw          $a3, 0x20($t1)
    ctx->pc = 0x79c6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x79c6a4: 0xb3a6004f  sdl         $a2, 0x4F($sp)
    ctx->pc = 0x79c6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c6a8: 0xb7a60048  sdr         $a2, 0x48($sp)
    ctx->pc = 0x79c6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79c6ac: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x79c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x79c6b0: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x79c6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x79c6b4: 0x0  nop
    ctx->pc = 0x79c6b4u;
    // NOP
label_79c6b8:
    // 0x79c6b8: 0xe6940000  swc1        $f20, 0x0($s4)
    ctx->pc = 0x79c6b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x79c6bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79c6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c6c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79c6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c6c4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C6C4u;
    SET_GPR_U32(ctx, 31, 0x79C6CCu);
    ctx->pc = 0x79C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C6C4u;
    // 0x79c6c8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C6C4u, 0x79C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C6CCu;
label_79c6cc:
    // 0x79c6cc: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x79c6ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x79c6d0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x79c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c6d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79c6d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79c6d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79c6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c6dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79c6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c6e0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C6E0u;
    SET_GPR_U32(ctx, 31, 0x79C6E8u);
    ctx->pc = 0x79C6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C6E0u;
    // 0x79c6e4: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C6E0u, 0x79C6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C6E8u;
label_79c6e8:
    // 0x79c6e8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x79c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c6ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79c6ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79c6f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79c6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79c6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c6f8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x79c6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x79c6fc: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x79c6fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x79c700: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C700u;
    SET_GPR_U32(ctx, 31, 0x79C708u);
    ctx->pc = 0x79C704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C700u;
    // 0x79c704: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C700u, 0x79C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C708u;
label_79c708:
    // 0x79c708: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x79c708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c70c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79c70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79c710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c714: 0x26b50003  addiu       $s5, $s5, 0x3
    ctx->pc = 0x79c714u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x79c718: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C718u;
    SET_GPR_U32(ctx, 31, 0x79C720u);
    ctx->pc = 0x79C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C718u;
    // 0x79c71c: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C718u, 0x79C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C720u;
label_79c720:
    // 0x79c720: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x79c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c724: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x79c724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x79c728: 0x6c1ffe3  bgez        $s6, . + 4 + (-0x1D << 2)
    ctx->pc = 0x79C728u;
    {
        const bool branch_taken_0x79c728 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x79C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C728u;
        // 0x79c72c: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c728) {
            ctx->pc = 0x79C6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c6b8;
        }
    }
    ctx->pc = 0x79C730u;
    // 0x79c730: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x79c730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79c734: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x79c734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79c738: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x79c738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79c73c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x79c73cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79c740: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x79c740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79c744: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x79c744u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79c748: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x79c748u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79c74c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79c74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79c750: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x79c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79c754: 0x3e00008  jr          $ra
    ctx->pc = 0x79C754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C754u;
        // 0x79c758: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C75Cu;
    // 0x79c75c: 0x0  nop
    ctx->pc = 0x79c75cu;
    // NOP
    ctx->pc = 0x79c760u;
}
} // namespace gh_r020
