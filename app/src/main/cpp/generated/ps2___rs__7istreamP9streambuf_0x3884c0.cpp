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

// Function: __rs__7istreamP9streambuf
// Address: 0x3884c0 - 0x3885b0
void ps2___rs__7istreamP9streambuf_0x3884c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamP9streambuf_0x3884c0");
#endif

    switch (ctx->pc) {
        case 0x388510u: goto label_388510;
        case 0x388534u: goto label_388534;
        case 0x38853cu: goto label_38853c;
        case 0x388560u: goto label_388560;
        case 0x388568u: goto label_388568;
        case 0x388578u: goto label_388578;
        default: break;
    }

    ctx->pc = 0x3884c0u;

    // 0x3884c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3884c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3884c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3884c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3884c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3884c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3884cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3884ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3884d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3884d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3884d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3884d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3884d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3884d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3884dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3884dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3884e0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x3884e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x3884e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3884E4u;
    {
        const bool branch_taken_0x3884e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3884E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884E4u;
        // 0x3884e8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3884e4) {
            ctx->pc = 0x3884FCu;
            goto label_3884fc;
        }
    }
    ctx->pc = 0x3884ECu;
    // 0x3884ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3884ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3884f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3884f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3884f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3884F4u;
    {
        const bool branch_taken_0x3884f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3884F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884F4u;
        // 0x3884f8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3884f4) {
            ctx->pc = 0x388548u;
            goto label_388548;
        }
    }
    ctx->pc = 0x3884FCu;
label_3884fc:
    // 0x3884fc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3884fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x388500: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x388500u;
    {
        const bool branch_taken_0x388500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x388500) {
            ctx->pc = 0x388504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388500u;
            // 0x388504: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388518u;
            goto label_388518;
        }
    }
    ctx->pc = 0x388508u;
    // 0x388508: 0xc0e249a  jal         func_389268
    ctx->pc = 0x388508u;
    SET_GPR_U32(ctx, 31, 0x388510u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388508u, 0x388510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388510u;
label_388510:
    // 0x388510: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388514: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x388514u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_388518:
    // 0x388518: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x388518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38851c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38851cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x388520: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x388520u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x388524: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x388524u;
    {
        const bool branch_taken_0x388524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388524u;
        // 0x388528: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388524) {
            ctx->pc = 0x388548u;
            goto label_388548;
        }
    }
    ctx->pc = 0x38852Cu;
    // 0x38852c: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x38852Cu;
    SET_GPR_U32(ctx, 31, 0x388534u);
    ctx->pc = 0x388530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38852Cu;
    // 0x388530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x38852Cu, 0x388534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388534u;
label_388534:
    // 0x388534: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x388534u;
    {
        const bool branch_taken_0x388534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388534u;
        // 0x388538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388534) {
            ctx->pc = 0x388548u;
            goto label_388548;
        }
    }
    ctx->pc = 0x38853Cu;
label_38853c:
    // 0x38853c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38853cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x388540: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x388540u;
    {
        const bool branch_taken_0x388540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388540u;
        // 0x388544: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x388540) {
            ctx->pc = 0x38858Cu;
            goto label_38858c;
        }
    }
    ctx->pc = 0x388548u;
label_388548:
    // 0x388548: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x388548u;
    {
        const bool branch_taken_0x388548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388548u;
        // 0x38854c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388548) {
            ctx->pc = 0x388590u;
            goto label_388590;
        }
    }
    ctx->pc = 0x388550u;
    // 0x388550: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x388550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388554: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x388554u;
    {
        const bool branch_taken_0x388554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388554u;
        // 0x388558: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388554) {
            ctx->pc = 0x388570u;
            goto label_388570;
        }
    }
    ctx->pc = 0x38855Cu;
    // 0x38855c: 0x0  nop
    ctx->pc = 0x38855cu;
    // NOP
label_388560:
    // 0x388560: 0xc0e3aca  jal         func_38EB28
    ctx->pc = 0x388560u;
    SET_GPR_U32(ctx, 31, 0x388568u);
    ctx->pc = 0x388564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388560u;
    // 0x388564: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x388560u, 0x388568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388568u;
label_388568:
    // 0x388568: 0x5051fff4  beql        $v0, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x388568u;
    {
        const bool branch_taken_0x388568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x388568) {
            ctx->pc = 0x38856Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388568u;
            // 0x38856c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38853Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38853c;
        }
    }
    ctx->pc = 0x388570u;
label_388570:
    // 0x388570: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x388570u;
    SET_GPR_U32(ctx, 31, 0x388578u);
    ctx->pc = 0x388574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388570u;
    // 0x388574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x388570u, 0x388578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388578u;
label_388578:
    // 0x388578: 0x5451fff9  bnel        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x388578u;
    {
        const bool branch_taken_0x388578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x388578) {
            ctx->pc = 0x38857Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388578u;
            // 0x38857c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388560;
        }
    }
    ctx->pc = 0x388580u;
    // 0x388580: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388584: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x388584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x388588: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x388588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_38858c:
    // 0x38858c: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x38858cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_388590:
    // 0x388590: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388594: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x388594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x388598: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x388598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38859c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38859cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3885a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3885a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3885a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3885a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3885a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3885A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3885ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885A8u;
        // 0x3885ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3885A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3885B0u;
}
