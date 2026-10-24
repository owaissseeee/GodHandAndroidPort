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

// Function: func_001E3E40
// Address: 0x1e3e40 - 0x1e4010
void func_001E3E40_0x1e3e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E3E40_0x1e3e40");
#endif

    switch (ctx->pc) {
        case 0x1e3f34u: goto label_1e3f34;
        case 0x1e3f54u: goto label_1e3f54;
        case 0x1e3f74u: goto label_1e3f74;
        case 0x1e3f80u: goto label_1e3f80;
        case 0x1e3facu: goto label_1e3fac;
        case 0x1e3fccu: goto label_1e3fcc;
        case 0x1e3fecu: goto label_1e3fec;
        case 0x1e3ff8u: goto label_1e3ff8;
        default: break;
    }

    ctx->pc = 0x1e3e40u;

    // 0x1e3e40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e3e44: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1e3e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e3e48: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e3e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1e3e4c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1e3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1e3e50: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e3e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1e3e54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e3e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3e58: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e3e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1e3e5c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e3e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e3e60: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1e3e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e3e64: 0x246bb890  addiu       $t3, $v1, -0x4770
    ctx->pc = 0x1e3e64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949008));
    // 0x1e3e68: 0x69640007  ldl         $a0, 0x7($t3)
    ctx->pc = 0x1e3e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e3e6c: 0x6d640000  ldr         $a0, 0x0($t3)
    ctx->pc = 0x1e3e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e3e70: 0x6969000f  ldl         $t1, 0xF($t3)
    ctx->pc = 0x1e3e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1e3e74: 0x6d690008  ldr         $t1, 0x8($t3)
    ctx->pc = 0x1e3e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1e3e78: 0x696a0017  ldl         $t2, 0x17($t3)
    ctx->pc = 0x1e3e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1e3e7c: 0x6d6a0010  ldr         $t2, 0x10($t3)
    ctx->pc = 0x1e3e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1e3e80: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1e3e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3e84: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1e3e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3e88: 0xb3a9000f  sdl         $t1, 0xF($sp)
    ctx->pc = 0x1e3e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3e8c: 0xb7a90008  sdr         $t1, 0x8($sp)
    ctx->pc = 0x1e3e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3e90: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x1e3e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3e94: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x1e3e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3e98: 0x6964001f  ldl         $a0, 0x1F($t3)
    ctx->pc = 0x1e3e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e3e9c: 0x6d640018  ldr         $a0, 0x18($t3)
    ctx->pc = 0x1e3e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e3ea0: 0x69690027  ldl         $t1, 0x27($t3)
    ctx->pc = 0x1e3ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1e3ea4: 0x6d690020  ldr         $t1, 0x20($t3)
    ctx->pc = 0x1e3ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1e3ea8: 0x696a002f  ldl         $t2, 0x2F($t3)
    ctx->pc = 0x1e3ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1e3eac: 0x6d6a0028  ldr         $t2, 0x28($t3)
    ctx->pc = 0x1e3eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1e3eb0: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1e3eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3eb4: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1e3eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3eb8: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x1e3eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3ebc: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x1e3ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3ec0: 0xb3aa002f  sdl         $t2, 0x2F($sp)
    ctx->pc = 0x1e3ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3ec4: 0xb7aa0028  sdr         $t2, 0x28($sp)
    ctx->pc = 0x1e3ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3ec8: 0x69640037  ldl         $a0, 0x37($t3)
    ctx->pc = 0x1e3ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e3ecc: 0x6d640030  ldr         $a0, 0x30($t3)
    ctx->pc = 0x1e3eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e3ed0: 0x8d690038  lw          $t1, 0x38($t3)
    ctx->pc = 0x1e3ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x1e3ed4: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x1e3ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3ed8: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x1e3ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e3edc: 0xafa90038  sw          $t1, 0x38($sp)
    ctx->pc = 0x1e3edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 9));
    // 0x1e3ee0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E3EE0u;
    {
        const bool branch_taken_0x1e3ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EE0u;
        // 0x1e3ee4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ee0) {
            ctx->pc = 0x1E3FF8u;
            goto label_1e3ff8;
        }
    }
    ctx->pc = 0x1E3EE8u;
    // 0x1e3ee8: 0x512c0  sll         $v0, $a1, 11
    ctx->pc = 0x1e3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x1e3eec: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3EECu;
    {
        const bool branch_taken_0x1e3eec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EECu;
        // 0x1e3ef0: 0xa64204aa  sh          $v0, 0x4AA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3eec) {
            ctx->pc = 0x1E3EFCu;
            goto label_1e3efc;
        }
    }
    ctx->pc = 0x1E3EF4u;
    // 0x1e3ef4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e3ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e3ef8: 0xa64204aa  sh          $v0, 0x4AA($s2)
    ctx->pc = 0x1e3ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1194), (uint16_t)GPR_U32(ctx, 2));
