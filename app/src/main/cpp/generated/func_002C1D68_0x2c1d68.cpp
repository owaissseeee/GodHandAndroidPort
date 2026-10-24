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

// Function: func_002C1D68
// Address: 0x2c1d68 - 0x2c2070
void func_002C1D68_0x2c1d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C1D68_0x2c1d68");
#endif

    switch (ctx->pc) {
        case 0x2c1d98u: goto label_2c1d98;
        case 0x2c1e3cu: goto label_2c1e3c;
        case 0x2c1e78u: goto label_2c1e78;
        case 0x2c1ed4u: goto label_2c1ed4;
        case 0x2c1ee8u: goto label_2c1ee8;
        case 0x2c1f14u: goto label_2c1f14;
        case 0x2c1f98u: goto label_2c1f98;
        case 0x2c1fa8u: goto label_2c1fa8;
        case 0x2c1fb8u: goto label_2c1fb8;
        case 0x2c1fc8u: goto label_2c1fc8;
        case 0x2c2038u: goto label_2c2038;
        default: break;
    }

    ctx->pc = 0x2c1d68u;

    // 0x2c1d68: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2c1d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2c1d6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c1d70: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2c1d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2c1d74: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2c1d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d78: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2c1d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2c1d7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c1d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d80: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2c1d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2c1d84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c1d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d88: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2c1d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2c1d8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c1d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d90: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2c1d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2c1d94: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2c1d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c1d98:
    // 0x2c1d98: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2c1d98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c1d9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c1da0: 0x0  nop
    ctx->pc = 0x2c1da0u;
    // NOP
    // 0x2c1da4: 0x0  nop
    ctx->pc = 0x2c1da4u;
    // NOP
    // 0x2c1da8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C1DA8u;
    {
        const bool branch_taken_0x2c1da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DA8u;
        // 0x2c1dac: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1da8) {
            ctx->pc = 0x2C1D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1d98;
        }
    }
    ctx->pc = 0x2C1DB0u;
    // 0x2c1db0: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x2c1db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c1db4: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x2c1db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c1db8: 0x6a030013  ldl         $v1, 0x13($s0)
    ctx->pc = 0x2c1db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c1dbc: 0x6e03000c  ldr         $v1, 0xC($s0)
    ctx->pc = 0x2c1dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c1dc0: 0x6a04001b  ldl         $a0, 0x1B($s0)
    ctx->pc = 0x2c1dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c1dc4: 0x6e040014  ldr         $a0, 0x14($s0)
    ctx->pc = 0x2c1dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c1dc8: 0x6a050023  ldl         $a1, 0x23($s0)
    ctx->pc = 0x2c1dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c1dcc: 0x6e05001c  ldr         $a1, 0x1C($s0)
    ctx->pc = 0x2c1dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c1dd0: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2c1dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1dd4: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2c1dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1dd8: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x2c1dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1ddc: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x2c1ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1de0: 0xb2240017  sdl         $a0, 0x17($s1)
    ctx->pc = 0x2c1de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1de4: 0xb6240010  sdr         $a0, 0x10($s1)
    ctx->pc = 0x2c1de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1de8: 0xb225001f  sdl         $a1, 0x1F($s1)
    ctx->pc = 0x2c1de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1dec: 0xb6250018  sdr         $a1, 0x18($s1)
    ctx->pc = 0x2c1decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1df0: 0x6a02002b  ldl         $v0, 0x2B($s0)
    ctx->pc = 0x2c1df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c1df4: 0x6e020024  ldr         $v0, 0x24($s0)
    ctx->pc = 0x2c1df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c1df8: 0x6a030033  ldl         $v1, 0x33($s0)
    ctx->pc = 0x2c1df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c1dfc: 0x6e03002c  ldr         $v1, 0x2C($s0)
    ctx->pc = 0x2c1dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c1e00: 0xb2220027  sdl         $v0, 0x27($s1)
    ctx->pc = 0x2c1e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1e04: 0xb6220020  sdr         $v0, 0x20($s1)
    ctx->pc = 0x2c1e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1e08: 0xb223002f  sdl         $v1, 0x2F($s1)
    ctx->pc = 0x2c1e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1e0c: 0xb6230028  sdr         $v1, 0x28($s1)
    ctx->pc = 0x2c1e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1e10: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2c1e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c1e14: 0x50a0008f  beql        $a1, $zero, . + 4 + (0x8F << 2)
    ctx->pc = 0x2C1E14u;
    {
        const bool branch_taken_0x2c1e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e14) {
            ctx->pc = 0x2C1E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1E14u;
            // 0x2c1e18: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2054u;
            goto label_2c2054;
        }
    }
    ctx->pc = 0x2C1E1Cu;
    // 0x2c1e1c: 0x8606004c  lh          $a2, 0x4C($s0)
    ctx->pc = 0x2c1e1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2c1e20: 0x4c30008  bgezl       $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1E20u;
    {
        const bool branch_taken_0x2c1e20 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x2c1e20) {
            ctx->pc = 0x2C1E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1E20u;
            // 0x2c1e24: 0x90a302b4  lbu         $v1, 0x2B4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1E44u;
            goto label_2c1e44;
        }
    }
    ctx->pc = 0x2C1E28u;
    // 0x2c1e28: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2c1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c1e2c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2c1e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2c1e30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e34: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2C1E34u;
    SET_GPR_U32(ctx, 31, 0x2C1E3Cu);
    ctx->pc = 0x2C1E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E34u;
    // 0x2c1e38: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2C1E34u, 0x2C1E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E3Cu;
