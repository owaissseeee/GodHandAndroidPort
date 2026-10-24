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

// Function: func_00346368
// Address: 0x346368 - 0x3463f8
void func_00346368_0x346368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346368_0x346368");
#endif

    switch (ctx->pc) {
        case 0x34637cu: goto label_34637c;
        case 0x3463a0u: goto label_3463a0;
        case 0x3463b4u: goto label_3463b4;
        case 0x3463bcu: goto label_3463bc;
        case 0x3463d0u: goto label_3463d0;
        case 0x3463d8u: goto label_3463d8;
        default: break;
    }

    ctx->pc = 0x346368u;

    // 0x346368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34636c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346370: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x346370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x346374: 0xc0d18fe  jal         func_3463F8
    ctx->pc = 0x346374u;
    SET_GPR_U32(ctx, 31, 0x34637Cu);
    ctx->pc = 0x3463F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3463F8u, 0x346374u, 0x34637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34637Cu;
label_34637c:
    // 0x34637c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34637cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x346380: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x346380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346384: 0x14440015  bne         $v0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x346384u;
    {
        const bool branch_taken_0x346384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x346388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346384u;
        // 0x346388: 0x2470e080  addiu       $s0, $v1, -0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346384) {
            ctx->pc = 0x3463DCu;
            goto label_3463dc;
        }
    }
    ctx->pc = 0x34638Cu;
    // 0x34638c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x346390: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x346390u;
    {
        const bool branch_taken_0x346390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346390) {
            ctx->pc = 0x346394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346390u;
            // 0x346394: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3463E0u;
            goto label_3463e0;
        }
    }
    ctx->pc = 0x346398u;
    // 0x346398: 0xc0d191e  jal         func_346478
    ctx->pc = 0x346398u;
    SET_GPR_U32(ctx, 31, 0x3463A0u);
    ctx->pc = 0x346478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346478u, 0x346398u, 0x3463A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463A0u;
label_3463a0:
    // 0x3463a0: 0x3c060076  lui         $a2, 0x76
    ctx->pc = 0x3463a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)118 << 16));
    // 0x3463a4: 0x24c6cc80  addiu       $a2, $a2, -0x3380
    ctx->pc = 0x3463a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954112));
    // 0x3463a8: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x3463a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3463ac: 0xc0d1926  jal         func_346498
    ctx->pc = 0x3463ACu;
    SET_GPR_U32(ctx, 31, 0x3463B4u);
    ctx->pc = 0x3463B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3463ACu;
    // 0x3463b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346498u, 0x3463ACu, 0x3463B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463B4u;
label_3463b4:
    // 0x3463b4: 0xc0d1998  jal         func_346660
    ctx->pc = 0x3463B4u;
    SET_GPR_U32(ctx, 31, 0x3463BCu);
    ctx->pc = 0x3463B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3463B4u;
    // 0x3463b8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346660u, 0x3463B4u, 0x3463BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463BCu;
label_3463bc:
    // 0x3463bc: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x3463bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x3463c0: 0x24848c80  addiu       $a0, $a0, -0x7380
    ctx->pc = 0x3463c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937728));
    // 0x3463c4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x3463c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3463c8: 0xc0d195e  jal         func_346578
    ctx->pc = 0x3463C8u;
    SET_GPR_U32(ctx, 31, 0x3463D0u);
    ctx->pc = 0x3463CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3463C8u;
    // 0x3463cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346578u, 0x3463C8u, 0x3463D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463D0u;
label_3463d0:
    // 0x3463d0: 0xc0d1998  jal         func_346660
    ctx->pc = 0x3463D0u;
    SET_GPR_U32(ctx, 31, 0x3463D8u);
    ctx->pc = 0x3463D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3463D0u;
    // 0x3463d4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346660u, 0x3463D0u, 0x3463D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463D8u;
label_3463d8:
    // 0x3463d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3463d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3463dc:
    // 0x3463dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3463dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3463e0:
    // 0x3463e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3463e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3463e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3463E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3463E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3463E4u;
        // 0x3463e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3463E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3463ECu;
    // 0x3463ec: 0x0  nop
    ctx->pc = 0x3463ecu;
    // NOP
    // 0x3463f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3463f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3463f4: 0x0  nop
    ctx->pc = 0x3463f4u;
    // NOP
    ctx->pc = 0x3463f8u;
}
