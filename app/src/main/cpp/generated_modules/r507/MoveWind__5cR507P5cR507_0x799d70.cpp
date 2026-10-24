#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r507_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r507
{
// Function: MoveWind__5cR507P5cR507
// Address: 0x799d70 - 0x79a240
void MoveWind__5cR507P5cR507_0x799d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveWind__5cR507P5cR507_0x799d70");
#endif

    switch (ctx->pc) {
        case 0x799e10u: goto label_799e10;
        case 0x799e38u: goto label_799e38;
        case 0x799e68u: goto label_799e68;
        case 0x799e7cu: goto label_799e7c;
        case 0x799ea8u: goto label_799ea8;
        case 0x799ec8u: goto label_799ec8;
        case 0x799ee4u: goto label_799ee4;
        case 0x799f0cu: goto label_799f0c;
        case 0x799f2cu: goto label_799f2c;
        case 0x799f54u: goto label_799f54;
        case 0x799f88u: goto label_799f88;
        case 0x799f90u: goto label_799f90;
        case 0x799fdcu: goto label_799fdc;
        case 0x799ff8u: goto label_799ff8;
        case 0x79a020u: goto label_79a020;
        case 0x79a040u: goto label_79a040;
        case 0x79a068u: goto label_79a068;
        case 0x79a090u: goto label_79a090;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0f0u: goto label_79a0f0;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a150u: goto label_79a150;
        case 0x79a214u: goto label_79a214;
        case 0x79a238u: goto label_79a238;
        default: break;
    }

    ctx->pc = 0x799d70u;

    // 0x799d70: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x799d74: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799d78: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x799d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x799d7c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799d80: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x799d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x799d84: 0x24514c58  addiu       $s1, $v0, 0x4C58
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799d88: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x799d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x799d8c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x799d8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d90: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x799d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x799d94: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x799d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x799d98: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x799d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x799d9c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x799d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x799da0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x799da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x799da4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x799da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x799da8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x799da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x799dac: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x799dacu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x799db0: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x799db0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x799db4: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x799db4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x799db8: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x799db8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x799dbc: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x799dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x799dc0: 0x2467a5d8  addiu       $a3, $v1, -0x5A28
    ctx->pc = 0x799dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944216));
    // 0x799dc4: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x799dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799dc8: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x799dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799dcc: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x799dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x799dd0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x799dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x799dd4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x799dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x799dd8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x799dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x799ddc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x799ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799de0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x799de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799de4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x799de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799de8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x799de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799dec: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x799decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799df0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x799df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799df4: 0x68e2001f  ldl         $v0, 0x1F($a3)
    ctx->pc = 0x799df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799df8: 0x6ce20018  ldr         $v0, 0x18($a3)
    ctx->pc = 0x799df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799dfc: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x799dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e00: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x799e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799e04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x799e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799e0c: 0x0  nop
    ctx->pc = 0x799e0cu;
    // NOP
label_799e10:
    // 0x799e10: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799e14: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x799e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x799e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799e20: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799e24: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799E24u;
    {
        const bool branch_taken_0x799e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E24u;
        // 0x799e28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e24) {
            ctx->pc = 0x799E60u;
            goto label_799e60;
        }
    }
    ctx->pc = 0x799E2Cu;
    // 0x799e2c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e30: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799e34: 0x0  nop
    ctx->pc = 0x799e34u;
    // NOP
label_799e38:
    // 0x799e38: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799e3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799e40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799e44: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799e48: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799e48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799e4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E4Cu;
    {
        const bool branch_taken_0x799e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E4Cu;
        // 0x799e50: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e4c) {
            ctx->pc = 0x799E60u;
            goto label_799e60;
        }
    }
    ctx->pc = 0x799E54u;
    // 0x799e54: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799e58: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799E58u;
    {
        const bool branch_taken_0x799e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799e58) {
            ctx->pc = 0x799E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E58u;
            // 0x799e5c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e38;
        }
    }
    ctx->pc = 0x799E60u;
label_799e60:
    // 0x799e60: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799E60u;
    SET_GPR_U32(ctx, 31, 0x799E68u);
    ctx->pc = 0x799E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E60u;
    // 0x799e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799E60u, 0x799E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E68u;
label_799e68:
    // 0x799e68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E68u;
    {
        const bool branch_taken_0x799e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E68u;
        // 0x799e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e68) {
            ctx->pc = 0x799E7Cu;
            goto label_799e7c;
        }
    }
    ctx->pc = 0x799E70u;
    // 0x799e70: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x799e74: 0xc060bfe  jal         func_182FF8
    ctx->pc = 0x799E74u;
    SET_GPR_U32(ctx, 31, 0x799E7Cu);
    ctx->pc = 0x799E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E74u;
    // 0x799e78: 0x24860100  addiu       $a2, $a0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182FF8u, 0x799E74u, 0x799E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E7Cu;
