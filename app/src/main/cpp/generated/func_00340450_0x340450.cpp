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

// Function: func_00340450
// Address: 0x340450 - 0x340480
void func_00340450_0x340450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340450_0x340450");
#endif

    switch (ctx->pc) {
        case 0x340450u: goto label_340450;
        case 0x340454u: goto label_340454;
        case 0x340458u: goto label_340458;
        case 0x34045cu: goto label_34045c;
        case 0x340460u: goto label_340460;
        case 0x340464u: goto label_340464;
        case 0x340468u: goto label_340468;
        case 0x34046cu: goto label_34046c;
        case 0x340470u: goto label_340470;
        case 0x340474u: goto label_340474;
        case 0x340478u: goto label_340478;
        case 0x34047cu: goto label_34047c;
        default: break;
    }

    ctx->pc = 0x340450u;

label_340450:
    // 0x340450: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x340450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_340454:
    // 0x340454: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_340458:
    // 0x340458: 0x8c43c454  lw          $v1, -0x3BAC($v0)
    ctx->pc = 0x340458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952020)));
label_34045c:
    // 0x34045c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34045cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340460:
    // 0x340460: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_340464:
    if (ctx->pc == 0x340464u) {
        ctx->pc = 0x340464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340460u;
        // 0x340464: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340468u;
        goto label_340468;
    }
    ctx->pc = 0x340460u;
    {
        const bool branch_taken_0x340460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340460u;
        // 0x340464: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340460) {
            ctx->pc = 0x340474u;
            goto label_340474;
        }
    }
    ctx->pc = 0x340468u;
label_340468:
    // 0x340468: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x340468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_34046c:
    // 0x34046c: 0x60f809  jalr        $v1
label_340470:
    if (ctx->pc == 0x340470u) {
        ctx->pc = 0x340470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34046Cu;
        // 0x340470: 0x8c44c458  lw          $a0, -0x3BA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340474u;
        goto label_340474;
    }
    ctx->pc = 0x34046Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x340474u);
        ctx->pc = 0x340470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34046Cu;
        // 0x340470: 0x8c44c458  lw          $a0, -0x3BA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952024)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34046Cu, 0x340474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340474u;
label_340474:
    // 0x340474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_340478:
    // 0x340478: 0x3e00008  jr          $ra
label_34047c:
    if (ctx->pc == 0x34047Cu) {
        ctx->pc = 0x34047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340478u;
        // 0x34047c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340480u;
        goto label_fallthrough_0x340478;
    }
    ctx->pc = 0x340478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340478u;
        // 0x34047c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x340478:
    ctx->pc = 0x340480u;
}
