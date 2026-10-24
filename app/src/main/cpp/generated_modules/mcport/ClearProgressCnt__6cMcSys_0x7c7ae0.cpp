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
// Function: ClearProgressCnt__6cMcSys
// Address: 0x7c7ae0 - 0x7c7b20
void ClearProgressCnt__6cMcSys_0x7c7ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearProgressCnt__6cMcSys_0x7c7ae0");
#endif

    switch (ctx->pc) {
        case 0x7c7b00u: goto label_7c7b00;
        default: break;
    }

    ctx->pc = 0x7c7ae0u;

    // 0x7c7ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c7ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c7ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c7ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7ae8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c7ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c7aec: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x7c7aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x7c7af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c7af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c7af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c7af8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C7AF8u;
    SET_GPR_U32(ctx, 31, 0x7C7B00u);
    ctx->pc = 0x7C7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7AF8u;
    // 0x7c7afc: 0x26040098  addiu       $a0, $s0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C7AF8u, 0x7C7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7B00u;
label_7c7b00:
    // 0x7c7b00: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x7c7b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x7c7b04: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x7c7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x7c7b08: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x7c7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x7c7b0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c7b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c7b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c7b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c7b14: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7B14u;
        // 0x7c7b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7B1Cu;
    // 0x7c7b1c: 0x0  nop
    ctx->pc = 0x7c7b1cu;
    // NOP
    ctx->pc = 0x7c7b20u;
}
} // namespace gh_mcport