label_2c1e3c:
    // 0x2c1e3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C1E3Cu;
    {
        const bool branch_taken_0x2c1e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E3Cu;
        // 0x2c1e40: 0x92030034  lbu         $v1, 0x34($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e3c) {
            ctx->pc = 0x2C1E7Cu;
            goto label_2c1e7c;
        }
    }
    ctx->pc = 0x2C1E44u;
label_2c1e44:
    // 0x2c1e44: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c1e48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c1e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e4c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c1e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c1e50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1E50u;
    {
        const bool branch_taken_0x2c1e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E50u;
        // 0x2c1e54: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e50) {
            ctx->pc = 0x2C1E6Cu;
            goto label_2c1e6c;
        }
    }
    ctx->pc = 0x2C1E58u;
    // 0x2c1e58: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2c1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2c1e5c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c1e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c1e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1e64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1E64u;
    {
        const bool branch_taken_0x2c1e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E64u;
        // 0x2c1e68: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e64) {
            ctx->pc = 0x2C1E70u;
            goto label_2c1e70;
        }
    }
    ctx->pc = 0x2C1E6Cu;
label_2c1e6c:
    // 0x2c1e6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1e70:
    // 0x2c1e70: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2C1E70u;
    SET_GPR_U32(ctx, 31, 0x2C1E78u);
    ctx->pc = 0x2C1E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E70u;
    // 0x2c1e74: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2C1E70u, 0x2C1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E78u;
label_2c1e78:
    // 0x2c1e78: 0x92030034  lbu         $v1, 0x34($s0)
    ctx->pc = 0x2c1e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_2c1e7c:
    // 0x2c1e7c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2c1e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2c1e80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1E80u;
    {
        const bool branch_taken_0x2c1e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E80u;
        // 0x2c1e84: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e80) {
            ctx->pc = 0x2C1E94u;
            goto label_2c1e94;
        }
    }
    ctx->pc = 0x2C1E88u;
    // 0x2c1e88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c1e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c1e8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C1E8Cu;
    {
        const bool branch_taken_0x2c1e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E8Cu;
        // 0x2c1e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e8c) {
            ctx->pc = 0x2C1EE0u;
            goto label_2c1ee0;
        }
    }
    ctx->pc = 0x2C1E94u;
