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

// Function: unexpected
// Address: 0x321228 - 0x321240
void unexpected_0x321228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unexpected_0x321228");
#endif

    switch (ctx->pc) {
        case 0x321228u: goto label_321228;
        case 0x32122cu: goto label_32122c;
        case 0x321230u: goto label_321230;
        case 0x321234u: goto label_321234;
        case 0x321238u: goto label_321238;
        case 0x32123cu: goto label_32123c;
        default: break;
    }

    ctx->pc = 0x321228u;

label_321228:
    // 0x321228: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x321228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_32122c:
    // 0x32122c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32122cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_321230:
    // 0x321230: 0x8c434f00  lw          $v1, 0x4F00($v0)
    ctx->pc = 0x321230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20224)));
label_321234:
    // 0x321234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_321238:
    // 0x321238: 0x60f809  jalr        $v1
label_32123c:
    if (ctx->pc == 0x32123Cu) {
        ctx->pc = 0x321240u;
        goto label_fallthrough_0x321238;
    }
    ctx->pc = 0x321238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x321240u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321238u, 0x321240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x321238:
    ctx->pc = 0x321240u;
}
