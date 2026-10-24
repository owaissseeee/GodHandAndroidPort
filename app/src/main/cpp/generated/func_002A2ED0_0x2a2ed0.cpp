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

// Function: func_002A2ED0
// Address: 0x2a2ed0 - 0x2a35e8
void func_002A2ED0_0x2a2ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A2ED0_0x2a2ed0");
#endif

    switch (ctx->pc) {
        case 0x2a2f38u: goto label_2a2f38;
        case 0x2a2f90u: goto label_2a2f90;
        case 0x2a3010u: goto label_2a3010;
        case 0x2a304cu: goto label_2a304c;
        case 0x2a3050u: goto label_2a3050;
        case 0x2a3080u: goto label_2a3080;
        case 0x2a30acu: goto label_2a30ac;
        case 0x2a30b8u: goto label_2a30b8;
        case 0x2a30c4u: goto label_2a30c4;
        case 0x2a30e8u: goto label_2a30e8;
        case 0x2a30f0u: goto label_2a30f0;
        case 0x2a3208u: goto label_2a3208;
        case 0x2a33fcu: goto label_2a33fc;
        case 0x2a3408u: goto label_2a3408;
        case 0x2a34d8u: goto label_2a34d8;
        default: break;
    }

    ctx->pc = 0x2a2ed0u;

    // 0x2a2ed0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2a2ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2a2ed4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a2ed4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ed8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2a2ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x2a2edc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2a2edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2a2ee0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2a2ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x2a2ee4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a2ee4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ee8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2a2ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2a2eec: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2a2eecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ef0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2a2ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2a2ef4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2a2ef4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ef8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2a2ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2a2efc: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2a2efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2a2f00: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2a2f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2a2f04: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2a2f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x2a2f08: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2a2f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2a2f0c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a2f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a2f10: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x2a2f10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2a2f14: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x2a2f14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a2f18: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2a2f18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2a2f1c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2a2f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2a2f20: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2a2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2a2f24: 0x94950000  lhu         $s5, 0x0($a0)
    ctx->pc = 0x2a2f24u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2f28: 0x94970002  lhu         $s7, 0x2($a0)
    ctx->pc = 0x2a2f28u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2a2f2c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A2F2Cu;
    {
        const bool branch_taken_0x2a2f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F2Cu;
        // 0x2a2f30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f2c) {
            ctx->pc = 0x2A2F8Cu;
            goto label_2a2f8c;
        }
    }
    ctx->pc = 0x2A2F34u;
    // 0x2a2f34: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2a2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2a2f38:
    // 0x2a2f38: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2a2f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a2f3c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2a2f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a2f40: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2a2f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a2f44: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2a2f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a2f48: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2a2f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2a2f4c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2a2f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2a2f50: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2a2f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a2f54: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2a2f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a2f58: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2a2f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2f5c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2a2f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2f60: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2a2f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2f64: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2a2f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2f68: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2a2f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2f6c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2a2f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2f70: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2a2f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2f74: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2a2f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2f78: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2f7c: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A2F7Cu;
    {
        const bool branch_taken_0x2a2f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F7Cu;
        // 0x2a2f80: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f7c) {
            ctx->pc = 0x2A2F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2f38;
        }
    }
    ctx->pc = 0x2A2F84u;
    // 0x2a2f84: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A2F84u;
    {
        const bool branch_taken_0x2a2f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f84) {
            ctx->pc = 0x2A2FBCu;
            goto label_2a2fbc;
        }
    }
    ctx->pc = 0x2A2F8Cu;
label_2a2f8c:
    // 0x2a2f8c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2a2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2a2f90:
    // 0x2a2f90: 0xdc6d0000  ld          $t5, 0x0($v1)
    ctx->pc = 0x2a2f90u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2f94: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2a2f94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a2f98: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x2a2f98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a2f9c: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x2a2f9cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a2fa0: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x2a2fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x2a2fa4: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x2a2fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x2a2fa8: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x2a2fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x2a2fac: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x2a2facu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x2a2fb0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2fb4: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2FB4u;
    {
        const bool branch_taken_0x2a2fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FB4u;
        // 0x2a2fb8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fb4) {
            ctx->pc = 0x2A2F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2f90;
        }
    }
    ctx->pc = 0x2A2FBCu;
