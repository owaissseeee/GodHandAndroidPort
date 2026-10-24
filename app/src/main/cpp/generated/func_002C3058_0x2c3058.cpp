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

// Function: func_002C3058
// Address: 0x2c3058 - 0x2c30c0
void func_002C3058_0x2c3058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C3058_0x2c3058");
#endif

    switch (ctx->pc) {
        case 0x2c3088u: goto label_2c3088;
        default: break;
    }

    ctx->pc = 0x2c3058u;

    // 0x2c3058: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c3058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c305c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c3060: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c3064: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3064u;
    {
        const bool branch_taken_0x2c3064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3064u;
        // 0x2c3068: 0x3c047fff  lui         $a0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3064) {
            ctx->pc = 0x2C30B8u;
            goto label_2c30b8;
        }
    }
    ctx->pc = 0x2C306Cu;
    // 0x2c306c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2c306cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2c3070: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x2c3070u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x2c3074: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c3074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2c3078: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2c3078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2c307c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2c307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c3080: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c3080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3084: 0x0  nop
    ctx->pc = 0x2c3084u;
    // NOP
label_2c3088:
    // 0x2c3088: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2c3088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2c308c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C308Cu;
    {
        const bool branch_taken_0x2c308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C308Cu;
        // 0x2c3090: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c308c) {
            ctx->pc = 0x2C30A8u;
            goto label_2c30a8;
        }
    }
    ctx->pc = 0x2C3094u;
    // 0x2c3094: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3094u;
    {
        const bool branch_taken_0x2c3094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c3094) {
            ctx->pc = 0x2C3098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3094u;
            // 0x2c3098: 0x642824  and         $a1, $v1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C30ACu;
            goto label_2c30ac;
        }
    }
    ctx->pc = 0x2C309Cu;
    // 0x2c309c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c30a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C30A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30A0u;
        // 0x2c30a4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C30A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C30A8u;
label_2c30a8:
    // 0x2c30a8: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x2c30a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2c30ac:
    // 0x2c30ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2c30acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c30b0: 0x1447fff5  bne         $v0, $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C30B0u;
    {
        const bool branch_taken_0x2c30b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2C30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30B0u;
        // 0x2c30b4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30b0) {
            ctx->pc = 0x2C3088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3088;
        }
    }
    ctx->pc = 0x2C30B8u;
label_2c30b8:
    // 0x2c30b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C30B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C30B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C30C0u;
}
