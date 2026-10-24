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

// Function: func_00330318
// Address: 0x330318 - 0x3303a8
void func_00330318_0x330318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330318_0x330318");
#endif

    switch (ctx->pc) {
        case 0x330318u: goto label_330318;
        case 0x33031cu: goto label_33031c;
        case 0x330320u: goto label_330320;
        case 0x330324u: goto label_330324;
        case 0x330328u: goto label_330328;
        case 0x33032cu: goto label_33032c;
        case 0x330330u: goto label_330330;
        case 0x330334u: goto label_330334;
        case 0x330338u: goto label_330338;
        case 0x33033cu: goto label_33033c;
        case 0x330340u: goto label_330340;
        case 0x330344u: goto label_330344;
        case 0x330348u: goto label_330348;
        case 0x33034cu: goto label_33034c;
        case 0x330350u: goto label_330350;
        case 0x330354u: goto label_330354;
        case 0x330358u: goto label_330358;
        case 0x33035cu: goto label_33035c;
        case 0x330360u: goto label_330360;
        case 0x330364u: goto label_330364;
        case 0x330368u: goto label_330368;
        case 0x33036cu: goto label_33036c;
        case 0x330370u: goto label_330370;
        case 0x330374u: goto label_330374;
        case 0x330378u: goto label_330378;
        case 0x33037cu: goto label_33037c;
        case 0x330380u: goto label_330380;
        case 0x330384u: goto label_330384;
        case 0x330388u: goto label_330388;
        case 0x33038cu: goto label_33038c;
        case 0x330390u: goto label_330390;
        case 0x330394u: goto label_330394;
        case 0x330398u: goto label_330398;
        case 0x33039cu: goto label_33039c;
        case 0x3303a0u: goto label_3303a0;
        case 0x3303a4u: goto label_3303a4;
        default: break;
    }

    ctx->pc = 0x330318u;

label_330318:
    // 0x330318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33031c:
    // 0x33031c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_330320:
    // 0x330320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_330324:
    // 0x330324: 0x24428400  addiu       $v0, $v0, -0x7C00
    ctx->pc = 0x330324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935552));
label_330328:
    // 0x330328: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x330328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33032c:
    // 0x33032c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33032cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_330330:
    // 0x330330: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_330334:
    if (ctx->pc == 0x330334u) {
        ctx->pc = 0x330334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330330u;
        // 0x330334: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330338u;
        goto label_330338;
    }
    ctx->pc = 0x330330u;
    {
        const bool branch_taken_0x330330 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x330334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330330u;
        // 0x330334: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330330) {
            ctx->pc = 0x330348u;
            goto label_330348;
        }
    }
    ctx->pc = 0x330338u;
label_330338:
    // 0x330338: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33033c:
    // 0x33033c: 0x24843128  addiu       $a0, $a0, 0x3128
    ctx->pc = 0x33033cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12584));
label_330340:
    // 0x330340: 0x80cc0b8  j           func_3302E0
label_330344:
    if (ctx->pc == 0x330344u) {
        ctx->pc = 0x330344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330340u;
        // 0x330344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330348u;
        goto label_330348;
    }
    ctx->pc = 0x330340u;
    ctx->pc = 0x330344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330340u;
    // 0x330344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330340u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330348u;
label_330348:
    // 0x330348: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_33034c:
    if (ctx->pc == 0x33034Cu) {
        ctx->pc = 0x330350u;
        goto label_330350;
    }
    ctx->pc = 0x330348u;
    {
        const bool branch_taken_0x330348 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x330348) {
            ctx->pc = 0x330360u;
            goto label_330360;
        }
    }
    ctx->pc = 0x330350u;
label_330350:
    // 0x330350: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330354:
    // 0x330354: 0x24843150  addiu       $a0, $a0, 0x3150
    ctx->pc = 0x330354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12624));
label_330358:
    // 0x330358: 0x80cc0b8  j           func_3302E0
label_33035c:
    if (ctx->pc == 0x33035Cu) {
        ctx->pc = 0x33035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330358u;
        // 0x33035c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330360u;
        goto label_330360;
    }
    ctx->pc = 0x330358u;
    ctx->pc = 0x33035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330358u;
    // 0x33035c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330358u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330360u;
label_330360:
    // 0x330360: 0xc0cc0ea  jal         func_3303A8
label_330364:
    if (ctx->pc == 0x330364u) {
        ctx->pc = 0x330368u;
        goto label_330368;
    }
    ctx->pc = 0x330360u;
    SET_GPR_U32(ctx, 31, 0x330368u);
    ctx->pc = 0x3303A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3303A8u, 0x330360u, 0x330368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330368u;
label_330368:
    // 0x330368: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_33036c:
    if (ctx->pc == 0x33036Cu) {
        ctx->pc = 0x33036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330368u;
        // 0x33036c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330370u;
        goto label_330370;
    }
    ctx->pc = 0x330368u;
    {
        const bool branch_taken_0x330368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330368) {
            ctx->pc = 0x33036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330368u;
            // 0x33036c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330388u;
            goto label_330388;
        }
    }
    ctx->pc = 0x330370u;
label_330370:
    // 0x330370: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330374:
    // 0x330374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330378:
    // 0x330378: 0x24843178  addiu       $a0, $a0, 0x3178
    ctx->pc = 0x330378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12664));
label_33037c:
    // 0x33037c: 0x80cc0b8  j           func_3302E0
label_330380:
    if (ctx->pc == 0x330380u) {
        ctx->pc = 0x330380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33037Cu;
        // 0x330380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330384u;
        goto label_330384;
    }
    ctx->pc = 0x33037Cu;
    ctx->pc = 0x330380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33037Cu;
    // 0x330380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x33037Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330384u;
label_330384:
    // 0x330384: 0x0  nop
    ctx->pc = 0x330384u;
    // NOP
label_330388:
    // 0x330388: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_33038c:
    if (ctx->pc == 0x33038Cu) {
        ctx->pc = 0x33038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330388u;
        // 0x33038c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330390u;
        goto label_330390;
    }
    ctx->pc = 0x330388u;
    {
        const bool branch_taken_0x330388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330388u;
        // 0x33038c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330388) {
            ctx->pc = 0x33039Cu;
            goto label_33039c;
        }
    }
    ctx->pc = 0x330390u;
label_330390:
    // 0x330390: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x330390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_330394:
    // 0x330394: 0x40f809  jalr        $v0
label_330398:
    if (ctx->pc == 0x330398u) {
        ctx->pc = 0x330398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330394u;
        // 0x330398: 0x248402b0  addiu       $a0, $a0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33039Cu;
        goto label_33039c;
    }
    ctx->pc = 0x330394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33039Cu);
        ctx->pc = 0x330398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330394u;
        // 0x330398: 0x248402b0  addiu       $a0, $a0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330394u, 0x33039Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33039Cu;
label_33039c:
    // 0x33039c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33039cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3303a0:
    // 0x3303a0: 0x3e00008  jr          $ra
label_3303a4:
    if (ctx->pc == 0x3303A4u) {
        ctx->pc = 0x3303A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303A0u;
        // 0x3303a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303A8u;
        goto label_fallthrough_0x3303a0;
    }
    ctx->pc = 0x3303A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3303A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303A0u;
        // 0x3303a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3303A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3303a0:
    ctx->pc = 0x3303A8u;
}
