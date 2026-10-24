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

// Function: mwsflib_SetDefCond
// Address: 0x3455d8 - 0x345610
void mwsflib_SetDefCond_0x3455d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwsflib_SetDefCond_0x3455d8");
#endif

    switch (ctx->pc) {
        case 0x3455f8u: goto label_3455f8;
        default: break;
    }

    ctx->pc = 0x3455d8u;

    // 0x3455d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3455d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3455dc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x3455dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3455e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3455e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3455e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3455e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3455e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3455e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3455ec: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3455ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3455f0: 0xc0d19e6  jal         func_346798
    ctx->pc = 0x3455F0u;
    SET_GPR_U32(ctx, 31, 0x3455F8u);
    ctx->pc = 0x3455F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3455F0u;
    // 0x3455f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346798u, 0x3455F0u, 0x3455F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455F8u;
label_3455f8:
    // 0x3455f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3455f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3455fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345600: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x345600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x345604: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x345604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345608: 0x80d19e6  j           func_346798
    ctx->pc = 0x345608u;
    ctx->pc = 0x34560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345608u;
    // 0x34560c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346798u, 0x345608u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345610u;
}
