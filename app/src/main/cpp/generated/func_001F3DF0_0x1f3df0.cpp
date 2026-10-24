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

// Function: func_001F3DF0
// Address: 0x1f3df0 - 0x1f4068
void func_001F3DF0_0x1f3df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F3DF0_0x1f3df0");
#endif

    switch (ctx->pc) {
        case 0x1f3e48u: goto label_1f3e48;
        case 0x1f3e50u: goto label_1f3e50;
        case 0x1f3f24u: goto label_1f3f24;
        case 0x1f3f84u: goto label_1f3f84;
        case 0x1f3fe4u: goto label_1f3fe4;
        case 0x1f4040u: goto label_1f4040;
        default: break;
    }

    ctx->pc = 0x1f3df0u;

    // 0x1f3df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f3df4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f3df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f3df8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f3df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f3dfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f3dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f3e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f3e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f3e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f3e08: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1f3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f3e0c: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x1F3E0Cu;
    {
        const bool branch_taken_0x1f3e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E0Cu;
        // 0x1f3e10: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e0c) {
            ctx->pc = 0x1F4050u;
            goto label_1f4050;
        }
    }
    ctx->pc = 0x1F3E14u;
    // 0x1f3e14: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f3e18: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1f3e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1f3e1c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1f3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1f3e20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f3e24: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1F3E24u;
    {
        const bool branch_taken_0x1f3e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E24u;
        // 0x1f3e28: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e24) {
            ctx->pc = 0x1F404Cu;
            goto label_1f404c;
        }
    }
    ctx->pc = 0x1F3E2Cu;
    // 0x1f3e2c: 0x864237d0  lh          $v0, 0x37D0($s2)
    ctx->pc = 0x1f3e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14288)));
    // 0x1f3e30: 0x26108240  addiu       $s0, $s0, -0x7DC0
    ctx->pc = 0x1f3e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935104));
    // 0x1f3e34: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x1f3e34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f3e38: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x1f3e38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x1f3e3c: 0x864237d4  lh          $v0, 0x37D4($s2)
    ctx->pc = 0x1f3e3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14292)));
    // 0x1f3e40: 0xc07ce28  jal         func_1F38A0
    ctx->pc = 0x1F3E40u;
    SET_GPR_U32(ctx, 31, 0x1F3E48u);
    ctx->pc = 0x1F3E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E40u;
    // 0x1f3e44: 0xa6020012  sh          $v0, 0x12($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F38A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38A0u, 0x1F3E40u, 0x1F3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E48u;
label_1f3e48:
    // 0x1f3e48: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x1F3E48u;
    SET_GPR_U32(ctx, 31, 0x1F3E50u);
    ctx->pc = 0x1F3E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E48u;
    // 0x1f3e4c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x1F3E48u, 0x1F3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E50u;
