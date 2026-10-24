#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079AE80
// Address: 0x79ae80 - 0x79aec0
void func_0079AE80_0x79ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AE80_0x79ae80");
#endif

    switch (ctx->pc) {
        case 0x79ae98u: goto label_79ae98;
        case 0x79aea8u: goto label_79aea8;
        case 0x79aeb8u: goto label_79aeb8;
        default: break;
    }

    ctx->pc = 0x79ae80u;

    // 0x79ae80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79ae84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79ae84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79ae88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79ae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79ae8c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79ae8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79ae90: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x79ae90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x79ae94: 0x0  nop
    ctx->pc = 0x79ae94u;
    // NOP
label_79ae98:
    // 0x79ae98: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79ae98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x79ae9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79ae9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79aea0: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x79AEA0u;
    SET_GPR_U32(ctx, 31, 0x79AEA8u);
    ctx->pc = 0x79AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEA0u;
    // 0x79aea4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79AEA0u, 0x79AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEA8u;
label_79aea8:
    // 0x79aea8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79aeac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aeb0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AEB0u;
    SET_GPR_U32(ctx, 31, 0x79AEB8u);
    ctx->pc = 0x79AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEB0u;
    // 0x79aeb4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AEB0u, 0x79AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEB8u;
label_79aeb8:
    // 0x79aeb8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AEB8u;
    {
        const bool branch_taken_0x79aeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aeb8) {
            ctx->pc = 0x79AE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae98;
        }
    }
    ctx->pc = 0x79AEC0u;
}
} // namespace gh_r102
