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

// Function: func_00333048
// Address: 0x333048 - 0x333130
void func_00333048_0x333048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333048_0x333048");
#endif

    switch (ctx->pc) {
        case 0x3330bcu: goto label_3330bc;
        case 0x3330c8u: goto label_3330c8;
        case 0x3330d0u: goto label_3330d0;
        case 0x3330d8u: goto label_3330d8;
        case 0x3330e0u: goto label_3330e0;
        case 0x333104u: goto label_333104;
        default: break;
    }

    ctx->pc = 0x333048u;

    // 0x333048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x333048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33304c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333054: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x333054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x333058: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x333058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33305c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x333060: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x333060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x333064: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x333064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x333068: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x333068u;
    {
        const bool branch_taken_0x333068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333068u;
        // 0x33306c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333068) {
            ctx->pc = 0x333098u;
            goto label_333098;
        }
    }
    ctx->pc = 0x333070u;
    // 0x333070: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x333070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x333074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x333078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33307c: 0x24a54458  addiu       $a1, $a1, 0x4458
    ctx->pc = 0x33307cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17496));
    // 0x333080: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x333080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333084: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x333084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x333088: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x333088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33308c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33308cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x333090: 0x80cca02  j           func_332808
    ctx->pc = 0x333090u;
    ctx->pc = 0x333094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333090u;
    // 0x333094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332808u, 0x333090u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x333098u;
label_333098:
    // 0x333098: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x333098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33309c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x33309cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3330a0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3330A0u;
    {
        const bool branch_taken_0x3330a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3330a0) {
            ctx->pc = 0x3330A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3330A0u;
            // 0x3330a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333110u;
            goto label_333110;
        }
    }
    ctx->pc = 0x3330A8u;
    // 0x3330a8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3330a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3330ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3330ACu;
    {
        const bool branch_taken_0x3330ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3330B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3330ACu;
        // 0x3330b0: 0x3c110009  lui         $s1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3330ac) {
            ctx->pc = 0x3330BCu;
            goto label_3330bc;
        }
    }
    ctx->pc = 0x3330B4u;
    // 0x3330b4: 0xc0cc55c  jal         func_331570
    ctx->pc = 0x3330B4u;
    SET_GPR_U32(ctx, 31, 0x3330BCu);
    ctx->pc = 0x331570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331570u, 0x3330B4u, 0x3330BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3330BCu;
label_3330bc:
    // 0x3330bc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3330bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3330c0: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x3330c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x3330c4: 0x3c140045  lui         $s4, 0x45
    ctx->pc = 0x3330c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)69 << 16));
label_3330c8:
    // 0x3330c8: 0xc0cc6b6  jal         func_331AD8
    ctx->pc = 0x3330C8u;
    SET_GPR_U32(ctx, 31, 0x3330D0u);
    ctx->pc = 0x331AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331AD8u, 0x3330C8u, 0x3330D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3330D0u;
label_3330d0:
    // 0x3330d0: 0xc0cca56  jal         func_332958
    ctx->pc = 0x3330D0u;
    SET_GPR_U32(ctx, 31, 0x3330D8u);
    ctx->pc = 0x332958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332958u, 0x3330D0u, 0x3330D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3330D8u;
label_3330d8:
    // 0x3330d8: 0xc0ccc4c  jal         func_333130
    ctx->pc = 0x3330D8u;
    SET_GPR_U32(ctx, 31, 0x3330E0u);
    ctx->pc = 0x3330DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3330D8u;
    // 0x3330dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333130u, 0x3330D8u, 0x3330E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3330E0u;
label_3330e0:
    // 0x3330e0: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x3330e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3330e4: 0x54730008  bnel        $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3330E4u;
    {
        const bool branch_taken_0x3330e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x3330e4) {
            ctx->pc = 0x3330E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3330E4u;
            // 0x3330e8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333108u;
            goto label_333108;
        }
    }
    ctx->pc = 0x3330ECu;
    // 0x3330ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3330ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3330f0: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3330f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3330f4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3330F4u;
    {
        const bool branch_taken_0x3330f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3330f4) {
            ctx->pc = 0x3330C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3330c8;
        }
    }
    ctx->pc = 0x3330FCu;
    // 0x3330fc: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x3330FCu;
    SET_GPR_U32(ctx, 31, 0x333104u);
    ctx->pc = 0x333100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3330FCu;
    // 0x333100: 0x268444b8  addiu       $a0, $s4, 0x44B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x3330FCu, 0x333104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333104u;
label_333104:
    // 0x333104: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x333104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_333108:
    // 0x333108: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x333108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33310c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33310cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_333110:
    // 0x333110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x333110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333114: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x333114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333118: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x333118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33311c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33311cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333120: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x333120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x333124: 0x3e00008  jr          $ra
    ctx->pc = 0x333124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333124u;
        // 0x333128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33312Cu;
    // 0x33312c: 0x0  nop
    ctx->pc = 0x33312cu;
    // NOP
    ctx->pc = 0x333130u;
}
