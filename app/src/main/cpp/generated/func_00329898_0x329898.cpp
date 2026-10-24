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

// Function: func_00329898
// Address: 0x329898 - 0x3298c0
void func_00329898_0x329898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329898_0x329898");
#endif

    switch (ctx->pc) {
        case 0x329898u: goto label_329898;
        case 0x32989cu: goto label_32989c;
        case 0x3298a0u: goto label_3298a0;
        case 0x3298a4u: goto label_3298a4;
        case 0x3298a8u: goto label_3298a8;
        case 0x3298acu: goto label_3298ac;
        case 0x3298b0u: goto label_3298b0;
        case 0x3298b4u: goto label_3298b4;
        case 0x3298b8u: goto label_3298b8;
        case 0x3298bcu: goto label_3298bc;
        default: break;
    }

    ctx->pc = 0x329898u;

label_329898:
    // 0x329898: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x329898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_32989c:
    // 0x32989c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32989cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3298a0:
    // 0x3298a0: 0x8c421424  lw          $v0, 0x1424($v0)
    ctx->pc = 0x3298a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5156)));
label_3298a4:
    // 0x3298a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3298a8:
    if (ctx->pc == 0x3298A8u) {
        ctx->pc = 0x3298A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298A4u;
        // 0x3298a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298ACu;
        goto label_3298ac;
    }
    ctx->pc = 0x3298A4u;
    {
        const bool branch_taken_0x3298a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298A4u;
        // 0x3298a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298a4) {
            ctx->pc = 0x3298B4u;
            goto label_3298b4;
        }
    }
    ctx->pc = 0x3298ACu;
label_3298ac:
    // 0x3298ac: 0x40f809  jalr        $v0
label_3298b0:
    if (ctx->pc == 0x3298B0u) {
        ctx->pc = 0x3298B4u;
        goto label_3298b4;
    }
    ctx->pc = 0x3298ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3298B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3298ACu, 0x3298B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3298B4u;
label_3298b4:
    // 0x3298b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3298b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3298b8:
    // 0x3298b8: 0x3e00008  jr          $ra
label_3298bc:
    if (ctx->pc == 0x3298BCu) {
        ctx->pc = 0x3298BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298B8u;
        // 0x3298bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298C0u;
        goto label_fallthrough_0x3298b8;
    }
    ctx->pc = 0x3298B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3298BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298B8u;
        // 0x3298bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3298B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3298b8:
    ctx->pc = 0x3298C0u;
}
