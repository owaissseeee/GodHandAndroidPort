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

// Function: __cplus_type_matcher
// Address: 0x321308 - 0x321378
void ps2___cplus_type_matcher_0x321308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___cplus_type_matcher_0x321308");
#endif

    switch (ctx->pc) {
        case 0x321308u: goto label_321308;
        case 0x32130cu: goto label_32130c;
        case 0x321310u: goto label_321310;
        case 0x321314u: goto label_321314;
        case 0x321318u: goto label_321318;
        case 0x32131cu: goto label_32131c;
        case 0x321320u: goto label_321320;
        case 0x321324u: goto label_321324;
        case 0x321328u: goto label_321328;
        case 0x32132cu: goto label_32132c;
        case 0x321330u: goto label_321330;
        case 0x321334u: goto label_321334;
        case 0x321338u: goto label_321338;
        case 0x32133cu: goto label_32133c;
        case 0x321340u: goto label_321340;
        case 0x321344u: goto label_321344;
        case 0x321348u: goto label_321348;
        case 0x32134cu: goto label_32134c;
        case 0x321350u: goto label_321350;
        case 0x321354u: goto label_321354;
        case 0x321358u: goto label_321358;
        case 0x32135cu: goto label_32135c;
        case 0x321360u: goto label_321360;
        case 0x321364u: goto label_321364;
        case 0x321368u: goto label_321368;
        case 0x32136cu: goto label_32136c;
        case 0x321370u: goto label_321370;
        case 0x321374u: goto label_321374;
        default: break;
    }

    ctx->pc = 0x321308u;

label_321308:
    // 0x321308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32130c:
    // 0x32130c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32130cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_321310:
    // 0x321310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_321314:
    // 0x321314: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_321318:
    if (ctx->pc == 0x321318u) {
        ctx->pc = 0x321318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321314u;
        // 0x321318: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32131Cu;
        goto label_32131c;
    }
    ctx->pc = 0x321314u;
    {
        const bool branch_taken_0x321314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x321318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321314u;
        // 0x321318: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321314) {
            ctx->pc = 0x32132Cu;
            goto label_32132c;
        }
    }
    ctx->pc = 0x32131Cu;
label_32131c:
    // 0x32131c: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x32131cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_321320:
    // 0x321320: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x321320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_321324:
    // 0x321324: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_321328:
    if (ctx->pc == 0x321328u) {
        ctx->pc = 0x321328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321324u;
        // 0x321328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32132Cu;
        goto label_32132c;
    }
    ctx->pc = 0x321324u;
    {
        const bool branch_taken_0x321324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x321328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321324u;
        // 0x321328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321324) {
            ctx->pc = 0x321364u;
            goto label_321364;
        }
    }
    ctx->pc = 0x32132Cu;
label_32132c:
    // 0x32132c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x32132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_321330:
    // 0x321330: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x321330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_321334:
    // 0x321334: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_321338:
    if (ctx->pc == 0x321338u) {
        ctx->pc = 0x32133Cu;
        goto label_32133c;
    }
    ctx->pc = 0x321334u;
    {
        const bool branch_taken_0x321334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x321334) {
            ctx->pc = 0x321344u;
            goto label_321344;
        }
    }
    ctx->pc = 0x32133Cu;
label_32133c:
    // 0x32133c: 0x10000009  b           . + 4 + (0x9 << 2)
label_321340:
    if (ctx->pc == 0x321340u) {
        ctx->pc = 0x321340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32133Cu;
        // 0x321340: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321344u;
        goto label_321344;
    }
    ctx->pc = 0x32133Cu;
    {
        const bool branch_taken_0x32133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32133Cu;
        // 0x321340: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32133c) {
            ctx->pc = 0x321364u;
            goto label_321364;
        }
    }
    ctx->pc = 0x321344u;
label_321344:
    // 0x321344: 0xa0f809  jalr        $a1
label_321348:
    if (ctx->pc == 0x321348u) {
        ctx->pc = 0x32134Cu;
        goto label_32134c;
    }
    ctx->pc = 0x321344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x32134Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321344u, 0x32134Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32134Cu;
label_32134c:
    // 0x32134c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x32134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_321350:
    // 0x321350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x321350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321354:
    // 0x321354: 0xc0c7d42  jal         func_31F508
label_321358:
    if (ctx->pc == 0x321358u) {
        ctx->pc = 0x321358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321354u;
        // 0x321358: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32135Cu;
        goto label_32135c;
    }
    ctx->pc = 0x321354u;
    SET_GPR_U32(ctx, 31, 0x32135Cu);
    ctx->pc = 0x321358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321354u;
    // 0x321358: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F508u, 0x321354u, 0x32135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32135Cu;
label_32135c:
    // 0x32135c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_321360:
    if (ctx->pc == 0x321360u) {
        ctx->pc = 0x321360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32135Cu;
        // 0x321360: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321364u;
        goto label_321364;
    }
    ctx->pc = 0x32135Cu;
    {
        const bool branch_taken_0x32135c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32135c) {
            ctx->pc = 0x321360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32135Cu;
            // 0x321360: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321364u;
            goto label_321364;
        }
    }
    ctx->pc = 0x321364u;
label_321364:
    // 0x321364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321368:
    // 0x321368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32136c:
    // 0x32136c: 0x3e00008  jr          $ra
label_321370:
    if (ctx->pc == 0x321370u) {
        ctx->pc = 0x321370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32136Cu;
        // 0x321370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321374u;
        goto label_321374;
    }
    ctx->pc = 0x32136Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32136Cu;
        // 0x321370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32136Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321374u;
label_321374:
    // 0x321374: 0x0  nop
    ctx->pc = 0x321374u;
    // NOP
    ctx->pc = 0x321378u;
}
