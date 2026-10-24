#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r023_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r023
{
// Function: R023Move__Fv
// Address: 0x799308 - 0x799358
void R023Move__Fv_0x799308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R023Move__Fv_0x799308");
#endif

    switch (ctx->pc) {
        case 0x799324u: goto label_799324;
        default: break;
    }

    ctx->pc = 0x799308u;

    // 0x799308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79930c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79931c: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x79931Cu;
    SET_GPR_U32(ctx, 31, 0x799324u);
    ctx->pc = 0x799320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79931Cu;
    // 0x799320: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x79931Cu, 0x799324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x799328: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79932c: 0x8c827a78  lw          $v0, 0x7A78($a0)
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x799330: 0x24857a78  addiu       $a1, $a0, 0x7A78
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 31352));
    // 0x799334: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x799338: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x79933c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79933cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799340: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x799344: 0xac827a78  sw          $v0, 0x7A78($a0)
    ctx->pc = 0x799344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x799348: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x799348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x79934c: 0x3e00008  jr          $ra
    ctx->pc = 0x79934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79934Cu;
        // 0x799350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799354u;
    // 0x799354: 0x0  nop
    ctx->pc = 0x799354u;
    // NOP
    ctx->pc = 0x799358u;
}
} // namespace gh_r023
