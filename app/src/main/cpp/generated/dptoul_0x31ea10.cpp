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

// Function: dptoul
// Address: 0x31ea10 - 0x31eab0
void dptoul_0x31ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoul_0x31ea10");
#endif

    switch (ctx->pc) {
        case 0x31ea28u: goto label_31ea28;
        case 0x31ea40u: goto label_31ea40;
        default: break;
    }

    ctx->pc = 0x31ea10u;

    // 0x31ea10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31ea14: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x31ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x31ea18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31ea18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ea1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31ea20: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31EA20u;
    SET_GPR_U32(ctx, 31, 0x31EA28u);
    ctx->pc = 0x31EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EA20u;
    // 0x31ea24: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31EA20u, 0x31EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EA28u;
label_31ea28:
    // 0x31ea28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ea2c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x31ea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x31ea30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EA30u;
    {
        const bool branch_taken_0x31ea30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA30u;
        // 0x31ea34: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea30) {
            ctx->pc = 0x31EA40u;
            goto label_31ea40;
        }
    }
    ctx->pc = 0x31EA38u;
    // 0x31ea38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EA38u;
    {
        const bool branch_taken_0x31ea38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA38u;
        // 0x31ea3c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea38) {
            ctx->pc = 0x31EA48u;
            goto label_31ea48;
        }
    }
    ctx->pc = 0x31EA40u;
label_31ea40:
    // 0x31ea40: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31EA40u;
    {
        const bool branch_taken_0x31ea40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA40u;
        // 0x31ea44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea40) {
            ctx->pc = 0x31EAA4u;
            goto label_31eaa4;
        }
    }
    ctx->pc = 0x31EA48u;
label_31ea48:
    // 0x31ea48: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31EA48u;
    {
        const bool branch_taken_0x31ea48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA48u;
        // 0x31ea4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea48) {
            ctx->pc = 0x31EAA4u;
            goto label_31eaa4;
        }
    }
    ctx->pc = 0x31EA50u;
    // 0x31ea50: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x31ea50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x31ea54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EA54u;
    {
        const bool branch_taken_0x31ea54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA54u;
        // 0x31ea58: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea54) {
            ctx->pc = 0x31EA6Cu;
            goto label_31ea6c;
        }
    }
    ctx->pc = 0x31EA5Cu;
    // 0x31ea5c: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31EA5Cu;
    {
        const bool branch_taken_0x31ea5c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x31EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA5Cu;
        // 0x31ea60: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea5c) {
            ctx->pc = 0x31EA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ea40;
        }
    }
    ctx->pc = 0x31EA64u;
    // 0x31ea64: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EA64u;
    {
        const bool branch_taken_0x31ea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ea64) {
            ctx->pc = 0x31EA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EA64u;
            // 0x31ea68: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EA78u;
            goto label_31ea78;
        }
    }
    ctx->pc = 0x31EA6Cu;
label_31ea6c:
    // 0x31ea6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31ea70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31EA70u;
    {
        const bool branch_taken_0x31ea70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA70u;
        // 0x31ea74: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea70) {
            ctx->pc = 0x31EAA4u;
            goto label_31eaa4;
        }
    }
    ctx->pc = 0x31EA78u;
label_31ea78:
    // 0x31ea78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EA78u;
    {
        const bool branch_taken_0x31ea78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA78u;
        // 0x31ea7c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea78) {
            ctx->pc = 0x31EA90u;
            goto label_31ea90;
        }
    }
    ctx->pc = 0x31EA80u;
    // 0x31ea80: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x31ea80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ea84: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x31ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x31ea88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31EA88u;
    {
        const bool branch_taken_0x31ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA88u;
        // 0x31ea8c: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea88) {
            ctx->pc = 0x31EA9Cu;
            goto label_31ea9c;
        }
    }
    ctx->pc = 0x31EA90u;
label_31ea90:
    // 0x31ea90: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x31ea90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ea94: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31ea98: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x31ea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_31ea9c:
    // 0x31ea9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ea9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31eaa0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31eaa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_31eaa4:
    // 0x31eaa4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31eaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31eaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x31EAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAA8u;
        // 0x31eaac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EAB0u;
}