label_1e3efc:
    // 0x1e3efc: 0x10c00022  beqz        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E3EFCu;
    {
        const bool branch_taken_0x1e3efc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EFCu;
        // 0x1e3f00: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3efc) {
            ctx->pc = 0x1E3F88u;
            goto label_1e3f88;
        }
    }
    ctx->pc = 0x1E3F04u;
    // 0x1e3f04: 0x964204aa  lhu         $v0, 0x4AA($s2)
    ctx->pc = 0x1e3f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1194)));
    // 0x1e3f08: 0xb08018  mult        $s0, $a1, $s0
    ctx->pc = 0x1e3f08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1e3f0c: 0x26510400  addiu       $s1, $s2, 0x400
    ctx->pc = 0x1e3f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x1e3f10: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e3f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e3f14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e3f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3f18: 0xa64204aa  sh          $v0, 0x4AA($s2)
    ctx->pc = 0x1e3f18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1194), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e3f1c: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x1e3f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1e3f20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3f24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3f28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e3f2c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3F2Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F34u);
    ctx->pc = 0x1E3F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F2Cu;
    // 0x1e3f30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3F2Cu, 0x1E3F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F34u;
label_1e3f34:
    // 0x1e3f34: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x1e3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e3f38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e3f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3f3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e3f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e3f40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3f44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3f48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e3f4c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F54u);
    ctx->pc = 0x1E3F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F4Cu;
    // 0x1e3f50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3F4Cu, 0x1E3F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F54u;
label_1e3f54:
    // 0x1e3f54: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1e3f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e3f58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e3f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3f5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e3f60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3f64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3f68: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1e3f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e3f6c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3F6Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F74u);
    ctx->pc = 0x1E3F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F6Cu;
    // 0x1e3f70: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3F6Cu, 0x1E3F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F74u;
label_1e3f74:
    // 0x1e3f74: 0x8e44042c  lw          $a0, 0x42C($s2)
    ctx->pc = 0x1e3f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1068)));
    // 0x1e3f78: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3F78u;
    SET_GPR_U32(ctx, 31, 0x1E3F80u);
    ctx->pc = 0x1E3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F78u;
    // 0x1e3f7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3F78u, 0x1E3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F80u;
label_1e3f80:
    // 0x1e3f80: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1E3F80u;
    {
        const bool branch_taken_0x1e3f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F80u;
        // 0x1e3f84: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f80) {
            ctx->pc = 0x1E3FFCu;
            goto label_1e3ffc;
        }
    }
    ctx->pc = 0x1E3F88u;
label_1e3f88:
    // 0x1e3f88: 0x26510400  addiu       $s1, $s2, 0x400
    ctx->pc = 0x1e3f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x1e3f8c: 0x1108018  mult        $s0, $t0, $s0
    ctx->pc = 0x1e3f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1e3f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3f94: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x1e3f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1e3f98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3f9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3fa0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e3fa4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3FA4u;
    SET_GPR_U32(ctx, 31, 0x1E3FACu);
    ctx->pc = 0x1E3FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FA4u;
    // 0x1e3fa8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3FA4u, 0x1E3FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FACu;
label_1e3fac:
    // 0x1e3fac: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x1e3facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e3fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3fb4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e3fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e3fb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3fbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3fc0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e3fc4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3FC4u;
    SET_GPR_U32(ctx, 31, 0x1E3FCCu);
    ctx->pc = 0x1E3FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FC4u;
    // 0x1e3fc8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3FC4u, 0x1E3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FCCu;
label_1e3fcc:
    // 0x1e3fcc: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1e3fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e3fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3fd4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e3fd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3fe0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1e3fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e3fe4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3FE4u;
    SET_GPR_U32(ctx, 31, 0x1E3FECu);
    ctx->pc = 0x1E3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FE4u;
    // 0x1e3fe8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3FE4u, 0x1E3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FECu;
label_1e3fec:
    // 0x1e3fec: 0x8e44042c  lw          $a0, 0x42C($s2)
    ctx->pc = 0x1e3fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1068)));
    // 0x1e3ff0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3FF0u;
    SET_GPR_U32(ctx, 31, 0x1E3FF8u);
    ctx->pc = 0x1E3FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FF0u;
    // 0x1e3ff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3FF0u, 0x1E3FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FF8u;
label_1e3ff8:
    // 0x1e3ff8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e3ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e3ffc:
    // 0x1e3ffc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e3ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4000: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e4000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4004: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e4004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4008: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4008u;
        // 0x1e400c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4010u;
}
