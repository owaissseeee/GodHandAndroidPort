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
// Function: func_007CB458
// Address: 0x7cb458 - 0x7cb480
void func_007CB458_0x7cb458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CB458_0x7cb458");
#endif

    switch (ctx->pc) {
        case 0x7cb458u: goto label_7cb458;
        case 0x7cb45cu: goto label_7cb45c;
        case 0x7cb460u: goto label_7cb460;
        case 0x7cb464u: goto label_7cb464;
        case 0x7cb468u: goto label_7cb468;
        case 0x7cb46cu: goto label_7cb46c;
        case 0x7cb470u: goto label_7cb470;
        case 0x7cb474u: goto label_7cb474;
        case 0x7cb478u: goto label_7cb478;
        case 0x7cb47cu: goto label_7cb47c;
        default: break;
    }

    ctx->pc = 0x7cb458u;

label_7cb458:
    // 0x7cb458: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cb458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
label_7cb45c:
    // 0x7cb45c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cb45cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7cb460:
    // 0x7cb460: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
label_7cb464:
    // 0x7cb464: 0x2442b480  addiu       $v0, $v0, -0x4B80
    ctx->pc = 0x7cb464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947968));
label_7cb468:
    // 0x7cb468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cb468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7cb46c:
    // 0x7cb46c: 0x40f809  jalr        $v0
label_7cb470:
    if (ctx->pc == 0x7CB470u) {
        ctx->pc = 0x7CB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB46Cu;
        // 0x7cb470: 0xac6201a4  sw          $v0, 0x1A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB474u;
        goto label_7cb474;
    }
    ctx->pc = 0x7CB46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CB474u);
        ctx->pc = 0x7CB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB46Cu;
        // 0x7cb470: 0xac6201a4  sw          $v0, 0x1A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB46Cu, 0x7CB474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CB474u;
label_7cb474:
    // 0x7cb474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cb474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7cb478:
    // 0x7cb478: 0x3e00008  jr          $ra
label_7cb47c:
    if (ctx->pc == 0x7CB47Cu) {
        ctx->pc = 0x7CB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB478u;
        // 0x7cb47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB480u;
        goto label_fallthrough_0x7cb478;
    }
    ctx->pc = 0x7CB478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB478u;
        // 0x7cb47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7cb478:
    ctx->pc = 0x7CB480u;
}
} // namespace gh_mcport