label_1f3e50:
    // 0x1f3e50: 0x6a4237af  ldl         $v0, 0x37AF($s2)
    ctx->pc = 0x1f3e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f3e54: 0x6e4237a8  ldr         $v0, 0x37A8($s2)
    ctx->pc = 0x1f3e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f3e58: 0x6a4337b7  ldl         $v1, 0x37B7($s2)
    ctx->pc = 0x1f3e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f3e5c: 0x6e4337b0  ldr         $v1, 0x37B0($s2)
    ctx->pc = 0x1f3e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f3e60: 0x6a4437bf  ldl         $a0, 0x37BF($s2)
    ctx->pc = 0x1f3e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f3e64: 0x6e4437b8  ldr         $a0, 0x37B8($s2)
    ctx->pc = 0x1f3e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f3e68: 0x6a4537c7  ldl         $a1, 0x37C7($s2)
    ctx->pc = 0x1f3e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f3e6c: 0x6e4537c0  ldr         $a1, 0x37C0($s2)
    ctx->pc = 0x1f3e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f3e70: 0xb202001f  sdl         $v0, 0x1F($s0)
    ctx->pc = 0x1f3e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3e74: 0xb6020018  sdr         $v0, 0x18($s0)
    ctx->pc = 0x1f3e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3e78: 0xb2030027  sdl         $v1, 0x27($s0)
    ctx->pc = 0x1f3e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3e7c: 0xb6030020  sdr         $v1, 0x20($s0)
    ctx->pc = 0x1f3e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3e80: 0xb204002f  sdl         $a0, 0x2F($s0)
    ctx->pc = 0x1f3e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3e84: 0xb6040028  sdr         $a0, 0x28($s0)
    ctx->pc = 0x1f3e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3e88: 0xb2050037  sdl         $a1, 0x37($s0)
    ctx->pc = 0x1f3e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3e8c: 0xb6050030  sdr         $a1, 0x30($s0)
    ctx->pc = 0x1f3e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3e90: 0x6a4237cf  ldl         $v0, 0x37CF($s2)
    ctx->pc = 0x1f3e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f3e94: 0x6e4237c8  ldr         $v0, 0x37C8($s2)
    ctx->pc = 0x1f3e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f3e98: 0xb202003f  sdl         $v0, 0x3F($s0)
    ctx->pc = 0x1f3e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3e9c: 0xb6020038  sdr         $v0, 0x38($s0)
    ctx->pc = 0x1f3e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f3ea0: 0x964237aa  lhu         $v0, 0x37AA($s2)
    ctx->pc = 0x1f3ea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14250)));
    // 0x1f3ea4: 0x2444ffc0  addiu       $a0, $v0, -0x40
    ctx->pc = 0x1f3ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1f3ea8: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x1f3ea8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f3eac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3EACu;
    {
        const bool branch_taken_0x1f3eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EACu;
        // 0x1f3eb0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3eac) {
            ctx->pc = 0x1F3ECCu;
            goto label_1f3ecc;
        }
    }
    ctx->pc = 0x1F3EB4u;
    // 0x1f3eb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f3eb8: 0x2442bf70  addiu       $v0, $v0, -0x4090
    ctx->pc = 0x1f3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950768));
    // 0x1f3ebc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f3ec0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f3ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3ec4: 0x800008  jr          $a0
    ctx->pc = 0x1F3EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3ECCu: goto label_1f3ecc;
            case 0x1F3F2Cu: goto label_1f3f2c;
            case 0x1F3F8Cu: goto label_1f3f8c;
            case 0x1F3F9Cu: goto label_1f3f9c;
            case 0x1F3FECu: goto label_1f3fec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3EC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F3ECCu;
label_1f3ecc:
    // 0x1f3ecc: 0x3c014066  lui         $at, 0x4066
    ctx->pc = 0x1f3eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16486 << 16));
    // 0x1f3ed0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f3ed4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f3ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f3ed8: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1f3ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1f3edc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1f3edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1f3ee0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f3ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f3ee4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3ee8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f3eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3ef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3ef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f3ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ef8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x1f3ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x1f3efc: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1f3efcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1f3f00: 0x3c01bfcb  lui         $at, 0xBFCB
    ctx->pc = 0x1f3f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49099 << 16));
    // 0x1f3f04: 0x34214bc3  ori         $at, $at, 0x4BC3
    ctx->pc = 0x1f3f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19395);
    // 0x1f3f08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f3f0c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f3f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3f10: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1f3f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f3f14: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1f3f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f3f18: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1f3f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f3f1c: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x1F3F1Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F24u);
    ctx->pc = 0x1F3F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F1Cu;
    // 0x1f3f20: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x1F3F1Cu, 0x1F3F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F24u;
label_1f3f24:
    // 0x1f3f24: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1F3F24u;
    {
        const bool branch_taken_0x1f3f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F24u;
        // 0x1f3f28: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f24) {
            ctx->pc = 0x1F4044u;
            goto label_1f4044;
        }
    }
    ctx->pc = 0x1F3F2Cu;
