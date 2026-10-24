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
// Function: func_007CDEC0
// Address: 0x7cdec0 - 0x7cdf18
void func_007CDEC0_0x7cdec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CDEC0_0x7cdec0");
#endif

    ctx->pc = 0x7cdec0u;

    // 0x7cdec0: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cdec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cdec4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x7cdec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x7cdec8: 0x8c4519a8  lw          $a1, 0x19A8($v0)
    ctx->pc = 0x7cdec8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7D19A8u));
    // 0x7cdecc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDECCu;
    {
        const bool branch_taken_0x7cdecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDECCu;
        // 0x7cded0: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdecc) {
            ctx->pc = 0x7CDEDCu;
            goto label_7cdedc;
        }
    }
    ctx->pc = 0x7CDED4u;
    // 0x7cded4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x7cded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7cded8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x7cded8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_7cdedc:
    // 0x7cdedc: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cdedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cdee0: 0x8c4319ac  lw          $v1, 0x19AC($v0)
    ctx->pc = 0x7cdee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7D19ACu));
    // 0x7cdee4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CDEE4u;
    {
        const bool branch_taken_0x7cdee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDEE4u;
        // 0x7cdee8: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdee4) {
            ctx->pc = 0x7CDEF8u;
            goto label_7cdef8;
        }
    }
    ctx->pc = 0x7CDEECu;
    // 0x7cdeec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7cdeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7cdef0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x7cdef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x7cdef4: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cdef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
label_7cdef8:
    // 0x7cdef8: 0x8c4319b0  lw          $v1, 0x19B0($v0)
    ctx->pc = 0x7cdef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6576)));
    // 0x7cdefc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CDEFCu;
    {
        const bool branch_taken_0x7cdefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDEFCu;
        // 0x7cdf00: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdefc) {
            ctx->pc = 0x7CDF10u;
            goto label_7cdf10;
        }
    }
    ctx->pc = 0x7CDF04u;
    // 0x7cdf04: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x7cdf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x7cdf08: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x7cdf08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x7cdf0c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cdf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
label_7cdf10:
    // 0x7cdf10: 0x80ebf34  j           func_3AFCD0
    ctx->pc = 0x7CDF10u;
    ctx->pc = 0x7CDF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDF10u;
    // 0x7cdf14: 0x8c4407b8  lw          $a0, 0x7B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCD0u, 0x7CDF10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CDF18u;
}
} // namespace gh_mcport
