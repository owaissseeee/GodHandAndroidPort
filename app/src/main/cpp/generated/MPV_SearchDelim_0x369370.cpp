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

// Function: MPV_SearchDelim
// Address: 0x369370 - 0x369478
void MPV_SearchDelim_0x369370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MPV_SearchDelim_0x369370");
#endif

    switch (ctx->pc) {
        case 0x3693c0u: goto label_3693c0;
        case 0x369430u: goto label_369430;
        default: break;
    }

    ctx->pc = 0x369370u;

    // 0x369370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x369370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x369374: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x369374u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369378: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x369378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36937c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36937cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369380: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x369380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x369384: 0x2259021  addu        $s2, $s1, $a1
    ctx->pc = 0x369384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x369388: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x369388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x36938c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x36938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x369390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369394: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x369394u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369398: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x369398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36939c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x36939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3693a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3693a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3693a4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3693A4u;
    {
        const bool branch_taken_0x3693a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3693A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3693A4u;
        // 0x3693a8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3693a4) {
            ctx->pc = 0x36944Cu;
            goto label_36944c;
        }
    }
    ctx->pc = 0x3693ACu;
    // 0x3693ac: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3693acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3693b0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3693b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3693b4: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x3693b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3693b8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3693b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3693bc: 0x0  nop
    ctx->pc = 0x3693bcu;
    // NOP
label_3693c0:
    // 0x3693c0: 0x1074000d  beq         $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x3693C0u;
    {
        const bool branch_taken_0x3693c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x3693C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3693C0u;
        // 0x3693c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3693c0) {
            ctx->pc = 0x3693F8u;
            goto label_3693f8;
        }
    }
    ctx->pc = 0x3693C8u;
    // 0x3693c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3693C8u;
    {
        const bool branch_taken_0x3693c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3693c8) {
            ctx->pc = 0x3693E8u;
            goto label_3693e8;
        }
    }
    ctx->pc = 0x3693D0u;
    // 0x3693d0: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x3693D0u;
    {
        const bool branch_taken_0x3693d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x3693d0) {
            ctx->pc = 0x369408u;
            goto label_369408;
        }
    }
    ctx->pc = 0x3693D8u;
    // 0x3693d8: 0x50760013  beql        $v1, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x3693D8u;
    {
        const bool branch_taken_0x3693d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x3693d8) {
            ctx->pc = 0x3693DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3693D8u;
            // 0x3693dc: 0x2630fffc  addiu       $s0, $s1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369428u;
            goto label_369428;
        }
    }
    ctx->pc = 0x3693E0u;
    // 0x3693e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3693E0u;
    {
        const bool branch_taken_0x3693e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3693E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3693E0u;
        // 0x3693e4: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3693e0) {
            ctx->pc = 0x369444u;
            goto label_369444;
        }
    }
    ctx->pc = 0x3693E8u;
label_3693e8:
    // 0x3693e8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3693E8u;
    {
        const bool branch_taken_0x3693e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3693e8) {
            ctx->pc = 0x3693ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3693E8u;
            // 0x3693ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369440u;
            goto label_369440;
        }
    }
    ctx->pc = 0x3693F0u;
    // 0x3693f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3693F0u;
    {
        const bool branch_taken_0x3693f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3693F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3693F0u;
        // 0x3693f4: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3693f0) {
            ctx->pc = 0x369444u;
            goto label_369444;
        }
    }
    ctx->pc = 0x3693F8u;
label_3693f8:
    // 0x3693f8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3693f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3693FCu;
    {
        const bool branch_taken_0x3693fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3693FCu;
        // 0x369400: 0x2180b  movn        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3693fc) {
            ctx->pc = 0x369440u;
            goto label_369440;
        }
    }
    ctx->pc = 0x369404u;
    // 0x369404: 0x0  nop
    ctx->pc = 0x369404u;
    // NOP
label_369408:
    // 0x369408: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x369408u;
    {
        const bool branch_taken_0x369408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x369408) {
            ctx->pc = 0x369418u;
            goto label_369418;
        }
    }
    ctx->pc = 0x369410u;
    // 0x369410: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x369410u;
    {
        const bool branch_taken_0x369410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369410u;
        // 0x369414: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369410) {
            ctx->pc = 0x369440u;
            goto label_369440;
        }
    }
    ctx->pc = 0x369418u;
label_369418:
    // 0x369418: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x369418u;
    {
        const bool branch_taken_0x369418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369418u;
        // 0x36941c: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x369418) {
            ctx->pc = 0x369444u;
            goto label_369444;
        }
    }
    ctx->pc = 0x369420u;
    // 0x369420: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x369420u;
    {
        const bool branch_taken_0x369420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369420u;
        // 0x369424: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369420) {
            ctx->pc = 0x369444u;
            goto label_369444;
        }
    }
    ctx->pc = 0x369428u;
label_369428:
    // 0x369428: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x369428u;
    SET_GPR_U32(ctx, 31, 0x369430u);
    ctx->pc = 0x36942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369428u;
    // 0x36942c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x369428u, 0x369430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369430u;
label_369430:
    // 0x369430: 0x2a21824  and         $v1, $s5, $v0
    ctx->pc = 0x369430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x369434: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x369434u;
    {
        const bool branch_taken_0x369434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369434u;
        // 0x369438: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369434) {
            ctx->pc = 0x369450u;
            goto label_369450;
        }
    }
    ctx->pc = 0x36943Cu;
    // 0x36943c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x36943cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_369440:
    // 0x369440: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x369440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_369444:
    // 0x369444: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x369444u;
    {
        const bool branch_taken_0x369444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369444) {
            ctx->pc = 0x369448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369444u;
            // 0x369448: 0x82220000  lb          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3693C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3693c0;
        }
    }
    ctx->pc = 0x36944Cu;
label_36944c:
    // 0x36944c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36944cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_369450:
    // 0x369450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369458: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x369458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36945c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36945cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369460: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x369460u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369464: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x369464u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x369468: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x369468u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36946c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x36946cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x369470: 0x3e00008  jr          $ra
    ctx->pc = 0x369470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369470u;
        // 0x369474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369478u;
}
