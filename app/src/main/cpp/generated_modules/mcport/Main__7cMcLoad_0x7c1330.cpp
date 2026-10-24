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
// Function: Main__7cMcLoad
// Address: 0x7c1330 - 0x7c13f8
void Main__7cMcLoad_0x7c1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main__7cMcLoad_0x7c1330");
#endif

    switch (ctx->pc) {
        case 0x7c1348u: goto label_7c1348;
        case 0x7c1358u: goto label_7c1358;
        case 0x7c1384u: goto label_7c1384;
        case 0x7c1394u: goto label_7c1394;
        case 0x7c13a4u: goto label_7c13a4;
        case 0x7c13b4u: goto label_7c13b4;
        case 0x7c13c4u: goto label_7c13c4;
        case 0x7c13d0u: goto label_7c13d0;
        default: break;
    }

    ctx->pc = 0x7c1330u;

    // 0x7c1330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c1330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c1334: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c1334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c1338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c1338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c133c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c133cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c1340: 0xc1f044e  jal         func_7C1138
    ctx->pc = 0x7C1340u;
    SET_GPR_U32(ctx, 31, 0x7C1348u);
    ctx->pc = 0x7C1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1340u;
    // 0x7c1344: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C1138u, 0x7C1340u, 0x7C1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1348u;
label_7c1348:
    // 0x7c1348: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c1348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c134c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x7c134cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x7c1350: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x7C1350u;
    {
        const bool branch_taken_0x7c1350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1350u;
        // 0x7c1354: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1350) {
            ctx->pc = 0x7C13D0u;
            goto label_7c13d0;
        }
    }
    ctx->pc = 0x7C1358u;
label_7c1358:
    // 0x7c1358: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7c1358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c135c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C135Cu;
    {
        const bool branch_taken_0x7c135c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C135Cu;
        // 0x7c1360: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c135c) {
            ctx->pc = 0x7C13C4u;
            goto label_7c13c4;
        }
    }
    ctx->pc = 0x7C1364u;
    // 0x7c1364: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c1364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c1368: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x7c1368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
    // 0x7c136c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c1370: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c1370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c1374: 0x800008  jr          $a0
    ctx->pc = 0x7C1374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C137Cu: goto label_7c137c;
            case 0x7C138Cu: goto label_7c138c;
            case 0x7C139Cu: goto label_7c139c;
            case 0x7C13ACu: goto label_7c13ac;
            case 0x7C13BCu: goto label_7c13bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C1374u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C137Cu;
label_7c137c:
    // 0x7c137c: 0xc1f04fe  jal         func_7C13F8
    ctx->pc = 0x7C137Cu;
    SET_GPR_U32(ctx, 31, 0x7C1384u);
    ctx->pc = 0x7C1380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C137Cu;
    // 0x7c1380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C13F8u, 0x7C137Cu, 0x7C1384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1384u;
label_7c1384:
    // 0x7c1384: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x7C1384u;
    {
        const bool branch_taken_0x7c1384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1384u;
        // 0x7c1388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1384) {
            ctx->pc = 0x7C13C8u;
            goto label_7c13c8;
        }
    }
    ctx->pc = 0x7C138Cu;
label_7c138c:
    // 0x7c138c: 0xc1f0512  jal         func_7C1448
    ctx->pc = 0x7C138Cu;
    SET_GPR_U32(ctx, 31, 0x7C1394u);
    ctx->pc = 0x7C1390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C138Cu;
    // 0x7c1390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C1448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C1448u, 0x7C138Cu, 0x7C1394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1394u;
label_7c1394:
    // 0x7c1394: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7C1394u;
    {
        const bool branch_taken_0x7c1394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1394u;
        // 0x7c1398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1394) {
            ctx->pc = 0x7C13C8u;
            goto label_7c13c8;
        }
    }
    ctx->pc = 0x7C139Cu;
label_7c139c:
    // 0x7c139c: 0xc1f0536  jal         func_7C14D8
    ctx->pc = 0x7C139Cu;
    SET_GPR_U32(ctx, 31, 0x7C13A4u);
    ctx->pc = 0x7C13A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C139Cu;
    // 0x7c13a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C14D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C14D8u, 0x7C139Cu, 0x7C13A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C13A4u;
label_7c13a4:
    // 0x7c13a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7C13A4u;
    {
        const bool branch_taken_0x7c13a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C13A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C13A4u;
        // 0x7c13a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c13a4) {
            ctx->pc = 0x7C13C8u;
            goto label_7c13c8;
        }
    }
    ctx->pc = 0x7C13ACu;
label_7c13ac:
    // 0x7c13ac: 0xc1f0558  jal         func_7C1560
    ctx->pc = 0x7C13ACu;
    SET_GPR_U32(ctx, 31, 0x7C13B4u);
    ctx->pc = 0x7C13B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C13ACu;
    // 0x7c13b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C1560u, 0x7C13ACu, 0x7C13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C13B4u;
label_7c13b4:
    // 0x7c13b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C13B4u;
    {
        const bool branch_taken_0x7c13b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C13B4u;
        // 0x7c13b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c13b4) {
            ctx->pc = 0x7C13C8u;
            goto label_7c13c8;
        }
    }
    ctx->pc = 0x7C13BCu;
label_7c13bc:
    // 0x7c13bc: 0xc1f056e  jal         func_7C15B8
    ctx->pc = 0x7C13BCu;
    SET_GPR_U32(ctx, 31, 0x7C13C4u);
    ctx->pc = 0x7C13C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C13BCu;
    // 0x7c13c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C15B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C15B8u, 0x7C13BCu, 0x7C13C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C13C4u;
label_7c13c4:
    // 0x7c13c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c13c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7c13c8:
    // 0x7c13c8: 0xc1f22ca  jal         func_7C8B28
    ctx->pc = 0x7C13C8u;
    SET_GPR_U32(ctx, 31, 0x7C13D0u);
    ctx->pc = 0x7C13CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C13C8u;
    // 0x7c13cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B28u, 0x7C13C8u, 0x7C13D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C13D0u;
label_7c13d0:
    // 0x7c13d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c13d4: 0x24427a84  addiu       $v0, $v0, 0x7A84
    ctx->pc = 0x7c13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
    // 0x7c13d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x7c13dc: 0x462ffde  bltzl       $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x7C13DCu;
    {
        const bool branch_taken_0x7c13dc = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x7c13dc) {
            ctx->pc = 0x7C13E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C13DCu;
            // 0x7c13e0: 0x8e030100  lw          $v1, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1358;
        }
    }
    ctx->pc = 0x7C13E4u;
    // 0x7c13e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c13e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c13e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c13e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c13ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c13ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c13f0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C13F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C13F0u;
        // 0x7c13f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C13F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C13F8u;
}
} // namespace gh_mcport
