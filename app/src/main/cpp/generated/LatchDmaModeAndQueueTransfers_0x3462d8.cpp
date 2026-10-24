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

// Function: LatchDmaModeAndQueueTransfers
// Address: 0x3462d8 - 0x346368
void LatchDmaModeAndQueueTransfers_0x3462d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LatchDmaModeAndQueueTransfers_0x3462d8");
#endif

    switch (ctx->pc) {
        case 0x3462f0u: goto label_3462f0;
        case 0x346318u: goto label_346318;
        case 0x34632cu: goto label_34632c;
        case 0x346334u: goto label_346334;
        case 0x346348u: goto label_346348;
        case 0x346350u: goto label_346350;
        default: break;
    }

    ctx->pc = 0x3462d8u;

    // 0x3462d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3462d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3462dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3462dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3462e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3462e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3462e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3462e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3462e8: 0xc0d18fe  jal         func_3463F8
    ctx->pc = 0x3462E8u;
    SET_GPR_U32(ctx, 31, 0x3462F0u);
    ctx->pc = 0x3463F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3463F8u, 0x3462E8u, 0x3462F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462F0u;
label_3462f0:
    // 0x3462f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3462f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3462f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3462f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3462f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3462f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3462fc: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3462FCu;
    {
        const bool branch_taken_0x3462fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x346300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462FCu;
        // 0x346300: 0x2451e080  addiu       $s1, $v0, -0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3462fc) {
            ctx->pc = 0x346354u;
            goto label_346354;
        }
    }
    ctx->pc = 0x346304u;
    // 0x346304: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x346304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x346308: 0x50500013  beql        $v0, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x346308u;
    {
        const bool branch_taken_0x346308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x346308) {
            ctx->pc = 0x34630Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346308u;
            // 0x34630c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346358u;
            goto label_346358;
        }
    }
    ctx->pc = 0x346310u;
    // 0x346310: 0xc0d191e  jal         func_346478
    ctx->pc = 0x346310u;
    SET_GPR_U32(ctx, 31, 0x346318u);
    ctx->pc = 0x346478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346478u, 0x346310u, 0x346318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346318u;
label_346318:
    // 0x346318: 0x3c060076  lui         $a2, 0x76
    ctx->pc = 0x346318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)118 << 16));
    // 0x34631c: 0x24c68c80  addiu       $a2, $a2, -0x7380
    ctx->pc = 0x34631cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937728));
    // 0x346320: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x346320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x346324: 0xc0d1926  jal         func_346498
    ctx->pc = 0x346324u;
    SET_GPR_U32(ctx, 31, 0x34632Cu);
    ctx->pc = 0x346328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346324u;
    // 0x346328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346498u, 0x346324u, 0x34632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34632Cu;
label_34632c:
    // 0x34632c: 0xc0d1998  jal         func_346660
    ctx->pc = 0x34632Cu;
    SET_GPR_U32(ctx, 31, 0x346334u);
    ctx->pc = 0x346330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34632Cu;
    // 0x346330: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346660u, 0x34632Cu, 0x346334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346334u;
label_346334:
    // 0x346334: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x346334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x346338: 0x2484cc80  addiu       $a0, $a0, -0x3380
    ctx->pc = 0x346338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
    // 0x34633c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x34633cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x346340: 0xc0d195e  jal         func_346578
    ctx->pc = 0x346340u;
    SET_GPR_U32(ctx, 31, 0x346348u);
    ctx->pc = 0x346344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346340u;
    // 0x346344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346578u, 0x346340u, 0x346348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346348u;
label_346348:
    // 0x346348: 0xc0d1998  jal         func_346660
    ctx->pc = 0x346348u;
    SET_GPR_U32(ctx, 31, 0x346350u);
    ctx->pc = 0x34634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346348u;
    // 0x34634c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346660u, 0x346348u, 0x346350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346350u;
label_346350:
    // 0x346350: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x346350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_346354:
    // 0x346354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346358:
    // 0x346358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34635c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346360: 0x3e00008  jr          $ra
    ctx->pc = 0x346360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346360u;
        // 0x346364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346368u;
}
