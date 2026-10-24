#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setSoftColor__11cEventActorUsUc
// Address: 0x7a99d8 - 0x7a9a20
void setSoftColor__11cEventActorUsUc_0x7a99d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setSoftColor__11cEventActorUsUc_0x7a99d8");
#endif

    switch (ctx->pc) {
        case 0x7a99f4u: goto label_7a99f4;
        default: break;
    }

    ctx->pc = 0x7a99d8u;

    // 0x7a99d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7a99d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7a99dc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x7a99dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x7a99e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7a99e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7a99e4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x7a99e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x7a99e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a99e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a99ec: 0xc1ea59a  jal         func_7A9668
    ctx->pc = 0x7A99ECu;
    SET_GPR_U32(ctx, 31, 0x7A99F4u);
    ctx->pc = 0x7A99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A99ECu;
    // 0x7a99f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9668u, 0x7A99ECu, 0x7A99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A99F4u;
label_7a99f4:
    // 0x7a99f4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x7a99f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7a99f8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x7a99f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7a99fc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x7a99fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7a9a00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7a9a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7a9a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a9a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7a9a08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7a9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7a9a0c: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x7a9a0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x7a9a10: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x7a9a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x7a9a14: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x7a9a14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x7a9a18: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9A18u;
        // 0x7a9a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9A20u;
}
} // namespace gh_event
