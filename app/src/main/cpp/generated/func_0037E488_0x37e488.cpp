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

// Function: func_0037E488
// Address: 0x37e488 - 0x37e4c0
void func_0037E488_0x37e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037E488_0x37e488");
#endif

    switch (ctx->pc) {
        case 0x37e49cu: goto label_37e49c;
        default: break;
    }

    ctx->pc = 0x37e488u;

    // 0x37e488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37e488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37e48c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37e490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37e490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37e494: 0xc0dfa36  jal         func_37E8D8
    ctx->pc = 0x37E494u;
    SET_GPR_U32(ctx, 31, 0x37E49Cu);
    ctx->pc = 0x37E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E494u;
    // 0x37e498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E8D8u, 0x37E494u, 0x37E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E49Cu;
label_37e49c:
    // 0x37e49c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37E49Cu;
    {
        const bool branch_taken_0x37e49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E49Cu;
        // 0x37e4a0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e49c) {
            ctx->pc = 0x37E4A8u;
            goto label_37e4a8;
        }
    }
    ctx->pc = 0x37E4A4u;
    // 0x37e4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37e4a8:
    // 0x37e4a8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x37e4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37e4ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37e4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37e4b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37e4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x37E4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4B4u;
        // 0x37e4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E4BCu;
    // 0x37e4bc: 0x0  nop
    ctx->pc = 0x37e4bcu;
    // NOP
    ctx->pc = 0x37e4c0u;
}
