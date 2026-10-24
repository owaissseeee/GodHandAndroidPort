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

// Function: func_00331310
// Address: 0x331310 - 0x3313e0
void func_00331310_0x331310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331310_0x331310");
#endif

    switch (ctx->pc) {
        case 0x331358u: goto label_331358;
        case 0x331368u: goto label_331368;
        case 0x331378u: goto label_331378;
        case 0x331384u: goto label_331384;
        case 0x3313a0u: goto label_3313a0;
        case 0x3313b4u: goto label_3313b4;
        default: break;
    }

    ctx->pc = 0x331310u;

    // 0x331310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x331310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x331314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331318: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x331318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33131c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x33131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x331320: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x331320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x331324: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x331324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x331328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x331328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33132c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x331330: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x331330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331334: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x331334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x331338: 0x34139000  ori         $s3, $zero, 0x9000
    ctx->pc = 0x331338u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x33133c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x33133cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x331340: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x331340u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331344: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x331344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x331348: 0x3c150045  lui         $s5, 0x45
    ctx->pc = 0x331348u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)69 << 16));
    // 0x33134c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x33134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x331350: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x331350u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x331354: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x331354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_331358:
    // 0x331358: 0x14540017  bne         $v0, $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x331358u;
    {
        const bool branch_taken_0x331358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x33135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331358u;
        // 0x33135c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331358) {
            ctx->pc = 0x3313B8u;
            goto label_3313b8;
        }
    }
    ctx->pc = 0x331360u;
    // 0x331360: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331360u;
    SET_GPR_U32(ctx, 31, 0x331368u);
    ctx->pc = 0x331364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331360u;
    // 0x331364: 0x24041100  addiu       $a0, $zero, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331360u, 0x331368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331368u;
label_331368:
    // 0x331368: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x331368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x33136c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33136cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331370: 0xc0cc79c  jal         func_331E70
    ctx->pc = 0x331370u;
    SET_GPR_U32(ctx, 31, 0x331378u);
    ctx->pc = 0x331374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331370u;
    // 0x331374: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331E70u, 0x331370u, 0x331378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331378u;
label_331378:
    // 0x331378: 0x24041101  addiu       $a0, $zero, 0x1101
    ctx->pc = 0x331378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x33137c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33137Cu;
    SET_GPR_U32(ctx, 31, 0x331384u);
    ctx->pc = 0x331380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33137Cu;
    // 0x331380: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33137Cu, 0x331384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331384u;
label_331384:
    // 0x331384: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x331384u;
    {
        const bool branch_taken_0x331384 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x331384) {
            ctx->pc = 0x331398u;
            goto label_331398;
        }
    }
    ctx->pc = 0x33138Cu;
    // 0x33138c: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x33138cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x331390: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x331390u;
    {
        const bool branch_taken_0x331390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331390u;
        // 0x331394: 0xa2360002  sb          $s6, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331390) {
            ctx->pc = 0x3313B4u;
            goto label_3313b4;
        }
    }
    ctx->pc = 0x331398u;
label_331398:
    // 0x331398: 0xc0cc4ae  jal         func_3312B8
    ctx->pc = 0x331398u;
    SET_GPR_U32(ctx, 31, 0x3313A0u);
    ctx->pc = 0x33139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331398u;
    // 0x33139c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3312B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3312B8u, 0x331398u, 0x3313A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313A0u;
label_3313a0:
    // 0x3313a0: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x3313a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3313a4: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3313A4u;
    {
        const bool branch_taken_0x3313a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3313a4) {
            ctx->pc = 0x3313A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3313A4u;
            // 0x3313a8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331358;
        }
    }
    ctx->pc = 0x3313ACu;
    // 0x3313ac: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3313ACu;
    SET_GPR_U32(ctx, 31, 0x3313B4u);
    ctx->pc = 0x3313B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3313ACu;
    // 0x3313b0: 0x26a43e90  addiu       $a0, $s5, 0x3E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3313ACu, 0x3313B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313B4u;
label_3313b4:
    // 0x3313b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3313b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3313b8:
    // 0x3313b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3313b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3313bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3313bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3313c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3313c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3313c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3313c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3313c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3313c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3313cc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3313ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3313d0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3313d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3313d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3313D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3313D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3313D4u;
        // 0x3313d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3313D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3313DCu;
    // 0x3313dc: 0x0  nop
    ctx->pc = 0x3313dcu;
    // NOP
    ctx->pc = 0x3313e0u;
}