label_799e7c:
    // 0x799e7c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x799e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e80: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x799e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799e84: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x799E84u;
    {
        const bool branch_taken_0x799e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E84u;
        // 0x799e88: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e84) {
            ctx->pc = 0x799E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e10;
        }
    }
    ctx->pc = 0x799E8Cu;
    // 0x799e8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x799e90: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799e94: 0x26f00020  addiu       $s0, $s7, 0x20
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x799e98: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x799e9c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799ea0: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x799ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799ea4: 0x0  nop
    ctx->pc = 0x799ea4u;
    // NOP
label_799ea8:
    // 0x799ea8: 0x3c01bfe6  lui         $at, 0xBFE6
    ctx->pc = 0x799ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49126 << 16));
    // 0x799eac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799eb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799eb4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x799eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x799eb8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799ebc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799ec0: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799EC0u;
    SET_GPR_U32(ctx, 31, 0x799EC8u);
    ctx->pc = 0x799EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EC0u;
    // 0x799ec4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799EC0u, 0x799EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC8u;
label_799ec8:
    // 0x799ec8: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x799ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x799ecc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799ed0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799ed4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x799ed8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799edc: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799EDCu;
    SET_GPR_U32(ctx, 31, 0x799EE4u);
    ctx->pc = 0x799EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EDCu;
    // 0x799ee0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799EDCu, 0x799EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EE4u;
label_799ee4:
    // 0x799ee4: 0xe614fff0  swc1        $f20, -0x10($s0)
    ctx->pc = 0x799ee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), bits); }
    // 0x799ee8: 0xe616fff8  swc1        $f22, -0x8($s0)
    ctx->pc = 0x799ee8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), bits); }
    // 0x799eec: 0x3c01be38  lui         $at, 0xBE38
    ctx->pc = 0x799eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48696 << 16));
    // 0x799ef0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x799ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x799ef4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799ef8: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x799efc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x799efcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x799f00: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799f04: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799F04u;
    SET_GPR_U32(ctx, 31, 0x799F0Cu);
    ctx->pc = 0x799F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F04u;
    // 0x799f08: 0xe600fff4  swc1        $f0, -0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799F04u, 0x799F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F0Cu;
label_799f0c:
    // 0x799f0c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x799f10: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799f14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799f18: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x799f1c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799f20: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799f24: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799F24u;
    SET_GPR_U32(ctx, 31, 0x799F2Cu);
    ctx->pc = 0x799F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F24u;
    // 0x799f28: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799F24u, 0x799F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F2Cu;
label_799f2c:
    // 0x799f2c: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x799f2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x799f30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x799f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x799f34: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x799f38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799f3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799f40: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x799f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x799f44: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799f48: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799f4c: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799F4Cu;
    SET_GPR_U32(ctx, 31, 0x799F54u);
    ctx->pc = 0x799F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F4Cu;
    // 0x799f50: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799F4Cu, 0x799F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F54u;
label_799f54:
    // 0x799f54: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x799f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x799f58: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x799f58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x799f5c: 0x621ffd2  bgez        $s1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x799F5Cu;
    {
        const bool branch_taken_0x799f5c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x799F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F5Cu;
        // 0x799f60: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f5c) {
            ctx->pc = 0x799EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ea8;
        }
    }
    ctx->pc = 0x799F64u;
    // 0x799f64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799f68: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799f6c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x799f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799f70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x799f74: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x799f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x799f78: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x799f7c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x799f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x799f80: 0x26f00020  addiu       $s0, $s7, 0x20
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x799f84: 0x0  nop
    ctx->pc = 0x799f84u;
    // NOP
label_799f88:
    // 0x799f88: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x799f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799f8c: 0x0  nop
    ctx->pc = 0x799f8cu;
    // NOP
label_799f90:
    // 0x799f90: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x799f90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x799f94: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x799f94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799f98: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x799f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x799f9c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x799f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799fa0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x799fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799fa4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x799fa8: 0x3c01bfe6  lui         $at, 0xBFE6
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49126 << 16));
    // 0x799fac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799fb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799fb4: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x799fb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x799fb8: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x799fbc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799fc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799fc4: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x799fc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799fc8: 0x0  nop
    ctx->pc = 0x799fc8u;
    // NOP
    // 0x799fcc: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x799FCCu;
    {
        const bool branch_taken_0x799fcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FCCu;
        // 0x799fd0: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fcc) {
            ctx->pc = 0x79A070u;
            goto label_79a070;
        }
    }
    ctx->pc = 0x799FD4u;
    // 0x799fd4: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799FD4u;
    SET_GPR_U32(ctx, 31, 0x799FDCu);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799FD4u, 0x799FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FDCu;
