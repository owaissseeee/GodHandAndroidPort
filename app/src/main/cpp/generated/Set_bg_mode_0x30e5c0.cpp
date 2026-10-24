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

// Function: Set_bg_mode
// Address: 0x30e5c0 - 0x30e660
void Set_bg_mode_0x30e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_bg_mode_0x30e5c0");
#endif

    ctx->pc = 0x30e5c0u;

    // 0x30e5c0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x30e5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x30e5c4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x30e5c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x30e5c8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E5C8u;
    {
        const bool branch_taken_0x30e5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5C8u;
        // 0x30e5cc: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5c8) {
            ctx->pc = 0x30E5E4u;
            goto label_30e5e4;
        }
    }
    ctx->pc = 0x30E5D0u;
    // 0x30e5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e5d4: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30E5D4u;
    {
        const bool branch_taken_0x30e5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5D4u;
        // 0x30e5d8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5d4) {
            ctx->pc = 0x30E618u;
            goto label_30e618;
        }
    }
    ctx->pc = 0x30E5DCu;
    // 0x30e5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x30E5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E5E4u;
label_30e5e4:
    // 0x30e5e4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x30e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x30e5e8: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x30e5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x30e5ec: 0x248474a0  addiu       $a0, $a0, 0x74A0
    ctx->pc = 0x30e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
    // 0x30e5f0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x30e5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30e5f4: 0xdc8203e0  ld          $v0, 0x3E0($a0)
    ctx->pc = 0x30e5f4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747880u));
    // 0x30e5f8: 0xdc830270  ld          $v1, 0x270($a0)
    ctx->pc = 0x30e5f8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747710u));
    // 0x30e5fc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x30e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x30e600: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30e600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30e604: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30e608: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x30e608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x30e60c: 0xfc8203e0  sd          $v0, 0x3E0($a0)
    ctx->pc = 0x30e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 992), GPR_U64(ctx, 2));
    // 0x30e610: 0x3e00008  jr          $ra
    ctx->pc = 0x30E610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E610u;
        // 0x30e614: 0xfc830270  sd          $v1, 0x270($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 624), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E618u;
label_30e618:
    // 0x30e618: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x30e618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x30e61c: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x30e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x30e620: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x30e620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30e624: 0xdc4403e0  ld          $a0, 0x3E0($v0)
    ctx->pc = 0x30e624u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 992)));
    // 0x30e628: 0x24088000  addiu       $t0, $zero, -0x8000
    ctx->pc = 0x30e628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x30e62c: 0xdc430270  ld          $v1, 0x270($v0)
    ctx->pc = 0x30e62cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x30e630: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x30e630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x30e634: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x30e634u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x30e638: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x30e638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x30e63c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x30e63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x30e640: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x30e640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x30e644: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x30e644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x30e648: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x30e648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x30e64c: 0xac45060c  sw          $a1, 0x60C($v0)
    ctx->pc = 0x30e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1548), GPR_U32(ctx, 5));
    // 0x30e650: 0xfc4403e0  sd          $a0, 0x3E0($v0)
    ctx->pc = 0x30e650u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 992), GPR_U64(ctx, 4));
    // 0x30e654: 0x3e00008  jr          $ra
    ctx->pc = 0x30E654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E654u;
        // 0x30e658: 0xfc430270  sd          $v1, 0x270($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 624), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E65Cu;
    // 0x30e65c: 0x0  nop
    ctx->pc = 0x30e65cu;
    // NOP
    ctx->pc = 0x30e660u;
}
