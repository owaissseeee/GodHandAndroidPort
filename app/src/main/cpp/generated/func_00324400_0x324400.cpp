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

// Function: func_00324400
// Address: 0x324400 - 0x324440
void func_00324400_0x324400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324400_0x324400");
#endif

    switch (ctx->pc) {
        case 0x324414u: goto label_324414;
        default: break;
    }

    ctx->pc = 0x324400u;

    // 0x324400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324408: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x324408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32440c: 0xc0c9110  jal         func_324440
    ctx->pc = 0x32440Cu;
    SET_GPR_U32(ctx, 31, 0x324414u);
    ctx->pc = 0x324410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32440Cu;
    // 0x324410: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324440u, 0x32440Cu, 0x324414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324414u;
label_324414:
    // 0x324414: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x324414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324418: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x324418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32441c: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x32441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x324420: 0x24630ffe  addiu       $v1, $v1, 0xFFE
    ctx->pc = 0x324420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4094));
    // 0x324424: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x324424u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x324428: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x324428u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x32442c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x32442cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x324430: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x324430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x324434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324438: 0x3e00008  jr          $ra
    ctx->pc = 0x324438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324438u;
        // 0x32443c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324440u;
}
