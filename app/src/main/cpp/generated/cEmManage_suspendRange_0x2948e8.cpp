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

// Function: cEmManage_suspendRange
// Address: 0x2948e8 - 0x294968
void cEmManage_suspendRange_0x2948e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_suspendRange_0x2948e8");
#endif

    switch (ctx->pc) {
        case 0x2948e8u: goto label_2948e8;
        case 0x2948ecu: goto label_2948ec;
        case 0x2948f0u: goto label_2948f0;
        case 0x2948f4u: goto label_2948f4;
        case 0x2948f8u: goto label_2948f8;
        case 0x2948fcu: goto label_2948fc;
        case 0x294900u: goto label_294900;
        case 0x294904u: goto label_294904;
        case 0x294908u: goto label_294908;
        case 0x29490cu: goto label_29490c;
        case 0x294910u: goto label_294910;
        case 0x294914u: goto label_294914;
        case 0x294918u: goto label_294918;
        case 0x29491cu: goto label_29491c;
        case 0x294920u: goto label_294920;
        case 0x294924u: goto label_294924;
        case 0x294928u: goto label_294928;
        case 0x29492cu: goto label_29492c;
        case 0x294930u: goto label_294930;
        case 0x294934u: goto label_294934;
        case 0x294938u: goto label_294938;
        case 0x29493cu: goto label_29493c;
        case 0x294940u: goto label_294940;
        case 0x294944u: goto label_294944;
        case 0x294948u: goto label_294948;
        case 0x29494cu: goto label_29494c;
        case 0x294950u: goto label_294950;
        case 0x294954u: goto label_294954;
        case 0x294958u: goto label_294958;
        case 0x29495cu: goto label_29495c;
        case 0x294960u: goto label_294960;
        case 0x294964u: goto label_294964;
        default: break;
    }

    ctx->pc = 0x2948e8u;

label_2948e8:
    // 0x2948e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2948e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2948ec:
    // 0x2948ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2948ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2948f0:
    // 0x2948f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2948f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2948f4:
    // 0x2948f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2948f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2948f8:
    // 0x2948f8: 0x8c900500  lw          $s0, 0x500($a0)
    ctx->pc = 0x2948f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
label_2948fc:
    // 0x2948fc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_294900:
    if (ctx->pc == 0x294900u) {
        ctx->pc = 0x294900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948FCu;
        // 0x294900: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294904u;
        goto label_294904;
    }
    ctx->pc = 0x2948FCu;
    {
        const bool branch_taken_0x2948fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x294900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948FCu;
        // 0x294900: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948fc) {
            ctx->pc = 0x294954u;
            goto label_294954;
        }
    }
    ctx->pc = 0x294904u;
label_294904:
    // 0x294904: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x294904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_294908:
    // 0x294908: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
label_29490c:
    if (ctx->pc == 0x29490Cu) {
        ctx->pc = 0x29490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294908u;
        // 0x29490c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294910u;
        goto label_294910;
    }
    ctx->pc = 0x294908u;
    {
        const bool branch_taken_0x294908 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x294908) {
            ctx->pc = 0x29490Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294908u;
            // 0x29490c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29494Cu;
            goto label_29494c;
        }
    }
    ctx->pc = 0x294910u;
label_294910:
    // 0x294910: 0x94c302fe  lhu         $v1, 0x2FE($a2)
    ctx->pc = 0x294910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 766)));
label_294914:
    // 0x294914: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x294914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_294918:
    // 0x294918: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29491c:
    if (ctx->pc == 0x29491Cu) {
        ctx->pc = 0x29491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294918u;
        // 0x29491c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294920u;
        goto label_294920;
    }
    ctx->pc = 0x294918u;
    {
        const bool branch_taken_0x294918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294918u;
        // 0x29491c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294918) {
            ctx->pc = 0x294928u;
            goto label_294928;
        }
    }
    ctx->pc = 0x294920u;
label_294920:
    // 0x294920: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x294920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_294924:
    // 0x294924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294928:
    // 0x294928: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x294928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_29492c:
    // 0x29492c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_294930:
    if (ctx->pc == 0x294930u) {
        ctx->pc = 0x294930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29492Cu;
        // 0x294930: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294934u;
        goto label_294934;
    }
    ctx->pc = 0x29492Cu;
    {
        const bool branch_taken_0x29492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29492Cu;
        // 0x294930: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29492c) {
            ctx->pc = 0x294948u;
            goto label_294948;
        }
    }
    ctx->pc = 0x294934u;
label_294934:
    // 0x294934: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x294934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_294938:
    // 0x294938: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x294938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_29493c:
    // 0x29493c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x29493cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_294940:
    // 0x294940: 0x60f809  jalr        $v1
label_294944:
    if (ctx->pc == 0x294944u) {
        ctx->pc = 0x294944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294940u;
        // 0x294944: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294948u;
        goto label_294948;
    }
    ctx->pc = 0x294940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x294948u);
        ctx->pc = 0x294944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294940u;
        // 0x294944: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294940u, 0x294948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294948u;
label_294948:
    // 0x294948: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x294948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29494c:
    // 0x29494c: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
label_294950:
    if (ctx->pc == 0x294950u) {
        ctx->pc = 0x294950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29494Cu;
        // 0x294950: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294954u;
        goto label_294954;
    }
    ctx->pc = 0x29494Cu;
    {
        const bool branch_taken_0x29494c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29494c) {
            ctx->pc = 0x294950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29494Cu;
            // 0x294950: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294908;
        }
    }
    ctx->pc = 0x294954u;
label_294954:
    // 0x294954: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x294954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_294958:
    // 0x294958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29495c:
    // 0x29495c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29495cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294960:
    // 0x294960: 0x3e00008  jr          $ra
label_294964:
    if (ctx->pc == 0x294964u) {
        ctx->pc = 0x294964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294960u;
        // 0x294964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294968u;
        goto label_fallthrough_0x294960;
    }
    ctx->pc = 0x294960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294960u;
        // 0x294964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x294960:
    ctx->pc = 0x294968u;
}
