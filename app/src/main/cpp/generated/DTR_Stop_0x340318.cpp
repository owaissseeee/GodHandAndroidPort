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

// Function: DTR_Stop
// Address: 0x340318 - 0x3403c8
void DTR_Stop_0x340318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DTR_Stop_0x340318");
#endif

    switch (ctx->pc) {
        case 0x340318u: goto label_340318;
        case 0x34031cu: goto label_34031c;
        case 0x340320u: goto label_340320;
        case 0x340324u: goto label_340324;
        case 0x340328u: goto label_340328;
        case 0x34032cu: goto label_34032c;
        case 0x340330u: goto label_340330;
        case 0x340334u: goto label_340334;
        case 0x340338u: goto label_340338;
        case 0x34033cu: goto label_34033c;
        case 0x340340u: goto label_340340;
        case 0x340344u: goto label_340344;
        case 0x340348u: goto label_340348;
        case 0x34034cu: goto label_34034c;
        case 0x340350u: goto label_340350;
        case 0x340354u: goto label_340354;
        case 0x340358u: goto label_340358;
        case 0x34035cu: goto label_34035c;
        case 0x340360u: goto label_340360;
        case 0x340364u: goto label_340364;
        case 0x340368u: goto label_340368;
        case 0x34036cu: goto label_34036c;
        case 0x340370u: goto label_340370;
        case 0x340374u: goto label_340374;
        case 0x340378u: goto label_340378;
        case 0x34037cu: goto label_34037c;
        case 0x340380u: goto label_340380;
        case 0x340384u: goto label_340384;
        case 0x340388u: goto label_340388;
        case 0x34038cu: goto label_34038c;
        case 0x340390u: goto label_340390;
        case 0x340394u: goto label_340394;
        case 0x340398u: goto label_340398;
        case 0x34039cu: goto label_34039c;
        case 0x3403a0u: goto label_3403a0;
        case 0x3403a4u: goto label_3403a4;
        case 0x3403a8u: goto label_3403a8;
        case 0x3403acu: goto label_3403ac;
        case 0x3403b0u: goto label_3403b0;
        case 0x3403b4u: goto label_3403b4;
        case 0x3403b8u: goto label_3403b8;
        case 0x3403bcu: goto label_3403bc;
        case 0x3403c0u: goto label_3403c0;
        case 0x3403c4u: goto label_3403c4;
        default: break;
    }

    ctx->pc = 0x340318u;

label_340318:
    // 0x340318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34031c:
    // 0x34031c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_340320:
    // 0x340320: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x340320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_340324:
    // 0x340324: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x340324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340328:
    // 0x340328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34032c:
    // 0x34032c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_340330:
    // 0x340330: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x340330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_340334:
    // 0x340334: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x340334u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_340338:
    // 0x340338: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x340338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_34033c:
    // 0x34033c: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_340340:
    if (ctx->pc == 0x340340u) {
        ctx->pc = 0x340340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34033Cu;
        // 0x340340: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340344u;
        goto label_340344;
    }
    ctx->pc = 0x34033Cu;
    {
        const bool branch_taken_0x34033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x340340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34033Cu;
        // 0x340340: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34033c) {
            ctx->pc = 0x3403B4u;
            goto label_3403b4;
        }
    }
    ctx->pc = 0x340344u;
label_340344:
    // 0x340344: 0x0  nop
    ctx->pc = 0x340344u;
    // NOP
label_340348:
    // 0x340348: 0xc0ec010  jal         func_3B0040
label_34034c:
    if (ctx->pc == 0x34034Cu) {
        ctx->pc = 0x34034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340348u;
        // 0x34034c: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340350u;
        goto label_340350;
    }
    ctx->pc = 0x340348u;
    SET_GPR_U32(ctx, 31, 0x340350u);
    ctx->pc = 0x34034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340348u;
    // 0x34034c: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0040u, 0x340348u, 0x340350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340350u;
label_340350:
    // 0x340350: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
label_340354:
    if (ctx->pc == 0x340354u) {
        ctx->pc = 0x340354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340350u;
        // 0x340354: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340358u;
        goto label_340358;
    }
    ctx->pc = 0x340350u;
    {
        const bool branch_taken_0x340350 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x340354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340350u;
        // 0x340354: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340350) {
            ctx->pc = 0x340348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340348;
        }
    }
    ctx->pc = 0x340358u;
label_340358:
    // 0x340358: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x340358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_34035c:
    // 0x34035c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34035cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340360:
    // 0x340360: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x340360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_340364:
    // 0x340364: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x340364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_340368:
    // 0x340368: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x340368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_34036c:
    // 0x34036c: 0x40f809  jalr        $v0
label_340370:
    if (ctx->pc == 0x340370u) {
        ctx->pc = 0x340370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34036Cu;
        // 0x340370: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340374u;
        goto label_340374;
    }
    ctx->pc = 0x34036Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340374u);
        ctx->pc = 0x340370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34036Cu;
        // 0x340370: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34036Cu, 0x340374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340374u;
label_340374:
    // 0x340374: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x340374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_340378:
    // 0x340378: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x340378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_34037c:
    // 0x34037c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_340380:
    // 0x340380: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x340380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_340384:
    // 0x340384: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x340384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_340388:
    // 0x340388: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x340388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_34038c:
    // 0x34038c: 0x40f809  jalr        $v0
label_340390:
    if (ctx->pc == 0x340390u) {
        ctx->pc = 0x340390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34038Cu;
        // 0x340390: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340394u;
        goto label_340394;
    }
    ctx->pc = 0x34038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340394u);
        ctx->pc = 0x340390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34038Cu;
        // 0x340390: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34038Cu, 0x340394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340394u;
label_340394:
    // 0x340394: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x340394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_340398:
    // 0x340398: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x340398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_34039c:
    // 0x34039c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x34039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3403a0:
    // 0x3403a0: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3403a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_3403a4:
    // 0x3403a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3403a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3403a8:
    // 0x3403a8: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3403a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3403ac:
    // 0x3403ac: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x3403acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_3403b0:
    // 0x3403b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3403b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3403b4:
    // 0x3403b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3403b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3403b8:
    // 0x3403b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3403b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3403bc:
    // 0x3403bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3403bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3403c0:
    // 0x3403c0: 0x3e00008  jr          $ra
label_3403c4:
    if (ctx->pc == 0x3403C4u) {
        ctx->pc = 0x3403C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403C0u;
        // 0x3403c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3403C8u;
        goto label_fallthrough_0x3403c0;
    }
    ctx->pc = 0x3403C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3403C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403C0u;
        // 0x3403c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3403C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3403c0:
    ctx->pc = 0x3403C8u;
}
