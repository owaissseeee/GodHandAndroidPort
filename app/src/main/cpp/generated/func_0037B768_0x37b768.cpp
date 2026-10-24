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

// Function: func_0037B768
// Address: 0x37b768 - 0x37b798
void func_0037B768_0x37b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B768_0x37b768");
#endif

    switch (ctx->pc) {
        case 0x37b78cu: goto label_37b78c;
        default: break;
    }

    ctx->pc = 0x37b768u;

    // 0x37b768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37b768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37b76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b770: 0x80850027  lb          $a1, 0x27($a0)
    ctx->pc = 0x37b770u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x37b774: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x37b774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x37b778: 0x24a5016c  addiu       $a1, $a1, 0x16C
    ctx->pc = 0x37b778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 364));
    // 0x37b77c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x37b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37b780: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x37b780u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x37b784: 0xc0dd276  jal         func_3749D8
    ctx->pc = 0x37B784u;
    SET_GPR_U32(ctx, 31, 0x37B78Cu);
    ctx->pc = 0x37B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B784u;
    // 0x37b788: 0x80840027  lb          $a0, 0x27($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3749D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3749D8u, 0x37B784u, 0x37B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B78Cu;
label_37b78c:
    // 0x37b78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b790: 0x3e00008  jr          $ra
    ctx->pc = 0x37B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B790u;
        // 0x37b794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B798u;
}
