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
// Function: CheckOmakeFlag__6cMcSysi
// Address: 0x7c90c0 - 0x7c9108
void CheckOmakeFlag__6cMcSysi_0x7c90c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckOmakeFlag__6cMcSysi_0x7c90c0");
#endif

    switch (ctx->pc) {
        case 0x7c90ecu: goto label_7c90ec;
        case 0x7c90f8u: goto label_7c90f8;
        default: break;
    }

    ctx->pc = 0x7c90c0u;

    // 0x7c90c0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x7c90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c90c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c90c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c90c8: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x7c90c8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c90cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c90ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c90d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c90d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c90d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c90d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c90d8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C90D8u;
    {
        const bool branch_taken_0x7c90d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c90d8) {
            ctx->pc = 0x7C90DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C90D8u;
            // 0x7c90dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C90E0u;
            goto label_7c90e0;
        }
    }
    ctx->pc = 0x7C90E0u;
label_7c90e0:
    // 0x7c90e0: 0x2810  mfhi        $a1
    ctx->pc = 0x7c90e0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x7c90e4: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C90E4u;
    SET_GPR_U32(ctx, 31, 0x7C90ECu);
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C90E4u, 0x7C90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C90ECu;
label_7c90ec:
    // 0x7c90ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c90ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c90f0: 0xc1f2442  jal         func_7C9108
    ctx->pc = 0x7C90F0u;
    SET_GPR_U32(ctx, 31, 0x7C90F8u);
    ctx->pc = 0x7C90F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C90F0u;
    // 0x7c90f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9108u, 0x7C90F0u, 0x7C90F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C90F8u;
label_7c90f8:
    // 0x7c90f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c90f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c90fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c90fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9100: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9100u;
        // 0x7c9104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9108u;
}
} // namespace gh_mcport