label_2a2fbc:
    // 0x2a2fbc: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2a2fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2fc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a2fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a2fc8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a2fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a2fcc: 0x16c2000a  bne         $s6, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A2FCCu;
    {
        const bool branch_taken_0x2a2fcc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FCCu;
        // 0x2a2fd0: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fcc) {
            ctx->pc = 0x2A2FF8u;
            goto label_2a2ff8;
        }
    }
    ctx->pc = 0x2A2FD4u;
    // 0x2a2fd4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2a2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2a2fd8: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x2a2fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x2a2fdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a2fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2fe0: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x2a2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2a2fe4: 0xc4400250  lwc1        $f0, 0x250($v0)
    ctx->pc = 0x2a2fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2fe8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a2fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a2fec: 0x0  nop
    ctx->pc = 0x2a2fecu;
    // NOP
    // 0x2a2ff0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2a2ff0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2a2ff4: 0x46010dc0  add.s       $f23, $f1, $f1
    ctx->pc = 0x2a2ff4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a2ff8:
    // 0x2a2ff8: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2a2ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a2ffc: 0x3c0380ff  lui         $v1, 0x80FF
    ctx->pc = 0x2a2ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33023 << 16));
    // 0x2a3000: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a3000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a3004: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a3004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a3008: 0x24e203fc  addiu       $v0, $a3, 0x3FC
    ctx->pc = 0x2a3008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1020));
    // 0x2a300c: 0x0  nop
    ctx->pc = 0x2a300cu;
    // NOP
label_2a3010:
    // 0x2a3010: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a3014: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a3014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a3018: 0x0  nop
    ctx->pc = 0x2a3018u;
    // NOP
    // 0x2a301c: 0x0  nop
    ctx->pc = 0x2a301cu;
    // NOP
    // 0x2a3020: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A3020u;
    {
        const bool branch_taken_0x2a3020 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2A3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3020u;
        // 0x2a3024: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3020) {
            ctx->pc = 0x2A3010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3010;
        }
    }
    ctx->pc = 0x2A3028u;
    // 0x2a3028: 0x12a000e9  beqz        $s5, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2A3028u;
    {
        const bool branch_taken_0x2a3028 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3028u;
        // 0x2a302c: 0x26b0ffff  addiu       $s0, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3028) {
            ctx->pc = 0x2A33D0u;
            goto label_2a33d0;
        }
    }
    ctx->pc = 0x2A3030u;
    // 0x2a3030: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x2a3030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2a3034: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2a3034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a3038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a303c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2a303cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2a3040: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2a3040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a3044: 0xc0a8b58  jal         func_2A2D60
    ctx->pc = 0x2A3044u;
    SET_GPR_U32(ctx, 31, 0x2A304Cu);
    ctx->pc = 0x2A3048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3044u;
    // 0x2a3048: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D60u, 0x2A3044u, 0x2A304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A304Cu;
label_2a304c:
    // 0x2a304c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2a304cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3050:
    // 0x2a3050: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2a3050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a3054: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2a3054u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2a3058: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2a3058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2a305c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a3060: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2a3060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2a3064: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2a3064u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a3068: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a3068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a306c: 0x0  nop
    ctx->pc = 0x2a306cu;
    // NOP
    // 0x2a3070: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a3070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a3074: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x2a3074u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[22]);
    // 0x2a3078: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x2A3078u;
    SET_GPR_U32(ctx, 31, 0x2A3080u);
    ctx->pc = 0x2A307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3078u;
    // 0x2a307c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x2A3078u, 0x2A3080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3080u;
label_2a3080:
    // 0x2a3080: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x2a3080u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2a3084: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2a3084u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2a3088: 0x23d8821  addu        $s1, $s1, $sp
    ctx->pc = 0x2a3088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2a308c: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x2a308cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x2a3090: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2a3090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a3094: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3098: 0x0  nop
    ctx->pc = 0x2a3098u;
    // NOP
    // 0x2a309c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a309cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a30a0: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x2a30a0u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[22]);
    // 0x2a30a4: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x2A30A4u;
    SET_GPR_U32(ctx, 31, 0x2A30ACu);
    ctx->pc = 0x2A30A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A30A4u;
    // 0x2a30a8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x2A30A4u, 0x2A30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30ACu;
