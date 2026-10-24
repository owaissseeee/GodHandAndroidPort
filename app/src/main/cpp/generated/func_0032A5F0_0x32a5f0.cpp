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

// Function: func_0032A5F0
// Address: 0x32a5f0 - 0x32a648
void func_0032A5F0_0x32a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A5F0_0x32a5f0");
#endif

    switch (ctx->pc) {
        case 0x32a608u: goto label_32a608;
        default: break;
    }

    ctx->pc = 0x32a5f0u;

    // 0x32a5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a5f4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A5F4u;
    {
        const bool branch_taken_0x32a5f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5F4u;
        // 0x32a5f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a5f4) {
            ctx->pc = 0x32A610u;
            goto label_32a610;
        }
    }
    ctx->pc = 0x32A5FCu;
    // 0x32a5fc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32a600: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32A600u;
    SET_GPR_U32(ctx, 31, 0x32A608u);
    ctx->pc = 0x32A604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A600u;
    // 0x32a604: 0x24842138  addiu       $a0, $a0, 0x2138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32A600u, 0x32A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A608u;
label_32a608:
    // 0x32a608: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32A608u;
    {
        const bool branch_taken_0x32a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A608u;
        // 0x32a60c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a608) {
            ctx->pc = 0x32A630u;
            goto label_32a630;
        }
    }
    ctx->pc = 0x32A610u;
label_32a610:
    // 0x32a610: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x32a610u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32a614: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x32a614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32a618: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A618u;
    {
        const bool branch_taken_0x32a618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a618) {
            ctx->pc = 0x32A61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A618u;
            // 0x32a61c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A630u;
            goto label_32a630;
        }
    }
    ctx->pc = 0x32A620u;
    // 0x32a620: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32a620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32a624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a628: 0x80c9de8  j           func_3277A0
    ctx->pc = 0x32A628u;
    ctx->pc = 0x32A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A628u;
    // 0x32a62c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277A0u, 0x32A628u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32A630u;
label_32a630:
    // 0x32a630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a634: 0x3e00008  jr          $ra
    ctx->pc = 0x32A634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A634u;
        // 0x32a638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A63Cu;
    // 0x32a63c: 0x0  nop
    ctx->pc = 0x32a63cu;
    // NOP
    // 0x32a640: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32a644: 0x0  nop
    ctx->pc = 0x32a644u;
    // NOP
    ctx->pc = 0x32a648u;
}
