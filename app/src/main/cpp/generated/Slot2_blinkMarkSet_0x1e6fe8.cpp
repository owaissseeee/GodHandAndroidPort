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

// Function: Slot2_blinkMarkSet
// Address: 0x1e6fe8 - 0x1e7118
void Slot2_blinkMarkSet_0x1e6fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_blinkMarkSet_0x1e6fe8");
#endif

    switch (ctx->pc) {
        case 0x1e7090u: goto label_1e7090;
        case 0x1e70b0u: goto label_1e70b0;
        case 0x1e70d8u: goto label_1e70d8;
        case 0x1e70f4u: goto label_1e70f4;
        default: break;
    }

    ctx->pc = 0x1e6fe8u;

    // 0x1e6fe8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e6fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e6fec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e6fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ff0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e6ff4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e6ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e6ff8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e6ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e6ffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e6ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e7000: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7004: 0x94a403e8  lhu         $a0, 0x3E8($a1)
    ctx->pc = 0x1e7004u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1000)));
    // 0x1e7008: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x1e7008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x1e700c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1E700Cu;
    {
        const bool branch_taken_0x1e700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E700Cu;
        // 0x1e7010: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e700c) {
            ctx->pc = 0x1E7100u;
            goto label_1e7100;
        }
    }
    ctx->pc = 0x1E7014u;
    // 0x1e7014: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e7014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e7018: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1e7018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1e701c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e701cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e7020: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1E7020u;
    {
        const bool branch_taken_0x1e7020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7020u;
        // 0x1e7024: 0xa4a403e8  sh          $a0, 0x3E8($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1000), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7020) {
            ctx->pc = 0x1E7100u;
            goto label_1e7100;
        }
    }
    ctx->pc = 0x1E7028u;
    // 0x1e7028: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x1e7028u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1e702c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1e702cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1e7030: 0x30843800  andi        $a0, $a0, 0x3800
    ctx->pc = 0x1e7030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14336);
    // 0x1e7034: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e7034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e7038: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e7038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e703c: 0x2468baf0  addiu       $t0, $v1, -0x4510
    ctx->pc = 0x1e703cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949616));
    // 0x1e7040: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x1e7040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e7044: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x1e7044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e7048: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x1e7048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e704c: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x1e704cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e7050: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x1e7050u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x42BB00u));
    // 0x1e7054: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1e7054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e7058: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1e7058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e705c: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x1e705cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e7060: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x1e7060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e7064: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1e7064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x1e7068: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e7068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e706c: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x1e706cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x1e7070: 0x30444000  andi        $a0, $v0, 0x4000
    ctx->pc = 0x1e7070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e7074: 0x30730007  andi        $s3, $v1, 0x7
    ctx->pc = 0x1e7074u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1e7078: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E7078u;
    {
        const bool branch_taken_0x1e7078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7078u;
        // 0x1e707c: 0xa4a203e8  sh          $v0, 0x3E8($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1000), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7078) {
            ctx->pc = 0x1E70C4u;
            goto label_1e70c4;
        }
    }
    ctx->pc = 0x1E7080u;
    // 0x1e7080: 0x24b203a0  addiu       $s2, $a1, 0x3A0
    ctx->pc = 0x1e7080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 928));
    // 0x1e7084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e7084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7088: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1e7088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e708c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7090:
    // 0x1e7090: 0x2332826  xor         $a1, $s1, $s3
    ctx->pc = 0x1e7090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 19));
    // 0x1e7094: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1e7094u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e7098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e7098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e709c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e709cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e70a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e70a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e70a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e70a8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E70A8u;
    SET_GPR_U32(ctx, 31, 0x1E70B0u);
    ctx->pc = 0x1E70ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E70A8u;
    // 0x1e70ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E70A8u, 0x1E70B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E70B0u;
label_1e70b0:
    // 0x1e70b0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1e70b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e70b4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E70B4u;
    {
        const bool branch_taken_0x1e70b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e70b4) {
            ctx->pc = 0x1E70B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E70B4u;
            // 0x1e70b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7090;
        }
    }
    ctx->pc = 0x1E70BCu;
    // 0x1e70bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E70BCu;
    {
        const bool branch_taken_0x1e70bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70BCu;
        // 0x1e70c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70bc) {
            ctx->pc = 0x1E7100u;
            goto label_1e7100;
        }
    }
    ctx->pc = 0x1E70C4u;
label_1e70c4:
    // 0x1e70c4: 0x24b203a0  addiu       $s2, $a1, 0x3A0
    ctx->pc = 0x1e70c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 928));
    // 0x1e70c8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1e70c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70cc: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1e70ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e70d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e70d4: 0x0  nop
    ctx->pc = 0x1e70d4u;
    // NOP
label_1e70d8:
    // 0x1e70d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e70d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e70dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e70e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e70e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e70e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e70e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e70ec: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E70ECu;
    SET_GPR_U32(ctx, 31, 0x1E70F4u);
    ctx->pc = 0x1E70F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E70ECu;
    // 0x1e70f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E70ECu, 0x1E70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E70F4u;
label_1e70f4:
    // 0x1e70f4: 0x623fff8  bgezl       $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E70F4u;
    {
        const bool branch_taken_0x1e70f4 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1e70f4) {
            ctx->pc = 0x1E70F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E70F4u;
            // 0x1e70f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E70D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e70d8;
        }
    }
    ctx->pc = 0x1E70FCu;
    // 0x1e70fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e70fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e7100:
    // 0x1e7100: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e7100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7104: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e7104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7108: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e7108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e710c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e710cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7110: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7110u;
        // 0x1e7114: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7118u;
}