label_2a30ac:
    // 0x2a30ac: 0x4616ab02  mul.s       $f12, $f21, $f22
    ctx->pc = 0x2a30acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x2a30b0: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2A30B0u;
    SET_GPR_U32(ctx, 31, 0x2A30B8u);
    ctx->pc = 0x2A30B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A30B0u;
    // 0x2a30b4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2A30B0u, 0x2A30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30B8u;
label_2a30b8:
    // 0x2a30b8: 0x4616a302  mul.s       $f12, $f20, $f22
    ctx->pc = 0x2a30b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2a30bc: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2A30BCu;
    SET_GPR_U32(ctx, 31, 0x2A30C4u);
    ctx->pc = 0x2A30C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A30BCu;
    // 0x2a30c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2A30BCu, 0x2A30C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30C4u;
label_2a30c4:
    // 0x2a30c4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2a30c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a30c8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2a30c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a30cc: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2a30ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2a30d0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a30d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a30d4: 0x0  nop
    ctx->pc = 0x2a30d4u;
    // NOP
    // 0x2a30d8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a30d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a30dc: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x2a30dcu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[22]);
    // 0x2a30e0: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x2A30E0u;
    SET_GPR_U32(ctx, 31, 0x2A30E8u);
    ctx->pc = 0x2A30E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A30E0u;
    // 0x2a30e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x2A30E0u, 0x2A30E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30E8u;
label_2a30e8:
    // 0x2a30e8: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2A30E8u;
    SET_GPR_U32(ctx, 31, 0x2A30F0u);
    ctx->pc = 0x2A30ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A30E8u;
    // 0x2a30ec: 0x46160302  mul.s       $f12, $f0, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2A30E8u, 0x2A30F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30F0u;
label_2a30f0:
    // 0x2a30f0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2a30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2a30f4: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2a30f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a30f8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2a30fc: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x2a30fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2a3100: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a3100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a3104: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2a3104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a3108: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2a3108u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a310c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2a310cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3110: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3110u;
    {
        const bool branch_taken_0x2a3110 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3110u;
        // 0x2a3114: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3110) {
            ctx->pc = 0x2A3120u;
            goto label_2a3120;
        }
    }
    ctx->pc = 0x2A3118u;
    // 0x2a3118: 0x1010c2  srl         $v0, $s0, 3
    ctx->pc = 0x2a3118u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
    // 0x2a311c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2a311cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a3120:
    // 0x2a3120: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3120u;
    {
        const bool branch_taken_0x2a3120 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2A3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3120u;
        // 0x2a3124: 0x3c0800ff  lui         $t0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3120) {
            ctx->pc = 0x2A313Cu;
            goto label_2a313c;
        }
    }
    ctx->pc = 0x2A3128u;
    // 0x2a3128: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x2a3128u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a312c: 0x0  nop
    ctx->pc = 0x2a312cu;
    // NOP
    // 0x2a3130: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a3130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a3134: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3134u;
    {
        const bool branch_taken_0x2a3134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3134u;
        // 0x2a3138: 0x3222ff00  andi        $v0, $s1, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3134) {
            ctx->pc = 0x2A315Cu;
            goto label_2a315c;
        }
    }
    ctx->pc = 0x2A313Cu;
label_2a313c:
    // 0x2a313c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2a313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2a3140: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2a3140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2a3144: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a3144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a3148: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2a3148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a314c: 0x0  nop
    ctx->pc = 0x2a314cu;
    // NOP
    // 0x2a3150: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a3150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a3154: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2a3154u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2a3158: 0x3222ff00  andi        $v0, $s1, 0xFF00
    ctx->pc = 0x2a3158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
