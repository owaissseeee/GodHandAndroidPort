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

// Function: fptoui
// Address: 0x31ed08 - 0x31eda0
void fptoui_0x31ed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptoui_0x31ed08");
#endif

    switch (ctx->pc) {
        case 0x31ed20u: goto label_31ed20;
        case 0x31ed38u: goto label_31ed38;
        default: break;
    }

    ctx->pc = 0x31ed08u;

    // 0x31ed08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31ed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31ed0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31ed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31ed10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31ed14: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x31ed14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31ed18: 0xc0c7b12  jal         func_31EC48
    ctx->pc = 0x31ED18u;
    SET_GPR_U32(ctx, 31, 0x31ED20u);
    ctx->pc = 0x31ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED18u;
    // 0x31ed1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC48u, 0x31ED18u, 0x31ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED20u;
label_31ed20:
    // 0x31ed20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ed24: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x31ed24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x31ed28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ED28u;
    {
        const bool branch_taken_0x31ed28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED28u;
        // 0x31ed2c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed28) {
            ctx->pc = 0x31ED38u;
            goto label_31ed38;
        }
    }
    ctx->pc = 0x31ED30u;
    // 0x31ed30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ED30u;
    {
        const bool branch_taken_0x31ed30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED30u;
        // 0x31ed34: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed30) {
            ctx->pc = 0x31ED40u;
            goto label_31ed40;
        }
    }
    ctx->pc = 0x31ED38u;
label_31ed38:
    // 0x31ed38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31ED38u;
    {
        const bool branch_taken_0x31ed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED38u;
        // 0x31ed3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed38) {
            ctx->pc = 0x31ED94u;
            goto label_31ed94;
        }
    }
    ctx->pc = 0x31ED40u;
label_31ed40:
    // 0x31ed40: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31ED40u;
    {
        const bool branch_taken_0x31ed40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED40u;
        // 0x31ed44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed40) {
            ctx->pc = 0x31ED94u;
            goto label_31ed94;
        }
    }
    ctx->pc = 0x31ED48u;
    // 0x31ed48: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x31ed48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x31ed4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31ED4Cu;
    {
        const bool branch_taken_0x31ed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED4Cu;
        // 0x31ed50: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed4c) {
            ctx->pc = 0x31ED64u;
            goto label_31ed64;
        }
    }
    ctx->pc = 0x31ED54u;
    // 0x31ed54: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31ED54u;
    {
        const bool branch_taken_0x31ed54 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x31ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED54u;
        // 0x31ed58: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed54) {
            ctx->pc = 0x31ED38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ed38;
        }
    }
    ctx->pc = 0x31ED5Cu;
    // 0x31ed5c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31ED5Cu;
    {
        const bool branch_taken_0x31ed5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ed5c) {
            ctx->pc = 0x31ED60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31ED5Cu;
            // 0x31ed60: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31ED70u;
            goto label_31ed70;
        }
    }
    ctx->pc = 0x31ED64u;
label_31ed64:
    // 0x31ed64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31ed68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31ED68u;
    {
        const bool branch_taken_0x31ed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED68u;
        // 0x31ed6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed68) {
            ctx->pc = 0x31ED94u;
            goto label_31ed94;
        }
    }
    ctx->pc = 0x31ED70u;
label_31ed70:
    // 0x31ed70: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31ED70u;
    {
        const bool branch_taken_0x31ed70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ed70) {
            ctx->pc = 0x31ED74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31ED70u;
            // 0x31ed74: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31ED88u;
            goto label_31ed88;
        }
    }
    ctx->pc = 0x31ED78u;
    // 0x31ed78: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x31ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x31ed7c: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x31ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x31ed80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31ED80u;
    {
        const bool branch_taken_0x31ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED80u;
        // 0x31ed84: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed80) {
            ctx->pc = 0x31ED94u;
            goto label_31ed94;
        }
    }
    ctx->pc = 0x31ED88u;
label_31ed88:
    // 0x31ed88: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x31ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x31ed8c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x31ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31ed90: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x31ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_31ed94:
    // 0x31ed94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ed94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ed98: 0x3e00008  jr          $ra
    ctx->pc = 0x31ED98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED98u;
        // 0x31ed9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ED98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EDA0u;
}
