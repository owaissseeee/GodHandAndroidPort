#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CC9A8
// Address: 0x7cc9a8 - 0x7ccab0
void func_007CC9A8_0x7cc9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CC9A8_0x7cc9a8");
#endif

    switch (ctx->pc) {
        case 0x7cc9e4u: goto label_7cc9e4;
        case 0x7cc9f8u: goto label_7cc9f8;
        case 0x7cca18u: goto label_7cca18;
        case 0x7cca2cu: goto label_7cca2c;
        case 0x7cca50u: goto label_7cca50;
        case 0x7cca5cu: goto label_7cca5c;
        case 0x7cca88u: goto label_7cca88;
        default: break;
    }

    ctx->pc = 0x7cc9a8u;

    // 0x7cc9a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7cc9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7cc9ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7cc9acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc9b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cc9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cc9b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7cc9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7cc9b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7cc9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc9bc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cc9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cc9c0: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cc9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cc9c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cc9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cc9c8: 0x24a51240  addiu       $a1, $a1, 0x1240
    ctx->pc = 0x7cc9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4672));
    // 0x7cc9cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7cc9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7cc9d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x7cc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7cc9d4: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x7cc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x7cc9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7cc9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc9dc: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x7CC9DCu;
    SET_GPR_U32(ctx, 31, 0x7CC9E4u);
    ctx->pc = 0x7CC9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC9DCu;
    // 0x7cc9e0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x7CC9DCu, 0x7CC9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC9E4u;
label_7cc9e4:
    // 0x7cc9e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7CC9E4u;
    {
        const bool branch_taken_0x7cc9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC9E4u;
        // 0x7cc9e8: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc9e4) {
            ctx->pc = 0x7CCA10u;
            goto label_7cca10;
        }
    }
    ctx->pc = 0x7CC9ECu;
    // 0x7cc9ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7cc9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7cc9f0: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x7CC9F0u;
    SET_GPR_U32(ctx, 31, 0x7CC9F8u);
    ctx->pc = 0x7CC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC9F0u;
    // 0x7cc9f4: 0x26051248  addiu       $a1, $s0, 0x1248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x7CC9F0u, 0x7CC9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC9F8u;
label_7cc9f8:
    // 0x7cc9f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CC9F8u;
    {
        const bool branch_taken_0x7cc9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC9F8u;
        // 0x7cc9fc: 0x2404007a  addiu       $a0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc9f8) {
            ctx->pc = 0x7CCA10u;
            goto label_7cca10;
        }
    }
    ctx->pc = 0x7CCA00u;
    // 0x7cca00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7cca00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7cca04: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x7cca04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cca08: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x7CCA08u;
    {
        const bool branch_taken_0x7cca08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7CCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCA08u;
        // 0x7cca0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cca08) {
            ctx->pc = 0x7CCA94u;
            goto label_7cca94;
        }
    }
    ctx->pc = 0x7CCA10u;
label_7cca10:
    // 0x7cca10: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x7CCA10u;
    SET_GPR_U32(ctx, 31, 0x7CCA18u);
    ctx->pc = 0x7CCA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCA10u;
    // 0x7cca14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x7CCA10u, 0x7CCA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCA18u;
label_7cca18:
    // 0x7cca18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7cca18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7cca1c: 0x26051248  addiu       $a1, $s0, 0x1248
    ctx->pc = 0x7cca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4680));
    // 0x7cca20: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x7cca20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x7cca24: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x7CCA24u;
    SET_GPR_U32(ctx, 31, 0x7CCA2Cu);
    ctx->pc = 0x7CCA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCA24u;
    // 0x7cca28: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x7CCA24u, 0x7CCA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCA2Cu;
label_7cca2c:
    // 0x7cca2c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CCA2Cu;
    {
        const bool branch_taken_0x7cca2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cca2c) {
            ctx->pc = 0x7CCA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CCA2Cu;
            // 0x7cca30: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CCA44u;
            goto label_7cca44;
        }
    }
    ctx->pc = 0x7CCA34u;
    // 0x7cca34: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x7cca34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x7cca38: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x7cca38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x7cca3c: 0x26500005  addiu       $s0, $s2, 0x5
    ctx->pc = 0x7cca3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x7cca40: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x7cca40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_7cca44:
    // 0x7cca44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cca44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cca48: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCA48u;
    SET_GPR_U32(ctx, 31, 0x7CCA50u);
    ctx->pc = 0x7CCA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCA48u;
    // 0x7cca4c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCA48u, 0x7CCA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCA50u;
label_7cca50:
    // 0x7cca50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7cca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cca54: 0xc1f30be  jal         func_7CC2F8
    ctx->pc = 0x7CCA54u;
    SET_GPR_U32(ctx, 31, 0x7CCA5Cu);
    ctx->pc = 0x7CCA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCA54u;
    // 0x7cca58: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2F8u, 0x7CCA54u, 0x7CCA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCA5Cu;
label_7cca5c:
    // 0x7cca5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cca5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cca60: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7cca60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7cca64: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x7cca64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7cca68: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x7cca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x7cca6c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x7cca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x7cca70: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x7cca70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7cca74: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CCA74u;
    {
        const bool branch_taken_0x7cca74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x7CCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCA74u;
        // 0x7cca78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cca74) {
            ctx->pc = 0x7CCA90u;
            goto label_7cca90;
        }
    }
    ctx->pc = 0x7CCA7Cu;
    // 0x7cca7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cca80: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCA80u;
    SET_GPR_U32(ctx, 31, 0x7CCA88u);
    ctx->pc = 0x7CCA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCA80u;
    // 0x7cca84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCA80u, 0x7CCA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCA88u;
label_7cca88:
    // 0x7cca88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x7cca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cca8c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x7cca8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_7cca90:
    // 0x7cca90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cca90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7cca94:
    // 0x7cca94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7cca94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cca98: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cca98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cca9c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cca9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ccaa0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ccaa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ccaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CCAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCAA4u;
        // 0x7ccaa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CCAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CCAACu;
    // 0x7ccaac: 0x0  nop
    ctx->pc = 0x7ccaacu;
    // NOP
    ctx->pc = 0x7ccab0u;
}
} // namespace gh_mcport
