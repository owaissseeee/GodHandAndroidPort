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

// Function: sfbuf_ResetConti
// Address: 0x34c4f8 - 0x34c588
void sfbuf_ResetConti_0x34c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfbuf_ResetConti_0x34c4f8");
#endif

    switch (ctx->pc) {
        case 0x34c520u: goto label_34c520;
        default: break;
    }

    ctx->pc = 0x34c4f8u;

    // 0x34c4f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34c4fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34c4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c500: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34c500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34c504: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x34c504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x34c508: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34c508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34c50c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c510: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34c510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c514: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x34c514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34c518: 0xc0d3162  jal         func_34C588
    ctx->pc = 0x34C518u;
    SET_GPR_U32(ctx, 31, 0x34C520u);
    ctx->pc = 0x34C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C518u;
    // 0x34c51c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C588u, 0x34C518u, 0x34C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C520u;
label_34c520:
    // 0x34c520: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34c520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34c524: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x34c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c528: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x34c528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x34c52c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C52Cu;
    {
        const bool branch_taken_0x34c52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c52c) {
            ctx->pc = 0x34C530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C52Cu;
            // 0x34c530: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C54Cu;
            goto label_34c54c;
        }
    }
    ctx->pc = 0x34C534u;
    // 0x34c534: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34c534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34c538: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c53c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x34c53cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34c540: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x34C540u;
    {
        const bool branch_taken_0x34c540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c540) {
            ctx->pc = 0x34C544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C540u;
            // 0x34c544: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C578u;
            goto label_34c578;
        }
    }
    ctx->pc = 0x34C548u;
    // 0x34c548: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x34c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_34c54c:
    // 0x34c54c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x34c54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x34c550: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C550u;
    {
        const bool branch_taken_0x34c550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c550) {
            ctx->pc = 0x34C554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C550u;
            // 0x34c554: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C570u;
            goto label_34c570;
        }
    }
    ctx->pc = 0x34C558u;
    // 0x34c558: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x34c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34c55c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c560: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x34c560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34c564: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C564u;
    {
        const bool branch_taken_0x34c564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c564) {
            ctx->pc = 0x34C568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C564u;
            // 0x34c568: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C578u;
            goto label_34c578;
        }
    }
    ctx->pc = 0x34C56Cu;
    // 0x34c56c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x34c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_34c570:
    // 0x34c570: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x34c570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x34c574: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34c574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34c578:
    // 0x34c578: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34c578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34c57c: 0x3e00008  jr          $ra
    ctx->pc = 0x34C57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C57Cu;
        // 0x34c580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C584u;
    // 0x34c584: 0x0  nop
    ctx->pc = 0x34c584u;
    // NOP
    ctx->pc = 0x34c588u;
}
