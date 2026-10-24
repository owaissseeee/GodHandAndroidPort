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

// Function: func_003365A8
// Address: 0x3365a8 - 0x336618
void func_003365A8_0x3365a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003365A8_0x3365a8");
#endif

    switch (ctx->pc) {
        case 0x3365c8u: goto label_3365c8;
        default: break;
    }

    ctx->pc = 0x3365a8u;

    // 0x3365a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3365a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3365ac: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x3365acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3365b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3365b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3365b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3365b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3365b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3365b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3365bc: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x3365bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x3365c0: 0xc0cd944  jal         func_336510
    ctx->pc = 0x3365C0u;
    SET_GPR_U32(ctx, 31, 0x3365C8u);
    ctx->pc = 0x3365C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3365C0u;
    // 0x3365c4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336510u, 0x3365C0u, 0x3365C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3365C8u;
label_3365c8:
    // 0x3365c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3365c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3365cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3365ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3365d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3365d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3365d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3365d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3365d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3365D8u;
    {
        const bool branch_taken_0x3365d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3365d8) {
            ctx->pc = 0x3365DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3365D8u;
            // 0x3365dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3365E0u;
            goto label_3365e0;
        }
    }
    ctx->pc = 0x3365E0u;
label_3365e0:
    // 0x3365e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3365e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3365e4: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3365e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3365e8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3365e8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3365ec: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3365ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x3365f0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3365f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x3365f4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3365f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3365f8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3365f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3365fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3365fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336600: 0x1012  mflo        $v0
    ctx->pc = 0x336600u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x336604: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x336604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x336608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33660c: 0x3e00008  jr          $ra
    ctx->pc = 0x33660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33660Cu;
        // 0x336610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33660Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336614u;
    // 0x336614: 0x0  nop
    ctx->pc = 0x336614u;
    // NOP
    ctx->pc = 0x336618u;
}
