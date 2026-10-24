#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __get_eh_info
// Address: 0x7cb430 - 0x7cb458
void ps2___get_eh_info_0x7cb430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___get_eh_info_0x7cb430");
#endif

    switch (ctx->pc) {
        case 0x7cb430u: goto label_7cb430;
        case 0x7cb434u: goto label_7cb434;
        case 0x7cb438u: goto label_7cb438;
        case 0x7cb43cu: goto label_7cb43c;
        case 0x7cb440u: goto label_7cb440;
        case 0x7cb444u: goto label_7cb444;
        case 0x7cb448u: goto label_7cb448;
        case 0x7cb44cu: goto label_7cb44c;
        case 0x7cb450u: goto label_7cb450;
        case 0x7cb454u: goto label_7cb454;
        default: break;
    }

    ctx->pc = 0x7cb430u;

label_7cb430:
    // 0x7cb430: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
label_7cb434:
    // 0x7cb434: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cb434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7cb438:
    // 0x7cb438: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x7cb438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_7cb43c:
    // 0x7cb43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cb43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7cb440:
    // 0x7cb440: 0x40f809  jalr        $v0
label_7cb444:
    if (ctx->pc == 0x7CB444u) {
        ctx->pc = 0x7CB448u;
        goto label_7cb448;
    }
    ctx->pc = 0x7CB440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CB448u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB440u, 0x7CB448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CB448u;
label_7cb448:
    // 0x7cb448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cb448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7cb44c:
    // 0x7cb44c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x7cb44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_7cb450:
    // 0x7cb450: 0x3e00008  jr          $ra
label_7cb454:
    if (ctx->pc == 0x7CB454u) {
        ctx->pc = 0x7CB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB450u;
        // 0x7cb454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB458u;
        goto label_fallthrough_0x7cb450;
    }
    ctx->pc = 0x7CB450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB450u;
        // 0x7cb454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7cb450:
    ctx->pc = 0x7CB458u;
}
} // namespace gh_mcport
