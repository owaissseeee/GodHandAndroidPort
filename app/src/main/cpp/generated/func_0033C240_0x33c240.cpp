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

// Function: func_0033C240
// Address: 0x33c240 - 0x33c270
void func_0033C240_0x33c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C240_0x33c240");
#endif

    switch (ctx->pc) {
        case 0x33c240u: goto label_33c240;
        case 0x33c244u: goto label_33c244;
        case 0x33c248u: goto label_33c248;
        case 0x33c24cu: goto label_33c24c;
        case 0x33c250u: goto label_33c250;
        case 0x33c254u: goto label_33c254;
        case 0x33c258u: goto label_33c258;
        case 0x33c25cu: goto label_33c25c;
        case 0x33c260u: goto label_33c260;
        case 0x33c264u: goto label_33c264;
        case 0x33c268u: goto label_33c268;
        case 0x33c26cu: goto label_33c26c;
        default: break;
    }

    ctx->pc = 0x33c240u;

label_33c240:
    // 0x33c240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33c244:
    // 0x33c244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33c248:
    // 0x33c248: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x33c248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_33c24c:
    // 0x33c24c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33c250:
    if (ctx->pc == 0x33C250u) {
        ctx->pc = 0x33C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C24Cu;
        // 0x33c250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C254u;
        goto label_33c254;
    }
    ctx->pc = 0x33C24Cu;
    {
        const bool branch_taken_0x33c24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C24Cu;
        // 0x33c250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c24c) {
            ctx->pc = 0x33C264u;
            goto label_33c264;
        }
    }
    ctx->pc = 0x33C254u;
label_33c254:
    // 0x33c254: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33c254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33c258:
    // 0x33c258: 0x8c439d18  lw          $v1, -0x62E8($v0)
    ctx->pc = 0x33c258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941976)));
label_33c25c:
    // 0x33c25c: 0x60f809  jalr        $v1
label_33c260:
    if (ctx->pc == 0x33C260u) {
        ctx->pc = 0x33C264u;
        goto label_33c264;
    }
    ctx->pc = 0x33C25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C264u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C25Cu, 0x33C264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C264u;
label_33c264:
    // 0x33c264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c268:
    // 0x33c268: 0x3e00008  jr          $ra
label_33c26c:
    if (ctx->pc == 0x33C26Cu) {
        ctx->pc = 0x33C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C268u;
        // 0x33c26c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C270u;
        goto label_fallthrough_0x33c268;
    }
    ctx->pc = 0x33C268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C268u;
        // 0x33c26c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33c268:
    ctx->pc = 0x33C270u;
}