label_799fdc:
    // 0x799fdc: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x799fe0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799fe4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799fe8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x799fec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799ff0: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799FF0u;
    SET_GPR_U32(ctx, 31, 0x799FF8u);
    ctx->pc = 0x799FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF0u;
    // 0x799ff4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799FF0u, 0x799FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF8u;
label_799ff8:
    // 0x799ff8: 0xe614fff0  swc1        $f20, -0x10($s0)
    ctx->pc = 0x799ff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), bits); }
    // 0x799ffc: 0x3c01be38  lui         $at, 0xBE38
    ctx->pc = 0x799ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48696 << 16));
    // 0x79a000: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79a000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x79a004: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a008: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x79a00c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79a00cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x79a010: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79a010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79a014: 0xe618fff8  swc1        $f24, -0x8($s0)
    ctx->pc = 0x79a014u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), bits); }
    // 0x79a018: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79A018u;
    SET_GPR_U32(ctx, 31, 0x79A020u);
    ctx->pc = 0x79A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A018u;
    // 0x79a01c: 0xe600fff4  swc1        $f0, -0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79A018u, 0x79A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A020u;
label_79a020:
    // 0x79a020: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x79a024: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79a024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79a028: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a02c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x79a02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x79a030: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a034: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79a034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79a038: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79A038u;
    SET_GPR_U32(ctx, 31, 0x79A040u);
    ctx->pc = 0x79A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A038u;
    // 0x79a03c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79A038u, 0x79A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A040u;
label_79a040:
    // 0x79a040: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x79a040u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x79a044: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x79a044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x79a048: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x79a04c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a04cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a050: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a054: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x79a054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x79a058: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79a058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79a05c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79a05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79a060: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79A060u;
    SET_GPR_U32(ctx, 31, 0x79A068u);
    ctx->pc = 0x79A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A060u;
    // 0x79a064: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79A060u, 0x79A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A068u;
label_79a068:
    // 0x79a068: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x79a068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x79a06c: 0xe6170014  swc1        $f23, 0x14($s0)
    ctx->pc = 0x79a06cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_79a070:
    // 0x79a070: 0x621ffc7  bgez        $s1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x79A070u;
    {
        const bool branch_taken_0x79a070 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x79A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A070u;
        // 0x79a074: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a070) {
            ctx->pc = 0x799F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f90;
        }
    }
    ctx->pc = 0x79A078u;
    // 0x79a078: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x79a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79a07c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79a080: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x79a080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x79a084: 0x247ed8c0  addiu       $fp, $v1, -0x2740
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x79a088: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x79a088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a08c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x79a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_79a090:
    // 0x79a090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a094: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x79a094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x79a098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a09c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x79a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a0a0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x79a0a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a0a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A0A4u;
    {
        const bool branch_taken_0x79a0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A4u;
        // 0x79a0a8: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0a4) {
            ctx->pc = 0x79A0E0u;
            goto label_79a0e0;
        }
    }
    ctx->pc = 0x79A0ACu;
    // 0x79a0ac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0b0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a0b4: 0x0  nop
    ctx->pc = 0x79a0b4u;
    // NOP
label_79a0b8:
    // 0x79a0b8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a0bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a0c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a0c4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a0c8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a0c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a0cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A0CCu;
    {
        const bool branch_taken_0x79a0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0CCu;
        // 0x79a0d0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0cc) {
            ctx->pc = 0x79A0E0u;
            goto label_79a0e0;
        }
    }
    ctx->pc = 0x79A0D4u;
    // 0x79a0d4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a0d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a0d8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A0D8u;
    {
        const bool branch_taken_0x79a0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a0d8) {
            ctx->pc = 0x79A0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A0D8u;
            // 0x79a0dc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0b8;
        }
    }
    ctx->pc = 0x79A0E0u;
