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

// Function: func_0034AC60
// Address: 0x34ac60 - 0x34adb8
void func_0034AC60_0x34ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034AC60_0x34ac60");
#endif

    switch (ctx->pc) {
        case 0x34ac8cu: goto label_34ac8c;
        case 0x34aca0u: goto label_34aca0;
        case 0x34acb0u: goto label_34acb0;
        case 0x34acf0u: goto label_34acf0;
        case 0x34ad80u: goto label_34ad80;
        case 0x34ad8cu: goto label_34ad8c;
        case 0x34ad94u: goto label_34ad94;
        default: break;
    }

    ctx->pc = 0x34ac60u;

    // 0x34ac60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34ac64: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34ac64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34ac68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34ac6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34ac6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ac70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34ac74: 0x263035b0  addiu       $s0, $s1, 0x35B0
    ctx->pc = 0x34ac74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13744));
    // 0x34ac78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34ac7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34ac7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34ac80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34ac84: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34AC84u;
    SET_GPR_U32(ctx, 31, 0x34AC8Cu);
    ctx->pc = 0x34AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AC84u;
    // 0x34ac88: 0x263335a8  addiu       $s3, $s1, 0x35A8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 13736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34AC84u, 0x34AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC8Cu;
label_34ac8c:
    // 0x34ac8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ac90: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x34AC90u;
    {
        const bool branch_taken_0x34ac90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC90u;
        // 0x34ac94: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac90) {
            ctx->pc = 0x34AD98u;
            goto label_34ad98;
        }
    }
    ctx->pc = 0x34AC98u;
    // 0x34ac98: 0xc0d2b6e  jal         func_34ADB8
    ctx->pc = 0x34AC98u;
    SET_GPR_U32(ctx, 31, 0x34ACA0u);
    ctx->pc = 0x34AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AC98u;
    // 0x34ac9c: 0xae332004  sw          $s3, 0x2004($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8196), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34ADB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ADB8u, 0x34AC98u, 0x34ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ACA0u;
label_34aca0:
    // 0x34aca0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x34ACA0u;
    {
        const bool branch_taken_0x34aca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACA0u;
        // 0x34aca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aca0) {
            ctx->pc = 0x34AD98u;
            goto label_34ad98;
        }
    }
    ctx->pc = 0x34ACA8u;
    // 0x34aca8: 0xc0d2bdc  jal         func_34AF70
    ctx->pc = 0x34ACA8u;
    SET_GPR_U32(ctx, 31, 0x34ACB0u);
    ctx->pc = 0x34AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AF70u, 0x34ACA8u, 0x34ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ACB0u;
label_34acb0:
    // 0x34acb0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34acb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x34acb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34acb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34acb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34acbc: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x34ACBCu;
    {
        const bool branch_taken_0x34acbc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x34ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACBCu;
        // 0x34acc0: 0x34a50c04  ori         $a1, $a1, 0xC04 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3076);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34acbc) {
            ctx->pc = 0x34ACE0u;
            goto label_34ace0;
        }
    }
    ctx->pc = 0x34ACC4u;
    // 0x34acc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34acc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34acc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34acc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34accc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34acccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34acd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34acd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34acd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34acd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34acd8: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34ACD8u;
    ctx->pc = 0x34ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ACD8u;
    // 0x34acdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34ACD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34ACE0u;
label_34ace0:
    // 0x34ace0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x34ace0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34ace4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x34ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x34ace8: 0xc0ce568  jal         func_3395A0
    ctx->pc = 0x34ACE8u;
    SET_GPR_U32(ctx, 31, 0x34ACF0u);
    ctx->pc = 0x34ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ACE8u;
    // 0x34acec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x34ACE8u, 0x34ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ACF0u;
