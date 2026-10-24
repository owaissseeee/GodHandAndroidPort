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

// Function: SyncDCache
// Address: 0x3b0510 - 0x3b0598
void SyncDCache_0x3b0510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SyncDCache_0x3b0510");
#endif

    switch (ctx->pc) {
        case 0x3b0548u: goto label_3b0548;
        case 0x3b055cu: goto label_3b055c;
        default: break;
    }

    ctx->pc = 0x3b0510u;

    // 0x3b0510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b0510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b0514: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b0514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b0518: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b0518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b051c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b051cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0520: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b0520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b0524: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b0524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b052c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3b052cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3b0530: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b0530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b0534: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3b0534u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3b0538: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0538u;
    {
        const bool branch_taken_0x3b0538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0538) {
            ctx->pc = 0x3B0548u;
            goto label_3b0548;
        }
    }
    ctx->pc = 0x3B0540u;
    // 0x3b0540: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B0540u;
    SET_GPR_U32(ctx, 31, 0x3B0548u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B0540u, 0x3B0548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0548u;
label_3b0548:
    // 0x3b0548: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b0548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3b054c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x3b054cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x3b0550: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x3b0550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3b0554: 0xc0ec11a  jal         func_3B0468
    ctx->pc = 0x3B0554u;
    SET_GPR_U32(ctx, 31, 0x3B055Cu);
    ctx->pc = 0x3B0558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0554u;
    // 0x3b0558: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0468u, 0x3B0554u, 0x3B055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B055Cu;
label_3b055c:
    // 0x3b055c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B055Cu;
    {
        const bool branch_taken_0x3b055c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B055Cu;
        // 0x3b0560: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b055c) {
            ctx->pc = 0x3B0578u;
            goto label_3b0578;
        }
    }
    ctx->pc = 0x3B0564u;
    // 0x3b0564: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b0564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0568: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b0568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b056c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b056cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0570: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3B0570u;
    ctx->pc = 0x3B0574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0570u;
    // 0x3b0574: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B0570u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B0578u;
label_3b0578:
    // 0x3b0578: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b0578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b057c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b057cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0584: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0584u;
        // 0x3b0588: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B058Cu;
    // 0x3b058c: 0x0  nop
    ctx->pc = 0x3b058cu;
    // NOP
    // 0x3b0590: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3b0590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3b0594: 0x0  nop
    ctx->pc = 0x3b0594u;
    // NOP
    ctx->pc = 0x3b0598u;
}