label_2a315c:
    // 0x2a315c: 0xe83024  and         $a2, $a3, $t0
    ctx->pc = 0x2a315cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x2a3160: 0x2282024  and         $a0, $s1, $t0
    ctx->pc = 0x2a3160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 8));
    // 0x2a3164: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2a3164u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3168: 0x30e3ff00  andi        $v1, $a3, 0xFF00
    ctx->pc = 0x2a3168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x2a316c: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x2a316cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2a3170: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2a3170u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2a3174: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x2a3174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2a3178: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x2a3178u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2a317c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2a317cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2a3180: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2a3180u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2a3184: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2a3184u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2a3188: 0xe53023  subu        $a2, $a3, $a1
    ctx->pc = 0x2a3188u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2a318c: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x2a318cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3190: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2a3190u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a3194: 0x0  nop
    ctx->pc = 0x2a3194u;
    // NOP
    // 0x2a3198: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a3198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a319c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2a319cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a31a0: 0x0  nop
    ctx->pc = 0x2a31a0u;
    // NOP
    // 0x2a31a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a31a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a31a8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2a31a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31ac: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2a31acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a31b0: 0x0  nop
    ctx->pc = 0x2a31b0u;
    // NOP
    // 0x2a31b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a31b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a31b8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2a31b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a31bc: 0x0  nop
    ctx->pc = 0x2a31bcu;
    // NOP
    // 0x2a31c0: 0x0  nop
    ctx->pc = 0x2a31c0u;
    // NOP
    // 0x2a31c4: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x2a31c4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x2a31c8: 0xa1842  srl         $v1, $t2, 1
    ctx->pc = 0x2a31c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x2a31cc: 0x0  nop
    ctx->pc = 0x2a31ccu;
    // NOP
    // 0x2a31d0: 0x0  nop
    ctx->pc = 0x2a31d0u;
    // NOP
    // 0x2a31d4: 0x46030103  div.s       $f4, $f0, $f3
    ctx->pc = 0x2a31d4u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2a31d8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2a31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2a31dc: 0x0  nop
    ctx->pc = 0x2a31dcu;
    // NOP
    // 0x2a31e0: 0x0  nop
    ctx->pc = 0x2a31e0u;
    // NOP
    // 0x2a31e4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2a31e4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2a31e8: 0x32270001  andi        $a3, $s1, 0x1
    ctx->pc = 0x2a31e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2a31ec: 0xc7242  srl         $t6, $t4, 9
    ctx->pc = 0x2a31ecu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 9));
    // 0x2a31f0: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x2a31f0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31f4: 0x26afffff  addiu       $t7, $s5, -0x1
    ctx->pc = 0x2a31f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2a31f8: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2a31f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a31fc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2a31fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2a3200: 0x3c0b00ff  lui         $t3, 0xFF
    ctx->pc = 0x2a3200u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)255 << 16));
    // 0x2a3204: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x2a3204u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_2a3208:
    // 0x2a3208: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3208u;
    {
        const bool branch_taken_0x2a3208 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3208u;
        // 0x2a320c: 0x31220007  andi        $v0, $t1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3208) {
            ctx->pc = 0x2A3224u;
            goto label_2a3224;
        }
    }
    ctx->pc = 0x2A3210u;
    // 0x2a3210: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3210u;
    {
        const bool branch_taken_0x2a3210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3210) {
            ctx->pc = 0x2A3224u;
            goto label_2a3224;
        }
    }
    ctx->pc = 0x2A3218u;
    // 0x2a3218: 0xacbe0000  sw          $fp, 0x0($a1)
    ctx->pc = 0x2a3218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 30));
    // 0x2a321c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a321cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a3220: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a3220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2a3224:
    // 0x2a3224: 0x5a00006  bltz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3224u;
    {
        const bool branch_taken_0x2a3224 = (GPR_S64(ctx, 13) < 0);
        if (branch_taken_0x2a3224) {
            ctx->pc = 0x2A3240u;
            goto label_2a3240;
        }
    }
    ctx->pc = 0x2A322Cu;
    // 0x2a322c: 0x448a1800  mtc1        $t2, $f3
    ctx->pc = 0x2a322cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a3230: 0x0  nop
    ctx->pc = 0x2a3230u;
    // NOP
    // 0x2a3234: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a3234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a3238: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3238u;
    {
        const bool branch_taken_0x2a3238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3238) {
            ctx->pc = 0x2A3250u;
            goto label_2a3250;
        }
    }
    ctx->pc = 0x2A3240u;