label_2c1e94:
    // 0x2c1e94: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2c1e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2c1e98: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C1E98u;
    {
        const bool branch_taken_0x2c1e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E98u;
        // 0x2c1e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e98) {
            ctx->pc = 0x2C1F04u;
            goto label_2c1f04;
        }
    }
    ctx->pc = 0x2C1EA0u;
    // 0x2c1ea0: 0x82020047  lb          $v0, 0x47($s0)
    ctx->pc = 0x2c1ea0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x2c1ea4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2c1ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2c1ea8: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2c1ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2c1eac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1eb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c1eb4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2c1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c1eb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c1eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c1ebc: 0x0  nop
    ctx->pc = 0x2c1ebcu;
    // NOP
    // 0x2c1ec0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c1ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c1ec4: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x2c1ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1ec8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2c1ec8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2c1ecc: 0xc0b0c74  jal         func_2C31D0
    ctx->pc = 0x2C1ECCu;
    SET_GPR_U32(ctx, 31, 0x2C1ED4u);
    ctx->pc = 0x2C1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1ECCu;
    // 0x2c1ed0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C31D0u, 0x2C1ECCu, 0x2C1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1ED4u;
label_2c1ed4:
    // 0x2c1ed4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2c1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c1ed8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c1ed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c1edc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ee0:
    // 0x2c1ee0: 0xc051e62  jal         func_147988
    ctx->pc = 0x2C1EE0u;
    SET_GPR_U32(ctx, 31, 0x2C1EE8u);
    ctx->pc = 0x2C1EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1EE0u;
    // 0x2c1ee4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x2C1EE0u, 0x2C1EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EE8u;
label_2c1ee8:
    // 0x2c1ee8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2c1ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1eec: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2c1eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1ef0: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2c1ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1ef4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2c1ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2c1ef8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2c1ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2c1efc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1EFCu;
    {
        const bool branch_taken_0x2c1efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EFCu;
        // 0x2c1f00: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1efc) {
            ctx->pc = 0x2C1F14u;
            goto label_2c1f14;
        }
    }
    ctx->pc = 0x2C1F04u;
label_2c1f04:
    // 0x2c1f04: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2c1f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c1f08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f0c: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2C1F0Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F14u);
    ctx->pc = 0x2C1F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F0Cu;
    // 0x2c1f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2C1F0Cu, 0x2C1F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F14u;
label_2c1f14:
    // 0x2c1f14: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x2c1f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2c1f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1f1c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1F1Cu;
    {
        const bool branch_taken_0x2c1f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F1Cu;
        // 0x2c1f20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f1c) {
            ctx->pc = 0x2C1F34u;
            goto label_2c1f34;
        }
    }
    ctx->pc = 0x2C1F24u;
    // 0x2c1f24: 0x5062003b  beql        $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C1F24u;
    {
        const bool branch_taken_0x2c1f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c1f24) {
            ctx->pc = 0x2C1F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1F24u;
            // 0x2c1f28: 0xc6220010  lwc1        $f2, 0x10($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2014u;
            goto label_2c2014;
        }
    }
    ctx->pc = 0x2C1F2Cu;
    // 0x2c1f2c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2C1F2Cu;
    {
        const bool branch_taken_0x2c1f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F2Cu;
        // 0x2c1f30: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f2c) {
            ctx->pc = 0x2C2054u;
            goto label_2c2054;
        }
    }
    ctx->pc = 0x2C1F34u;
label_2c1f34:
    // 0x2c1f34: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2c1f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1f38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c1f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f3c: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x2c1f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c1f40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c1f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f44: 0xc6260014  lwc1        $f6, 0x14($s1)
    ctx->pc = 0x2c1f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c1f48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c1f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f4c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2c1f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1f50: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x2c1f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1f54: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x2c1f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1f58: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x2c1f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1f5c: 0xc6250028  lwc1        $f5, 0x28($s1)
    ctx->pc = 0x2c1f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c1f60: 0xc627002c  lwc1        $f7, 0x2C($s1)
    ctx->pc = 0x2c1f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c1f64: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2c1f64u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c1f68: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x2c1f68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c1f6c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c1f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c1f70: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2c1f70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c1f74: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2c1f74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c1f78: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x2c1f78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c1f7c: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x2c1f7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c1f80: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2c1f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c1f84: 0xe7a70038  swc1        $f7, 0x38($sp)
    ctx->pc = 0x2c1f84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c1f88: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2c1f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c1f8c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c1f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c1f90: 0xc054236  jal         func_1508D8
    ctx->pc = 0x2C1F90u;
    SET_GPR_U32(ctx, 31, 0x2C1F98u);
    ctx->pc = 0x2C1F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F90u;
    // 0x2c1f94: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508D8u, 0x2C1F90u, 0x2C1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F98u;
