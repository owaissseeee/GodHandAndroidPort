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

// Function: func_001E4010
// Address: 0x1e4010 - 0x1e4200
void func_001E4010_0x1e4010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E4010_0x1e4010");
#endif

    switch (ctx->pc) {
        case 0x1e411cu: goto label_1e411c;
        case 0x1e413cu: goto label_1e413c;
        case 0x1e415cu: goto label_1e415c;
        case 0x1e4168u: goto label_1e4168;
        case 0x1e4198u: goto label_1e4198;
        case 0x1e41b8u: goto label_1e41b8;
        case 0x1e41d8u: goto label_1e41d8;
        case 0x1e41e4u: goto label_1e41e4;
        default: break;
    }

    ctx->pc = 0x1e4010u;

    // 0x1e4010: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e4010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e4014: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e4014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1e4018: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e4018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1e401c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e401cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4020: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e4020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1e4024: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e4024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e4028: 0x964404aa  lhu         $a0, 0x4AA($s2)
    ctx->pc = 0x1e4028u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1194)));
    // 0x1e402c: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x1e402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x1e4030: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1E4030u;
    {
        const bool branch_taken_0x1e4030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4030u;
        // 0x1e4034: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4030) {
            ctx->pc = 0x1E41E4u;
            goto label_1e41e4;
        }
    }
    ctx->pc = 0x1E4038u;
    // 0x1e4038: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1e4038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1e403c: 0x2c420015  sltiu       $v0, $v0, 0x15
    ctx->pc = 0x1e403cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e4040: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1E4040u;
    {
        const bool branch_taken_0x1e4040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4040u;
        // 0x1e4044: 0xa64404aa  sh          $a0, 0x4AA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1194), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4040) {
            ctx->pc = 0x1E41E4u;
            goto label_1e41e4;
        }
    }
    ctx->pc = 0x1E4048u;
    // 0x1e4048: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x1e4048u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1e404c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1e404cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1e4050: 0x30843800  andi        $a0, $a0, 0x3800
    ctx->pc = 0x1e4050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14336);
    // 0x1e4054: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e4054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e4058: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e4058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e405c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e4060: 0x2467b890  addiu       $a3, $v1, -0x4770
    ctx->pc = 0x1e4060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949008));
    // 0x1e4064: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1e4064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e4068: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1e4068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e406c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1e406cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e4070: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1e4070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e4074: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1e4074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e4078: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1e4078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e407c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1e407cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4080: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1e4080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4084: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1e4084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4088: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1e4088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e408c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1e408cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4090: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1e4090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4094: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1e4094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e4098: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1e4098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e409c: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x1e409cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e40a0: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x1e40a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e40a4: 0x68e6002f  ldl         $a2, 0x2F($a3)
    ctx->pc = 0x1e40a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e40a8: 0x6ce60028  ldr         $a2, 0x28($a3)
    ctx->pc = 0x1e40a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e40ac: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1e40acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e40b0: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1e40b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e40b4: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x1e40b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e40b8: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x1e40b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e40bc: 0xb3a6002f  sdl         $a2, 0x2F($sp)
    ctx->pc = 0x1e40bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e40c0: 0xb7a60028  sdr         $a2, 0x28($sp)
    ctx->pc = 0x1e40c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e40c4: 0x68e40037  ldl         $a0, 0x37($a3)
    ctx->pc = 0x1e40c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e40c8: 0x6ce40030  ldr         $a0, 0x30($a3)
    ctx->pc = 0x1e40c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e40cc: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x1e40ccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x42B8C8u));
    // 0x1e40d0: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x1e40d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e40d4: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x1e40d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e40d8: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1e40d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1e40dc: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x1e40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x1e40e0: 0x30444000  andi        $a0, $v0, 0x4000
    ctx->pc = 0x1e40e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e40e4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1e40e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1e40e8: 0xa64204aa  sh          $v0, 0x4AA($s2)
    ctx->pc = 0x1e40e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1194), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e40ec: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E40ECu;
    {
        const bool branch_taken_0x1e40ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40ECu;
        // 0x1e40f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40ec) {
            ctx->pc = 0x1E4170u;
            goto label_1e4170;
        }
    }
    ctx->pc = 0x1E40F4u;
    // 0x1e40f4: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1e40f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e40f8: 0x26510400  addiu       $s1, $s2, 0x400
    ctx->pc = 0x1e40f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x1e40fc: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x1e40fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1e4100: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4104: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x1e4104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1e4108: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e4108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e410c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e410cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4110: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e4110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e4114: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4114u;
    SET_GPR_U32(ctx, 31, 0x1E411Cu);
    ctx->pc = 0x1E4118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4114u;
    // 0x1e4118: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4114u, 0x1E411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E411Cu;
