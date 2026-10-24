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

// Function: func_001E6ED8
// Address: 0x1e6ed8 - 0x1e6fe8
void func_001E6ED8_0x1e6ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E6ED8_0x1e6ed8");
#endif

    switch (ctx->pc) {
        case 0x1e6f60u: goto label_1e6f60;
        case 0x1e6f84u: goto label_1e6f84;
        case 0x1e6fa8u: goto label_1e6fa8;
        case 0x1e6fc4u: goto label_1e6fc4;
        default: break;
    }

    ctx->pc = 0x1e6ed8u;

    // 0x1e6ed8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e6ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e6edc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1e6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1e6ee0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e6ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e6ee4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e6ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e6ee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6eec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e6eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e6ef0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e6ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e6ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e6ef8: 0x920303d8  lbu         $v1, 0x3D8($s0)
    ctx->pc = 0x1e6ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 984)));
    // 0x1e6efc: 0x2449baf0  addiu       $t1, $v0, -0x4510
    ctx->pc = 0x1e6efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949616));
    // 0x1e6f00: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x1e6f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e6f04: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x1e6f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e6f08: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x1e6f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1e6f0c: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x1e6f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1e6f10: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x1e6f10u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x42BB00u));
    // 0x1e6f14: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1e6f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e6f18: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1e6f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e6f1c: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x1e6f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e6f20: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x1e6f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e6f24: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x1e6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1e6f28: 0x312c0  sll         $v0, $v1, 11
    ctx->pc = 0x1e6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1e6f2c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6F2Cu;
    {
        const bool branch_taken_0x1e6f2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F2Cu;
        // 0x1e6f30: 0xa60203e8  sh          $v0, 0x3E8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1000), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f2c) {
            ctx->pc = 0x1E6F3Cu;
            goto label_1e6f3c;
        }
    }
    ctx->pc = 0x1E6F34u;
    // 0x1e6f34: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e6f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e6f38: 0xa60203e8  sh          $v0, 0x3E8($s0)
    ctx->pc = 0x1e6f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1000), (uint16_t)GPR_U32(ctx, 2));
label_1e6f3c:
    // 0x1e6f3c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E6F3Cu;
    {
        const bool branch_taken_0x1e6f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F3Cu;
        // 0x1e6f40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f3c) {
            ctx->pc = 0x1E6F98u;
            goto label_1e6f98;
        }
    }
    ctx->pc = 0x1E6F44u;
    // 0x1e6f44: 0x960203e8  lhu         $v0, 0x3E8($s0)
    ctx->pc = 0x1e6f44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x1e6f48: 0x261303a0  addiu       $s3, $s0, 0x3A0
    ctx->pc = 0x1e6f48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
    // 0x1e6f4c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1e6f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f50: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e6f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e6f54: 0xa60203e8  sh          $v0, 0x3E8($s0)
    ctx->pc = 0x1e6f54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1000), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e6f58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e6f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6f5c: 0x0  nop
    ctx->pc = 0x1e6f5cu;
    // NOP
label_1e6f60:
    // 0x1e6f60: 0x920503d8  lbu         $a1, 0x3D8($s0)
    ctx->pc = 0x1e6f60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 984)));
    // 0x1e6f64: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e6f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1e6f68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6f6c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e6f70: 0x2452826  xor         $a1, $s2, $a1
    ctx->pc = 0x1e6f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 5));
    // 0x1e6f74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e6f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6f78: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1e6f78u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e6f7c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1E6F84u);
    ctx->pc = 0x1E6F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F7Cu;
    // 0x1e6f80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6F7Cu, 0x1E6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F84u;
label_1e6f84:
    // 0x1e6f84: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1e6f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e6f88: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E6F88u;
    {
        const bool branch_taken_0x1e6f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f88) {
            ctx->pc = 0x1E6F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6F88u;
            // 0x1e6f8c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6f60;
        }
    }
    ctx->pc = 0x1E6F90u;
    // 0x1e6f90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E6F90u;
    {
        const bool branch_taken_0x1e6f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F90u;
        // 0x1e6f94: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f90) {
            ctx->pc = 0x1E6FD0u;
            goto label_1e6fd0;
        }
    }
    ctx->pc = 0x1E6F98u;
label_1e6f98:
    // 0x1e6f98: 0x261303a0  addiu       $s3, $s0, 0x3A0
    ctx->pc = 0x1e6f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
    // 0x1e6f9c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1e6f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e6fa0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1e6fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6fa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6fa8:
    // 0x1e6fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6fac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e6facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e6fb0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e6fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e6fb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6fb8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e6fbc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6FBCu;
    SET_GPR_U32(ctx, 31, 0x1E6FC4u);
    ctx->pc = 0x1E6FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6FBCu;
    // 0x1e6fc0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6FBCu, 0x1E6FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6FC4u;
label_1e6fc4:
    // 0x1e6fc4: 0x623fff8  bgezl       $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E6FC4u;
    {
        const bool branch_taken_0x1e6fc4 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1e6fc4) {
            ctx->pc = 0x1E6FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6FC4u;
            // 0x1e6fc8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6fa8;
        }
    }
    ctx->pc = 0x1E6FCCu;
    // 0x1e6fcc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e6fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e6fd0:
    // 0x1e6fd0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e6fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6fd4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e6fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6fd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6fdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FE0u;
        // 0x1e6fe4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6FE8u;
}
