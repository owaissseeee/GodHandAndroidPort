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

// Function: func_0036D938
// Address: 0x36d938 - 0x36d970
void func_0036D938_0x36d938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D938_0x36d938");
#endif

    switch (ctx->pc) {
        case 0x36d938u: goto label_36d938;
        case 0x36d93cu: goto label_36d93c;
        case 0x36d940u: goto label_36d940;
        case 0x36d944u: goto label_36d944;
        case 0x36d948u: goto label_36d948;
        case 0x36d94cu: goto label_36d94c;
        case 0x36d950u: goto label_36d950;
        case 0x36d954u: goto label_36d954;
        case 0x36d958u: goto label_36d958;
        case 0x36d95cu: goto label_36d95c;
        case 0x36d960u: goto label_36d960;
        case 0x36d964u: goto label_36d964;
        case 0x36d968u: goto label_36d968;
        case 0x36d96cu: goto label_36d96c;
        default: break;
    }

    ctx->pc = 0x36d938u;

label_36d938:
    // 0x36d938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36d93c:
    // 0x36d93c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x36d93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36d940:
    // 0x36d940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_36d944:
    // 0x36d944: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_36d948:
    if (ctx->pc == 0x36D948u) {
        ctx->pc = 0x36D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D944u;
        // 0x36d948: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D94Cu;
        goto label_36d94c;
    }
    ctx->pc = 0x36D944u;
    {
        const bool branch_taken_0x36d944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D944u;
        // 0x36d948: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d944) {
            ctx->pc = 0x36D960u;
            goto label_36d960;
        }
    }
    ctx->pc = 0x36D94Cu;
label_36d94c:
    // 0x36d94c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36d950:
    // 0x36d950: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_36d954:
    if (ctx->pc == 0x36D954u) {
        ctx->pc = 0x36D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D950u;
        // 0x36d954: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D958u;
        goto label_36d958;
    }
    ctx->pc = 0x36D950u;
    {
        const bool branch_taken_0x36d950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d950) {
            ctx->pc = 0x36D954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D950u;
            // 0x36d954: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D964u;
            goto label_36d964;
        }
    }
    ctx->pc = 0x36D958u;
label_36d958:
    // 0x36d958: 0x40f809  jalr        $v0
label_36d95c:
    if (ctx->pc == 0x36D95Cu) {
        ctx->pc = 0x36D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D958u;
        // 0x36d95c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D960u;
        goto label_36d960;
    }
    ctx->pc = 0x36D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36D960u);
        ctx->pc = 0x36D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D958u;
        // 0x36d95c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D958u, 0x36D960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36D960u;
label_36d960:
    // 0x36d960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36d964:
    // 0x36d964: 0x3e00008  jr          $ra
label_36d968:
    if (ctx->pc == 0x36D968u) {
        ctx->pc = 0x36D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D964u;
        // 0x36d968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D96Cu;
        goto label_36d96c;
    }
    ctx->pc = 0x36D964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D964u;
        // 0x36d968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D96Cu;
label_36d96c:
    // 0x36d96c: 0x0  nop
    ctx->pc = 0x36d96cu;
    // NOP
    ctx->pc = 0x36d970u;
}
