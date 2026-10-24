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

// Function: Tramp_003A52F0_00333AD8
// Address: 0x333ad8 - 0x333b00
void Tramp_003A52F0_00333AD8_0x333ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_003A52F0_00333AD8_0x333ad8");
#endif

    ctx->pc = 0x333ad8u;

    // 0x333ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x333ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x333adc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x333adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x333ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ae8: 0x24849dc0  addiu       $a0, $a0, -0x6240
    ctx->pc = 0x333ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942144));
    // 0x333aec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x333aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x333af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333af4: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x333AF4u;
    ctx->pc = 0x333AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333AF4u;
    // 0x333af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x333AF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x333AFCu;
    // 0x333afc: 0x0  nop
    ctx->pc = 0x333afcu;
    // NOP
    ctx->pc = 0x333b00u;
}
