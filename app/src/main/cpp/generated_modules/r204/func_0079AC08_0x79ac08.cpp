#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_0079AC08
// Address: 0x79ac08 - 0x79ac58
void func_0079AC08_0x79ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AC08_0x79ac08");
#endif

    switch (ctx->pc) {
        case 0x79ac2cu: goto label_79ac2c;
        case 0x79ac38u: goto label_79ac38;
        default: break;
    }

    ctx->pc = 0x79ac08u;

    // 0x79ac08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79ac08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79ac0c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x79ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79ac10: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x79ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79ac14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79ac14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79ac18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79ac1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac20: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79ac20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79ac24: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79AC24u;
    SET_GPR_U32(ctx, 31, 0x79AC2Cu);
    ctx->pc = 0x79AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC24u;
    // 0x79ac28: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79AC24u, 0x79AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC2Cu;
label_79ac2c:
    // 0x79ac2c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x79ac2cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79ac30: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79AC30u;
    SET_GPR_U32(ctx, 31, 0x79AC38u);
    ctx->pc = 0x79AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC30u;
    // 0x79ac34: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79AC30u, 0x79AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC38u;
label_79ac38:
    // 0x79ac38: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x79ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79ac3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79ac3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ac40: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x79ac40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x79ac44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79ac44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ac48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x79ac48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac4c: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC4Cu;
        // 0x79ac50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC54u;
    // 0x79ac54: 0x0  nop
    ctx->pc = 0x79ac54u;
    // NOP
    ctx->pc = 0x79ac58u;
}
} // namespace gh_r204