label_2c1f98:
    // 0x2c1f98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c1f9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c1f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1fa0: 0xc054236  jal         func_1508D8
    ctx->pc = 0x2C1FA0u;
    SET_GPR_U32(ctx, 31, 0x2C1FA8u);
    ctx->pc = 0x2C1FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FA0u;
    // 0x2c1fa4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508D8u, 0x2C1FA0u, 0x2C1FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FA8u;
label_2c1fa8:
    // 0x2c1fa8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c1fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c1fac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c1facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1fb0: 0xc054236  jal         func_1508D8
    ctx->pc = 0x2C1FB0u;
    SET_GPR_U32(ctx, 31, 0x2C1FB8u);
    ctx->pc = 0x2C1FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FB0u;
    // 0x2c1fb4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508D8u, 0x2C1FB0u, 0x2C1FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FB8u;
label_2c1fb8:
    // 0x2c1fb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c1fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c1fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c1fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1fc0: 0xc054236  jal         func_1508D8
    ctx->pc = 0x2C1FC0u;
    SET_GPR_U32(ctx, 31, 0x2C1FC8u);
    ctx->pc = 0x2C1FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FC0u;
    // 0x2c1fc4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508D8u, 0x2C1FC0u, 0x2C1FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FC8u;
label_2c1fc8:
    // 0x2c1fc8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2c1fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1fcc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2c1fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1fd0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2c1fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1fd4: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x2c1fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1fd8: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x2c1fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c1fdc: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x2c1fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c1fe0: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x2c1fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c1fe4: 0xc7a80030  lwc1        $f8, 0x30($sp)
    ctx->pc = 0x2c1fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c1fe8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2c1fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1fec: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c1fecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c1ff0: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x2c1ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2c1ff4: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x2c1ff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2c1ff8: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x2c1ff8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2c1ffc: 0xe6240018  swc1        $f4, 0x18($s1)
    ctx->pc = 0x2c1ffcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2c2000: 0xe625001c  swc1        $f5, 0x1C($s1)
    ctx->pc = 0x2c2000u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2c2004: 0xe6260020  swc1        $f6, 0x20($s1)
    ctx->pc = 0x2c2004u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2c2008: 0xe6270024  swc1        $f7, 0x24($s1)
    ctx->pc = 0x2c2008u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2c200c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C200Cu;
    {
        const bool branch_taken_0x2c200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C200Cu;
        // 0x2c2010: 0xe6280028  swc1        $f8, 0x28($s1) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c200c) {
            ctx->pc = 0x2C2050u;
            goto label_2c2050;
        }
    }
    ctx->pc = 0x2C2014u;
label_2c2014:
    // 0x2c2014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2018: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2c2018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c201c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c201cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2020: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2c2020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2024: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c2024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2028: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2c2028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c202c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c202cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c2030: 0xc054236  jal         func_1508D8
    ctx->pc = 0x2C2030u;
    SET_GPR_U32(ctx, 31, 0x2C2038u);
    ctx->pc = 0x2C2034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2030u;
    // 0x2c2034: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508D8u, 0x2C2030u, 0x2C2038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2038u;
label_2c2038:
    // 0x2c2038: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c2038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c203c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2c203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2040: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c2040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2044: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x2c2044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2c2048: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2c2048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2c204c: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2c204cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2c2050:
    // 0x2c2050: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2c2050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2c2054:
    // 0x2c2054: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2c2054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c2058: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2c2058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c205c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2c205cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c2060: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2c2060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c2064: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2064u;
        // 0x2c2068: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C206Cu;
    // 0x2c206c: 0x0  nop
    ctx->pc = 0x2c206cu;
    // NOP
    ctx->pc = 0x2c2070u;
}
