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

// Function: ESLib_ESHermite
// Address: 0x2e1528 - 0x2e1580
void ESLib_ESHermite_0x2e1528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ESLib_ESHermite_0x2e1528");
#endif

    ctx->pc = 0x2e1528u;

    // 0x2e1528: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x2e1528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2e152c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2e152cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2e1530: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e1530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e1534: 0x460c0902  mul.s       $f4, $f1, $f12
    ctx->pc = 0x2e1534u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2e1538: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2e1538u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2e153c: 0x46042000  add.s       $f0, $f4, $f4
    ctx->pc = 0x2e153cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2e1540: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2e1540u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2e1544: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2e1544u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2e1548: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2e1548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2e154c: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2e154cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2e1550: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2e1550u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2e1554: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x2e1554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2e1558: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2e1558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2e155c: 0x46027382  mul.s       $f14, $f14, $f2
    ctx->pc = 0x2e155cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x2e1560: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x2e1560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2e1564: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x2e1564u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x2e1568: 0x46048402  mul.s       $f16, $f16, $f4
    ctx->pc = 0x2e1568u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[4]);
    // 0x2e156c: 0x460e0000  add.s       $f0, $f0, $f14
    ctx->pc = 0x2e156cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
    // 0x2e1570: 0x460f0000  add.s       $f0, $f0, $f15
    ctx->pc = 0x2e1570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
    // 0x2e1574: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1574u;
        // 0x2e1578: 0x46100000  add.s       $f0, $f0, $f16 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[16]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E157Cu;
    // 0x2e157c: 0x0  nop
    ctx->pc = 0x2e157cu;
    // NOP
    ctx->pc = 0x2e1580u;
}
