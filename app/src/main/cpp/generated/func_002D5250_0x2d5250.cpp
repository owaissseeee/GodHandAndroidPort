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

// Function: func_002D5250
// Address: 0x2d5250 - 0x2d52a0
void func_002D5250_0x2d5250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5250_0x2d5250");
#endif

    switch (ctx->pc) {
        case 0x2d5280u: goto label_2d5280;
        case 0x2d5290u: goto label_2d5290;
        default: break;
    }

    ctx->pc = 0x2d5250u;

    // 0x2d5250: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d5250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d5254: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5258: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x2d5258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2d525c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2d525cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d5260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5264: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x2d5264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x2d5268: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d5268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d526c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D526Cu;
    {
        const bool branch_taken_0x2d526c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d526c) {
            ctx->pc = 0x2D5270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D526Cu;
            // 0x2d5270: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5288u;
            goto label_2d5288;
        }
    }
    ctx->pc = 0x2D5274u;
    // 0x2d5274: 0xa4450034  sh          $a1, 0x34($v0)
    ctx->pc = 0x2d5274u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d5278: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2D5278u;
    SET_GPR_U32(ctx, 31, 0x2D5280u);
    ctx->pc = 0x2D527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5278u;
    // 0x2d527c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2D5278u, 0x2D5280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5280u;
label_2d5280:
    // 0x2d5280: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5280u;
    {
        const bool branch_taken_0x2d5280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5280u;
        // 0x2d5284: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5280) {
            ctx->pc = 0x2D5294u;
            goto label_2d5294;
        }
    }
    ctx->pc = 0x2D5288u;
label_2d5288:
    // 0x2d5288: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2D5288u;
    SET_GPR_U32(ctx, 31, 0x2D5290u);
    ctx->pc = 0x2D528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5288u;
    // 0x2d528c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2D5288u, 0x2D5290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5290u;
label_2d5290:
    // 0x2d5290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5294:
    // 0x2d5294: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5294u;
        // 0x2d5298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D529Cu;
    // 0x2d529c: 0x0  nop
    ctx->pc = 0x2d529cu;
    // NOP
    ctx->pc = 0x2d52a0u;
}