label_2a3240:
    // 0x2a3240: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x2a3240u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a3244: 0x0  nop
    ctx->pc = 0x2a3244u;
    // NOP
    // 0x2a3248: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a3248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a324c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2a324cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2a3250:
    // 0x2a3250: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3250u;
    {
        const bool branch_taken_0x2a3250 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x2A3254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3250u;
        // 0x2a3254: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3250) {
            ctx->pc = 0x2A326Cu;
            goto label_2a326c;
        }
    }
    ctx->pc = 0x2A3258u;
    // 0x2a3258: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2a3258u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a325c: 0x0  nop
    ctx->pc = 0x2a325cu;
    // NOP
    // 0x2a3260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a3260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a3264: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3264u;
    {
        const bool branch_taken_0x2a3264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3264u;
        // 0x2a3268: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3264) {
            ctx->pc = 0x2A3288u;
            goto label_2a3288;
        }
    }
    ctx->pc = 0x2A326Cu;
label_2a326c:
    // 0x2a326c: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x2a326cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x2a3270: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a3270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a3274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3278: 0x0  nop
    ctx->pc = 0x2a3278u;
    // NOP
    // 0x2a327c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a327cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a3280: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a3280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a3284: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a3284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a3288:
    // 0x2a3288: 0xc1202  srl         $v0, $t4, 8
    ctx->pc = 0x2a3288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x2a328c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2a328cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a3290: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a3290u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a3294: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x2a3294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a3298: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3298u;
    {
        const bool branch_taken_0x2a3298 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2a3298) {
            ctx->pc = 0x2A329Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3298u;
            // 0x2a329c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A32B4u;
            goto label_2a32b4;
        }
    }
    ctx->pc = 0x2A32A0u;
    // 0x2a32a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2a32a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a32a4: 0x0  nop
    ctx->pc = 0x2a32a4u;
    // NOP
    // 0x2a32a8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a32a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a32ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A32ACu;
    {
        const bool branch_taken_0x2a32ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a32ac) {
            ctx->pc = 0x2A32C8u;
            goto label_2a32c8;
        }
    }
    ctx->pc = 0x2A32B4u;
label_2a32b4:
    // 0x2a32b4: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x2a32b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x2a32b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2a32b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a32bc: 0x0  nop
    ctx->pc = 0x2a32bcu;
    // NOP
    // 0x2a32c0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a32c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a32c4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2a32c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2a32c8:
    // 0x2a32c8: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A32C8u;
    {
        const bool branch_taken_0x2a32c8 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x2A32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32C8u;
        // 0x2a32cc: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32c8) {
            ctx->pc = 0x2A32E4u;
            goto label_2a32e4;
        }
    }
    ctx->pc = 0x2A32D0u;
    // 0x2a32d0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2a32d0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a32d4: 0x0  nop
    ctx->pc = 0x2a32d4u;
    // NOP
    // 0x2a32d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a32d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a32dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A32DCu;
    {
        const bool branch_taken_0x2a32dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32DCu;
        // 0x2a32e0: 0x46002002  mul.s       $f0, $f4, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32dc) {
            ctx->pc = 0x2A3300u;
            goto label_2a3300;
        }
    }
    ctx->pc = 0x2A32E4u;
label_2a32e4:
    // 0x2a32e4: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x2a32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x2a32e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a32e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a32ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a32ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a32f0: 0x0  nop
    ctx->pc = 0x2a32f0u;
    // NOP
    // 0x2a32f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a32f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a32f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a32f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a32fc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2a32fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a3300:
    // 0x2a3300: 0x22b1824  and         $v1, $s1, $t3
    ctx->pc = 0x2a3300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 11));
    // 0x2a3304: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x2a3304u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2a3308: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2a3308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a330c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a330cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a3310: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x2a3310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2a3314: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3314u;
    {
        const bool branch_taken_0x2a3314 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2a3314) {
            ctx->pc = 0x2A3318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3314u;
            // 0x2a3318: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3330u;
            goto label_2a3330;
        }
    }
    ctx->pc = 0x2A331Cu;
    // 0x2a331c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2a331cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a3320: 0x0  nop
    ctx->pc = 0x2a3320u;
    // NOP
    // 0x2a3324: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a3324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a3328: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3328u;
    {
        const bool branch_taken_0x2a3328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3328) {
            ctx->pc = 0x2A3348u;
            goto label_2a3348;
        }
    }
    ctx->pc = 0x2A3330u;