label_1e411c:
    // 0x1e411c: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x1e411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e4120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4124: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e4124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e4128: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e4128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e412c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e412cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4130: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e4130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e4134: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4134u;
    SET_GPR_U32(ctx, 31, 0x1E413Cu);
    ctx->pc = 0x1E4138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4134u;
    // 0x1e4138: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4134u, 0x1E413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E413Cu;
label_1e413c:
    // 0x1e413c: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1e413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e4140: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4144: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e4144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e4148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e4148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e414c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e414cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4150: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1e4150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e4154: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4154u;
    SET_GPR_U32(ctx, 31, 0x1E415Cu);
    ctx->pc = 0x1E4158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4154u;
    // 0x1e4158: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4154u, 0x1E415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E415Cu;
label_1e415c:
    // 0x1e415c: 0x8e44042c  lw          $a0, 0x42C($s2)
    ctx->pc = 0x1e415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1068)));
    // 0x1e4160: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4160u;
    SET_GPR_U32(ctx, 31, 0x1E4168u);
    ctx->pc = 0x1E4164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4160u;
    // 0x1e4164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4160u, 0x1E4168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4168u;
label_1e4168:
    // 0x1e4168: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E4168u;
    {
        const bool branch_taken_0x1e4168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4168u;
        // 0x1e416c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4168) {
            ctx->pc = 0x1E41E8u;
            goto label_1e41e8;
        }
    }
    ctx->pc = 0x1E4170u;
label_1e4170:
    // 0x1e4170: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1e4170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e4174: 0x26510400  addiu       $s1, $s2, 0x400
    ctx->pc = 0x1e4174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x1e4178: 0x508018  mult        $s0, $v0, $s0
    ctx->pc = 0x1e4178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1e417c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e417cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4180: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x1e4180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1e4184: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e4184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e418c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e4190: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4190u;
    SET_GPR_U32(ctx, 31, 0x1E4198u);
    ctx->pc = 0x1E4194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4190u;
    // 0x1e4194: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4190u, 0x1E4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4198u;
label_1e4198:
    // 0x1e4198: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x1e4198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e419c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e419cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e41a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e41a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e41a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e41ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e41acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e41b0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E41B0u;
    SET_GPR_U32(ctx, 31, 0x1E41B8u);
    ctx->pc = 0x1E41B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E41B0u;
    // 0x1e41b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E41B0u, 0x1E41B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E41B8u;
label_1e41b8:
    // 0x1e41b8: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1e41b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e41bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e41bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e41c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e41c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e41c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e41cc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1e41ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e41d0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E41D0u;
    SET_GPR_U32(ctx, 31, 0x1E41D8u);
    ctx->pc = 0x1E41D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E41D0u;
    // 0x1e41d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E41D0u, 0x1E41D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E41D8u;
label_1e41d8:
    // 0x1e41d8: 0x8e44042c  lw          $a0, 0x42C($s2)
    ctx->pc = 0x1e41d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1068)));
    // 0x1e41dc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E41DCu;
    SET_GPR_U32(ctx, 31, 0x1E41E4u);
    ctx->pc = 0x1E41E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E41DCu;
    // 0x1e41e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E41DCu, 0x1E41E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E41E4u;
label_1e41e4:
    // 0x1e41e4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e41e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e41e8:
    // 0x1e41e8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e41e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e41ec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e41ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e41f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e41f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e41f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E41F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41F4u;
        // 0x1e41f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E41F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E41FCu;
    // 0x1e41fc: 0x0  nop
    ctx->pc = 0x1e41fcu;
    // NOP
    ctx->pc = 0x1e4200u;
}