label_79a0e0:
    // 0x79a0e0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x79a0e4: 0x24844c58  addiu       $a0, $a0, 0x4C58
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    // 0x79a0e8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A0E8u;
    SET_GPR_U32(ctx, 31, 0x79A0F0u);
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A0E8u, 0x79A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0F0u;
label_79a0f0:
    // 0x79a0f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0f4: 0x52200048  beql        $s1, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x79A0F4u;
    {
        const bool branch_taken_0x79a0f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a0f4) {
            ctx->pc = 0x79A0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A0F4u;
            // 0x79a0f8: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A218u;
            goto label_79a218;
        }
    }
    ctx->pc = 0x79A0FCu;
    // 0x79a0fc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a100: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x79a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a104: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79a108: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a10c: 0x203a818  mult        $s5, $s0, $v1
    ctx->pc = 0x79a10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x79a110: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a114: 0x26300100  addiu       $s0, $s1, 0x100
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x79a118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a11c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a120: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x79a124: 0xc05420c  jal         func_150830
    ctx->pc = 0x79A124u;
    SET_GPR_U32(ctx, 31, 0x79A12Cu);
    ctx->pc = 0x79A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A124u;
    // 0x79a128: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x79A124u, 0x79A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A12Cu;
label_79a12c:
    // 0x79a12c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a130: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x79a130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a134: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x79a134u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x79a138: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79a138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a13c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a140: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a144: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a148: 0xc05420c  jal         func_150830
    ctx->pc = 0x79A148u;
    SET_GPR_U32(ctx, 31, 0x79A150u);
    ctx->pc = 0x79A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A148u;
    // 0x79a14c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x79A148u, 0x79A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A150u;
label_79a150:
    // 0x79a150: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x79a150u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x79a154: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a158: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x79a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x79a15c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x79a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x79a160: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x79a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a164: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x79a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79a168: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x79a168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x79a16c: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x79a16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x79a170: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x79a170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x79a174: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x79a174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a178: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x79a178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x79a17c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79a17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x79a180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79a180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79a184: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x79a184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a188: 0x0  nop
    ctx->pc = 0x79a188u;
    // NOP
    // 0x79a18c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x79A18Cu;
    {
        const bool branch_taken_0x79a18c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A18Cu;
        // 0x79a190: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a18c) {
            ctx->pc = 0x79A1CCu;
            goto label_79a1cc;
        }
    }
    ctx->pc = 0x79A194u;
    // 0x79a194: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x79a194u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x79a198: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a19c: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x79a19cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x79a1a0: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x79a1a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x79a1a4: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x79a1a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x79a1a8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x79a1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x79a1ac: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x79a1acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x79a1b0: 0xe4b6000c  swc1        $f22, 0xC($a1)
    ctx->pc = 0x79a1b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x79a1b4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x79a1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a1b8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x79a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a1bc: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x79a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79a1c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x79a1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x79a1c4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x79a1c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x79a1c8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x79a1c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_79a1cc:
    // 0x79a1cc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x79a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x79a1d0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a1d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a1d4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a1d8: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a1d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a1dc: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x79a1dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79a1e0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a1e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79a1e4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a1e8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79a1e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a1ec: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79a1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a1f0: 0x2f51021  addu        $v0, $s7, $s5
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x79a1f4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x79a1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x79a1f8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79a1f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x79a1fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a200: 0xc44d0030  lwc1        $f13, 0x30($v0)
    ctx->pc = 0x79a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x79a204: 0x26240b10  addiu       $a0, $s1, 0xB10
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2832));
    // 0x79a208: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a20c: 0xc0ab886  jal         func_2AE218
    ctx->pc = 0x79A20Cu;
    SET_GPR_U32(ctx, 31, 0x79A214u);
    ctx->pc = 0x79A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A20Cu;
    // 0x79a210: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE218u, 0x79A20Cu, 0x79A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A214u;
label_79a214:
    // 0x79a214: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x79a214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79a218:
    // 0x79a218: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x79a218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a21c: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x79A21Cu;
    {
        const bool branch_taken_0x79a21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A21Cu;
        // 0x79a220: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a21c) {
            ctx->pc = 0x79A090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a090;
        }
    }
    ctx->pc = 0x79A224u;
    // 0x79a224: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x79a228: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a22c: 0x8cc22f84  lw          $v0, 0x2F84($a2)
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a230: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A230u;
    SET_GPR_U32(ctx, 31, 0x79A238u);
    ctx->pc = 0x79A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A230u;
    // 0x79a234: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A230u, 0x79A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A238u;
label_79a238:
    // 0x79a238: 0x1000ff53  b           . + 4 + (-0xAD << 2)
    ctx->pc = 0x79A238u;
    {
        const bool branch_taken_0x79a238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A238u;
        // 0x79a23c: 0x26f00020  addiu       $s0, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a238) {
            ctx->pc = 0x799F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f88;
        }
    }
    ctx->pc = 0x79A240u;
}
} // namespace gh_r507