label_2a3330:
    // 0x2a3330: 0x31c42  srl         $v1, $v1, 17
    ctx->pc = 0x2a3330u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
    // 0x2a3334: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a3334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a3338: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2a3338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a333c: 0x0  nop
    ctx->pc = 0x2a333cu;
    // NOP
    // 0x2a3340: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a3340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a3344: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2a3344u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2a3348:
    // 0x2a3348: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3348u;
    {
        const bool branch_taken_0x2a3348 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x2A334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3348u;
        // 0x2a334c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3348) {
            ctx->pc = 0x2A3364u;
            goto label_2a3364;
        }
    }
    ctx->pc = 0x2A3350u;
    // 0x2a3350: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2a3350u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3354: 0x0  nop
    ctx->pc = 0x2a3354u;
    // NOP
    // 0x2a3358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a3358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a335c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A335Cu;
    {
        const bool branch_taken_0x2a335c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A335Cu;
        // 0x2a3360: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a335c) {
            ctx->pc = 0x2A3380u;
            goto label_2a3380;
        }
    }
    ctx->pc = 0x2A3364u;
label_2a3364:
    // 0x2a3364: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x2a3364u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x2a3368: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a3368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a336c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a336cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3370: 0x0  nop
    ctx->pc = 0x2a3370u;
    // NOP
    // 0x2a3374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a3374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a3378: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a3378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a337c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a337cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2a3380:
    // 0x2a3380: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2a3380u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2a3384: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2a3384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2a3388: 0x3108ff00  andi        $t0, $t0, 0xFF00
    ctx->pc = 0x2a3388u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x2a338c: 0xc81025  or          $v0, $a2, $t0
    ctx->pc = 0x2a338cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2a3390: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a3390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a3394: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2a3394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a3398: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a3398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a339c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a339cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a33a0: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a33a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a33a4: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x2a33a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a33a8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a33a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a33ac: 0x8b2024  and         $a0, $a0, $t3
    ctx->pc = 0x2a33acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x2a33b0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2a33b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2a33b4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x2a33b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x2a33b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2a33b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2a33bc: 0x1600ff92  bnez        $s0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2A33BCu;
    {
        const bool branch_taken_0x2a33bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33BCu;
        // 0x2a33c0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33bc) {
            ctx->pc = 0x2A3208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3208;
        }
    }
    ctx->pc = 0x2A33C4u;
    // 0x2a33c4: 0x1e0a82d  daddu       $s5, $t7, $zero
    ctx->pc = 0x2a33c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33c8: 0x16a0ff21  bnez        $s5, . + 4 + (-0xDF << 2)
    ctx->pc = 0x2A33C8u;
    {
        const bool branch_taken_0x2a33c8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33C8u;
        // 0x2a33cc: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33c8) {
            ctx->pc = 0x2A3050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3050;
        }
    }
    ctx->pc = 0x2A33D0u;
label_2a33d0:
    // 0x2a33d0: 0x12e00075  beqz        $s7, . + 4 + (0x75 << 2)
    ctx->pc = 0x2A33D0u;
    {
        const bool branch_taken_0x2a33d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33D0u;
        // 0x2a33d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33d0) {
            ctx->pc = 0x2A35A8u;
            goto label_2a35a8;
        }
    }
    ctx->pc = 0x2A33D8u;
    // 0x2a33d8: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x2a33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x2a33dc: 0x27b10034  addiu       $s1, $sp, 0x34
    ctx->pc = 0x2a33dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2a33e0: 0x27b00054  addiu       $s0, $sp, 0x54
    ctx->pc = 0x2a33e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2a33e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a33e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a33e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a33ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a33f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33f4: 0xc0a8b58  jal         func_2A2D60
    ctx->pc = 0x2A33F4u;
    SET_GPR_U32(ctx, 31, 0x2A33FCu);
    ctx->pc = 0x2A33F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A33F4u;
    // 0x2a33f8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D60u, 0x2A33F4u, 0x2A33FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A33FCu;
