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

// Function: func_00293760
// Address: 0x293760 - 0x2937c0
void func_00293760_0x293760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00293760_0x293760");
#endif

    ctx->pc = 0x293760u;

    // 0x293760: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x293760u;
    {
        const bool branch_taken_0x293760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x293764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293760u;
        // 0x293764: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293760) {
            ctx->pc = 0x2937B8u;
            goto label_2937b8;
        }
    }
    ctx->pc = 0x293768u;
    // 0x293768: 0x8ca20564  lw          $v0, 0x564($a1)
    ctx->pc = 0x293768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1380)));
    // 0x29376c: 0x2444fd90  addiu       $a0, $v0, -0x270
    ctx->pc = 0x29376cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
    // 0x293770: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x293770u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x293774: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x293774u;
    {
        const bool branch_taken_0x293774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293774u;
        // 0x293778: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293774) {
            ctx->pc = 0x2937B8u;
            goto label_2937b8;
        }
    }
    ctx->pc = 0x29377Cu;
    // 0x29377c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x29377cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x293780: 0x2442a7b0  addiu       $v0, $v0, -0x5850
    ctx->pc = 0x293780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944688));
    // 0x293784: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x293784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293788: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x293788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29378c: 0x800008  jr          $a0
    ctx->pc = 0x29378Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293794u: goto label_293794;
            case 0x29379Cu: goto label_29379c;
            case 0x2937A4u: goto label_2937a4;
            case 0x2937ACu: goto label_2937ac;
            case 0x2937B4u: goto label_2937b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29378Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x293794u;
label_293794:
    // 0x293794: 0x3e00008  jr          $ra
    ctx->pc = 0x293794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293794u;
        // 0x293798: 0xacc50578  sw          $a1, 0x578($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29379Cu;
label_29379c:
    // 0x29379c: 0x3e00008  jr          $ra
    ctx->pc = 0x29379Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2937A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29379Cu;
        // 0x2937a0: 0xacc5057c  sw          $a1, 0x57C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1404), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29379Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2937A4u;
label_2937a4:
    // 0x2937a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2937A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2937A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937A4u;
        // 0x2937a8: 0xacc50580  sw          $a1, 0x580($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1408), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2937A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2937ACu;
label_2937ac:
    // 0x2937ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2937ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2937B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937ACu;
        // 0x2937b0: 0xacc50584  sw          $a1, 0x584($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1412), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2937ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2937B4u;
label_2937b4:
    // 0x2937b4: 0xacc50574  sw          $a1, 0x574($a2)
    ctx->pc = 0x2937b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1396), GPR_U32(ctx, 5));
label_2937b8:
    // 0x2937b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2937B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2937B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2937C0u;
}
