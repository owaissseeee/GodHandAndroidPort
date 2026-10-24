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

// Function: func_00332808
// Address: 0x332808 - 0x332838
void func_00332808_0x332808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332808_0x332808");
#endif

    switch (ctx->pc) {
        case 0x332808u: goto label_332808;
        case 0x33280cu: goto label_33280c;
        case 0x332810u: goto label_332810;
        case 0x332814u: goto label_332814;
        case 0x332818u: goto label_332818;
        case 0x33281cu: goto label_33281c;
        case 0x332820u: goto label_332820;
        case 0x332824u: goto label_332824;
        case 0x332828u: goto label_332828;
        case 0x33282cu: goto label_33282c;
        case 0x332830u: goto label_332830;
        case 0x332834u: goto label_332834;
        default: break;
    }

    ctx->pc = 0x332808u;

label_332808:
    // 0x332808: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x332808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_33280c:
    // 0x33280c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33280cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_332810:
    // 0x332810: 0x8c4390d4  lw          $v1, -0x6F2C($v0)
    ctx->pc = 0x332810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938836)));
label_332814:
    // 0x332814: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x332814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_332818:
    // 0x332818: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_33281c:
    if (ctx->pc == 0x33281Cu) {
        ctx->pc = 0x33281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332818u;
        // 0x33281c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332820u;
        goto label_332820;
    }
    ctx->pc = 0x332818u;
    {
        const bool branch_taken_0x332818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332818u;
        // 0x33281c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332818) {
            ctx->pc = 0x33282Cu;
            goto label_33282c;
        }
    }
    ctx->pc = 0x332820u;
label_332820:
    // 0x332820: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x332820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_332824:
    // 0x332824: 0x60f809  jalr        $v1
label_332828:
    if (ctx->pc == 0x332828u) {
        ctx->pc = 0x332828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332824u;
        // 0x332828: 0x8c4490d8  lw          $a0, -0x6F28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33282Cu;
        goto label_33282c;
    }
    ctx->pc = 0x332824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33282Cu);
        ctx->pc = 0x332828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332824u;
        // 0x332828: 0x8c4490d8  lw          $a0, -0x6F28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938840)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332824u, 0x33282Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33282Cu;
label_33282c:
    // 0x33282c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33282cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_332830:
    // 0x332830: 0x3e00008  jr          $ra
label_332834:
    if (ctx->pc == 0x332834u) {
        ctx->pc = 0x332834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332830u;
        // 0x332834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332838u;
        goto label_fallthrough_0x332830;
    }
    ctx->pc = 0x332830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332830u;
        // 0x332834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x332830:
    ctx->pc = 0x332838u;
}