label_2a33fc:
    // 0x2a33fc: 0x220602d  daddu       $t4, $s1, $zero
    ctx->pc = 0x2a33fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3400: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x2a3400u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x2a3404: 0x0  nop
    ctx->pc = 0x2a3404u;
    // NOP
label_2a3408:
    // 0x2a3408: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x2a3408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a340c: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x2a340cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2a3410: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2a3410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2a3414: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a3414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a3418: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2a3418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2a341c: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x2a341cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a3420: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2a3420u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a3424: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2a3424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2a3428: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a3428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a342c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2a342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2a3430: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2a3430u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a3434: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x2a3434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2a3438: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2a3438u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a343c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a3440: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2a3440u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a3444: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a3444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3448: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3448u;
    {
        const bool branch_taken_0x2a3448 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3448u;
        // 0x2a344c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3448) {
            ctx->pc = 0x2A3458u;
            goto label_2a3458;
        }
    }
    ctx->pc = 0x2A3450u;
    // 0x2a3450: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x2a3450u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x2a3454: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2a3454u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a3458:
    // 0x2a3458: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3458u;
    {
        const bool branch_taken_0x2a3458 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2A345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3458u;
        // 0x2a345c: 0x10b1824  and         $v1, $t0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3458) {
            ctx->pc = 0x2A3474u;
            goto label_2a3474;
        }
    }
    ctx->pc = 0x2A3460u;
    // 0x2a3460: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a3460u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3464: 0x0  nop
    ctx->pc = 0x2a3464u;
    // NOP
    // 0x2a3468: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a3468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a346c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A346Cu;
    {
        const bool branch_taken_0x2a346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A346Cu;
        // 0x2a3470: 0x22b1024  and         $v0, $s1, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a346c) {
            ctx->pc = 0x2A3498u;
            goto label_2a3498;
        }
    }
    ctx->pc = 0x2A3474u;
label_2a3474:
    // 0x2a3474: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a3474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a3478: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a3478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2a347c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a347cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a3480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3484: 0x0  nop
    ctx->pc = 0x2a3484u;
    // NOP
    // 0x2a3488: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a3488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a348c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a348cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a3490: 0x10b1824  and         $v1, $t0, $t3
    ctx->pc = 0x2a3490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 11));
    // 0x2a3494: 0x22b1024  and         $v0, $s1, $t3
    ctx->pc = 0x2a3494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 11));
label_2a3498:
    // 0x2a3498: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x2a3498u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2a349c: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x2a349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2a34a0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2a34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a34a4: 0x3c0800ff  lui         $t0, 0xFF
    ctx->pc = 0x2a34a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
    // 0x2a34a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a34a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a34ac: 0x0  nop
    ctx->pc = 0x2a34acu;
    // NOP
    // 0x2a34b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a34b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a34b4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2a34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a34b8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2a34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a34bc: 0x26e9ffff  addiu       $t1, $s7, -0x1
    ctx->pc = 0x2a34bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x2a34c0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2a34c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a34c4: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x2a34c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x2a34c8: 0x0  nop
    ctx->pc = 0x2a34c8u;
    // NOP
    // 0x2a34cc: 0x0  nop
    ctx->pc = 0x2a34ccu;
    // NOP
    // 0x2a34d0: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2a34d0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2a34d4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2a34d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_2a34d8:
    // 0x2a34d8: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A34D8u;
    {
        const bool branch_taken_0x2a34d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34D8u;
        // 0x2a34dc: 0x30c20007  andi        $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34d8) {
            ctx->pc = 0x2A34F4u;
            goto label_2a34f4;
        }
    }
    ctx->pc = 0x2A34E0u;
    // 0x2a34e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A34E0u;
    {
        const bool branch_taken_0x2a34e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34E0u;
        // 0x2a34e4: 0x22a1824  and         $v1, $s1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34e0) {
            ctx->pc = 0x2A34F8u;
            goto label_2a34f8;
        }
    }
    ctx->pc = 0x2A34E8u;
    // 0x2a34e8: 0xacbe0000  sw          $fp, 0x0($a1)
    ctx->pc = 0x2a34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 30));
    // 0x2a34ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a34ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a34f0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a34f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2a34f4:
    // 0x2a34f4: 0x22a1824  and         $v1, $s1, $t2
    ctx->pc = 0x2a34f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 10));
