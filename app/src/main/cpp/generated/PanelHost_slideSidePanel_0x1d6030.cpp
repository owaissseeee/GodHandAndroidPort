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

// Function: PanelHost_slideSidePanel
// Address: 0x1d6030 - 0x1d60f8
void PanelHost_slideSidePanel_0x1d6030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PanelHost_slideSidePanel_0x1d6030");
#endif

    switch (ctx->pc) {
        case 0x1d6078u: goto label_1d6078;
        case 0x1d608cu: goto label_1d608c;
        case 0x1d60a8u: goto label_1d60a8;
        case 0x1d60c0u: goto label_1d60c0;
        case 0x1d60d0u: goto label_1d60d0;
        case 0x1d60e0u: goto label_1d60e0;
        default: break;
    }

    ctx->pc = 0x1d6030u;

    // 0x1d6030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6038: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d603c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d603cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6044: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1d6044u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d6048: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6048u;
    {
        const bool branch_taken_0x1d6048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6048u;
        // 0x1d604c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6048) {
            ctx->pc = 0x1D6080u;
            goto label_1d6080;
        }
    }
    ctx->pc = 0x1D6050u;
    // 0x1d6050: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1d6050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d6054: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6054u;
    {
        const bool branch_taken_0x1d6054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6054) {
            ctx->pc = 0x1D6058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6054u;
            // 0x1d6058: 0x260403c4  addiu       $a0, $s0, 0x3C4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6070u;
            goto label_1d6070;
        }
    }
    ctx->pc = 0x1D605Cu;
    // 0x1d605c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6060: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D6060u;
    {
        const bool branch_taken_0x1d6060 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6060u;
        // 0x1d6064: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6060) {
            ctx->pc = 0x1D6094u;
            goto label_1d6094;
        }
    }
    ctx->pc = 0x1D6068u;
    // 0x1d6068: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D6068u;
    {
        const bool branch_taken_0x1d6068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6068u;
        // 0x1d606c: 0x260403c4  addiu       $a0, $s0, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6068) {
            ctx->pc = 0x1D60B0u;
            goto label_1d60b0;
        }
    }
    ctx->pc = 0x1D6070u;
label_1d6070:
    // 0x1d6070: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6070u;
    SET_GPR_U32(ctx, 31, 0x1D6078u);
    ctx->pc = 0x1D6074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6070u;
    // 0x1d6074: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6070u, 0x1D6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6078u;
label_1d6078:
    // 0x1d6078: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D6078u;
    {
        const bool branch_taken_0x1d6078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6078u;
        // 0x1d607c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6078) {
            ctx->pc = 0x1D60C4u;
            goto label_1d60c4;
        }
    }
    ctx->pc = 0x1D6080u;
label_1d6080:
    // 0x1d6080: 0x260403c4  addiu       $a0, $s0, 0x3C4
    ctx->pc = 0x1d6080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
    // 0x1d6084: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6084u;
    SET_GPR_U32(ctx, 31, 0x1D608Cu);
    ctx->pc = 0x1D6088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6084u;
    // 0x1d6088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6084u, 0x1D608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D608Cu;
label_1d608c:
    // 0x1d608c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D608Cu;
    {
        const bool branch_taken_0x1d608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D608Cu;
        // 0x1d6090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d608c) {
            ctx->pc = 0x1D60C4u;
            goto label_1d60c4;
        }
    }
    ctx->pc = 0x1D6094u;
label_1d6094:
    // 0x1d6094: 0x260403c4  addiu       $a0, $s0, 0x3C4
    ctx->pc = 0x1d6094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
    // 0x1d6098: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1d609c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d609cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60a0: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D60A0u;
    SET_GPR_U32(ctx, 31, 0x1D60A8u);
    ctx->pc = 0x1D60A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60A0u;
    // 0x1d60a4: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D60A0u, 0x1D60A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60A8u;
label_1d60a8:
    // 0x1d60a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D60A8u;
    {
        const bool branch_taken_0x1d60a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60A8u;
        // 0x1d60ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60a8) {
            ctx->pc = 0x1D60C4u;
            goto label_1d60c4;
        }
    }
    ctx->pc = 0x1D60B0u;
label_1d60b0:
    // 0x1d60b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d60b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60b4: 0x2406fec0  addiu       $a2, $zero, -0x140
    ctx->pc = 0x1d60b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1d60b8: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D60B8u;
    SET_GPR_U32(ctx, 31, 0x1D60C0u);
    ctx->pc = 0x1D60BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60B8u;
    // 0x1d60bc: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D60B8u, 0x1D60C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60C0u;
label_1d60c0:
    // 0x1d60c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d60c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d60c4:
    // 0x1d60c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d60c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d60c8: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D60C8u;
    SET_GPR_U32(ctx, 31, 0x1D60D0u);
    ctx->pc = 0x1D60CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60C8u;
    // 0x1d60cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D60C8u, 0x1D60D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60D0u;
label_1d60d0:
    // 0x1d60d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d60d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60d4: 0x11302b  sltu        $a2, $zero, $s1
    ctx->pc = 0x1d60d4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d60d8: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D60D8u;
    SET_GPR_U32(ctx, 31, 0x1D60E0u);
    ctx->pc = 0x1D60DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60D8u;
    // 0x1d60dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D60D8u, 0x1D60E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60E0u;
label_1d60e0:
    // 0x1d60e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d60e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d60e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d60e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d60e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d60e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d60ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D60ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60ECu;
        // 0x1d60f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D60ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D60F4u;
    // 0x1d60f4: 0x0  nop
    ctx->pc = 0x1d60f4u;
    // NOP
    ctx->pc = 0x1d60f8u;
}
