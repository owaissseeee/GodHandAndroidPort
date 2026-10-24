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

// Function: LayerScreen_hideLayers
// Address: 0x1e4520 - 0x1e4610
void LayerScreen_hideLayers_0x1e4520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LayerScreen_hideLayers_0x1e4520");
#endif

    switch (ctx->pc) {
        case 0x1e4564u: goto label_1e4564;
        case 0x1e4570u: goto label_1e4570;
        case 0x1e457cu: goto label_1e457c;
        case 0x1e4588u: goto label_1e4588;
        case 0x1e4594u: goto label_1e4594;
        case 0x1e45a0u: goto label_1e45a0;
        case 0x1e45e4u: goto label_1e45e4;
        case 0x1e45f0u: goto label_1e45f0;
        default: break;
    }

    ctx->pc = 0x1e4520u;

    // 0x1e4520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4528: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e4528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e452c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1e452cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e4530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4534: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1e4534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e4538: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1E4538u;
    {
        const bool branch_taken_0x1e4538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4538u;
        // 0x1e453c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4538) {
            ctx->pc = 0x1E45FCu;
            goto label_1e45fc;
        }
    }
    ctx->pc = 0x1E4540u;
    // 0x1e4540: 0x8e0204b0  lw          $v0, 0x4B0($s0)
    ctx->pc = 0x1e4540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1200)));
    // 0x1e4544: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E4544u;
    {
        const bool branch_taken_0x1e4544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4544) {
            ctx->pc = 0x1E4548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4544u;
            // 0x1e4548: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4600u;
            goto label_1e4600;
        }
    }
    ctx->pc = 0x1E454Cu;
    // 0x1e454c: 0x8e0204b4  lw          $v0, 0x4B4($s0)
    ctx->pc = 0x1e454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1204)));
    // 0x1e4550: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1E4550u;
    {
        const bool branch_taken_0x1e4550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4550) {
            ctx->pc = 0x1E4554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4550u;
            // 0x1e4554: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4600u;
            goto label_1e4600;
        }
    }
    ctx->pc = 0x1E4558u;
    // 0x1e4558: 0x8e040454  lw          $a0, 0x454($s0)
    ctx->pc = 0x1e4558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1e455c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E455Cu;
    SET_GPR_U32(ctx, 31, 0x1E4564u);
    ctx->pc = 0x1E4560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E455Cu;
    // 0x1e4560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E455Cu, 0x1E4564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4564u;
label_1e4564:
    // 0x1e4564: 0x8e040458  lw          $a0, 0x458($s0)
    ctx->pc = 0x1e4564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1112)));
    // 0x1e4568: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4568u;
    SET_GPR_U32(ctx, 31, 0x1E4570u);
    ctx->pc = 0x1E456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4568u;
    // 0x1e456c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4568u, 0x1E4570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4570u;
label_1e4570:
    // 0x1e4570: 0x8e04045c  lw          $a0, 0x45C($s0)
    ctx->pc = 0x1e4570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1116)));
    // 0x1e4574: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4574u;
    SET_GPR_U32(ctx, 31, 0x1E457Cu);
    ctx->pc = 0x1E4578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4574u;
    // 0x1e4578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4574u, 0x1E457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E457Cu;
label_1e457c:
    // 0x1e457c: 0x8e040460  lw          $a0, 0x460($s0)
    ctx->pc = 0x1e457cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1e4580: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4580u;
    SET_GPR_U32(ctx, 31, 0x1E4588u);
    ctx->pc = 0x1E4584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4580u;
    // 0x1e4584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4580u, 0x1E4588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4588u;
label_1e4588:
    // 0x1e4588: 0x8e040484  lw          $a0, 0x484($s0)
    ctx->pc = 0x1e4588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1156)));
    // 0x1e458c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E458Cu;
    SET_GPR_U32(ctx, 31, 0x1E4594u);
    ctx->pc = 0x1E4590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E458Cu;
    // 0x1e4590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E458Cu, 0x1E4594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4594u;
label_1e4594:
    // 0x1e4594: 0x8e040488  lw          $a0, 0x488($s0)
    ctx->pc = 0x1e4594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
    // 0x1e4598: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4598u;
    SET_GPR_U32(ctx, 31, 0x1E45A0u);
    ctx->pc = 0x1E459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4598u;
    // 0x1e459c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4598u, 0x1E45A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45A0u;
label_1e45a0:
    // 0x1e45a0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1e45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e45a4: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x1e45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x1e45a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e45a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e45ac: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E45ACu;
    {
        const bool branch_taken_0x1e45ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45ACu;
        // 0x1e45b0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45ac) {
            ctx->pc = 0x1E45FCu;
            goto label_1e45fc;
        }
    }
    ctx->pc = 0x1E45B4u;
    // 0x1e45b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e45b8: 0x56220011  bnel        $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E45B8u;
    {
        const bool branch_taken_0x1e45b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e45b8) {
            ctx->pc = 0x1E45BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E45B8u;
            // 0x1e45bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4600u;
            goto label_1e4600;
        }
    }
    ctx->pc = 0x1E45C0u;
    // 0x1e45c0: 0x8e0304b0  lw          $v1, 0x4B0($s0)
    ctx->pc = 0x1e45c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1200)));
    // 0x1e45c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e45c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e45c8: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1e45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1e45cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e45d0: 0x8e0304b4  lw          $v1, 0x4B4($s0)
    ctx->pc = 0x1e45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1204)));
    // 0x1e45d4: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1e45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1e45d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e45d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e45dc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E45DCu;
    SET_GPR_U32(ctx, 31, 0x1E45E4u);
    ctx->pc = 0x1E45E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E45DCu;
    // 0x1e45e0: 0x8e040454  lw          $a0, 0x454($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E45DCu, 0x1E45E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45E4u;
label_1e45e4:
    // 0x1e45e4: 0x8e040484  lw          $a0, 0x484($s0)
    ctx->pc = 0x1e45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1156)));
    // 0x1e45e8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E45E8u;
    SET_GPR_U32(ctx, 31, 0x1E45F0u);
    ctx->pc = 0x1E45ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E45E8u;
    // 0x1e45ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E45E8u, 0x1E45F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45F0u;
label_1e45f0:
    // 0x1e45f0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1e45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e45f4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1e45f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1e45f8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1e45f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1e45fc:
    // 0x1e45fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e45fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4600:
    // 0x1e4600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4608: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4608u;
        // 0x1e460c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4610u;
}