label_2a34f8:
    // 0x2a34f8: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x2a34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2a34fc: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A34FCu;
    {
        const bool branch_taken_0x2a34fc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2a34fc) {
            ctx->pc = 0x2A3500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A34FCu;
            // 0x2a3500: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3518u;
            goto label_2a3518;
        }
    }
    ctx->pc = 0x2A3504u;
    // 0x2a3504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3508: 0x0  nop
    ctx->pc = 0x2a3508u;
    // NOP
    // 0x2a350c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a350cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a3510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3510u;
    {
        const bool branch_taken_0x2a3510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3510) {
            ctx->pc = 0x2A3530u;
            goto label_2a3530;
        }
    }
    ctx->pc = 0x2A3518u;
label_2a3518:
    // 0x2a3518: 0x31e42  srl         $v1, $v1, 25
    ctx->pc = 0x2a3518u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 25));
    // 0x2a351c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a351cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a3520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3524: 0x0  nop
    ctx->pc = 0x2a3524u;
    // NOP
    // 0x2a3528: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a3528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a352c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a352cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a3530:
    // 0x2a3530: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3530u;
    {
        const bool branch_taken_0x2a3530 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x2A3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3530u;
        // 0x2a3534: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3530) {
            ctx->pc = 0x2A354Cu;
            goto label_2a354c;
        }
    }
    ctx->pc = 0x2A3538u;
    // 0x2a3538: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a3538u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a353c: 0x0  nop
    ctx->pc = 0x2a353cu;
    // NOP
    // 0x2a3540: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a3540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a3544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3544u;
    {
        const bool branch_taken_0x2a3544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3544u;
        // 0x2a3548: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3544) {
            ctx->pc = 0x2A3568u;
            goto label_2a3568;
        }
    }
    ctx->pc = 0x2A354Cu;
label_2a354c:
    // 0x2a354c: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x2a354cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x2a3550: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a3550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a3554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3558: 0x0  nop
    ctx->pc = 0x2a3558u;
    // NOP
    // 0x2a355c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a355cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a3560: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a3560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a3564: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a3564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2a3568:
    // 0x2a3568: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a3568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a356c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a356cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a3570: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a3570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a3574: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x2a3574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2a3578: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a3578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a357c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a357cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a3580: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a3580u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a3584: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2a3584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a3588: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2a3588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a358c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a358cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a3590: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a3590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a3594: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2A3594u;
    {
        const bool branch_taken_0x2a3594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3594u;
        // 0x2a3598: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3594) {
            ctx->pc = 0x2A34D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a34d8;
        }
    }
    ctx->pc = 0x2A359Cu;
    // 0x2a359c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2a359cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a35a0: 0x16e0ff99  bnez        $s7, . + 4 + (-0x67 << 2)
    ctx->pc = 0x2A35A0u;
    {
        const bool branch_taken_0x2a35a0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35A0u;
        // 0x2a35a4: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35a0) {
            ctx->pc = 0x2A3408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3408;
        }
    }
    ctx->pc = 0x2A35A8u;
label_2a35a8:
    // 0x2a35a8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2a35a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a35ac: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2a35acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a35b0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2a35b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a35b4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2a35b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a35b8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2a35b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a35bc: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2a35bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a35c0: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2a35c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a35c4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2a35c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a35c8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2a35c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a35cc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a35ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a35d0: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x2a35d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a35d4: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x2a35d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a35d8: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x2a35d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a35dc: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2a35dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a35e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A35E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35E0u;
        // 0x2a35e4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A35E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A35E8u;
}
