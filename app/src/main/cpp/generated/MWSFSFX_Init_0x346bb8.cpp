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

// Function: MWSFSFX_Init
// Address: 0x346bb8 - 0x346be0
void MWSFSFX_Init_0x346bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSFSFX_Init_0x346bb8");
#endif

    switch (ctx->pc) {
        case 0x346bc8u: goto label_346bc8;
        default: break;
    }

    ctx->pc = 0x346bb8u;

    // 0x346bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346bbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346bc0: 0xc0d7e0e  jal         func_35F838
    ctx->pc = 0x346BC0u;
    SET_GPR_U32(ctx, 31, 0x346BC8u);
    ctx->pc = 0x35F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F838u, 0x346BC0u, 0x346BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346BC8u;
label_346bc8:
    // 0x346bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346bcc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346bd0: 0x24846be0  addiu       $a0, $a0, 0x6BE0
    ctx->pc = 0x346bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27616));
    // 0x346bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x346bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346bd8: 0x80d7e56  j           func_35F958
    ctx->pc = 0x346BD8u;
    ctx->pc = 0x346BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346BD8u;
    // 0x346bdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F958u, 0x346BD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346BE0u;
}
