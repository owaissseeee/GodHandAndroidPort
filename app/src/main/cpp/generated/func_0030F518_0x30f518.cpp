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

// Function: func_0030F518
// Address: 0x30f518 - 0x30f550
void func_0030F518_0x30f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030F518_0x30f518");
#endif

    switch (ctx->pc) {
        case 0x30f528u: goto label_30f528;
        default: break;
    }

    ctx->pc = 0x30f518u;

    // 0x30f518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30f518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30f51c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f520: 0xc0c3cd2  jal         func_30F348
    ctx->pc = 0x30F520u;
    SET_GPR_U32(ctx, 31, 0x30F528u);
    ctx->pc = 0x30F348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F348u, 0x30F520u, 0x30F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F528u;
label_30f528:
    // 0x30f528: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x30f528u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x30f52c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30f52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30f530: 0x46802060  cvt.s.w     $f1, $f4
    ctx->pc = 0x30f530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30f534: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x30f534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x30f538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30f538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f540: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30f540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30f544: 0x3e00008  jr          $ra
    ctx->pc = 0x30F544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F544u;
        // 0x30f548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F54Cu;
    // 0x30f54c: 0x0  nop
    ctx->pc = 0x30f54cu;
    // NOP
    ctx->pc = 0x30f550u;
}