label_34acf0:
    // 0x34acf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34acf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34acf4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x34acf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34acf8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x34acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x34acfc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34acfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34ad00: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x34ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x34ad04: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x34ad04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x34ad08: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x34ad08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x34ad0c: 0x24ab9be8  addiu       $t3, $a1, -0x6418
    ctx->pc = 0x34ad0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941672));
    // 0x34ad10: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x34ad10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ad14: 0x2628365c  addiu       $t0, $s1, 0x365C
    ctx->pc = 0x34ad14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 13916));
    // 0x34ad18: 0x244a9ba8  addiu       $t2, $v0, -0x6458
    ctx->pc = 0x34ad18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941608));
    // 0x34ad1c: 0x24639bc8  addiu       $v1, $v1, -0x6438
    ctx->pc = 0x34ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941640));
    // 0x34ad20: 0x24c69c08  addiu       $a2, $a2, -0x63F8
    ctx->pc = 0x34ad20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941704));
    // 0x34ad24: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x34AD24u;
    {
        const bool branch_taken_0x34ad24 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x34AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD24u;
        // 0x34ad28: 0x24e79c28  addiu       $a3, $a3, -0x63D8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad24) {
            ctx->pc = 0x34AD50u;
            goto label_34ad50;
        }
    }
    ctx->pc = 0x34AD2Cu;
    // 0x34ad2c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34ad30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34ad30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ad34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34ad34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34ad38: 0x34a50c05  ori         $a1, $a1, 0xC05
    ctx->pc = 0x34ad38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3077);
    // 0x34ad3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34ad3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ad40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34ad40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34ad44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34ad44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ad48: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34AD48u;
    ctx->pc = 0x34AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD48u;
    // 0x34ad4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34AD48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34AD50u;
label_34ad50:
    // 0x34ad50: 0xae690004  sw          $t1, 0x4($s3)
    ctx->pc = 0x34ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 9));
    // 0x34ad54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34ad54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ad58: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x34ad58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x34ad5c: 0xae282114  sw          $t0, 0x2114($s1)
    ctx->pc = 0x34ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8468), GPR_U32(ctx, 8));
    // 0x34ad60: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x34ad60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x34ad64: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x34ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x34ad68: 0xad0a0004  sw          $t2, 0x4($t0)
    ctx->pc = 0x34ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 10));
    // 0x34ad6c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x34ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x34ad70: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x34ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x34ad74: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x34ad74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x34ad78: 0xc0ca74e  jal         func_329D38
    ctx->pc = 0x34AD78u;
    SET_GPR_U32(ctx, 31, 0x34AD80u);
    ctx->pc = 0x34AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD78u;
    // 0x34ad7c: 0xad060010  sw          $a2, 0x10($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329D38u, 0x34AD78u, 0x34AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD80u;
label_34ad80:
    // 0x34ad80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ad80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ad84: 0xc0d2cf8  jal         func_34B3E0
    ctx->pc = 0x34AD84u;
    SET_GPR_U32(ctx, 31, 0x34AD8Cu);
    ctx->pc = 0x34AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD84u;
    // 0x34ad88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B3E0u, 0x34AD84u, 0x34AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD8Cu;
label_34ad8c:
    // 0x34ad8c: 0xc0d2bfc  jal         func_34AFF0
    ctx->pc = 0x34AD8Cu;
    SET_GPR_U32(ctx, 31, 0x34AD94u);
    ctx->pc = 0x34AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD8Cu;
    // 0x34ad90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AFF0u, 0x34AD8Cu, 0x34AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD94u;
label_34ad94:
    // 0x34ad94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34ad94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ad98:
    // 0x34ad98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34ad98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ad9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34ad9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34ada0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34ada0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ada4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34ada4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34ada8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34ada8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34adac: 0x3e00008  jr          $ra
    ctx->pc = 0x34ADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ADACu;
        // 0x34adb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ADB4u;
    // 0x34adb4: 0x0  nop
    ctx->pc = 0x34adb4u;
    // NOP
    ctx->pc = 0x34adb8u;
}
