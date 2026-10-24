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

// Function: func_0036CE38
// Address: 0x36ce38 - 0x36ce68
void func_0036CE38_0x36ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CE38_0x36ce38");
#endif

    switch (ctx->pc) {
        case 0x36ce38u: goto label_36ce38;
        case 0x36ce3cu: goto label_36ce3c;
        case 0x36ce40u: goto label_36ce40;
        case 0x36ce44u: goto label_36ce44;
        case 0x36ce48u: goto label_36ce48;
        case 0x36ce4cu: goto label_36ce4c;
        case 0x36ce50u: goto label_36ce50;
        case 0x36ce54u: goto label_36ce54;
        case 0x36ce58u: goto label_36ce58;
        case 0x36ce5cu: goto label_36ce5c;
        case 0x36ce60u: goto label_36ce60;
        case 0x36ce64u: goto label_36ce64;
        default: break;
    }

    ctx->pc = 0x36ce38u;

label_36ce38:
    // 0x36ce38: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x36ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_36ce3c:
    // 0x36ce3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ce3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36ce40:
    // 0x36ce40: 0x8c632030  lw          $v1, 0x2030($v1)
    ctx->pc = 0x36ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8240)));
label_36ce44:
    // 0x36ce44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ce44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ce48:
    // 0x36ce48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_36ce4c:
    if (ctx->pc == 0x36CE4Cu) {
        ctx->pc = 0x36CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE48u;
        // 0x36ce4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CE50u;
        goto label_36ce50;
    }
    ctx->pc = 0x36CE48u;
    {
        const bool branch_taken_0x36ce48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE48u;
        // 0x36ce4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce48) {
            ctx->pc = 0x36CE58u;
            goto label_36ce58;
        }
    }
    ctx->pc = 0x36CE50u;
label_36ce50:
    // 0x36ce50: 0x60f809  jalr        $v1
label_36ce54:
    if (ctx->pc == 0x36CE54u) {
        ctx->pc = 0x36CE58u;
        goto label_36ce58;
    }
    ctx->pc = 0x36CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36CE58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE50u, 0x36CE58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CE58u;
label_36ce58:
    // 0x36ce58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ce58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36ce5c:
    // 0x36ce5c: 0x3e00008  jr          $ra
label_36ce60:
    if (ctx->pc == 0x36CE60u) {
        ctx->pc = 0x36CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE5Cu;
        // 0x36ce60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CE64u;
        goto label_36ce64;
    }
    ctx->pc = 0x36CE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE5Cu;
        // 0x36ce60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CE64u;
label_36ce64:
    // 0x36ce64: 0x0  nop
    ctx->pc = 0x36ce64u;
    // NOP
    ctx->pc = 0x36ce68u;
}
