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

// Function: func_00386DE0
// Address: 0x386de0 - 0x386f38
void func_00386DE0_0x386de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00386DE0_0x386de0");
#endif

    switch (ctx->pc) {
        case 0x386e40u: goto label_386e40;
        case 0x386e5cu: goto label_386e5c;
        case 0x386eb4u: goto label_386eb4;
        default: break;
    }

    ctx->pc = 0x386de0u;

    // 0x386de0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x386de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x386de4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x386de8: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x386de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x386dec: 0x44c03  sra         $t1, $a0, 16
    ctx->pc = 0x386decu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 16));
    // 0x386df0: 0x2442e510  addiu       $v0, $v0, -0x1AF0
    ctx->pc = 0x386df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x386df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386df8: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x386df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x386dfc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x386dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x386e00: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x386e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386e04: 0x54403  sra         $t0, $a1, 16
    ctx->pc = 0x386e04u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
    // 0x386e08: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x386e08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x386e0c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x386e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x386e10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x386E10u;
    {
        const bool branch_taken_0x386e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E10u;
        // 0x386e14: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e10) {
            ctx->pc = 0x386E34u;
            goto label_386e34;
        }
    }
    ctx->pc = 0x386E18u;
    // 0x386e18: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x386e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x386e1c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x386e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x386e20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x386e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x386e24: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x386e24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x386e28: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x386e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x386e2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x386E2Cu;
    {
        const bool branch_taken_0x386e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E2Cu;
        // 0x386e30: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e2c) {
            ctx->pc = 0x386E48u;
            goto label_386e48;
        }
    }
    ctx->pc = 0x386E34u;
label_386e34:
    // 0x386e34: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x386e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386e38: 0xc0e1bce  jal         func_386F38
    ctx->pc = 0x386E38u;
    SET_GPR_U32(ctx, 31, 0x386E40u);
    ctx->pc = 0x386E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386E38u;
    // 0x386e3c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386F38u, 0x386E38u, 0x386E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386E40u;
label_386e40:
    // 0x386e40: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x386E40u;
    {
        const bool branch_taken_0x386e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E40u;
        // 0x386e44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e40) {
            ctx->pc = 0x386F2Cu;
            goto label_386f2c;
        }
    }
    ctx->pc = 0x386E48u;
label_386e48:
    // 0x386e48: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x386e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x386e4c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x386e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x386e50: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x386E50u;
    {
        const bool branch_taken_0x386e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E50u;
        // 0x386e54: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e50) {
            ctx->pc = 0x386EB0u;
            goto label_386eb0;
        }
    }
    ctx->pc = 0x386E58u;
    // 0x386e58: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x386e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_386e5c:
    // 0x386e5c: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x386e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x386e60: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x386e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x386e64: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x386e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x386e68: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x386e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x386e6c: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x386e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x386e70: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x386e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x386e74: 0x686c001f  ldl         $t4, 0x1F($v1)
    ctx->pc = 0x386e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x386e78: 0x6c6c0018  ldr         $t4, 0x18($v1)
    ctx->pc = 0x386e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x386e7c: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x386e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e80: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x386e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e84: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x386e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e88: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x386e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e8c: 0xb08b0017  sdl         $t3, 0x17($a0)
    ctx->pc = 0x386e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e90: 0xb48b0010  sdr         $t3, 0x10($a0)
    ctx->pc = 0x386e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e94: 0xb08c001f  sdl         $t4, 0x1F($a0)
    ctx->pc = 0x386e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e98: 0xb48c0018  sdr         $t4, 0x18($a0)
    ctx->pc = 0x386e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386e9c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x386e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x386ea0: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x386EA0u;
    {
        const bool branch_taken_0x386ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x386EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386EA0u;
        // 0x386ea4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ea0) {
            ctx->pc = 0x386E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386e5c;
        }
    }
    ctx->pc = 0x386EA8u;
    // 0x386ea8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x386EA8u;
    {
        const bool branch_taken_0x386ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386EA8u;
        // 0x386eac: 0x84c40004  lh          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ea8) {
            ctx->pc = 0x386EE4u;
            goto label_386ee4;
        }
    }
    ctx->pc = 0x386EB0u;
label_386eb0:
    // 0x386eb0: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x386eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_386eb4:
    // 0x386eb4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x386eb4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x386eb8: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x386eb8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x386ebc: 0xdc6b0010  ld          $t3, 0x10($v1)
    ctx->pc = 0x386ebcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x386ec0: 0xdc6c0018  ld          $t4, 0x18($v1)
    ctx->pc = 0x386ec0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x386ec4: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x386ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x386ec8: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x386ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x386ecc: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x386eccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x386ed0: 0xfc8c0018  sd          $t4, 0x18($a0)
    ctx->pc = 0x386ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 12));
    // 0x386ed4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x386ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x386ed8: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x386ED8u;
    {
        const bool branch_taken_0x386ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x386EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386ED8u;
        // 0x386edc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ed8) {
            ctx->pc = 0x386EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386eb4;
        }
    }
    ctx->pc = 0x386EE0u;
    // 0x386ee0: 0x84c40004  lh          $a0, 0x4($a2)
    ctx->pc = 0x386ee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_386ee4:
    // 0x386ee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x386ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386ee8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x386ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x386eec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x386eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x386ef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x386ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x386ef4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x386ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x386ef8: 0xacc50040  sw          $a1, 0x40($a2)
    ctx->pc = 0x386ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 5));
    // 0x386efc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x386efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x386f00: 0xacc40044  sw          $a0, 0x44($a2)
    ctx->pc = 0x386f00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 4));
    // 0x386f04: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x386f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x386f08: 0xacc50048  sw          $a1, 0x48($a2)
    ctx->pc = 0x386f08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 5));
    // 0x386f0c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x386f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x386f10: 0xacc4004c  sw          $a0, 0x4C($a2)
    ctx->pc = 0x386f10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 4));
    // 0x386f14: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x386f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x386f18: 0xacc50050  sw          $a1, 0x50($a2)
    ctx->pc = 0x386f18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 5));
    // 0x386f1c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x386f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x386f20: 0xa4c80002  sh          $t0, 0x2($a2)
    ctx->pc = 0x386f20u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x386f24: 0xacc40054  sw          $a0, 0x54($a2)
    ctx->pc = 0x386f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 4));
    // 0x386f28: 0xa4c90000  sh          $t1, 0x0($a2)
    ctx->pc = 0x386f28u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 9));
label_386f2c:
    // 0x386f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386f30: 0x3e00008  jr          $ra
    ctx->pc = 0x386F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F30u;
        // 0x386f34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386F38u;
}
