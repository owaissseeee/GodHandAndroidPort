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

// Function: scePadGetDmaStr
// Address: 0x397bc8 - 0x397d20
void scePadGetDmaStr_0x397bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadGetDmaStr_0x397bc8");
#endif

    switch (ctx->pc) {
        case 0x397bf0u: goto label_397bf0;
        case 0x397c24u: goto label_397c24;
        case 0x397c50u: goto label_397c50;
        case 0x397cacu: goto label_397cac;
        case 0x397d00u: goto label_397d00;
        default: break;
    }

    ctx->pc = 0x397bc8u;

    // 0x397bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x397bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x397bcc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x397bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x397bd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x397bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x397bd4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x397bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x397bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x397bdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x397bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397be0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x397be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x397be4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x397be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x397be8: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x397BE8u;
    SET_GPR_U32(ctx, 31, 0x397BF0u);
    ctx->pc = 0x397BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397BE8u;
    // 0x397bec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x397BE8u, 0x397BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397BF0u;
label_397bf0:
    // 0x397bf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x397bf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397bf4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x397bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x397bf8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x397bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x397bfc: 0x72238818  mult1       $s1, $s1, $v1
    ctx->pc = 0x397bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x397c00: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x397c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x397c04: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x397c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x397c08: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x397c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x397c0c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x397c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x397c10: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x397c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x397c14: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x397c14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397c1c: 0xc0ec144  jal         func_3B0510
    ctx->pc = 0x397C1Cu;
    SET_GPR_U32(ctx, 31, 0x397C24u);
    ctx->pc = 0x397C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C1Cu;
    // 0x397c20: 0x260500ff  addiu       $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0510u, 0x397C1Cu, 0x397C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397C24u;
label_397c24:
    // 0x397c24: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x397c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x397c28: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x397c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x397c2c: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x397C2Cu;
    {
        const bool branch_taken_0x397c2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x397C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C2Cu;
        // 0x397c30: 0x62182a  slt         $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x397c2c) {
            ctx->pc = 0x397CE8u;
            goto label_397ce8;
        }
    }
    ctx->pc = 0x397C34u;
    // 0x397c34: 0x389c0  sll         $s1, $v1, 7
    ctx->pc = 0x397c34u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x397c38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x397c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397c3c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x397c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x397c40: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x397c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x397c44: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x397c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x397c48: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x397C48u;
    {
        const bool branch_taken_0x397c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C48u;
        // 0x397c4c: 0x24620080  addiu       $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397c48) {
            ctx->pc = 0x397CACu;
            goto label_397cac;
        }
    }
    ctx->pc = 0x397C50u;
label_397c50:
    // 0x397c50: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x397c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x397c54: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x397c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x397c58: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x397c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x397c5c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x397c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x397c60: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x397c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x397c64: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x397c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x397c68: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x397c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x397c6c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x397c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x397c70: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x397c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x397c74: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x397c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x397c78: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x397c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x397c7c: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x397c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x397c80: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x397c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x397c84: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x397c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x397c88: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x397c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x397c8c: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x397c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x397c90: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x397c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x397c94: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x397c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x397c98: 0x0  nop
    ctx->pc = 0x397c98u;
    // NOP
    // 0x397c9c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x397C9Cu;
    {
        const bool branch_taken_0x397c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x397c9c) {
            ctx->pc = 0x397C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397c50;
        }
    }
    ctx->pc = 0x397CA4u;
    // 0x397ca4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x397CA4u;
    {
        const bool branch_taken_0x397ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CA4u;
        // 0x397ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ca4) {
            ctx->pc = 0x397CF0u;
            goto label_397cf0;
        }
    }
    ctx->pc = 0x397CACu;
label_397cac:
    // 0x397cac: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x397cacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x397cb0: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x397cb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x397cb4: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x397cb4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x397cb8: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x397cb8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x397cbc: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x397cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x397cc0: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x397cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x397cc4: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x397cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x397cc8: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x397cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x397ccc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x397cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x397cd0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x397cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x397cd4: 0x0  nop
    ctx->pc = 0x397cd4u;
    // NOP
    // 0x397cd8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x397CD8u;
    {
        const bool branch_taken_0x397cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x397cd8) {
            ctx->pc = 0x397CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397cac;
        }
    }
    ctx->pc = 0x397CE0u;
    // 0x397ce0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x397CE0u;
    {
        const bool branch_taken_0x397ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CE0u;
        // 0x397ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ce0) {
            ctx->pc = 0x397CF0u;
            goto label_397cf0;
        }
    }
    ctx->pc = 0x397CE8u;
label_397ce8:
    // 0x397ce8: 0x389c0  sll         $s1, $v1, 7
    ctx->pc = 0x397ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x397cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_397cf0:
    // 0x397cf0: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x397CF0u;
    {
        const bool branch_taken_0x397cf0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x397CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CF0u;
        // 0x397cf4: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397cf0) {
            ctx->pc = 0x397D04u;
            goto label_397d04;
        }
    }
    ctx->pc = 0x397CF8u;
    // 0x397cf8: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x397CF8u;
    SET_GPR_U32(ctx, 31, 0x397D00u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x397CF8u, 0x397D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397D00u;
label_397d00:
    // 0x397d00: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x397d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_397d04:
    // 0x397d04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x397d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x397d08: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x397d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397d0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x397d0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397d10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x397d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397d18: 0x3e00008  jr          $ra
    ctx->pc = 0x397D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D18u;
        // 0x397d1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397D20u;
}
