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

// Function: func_001494F8
// Address: 0x1494f8 - 0x149550
void func_001494F8_0x1494f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001494F8_0x1494f8");
#endif

    switch (ctx->pc) {
        case 0x14952cu: goto label_14952c;
        case 0x149538u: goto label_149538;
        default: break;
    }

    ctx->pc = 0x1494f8u;

    // 0x1494f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1494f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1494fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1494fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x149500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149508: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x149508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14950c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x14950Cu;
    {
        const bool branch_taken_0x14950c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x149510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14950Cu;
        // 0x149510: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14950c) {
            ctx->pc = 0x149538u;
            goto label_149538;
        }
    }
    ctx->pc = 0x149514u;
    // 0x149514: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x149514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x149518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14951c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14951cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149524: 0xc0520f2  jal         func_1483C8
    ctx->pc = 0x149524u;
    SET_GPR_U32(ctx, 31, 0x14952Cu);
    ctx->pc = 0x149528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149524u;
    // 0x149528: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1483C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1483C8u, 0x149524u, 0x14952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14952Cu;
label_14952c:
    // 0x14952c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149530: 0xc0aa600  jal         func_2A9800
    ctx->pc = 0x149530u;
    SET_GPR_U32(ctx, 31, 0x149538u);
    ctx->pc = 0x149534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149530u;
    // 0x149534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9800u, 0x149530u, 0x149538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149538u;
label_149538:
    // 0x149538: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x149538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14953c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14953cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149544: 0x3e00008  jr          $ra
    ctx->pc = 0x149544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149544u;
        // 0x149548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14954Cu;
    // 0x14954c: 0x0  nop
    ctx->pc = 0x14954cu;
    // NOP
    ctx->pc = 0x149550u;
}
