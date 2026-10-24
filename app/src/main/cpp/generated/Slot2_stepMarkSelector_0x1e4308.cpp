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

// Function: Slot2_stepMarkSelector
// Address: 0x1e4308 - 0x1e4438
void Slot2_stepMarkSelector_0x1e4308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_stepMarkSelector_0x1e4308");
#endif

    switch (ctx->pc) {
        case 0x1e43b0u: goto label_1e43b0;
        case 0x1e43d0u: goto label_1e43d0;
        case 0x1e43f8u: goto label_1e43f8;
        case 0x1e4414u: goto label_1e4414;
        default: break;
    }

    ctx->pc = 0x1e4308u;

    // 0x1e4308: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e4308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e430c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e430cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4310: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e4310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e4314: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e4314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e4318: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e4318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e431c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e4320: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e4324: 0x94a404ac  lhu         $a0, 0x4AC($a1)
    ctx->pc = 0x1e4324u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1196)));
    // 0x1e4328: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x1e4328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x1e432c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1E432Cu;
    {
        const bool branch_taken_0x1e432c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E432Cu;
        // 0x1e4330: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e432c) {
            ctx->pc = 0x1E4420u;
            goto label_1e4420;
        }
    }
    ctx->pc = 0x1E4334u;
    // 0x1e4334: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e4334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e4338: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1e4338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1e433c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e433cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e4340: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1E4340u;
    {
        const bool branch_taken_0x1e4340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4340u;
        // 0x1e4344: 0xa4a404ac  sh          $a0, 0x4AC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1196), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4340) {
            ctx->pc = 0x1E4420u;
            goto label_1e4420;
        }
    }
    ctx->pc = 0x1E4348u;
    // 0x1e4348: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x1e4348u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1e434c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1e434cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1e4350: 0x30843800  andi        $a0, $a0, 0x3800
    ctx->pc = 0x1e4350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14336);
    // 0x1e4354: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e4354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e4358: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e4358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e435c: 0x2468b8d0  addiu       $t0, $v1, -0x4730
    ctx->pc = 0x1e435cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949072));
    // 0x1e4360: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x1e4360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e4364: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x1e4364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e4368: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x1e4368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e436c: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x1e436cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e4370: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x1e4370u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x42B8E0u));
    // 0x1e4374: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1e4374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4378: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1e4378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e437c: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x1e437cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4380: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x1e4380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e4384: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1e4384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x1e4388: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e4388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e438c: 0x21ac2  srl         $v1, $v0, 11
    ctx->pc = 0x1e438cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x1e4390: 0x30444000  andi        $a0, $v0, 0x4000
    ctx->pc = 0x1e4390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e4394: 0x30730007  andi        $s3, $v1, 0x7
    ctx->pc = 0x1e4394u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1e4398: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E4398u;
    {
        const bool branch_taken_0x1e4398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4398u;
        // 0x1e439c: 0xa4a204ac  sh          $v0, 0x4AC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1196), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4398) {
            ctx->pc = 0x1E43E4u;
            goto label_1e43e4;
        }
    }
    ctx->pc = 0x1E43A0u;
    // 0x1e43a0: 0x24b20400  addiu       $s2, $a1, 0x400
    ctx->pc = 0x1e43a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x1e43a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e43a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e43a8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1e43a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e43ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e43acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e43b0:
    // 0x1e43b0: 0x2332826  xor         $a1, $s1, $s3
    ctx->pc = 0x1e43b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 19));
    // 0x1e43b4: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1e43b4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e43b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e43b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e43bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e43c0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e43c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e43c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e43c8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E43C8u;
    SET_GPR_U32(ctx, 31, 0x1E43D0u);
    ctx->pc = 0x1E43CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43C8u;
    // 0x1e43cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E43C8u, 0x1E43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43D0u;
label_1e43d0:
    // 0x1e43d0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1e43d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e43d4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E43D4u;
    {
        const bool branch_taken_0x1e43d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e43d4) {
            ctx->pc = 0x1E43D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E43D4u;
            // 0x1e43d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E43B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e43b0;
        }
    }
    ctx->pc = 0x1E43DCu;
    // 0x1e43dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E43DCu;
    {
        const bool branch_taken_0x1e43dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43DCu;
        // 0x1e43e0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43dc) {
            ctx->pc = 0x1E4420u;
            goto label_1e4420;
        }
    }
    ctx->pc = 0x1E43E4u;
label_1e43e4:
    // 0x1e43e4: 0x24b20400  addiu       $s2, $a1, 0x400
    ctx->pc = 0x1e43e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x1e43e8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1e43e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e43ec: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1e43ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e43f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e43f4: 0x0  nop
    ctx->pc = 0x1e43f4u;
    // NOP
label_1e43f8:
    // 0x1e43f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e43f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e43fc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e43fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e4400: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e4400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e4404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4408: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e440c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E440Cu;
    SET_GPR_U32(ctx, 31, 0x1E4414u);
    ctx->pc = 0x1E4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E440Cu;
    // 0x1e4410: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E440Cu, 0x1E4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4414u;
label_1e4414:
    // 0x1e4414: 0x623fff8  bgezl       $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E4414u;
    {
        const bool branch_taken_0x1e4414 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1e4414) {
            ctx->pc = 0x1E4418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4414u;
            // 0x1e4418: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E43F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e43f8;
        }
    }
    ctx->pc = 0x1E441Cu;
    // 0x1e441c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e441cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e4420:
    // 0x1e4420: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e4420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4424: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e4424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4428: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e442c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e442cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4430: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4430u;
        // 0x1e4434: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4438u;
}