label_1f3f2c:
    // 0x1f3f2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f3f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3f30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f3f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f3f34: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1f3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f3f38: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1f3f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1f3f3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f3f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f3f40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3f44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f48: 0x3c014073  lui         $at, 0x4073
    ctx->pc = 0x1f3f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16499 << 16));
    // 0x1f3f4c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f3f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1f3f50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3f54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f3f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f58: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x1f3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x1f3f5c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1f3f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1f3f60: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1f3f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1f3f64: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f3f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f3f68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f3f6c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f3f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3f70: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1f3f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f3f74: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f3f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f3f78: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1f3f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f3f7c: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x1F3F7Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F84u);
    ctx->pc = 0x1F3F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F7Cu;
    // 0x1f3f80: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x1F3F7Cu, 0x1F3F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F84u;
label_1f3f84:
    // 0x1f3f84: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F3F84u;
    {
        const bool branch_taken_0x1f3f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F84u;
        // 0x1f3f88: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f84) {
            ctx->pc = 0x1F4044u;
            goto label_1f4044;
        }
    }
    ctx->pc = 0x1F3F8Cu;
label_1f3f8c:
    // 0x1f3f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f3f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3f94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3F94u;
    {
        const bool branch_taken_0x1f3f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F94u;
        // 0x1f3f98: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f94) {
            ctx->pc = 0x1F3FA8u;
            goto label_1f3fa8;
        }
    }
    ctx->pc = 0x1F3F9Cu;
label_1f3f9c:
    // 0x1f3f9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f3f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3fa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3fa4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1f3fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1f3fa8:
    // 0x1f3fa8: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1f3fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x1f3fac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3fb0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fb4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x1f3fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x1f3fb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f3fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fbc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f3fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f3fc0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f3fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f3fc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f3fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f3fc8: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1f3fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1f3fcc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f3fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f3fd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f3fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3fd4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1f3fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f3fd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f3fdc: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x1F3FDCu;
    SET_GPR_U32(ctx, 31, 0x1F3FE4u);
    ctx->pc = 0x1F3FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FDCu;
    // 0x1f3fe0: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x1F3FDCu, 0x1F3FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FE4u;
label_1f3fe4:
    // 0x1f3fe4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F3FE4u;
    {
        const bool branch_taken_0x1f3fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FE4u;
        // 0x1f3fe8: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3fe4) {
            ctx->pc = 0x1F4044u;
            goto label_1f4044;
        }
    }
    ctx->pc = 0x1F3FECu;
label_1f3fec:
    // 0x1f3fec: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x1f3fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x1f3ff0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f3ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f3ff4: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1f3ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1f3ff8: 0x3c014106  lui         $at, 0x4106
    ctx->pc = 0x1f3ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16646 << 16));
    // 0x1f3ffc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f3ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f4000: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f4000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4004: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f400c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f400cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4014: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x1f4014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x1f4018: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1f4018u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1f401c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1f401cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1f4020: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f4020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f4024: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f4024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4028: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f4028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f402c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1f402cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f4030: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1f4030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f4034: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1f4034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f4038: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x1F4038u;
    SET_GPR_U32(ctx, 31, 0x1F4040u);
    ctx->pc = 0x1F403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4038u;
    // 0x1f403c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x1F4038u, 0x1F4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4040u;
label_1f4040:
    // 0x1f4040: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1f4040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f4044:
    // 0x1f4044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4048: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f4048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1f404c:
    // 0x1f404c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f404cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f4050:
    // 0x1f4050: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f4050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4054: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f4054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f405c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F405Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F405Cu;
        // 0x1f4060: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F405Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4064u;
    // 0x1f4064: 0x0  nop
    ctx->pc = 0x1f4064u;
    // NOP
    ctx->pc = 0x1f4068u;
}
