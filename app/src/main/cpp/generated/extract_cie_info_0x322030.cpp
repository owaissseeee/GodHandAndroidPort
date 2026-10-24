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

// Function: extract_cie_info
// Address: 0x322030 - 0x322138
void extract_cie_info_0x322030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("extract_cie_info_0x322030");
#endif

    switch (ctx->pc) {
        case 0x32206cu: goto label_32206c;
        case 0x322080u: goto label_322080;
        case 0x3220a0u: goto label_3220a0;
        case 0x3220b4u: goto label_3220b4;
        case 0x3220d8u: goto label_3220d8;
        case 0x3220e4u: goto label_3220e4;
        case 0x322110u: goto label_322110;
        default: break;
    }

    ctx->pc = 0x322030u;

    // 0x322030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x322034: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x322034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322038: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x322038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x32203c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32203cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x322040: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x322040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322044: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x322044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x322048: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x322048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x32204c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x322050: 0x24a512c0  addiu       $a1, $a1, 0x12C0
    ctx->pc = 0x322050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
    // 0x322054: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x322054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x322058: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x322058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32205c: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x32205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x322060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x322060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322064: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x322064u;
    SET_GPR_U32(ctx, 31, 0x32206Cu);
    ctx->pc = 0x322068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322064u;
    // 0x322068: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x322064u, 0x32206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32206Cu;
label_32206c:
    // 0x32206c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32206Cu;
    {
        const bool branch_taken_0x32206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32206Cu;
        // 0x322070: 0x3c100045  lui         $s0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32206c) {
            ctx->pc = 0x322098u;
            goto label_322098;
        }
    }
    ctx->pc = 0x322074u;
    // 0x322074: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x322074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x322078: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x322078u;
    SET_GPR_U32(ctx, 31, 0x322080u);
    ctx->pc = 0x32207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322078u;
    // 0x32207c: 0x260512c8  addiu       $a1, $s0, 0x12C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x322078u, 0x322080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322080u;
label_322080:
    // 0x322080: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322080u;
    {
        const bool branch_taken_0x322080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322080u;
        // 0x322084: 0x2404007a  addiu       $a0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322080) {
            ctx->pc = 0x322098u;
            goto label_322098;
        }
    }
    ctx->pc = 0x322088u;
    // 0x322088: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x322088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32208c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x32208cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322090: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x322090u;
    {
        const bool branch_taken_0x322090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x322094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322090u;
        // 0x322094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322090) {
            ctx->pc = 0x32211Cu;
            goto label_32211c;
        }
    }
    ctx->pc = 0x322098u;
label_322098:
    // 0x322098: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x322098u;
    SET_GPR_U32(ctx, 31, 0x3220A0u);
    ctx->pc = 0x32209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322098u;
    // 0x32209c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x322098u, 0x3220A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220A0u;
label_3220a0:
    // 0x3220a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3220a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3220a4: 0x260512c8  addiu       $a1, $s0, 0x12C8
    ctx->pc = 0x3220a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4808));
    // 0x3220a8: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x3220a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3220ac: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x3220ACu;
    SET_GPR_U32(ctx, 31, 0x3220B4u);
    ctx->pc = 0x3220B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220ACu;
    // 0x3220b0: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x3220ACu, 0x3220B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220B4u;
label_3220b4:
    // 0x3220b4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3220B4u;
    {
        const bool branch_taken_0x3220b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3220b4) {
            ctx->pc = 0x3220B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3220B4u;
            // 0x3220b8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3220CCu;
            goto label_3220cc;
        }
    }
    ctx->pc = 0x3220BCu;
    // 0x3220bc: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x3220bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3220c0: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x3220c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3220c4: 0x26500005  addiu       $s0, $s2, 0x5
    ctx->pc = 0x3220c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x3220c8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3220c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3220cc:
    // 0x3220cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3220ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3220d0: 0xc0c864e  jal         func_321938
    ctx->pc = 0x3220D0u;
    SET_GPR_U32(ctx, 31, 0x3220D8u);
    ctx->pc = 0x3220D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220D0u;
    // 0x3220d4: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x3220D0u, 0x3220D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220D8u;
label_3220d8:
    // 0x3220d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3220d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3220dc: 0xc0c8660  jal         func_321980
    ctx->pc = 0x3220DCu;
    SET_GPR_U32(ctx, 31, 0x3220E4u);
    ctx->pc = 0x3220E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220DCu;
    // 0x3220e0: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321980u, 0x3220DCu, 0x3220E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220E4u;
label_3220e4:
    // 0x3220e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3220e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3220e8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3220e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3220ec: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3220ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3220f0: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x3220f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x3220f4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3220f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x3220f8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3220f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3220fc: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3220FCu;
    {
        const bool branch_taken_0x3220fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x322100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220FCu;
        // 0x322100: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220fc) {
            ctx->pc = 0x322118u;
            goto label_322118;
        }
    }
    ctx->pc = 0x322104u;
    // 0x322104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322108: 0xc0c864e  jal         func_321938
    ctx->pc = 0x322108u;
    SET_GPR_U32(ctx, 31, 0x322110u);
    ctx->pc = 0x32210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322108u;
    // 0x32210c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x322108u, 0x322110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322110u;
label_322110:
    // 0x322110: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x322110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322114: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x322114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_322118:
    // 0x322118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x322118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32211c:
    // 0x32211c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322120: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x322120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322124: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x322124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322128: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x322128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32212c: 0x3e00008  jr          $ra
    ctx->pc = 0x32212Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32212Cu;
        // 0x322130: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32212Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322134u;
    // 0x322134: 0x0  nop
    ctx->pc = 0x322134u;
    // NOP
    ctx->pc = 0x322138u;
}
