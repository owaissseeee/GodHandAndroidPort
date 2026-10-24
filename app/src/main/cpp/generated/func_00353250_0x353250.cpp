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

// Function: func_00353250
// Address: 0x353250 - 0x353348
void func_00353250_0x353250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353250_0x353250");
#endif

    switch (ctx->pc) {
        case 0x353284u: goto label_353284;
        case 0x353298u: goto label_353298;
        case 0x3532c0u: goto label_3532c0;
        case 0x3532d4u: goto label_3532d4;
        case 0x3532e8u: goto label_3532e8;
        case 0x3532f8u: goto label_3532f8;
        case 0x35330cu: goto label_35330c;
        case 0x353320u: goto label_353320;
        default: break;
    }

    ctx->pc = 0x353250u;

    // 0x353250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x353254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x353258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x353258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35325c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x353260: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x353260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x353264: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x353264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353268: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x353268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35326c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x35326cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x353270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x353274: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x353274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x353278: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x353278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35327c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35327Cu;
    SET_GPR_U32(ctx, 31, 0x353284u);
    ctx->pc = 0x353280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35327Cu;
    // 0x353280: 0x8e111fc0  lw          $s1, 0x1FC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35327Cu, 0x353284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353284u;
label_353284:
    // 0x353284: 0x10530027  beq         $v0, $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x353284u;
    {
        const bool branch_taken_0x353284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x353288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353284u;
        // 0x353288: 0x2632008c  addiu       $s2, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353284) {
            ctx->pc = 0x353324u;
            goto label_353324;
        }
    }
    ctx->pc = 0x35328Cu;
    // 0x35328c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35328cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353290: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x353290u;
    SET_GPR_U32(ctx, 31, 0x353298u);
    ctx->pc = 0x353294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353290u;
    // 0x353294: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x353290u, 0x353298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353298u;
label_353298:
    // 0x353298: 0x54530003  bnel        $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x353298u;
    {
        const bool branch_taken_0x353298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x353298) {
            ctx->pc = 0x35329Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353298u;
            // 0x35329c: 0x82420058  lb          $v0, 0x58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3532A8u;
            goto label_3532a8;
        }
    }
    ctx->pc = 0x3532A0u;
    // 0x3532a0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3532A0u;
    {
        const bool branch_taken_0x3532a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3532A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532A0u;
        // 0x3532a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532a0) {
            ctx->pc = 0x353324u;
            goto label_353324;
        }
    }
    ctx->pc = 0x3532A8u;
label_3532a8:
    // 0x3532a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3532A8u;
    {
        const bool branch_taken_0x3532a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3532ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532A8u;
        // 0x3532ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532a8) {
            ctx->pc = 0x3532B8u;
            goto label_3532b8;
        }
    }
    ctx->pc = 0x3532B0u;
    // 0x3532b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3532B0u;
    {
        const bool branch_taken_0x3532b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3532B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532B0u;
        // 0x3532b4: 0x8e22016c  lw          $v0, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532b0) {
            ctx->pc = 0x353324u;
            goto label_353324;
        }
    }
    ctx->pc = 0x3532B8u;
label_3532b8:
    // 0x3532b8: 0xc0d4d2c  jal         func_3534B0
    ctx->pc = 0x3532B8u;
    SET_GPR_U32(ctx, 31, 0x3532C0u);
    ctx->pc = 0x3532BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3532B8u;
    // 0x3532bc: 0x8e510018  lw          $s1, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3534B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3534B0u, 0x3532B8u, 0x3532C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3532C0u;
label_3532c0:
    // 0x3532c0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3532C0u;
    {
        const bool branch_taken_0x3532c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3532C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532C0u;
        // 0x3532c4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532c0) {
            ctx->pc = 0x353310u;
            goto label_353310;
        }
    }
    ctx->pc = 0x3532C8u;
    // 0x3532c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3532c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3532cc: 0xc0d4d40  jal         func_353500
    ctx->pc = 0x3532CCu;
    SET_GPR_U32(ctx, 31, 0x3532D4u);
    ctx->pc = 0x3532D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3532CCu;
    // 0x3532d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353500u, 0x3532CCu, 0x3532D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3532D4u;
label_3532d4:
    // 0x3532d4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3532D4u;
    {
        const bool branch_taken_0x3532d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3532D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532D4u;
        // 0x3532d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532d4) {
            ctx->pc = 0x353314u;
            goto label_353314;
        }
    }
    ctx->pc = 0x3532DCu;
    // 0x3532dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3532dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3532e0: 0xc0d4d54  jal         func_353550
    ctx->pc = 0x3532E0u;
    SET_GPR_U32(ctx, 31, 0x3532E8u);
    ctx->pc = 0x3532E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3532E0u;
    // 0x3532e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353550u, 0x3532E0u, 0x3532E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3532E8u;
label_3532e8:
    // 0x3532e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3532E8u;
    {
        const bool branch_taken_0x3532e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3532ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532E8u;
        // 0x3532ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532e8) {
            ctx->pc = 0x353314u;
            goto label_353314;
        }
    }
    ctx->pc = 0x3532F0u;
    // 0x3532f0: 0xc0d4cd2  jal         func_353348
    ctx->pc = 0x3532F0u;
    SET_GPR_U32(ctx, 31, 0x3532F8u);
    ctx->pc = 0x3532F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3532F0u;
    // 0x3532f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353348u, 0x3532F0u, 0x3532F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3532F8u;
label_3532f8:
    // 0x3532f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3532F8u;
    {
        const bool branch_taken_0x3532f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3532f8) {
            ctx->pc = 0x3532FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3532F8u;
            // 0x3532fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353314u;
            goto label_353314;
        }
    }
    ctx->pc = 0x353300u;
    // 0x353300: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x353300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353304: 0xc0d4d8c  jal         func_353630
    ctx->pc = 0x353304u;
    SET_GPR_U32(ctx, 31, 0x35330Cu);
    ctx->pc = 0x353308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353304u;
    // 0x353308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353630u, 0x353304u, 0x35330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35330Cu;
label_35330c:
    // 0x35330c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x35330cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_353310:
    // 0x353310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_353314:
    // 0x353314: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x353314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353318: 0xc0d4cea  jal         func_3533A8
    ctx->pc = 0x353318u;
    SET_GPR_U32(ctx, 31, 0x353320u);
    ctx->pc = 0x35331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353318u;
    // 0x35331c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3533A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3533A8u, 0x353318u, 0x353320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353320u;
label_353320:
    // 0x353320: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x353320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_353324:
    // 0x353324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x353324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x353328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35332c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35332cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353330: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x353330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353334: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x353334u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353338: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x353338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35333c: 0x3e00008  jr          $ra
    ctx->pc = 0x35333Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35333Cu;
        // 0x353340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35333Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353344u;
    // 0x353344: 0x0  nop
    ctx->pc = 0x353344u;
    // NOP
    ctx->pc = 0x353348u;
}
