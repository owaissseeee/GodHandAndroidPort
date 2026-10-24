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

// Function: func_00375748
// Address: 0x375748 - 0x3757a0
void func_00375748_0x375748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375748_0x375748");
#endif

    ctx->pc = 0x375748u;

    // 0x375748: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x375748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x37574c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37574cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x375750: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x375750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x375754: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x375754u;
    {
        const bool branch_taken_0x375754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375754u;
        // 0x375758: 0x2445a790  addiu       $a1, $v0, -0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375754) {
            ctx->pc = 0x375768u;
            goto label_375768;
        }
    }
    ctx->pc = 0x37575Cu;
    // 0x37575c: 0x94a20022  lhu         $v0, 0x22($a1)
    ctx->pc = 0x37575cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x375760: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x375760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x375764: 0xa4a20022  sh          $v0, 0x22($a1)
    ctx->pc = 0x375764u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 2));
label_375768:
    // 0x375768: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x375768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x37576c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37576Cu;
    {
        const bool branch_taken_0x37576c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x375770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37576Cu;
        // 0x375770: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37576c) {
            ctx->pc = 0x375784u;
            goto label_375784;
        }
    }
    ctx->pc = 0x375774u;
    // 0x375774: 0x94a20022  lhu         $v0, 0x22($a1)
    ctx->pc = 0x375774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x375778: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x375778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x37577c: 0xa4a20022  sh          $v0, 0x22($a1)
    ctx->pc = 0x37577cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x375780: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x375780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_375784:
    // 0x375784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x375784u;
    {
        const bool branch_taken_0x375784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x375784) {
            ctx->pc = 0x375798u;
            goto label_375798;
        }
    }
    ctx->pc = 0x37578Cu;
    // 0x37578c: 0x94a20022  lhu         $v0, 0x22($a1)
    ctx->pc = 0x37578cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x375790: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x375790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x375794: 0xa4a20022  sh          $v0, 0x22($a1)
    ctx->pc = 0x375794u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 2));
label_375798:
    // 0x375798: 0x3e00008  jr          $ra
    ctx->pc = 0x375798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3757A0u;
}
