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

// Function: MPS_Destroy
// Address: 0x369188 - 0x3691d8
void MPS_Destroy_0x369188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MPS_Destroy_0x369188");
#endif

    switch (ctx->pc) {
        case 0x36919cu: goto label_36919c;
        default: break;
    }

    ctx->pc = 0x369188u;

    // 0x369188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36918c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369190: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x369190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x369194: 0xc0da3f0  jal         func_368FC0
    ctx->pc = 0x369194u;
    SET_GPR_U32(ctx, 31, 0x36919Cu);
    ctx->pc = 0x369198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369194u;
    // 0x369198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FC0u, 0x369194u, 0x36919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36919Cu;
label_36919c:
    // 0x36919c: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x36919cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x3691a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3691a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3691A4u;
    {
        const bool branch_taken_0x3691a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3691A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3691A4u;
        // 0x3691a8: 0x34a50103  ori         $a1, $a1, 0x103 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)259);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3691a4) {
            ctx->pc = 0x3691C0u;
            goto label_3691c0;
        }
    }
    ctx->pc = 0x3691ACu;
    // 0x3691ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3691acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3691b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3691b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3691b4: 0x80da3a4  j           func_368E90
    ctx->pc = 0x3691B4u;
    ctx->pc = 0x3691B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691B4u;
    // 0x3691b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368E90u, 0x3691B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3691BCu;
    // 0x3691bc: 0x0  nop
    ctx->pc = 0x3691bcu;
    // NOP
label_3691c0:
    // 0x3691c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3691c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3691c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3691c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3691c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3691c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3691cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3691ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3691d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3691D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3691D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3691D0u;
        // 0x3691d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3691D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3691D8u;
}
