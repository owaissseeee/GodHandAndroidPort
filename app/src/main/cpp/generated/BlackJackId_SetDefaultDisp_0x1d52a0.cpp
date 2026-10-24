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

// Function: BlackJackId_SetDefaultDisp
// Address: 0x1d52a0 - 0x1d5360
void BlackJackId_SetDefaultDisp_0x1d52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJackId_SetDefaultDisp_0x1d52a0");
#endif

    switch (ctx->pc) {
        case 0x1d52bcu: goto label_1d52bc;
        case 0x1d52ccu: goto label_1d52cc;
        case 0x1d52dcu: goto label_1d52dc;
        case 0x1d52ecu: goto label_1d52ec;
        case 0x1d52fcu: goto label_1d52fc;
        case 0x1d530cu: goto label_1d530c;
        case 0x1d531cu: goto label_1d531c;
        case 0x1d532cu: goto label_1d532c;
        case 0x1d533cu: goto label_1d533c;
        case 0x1d534cu: goto label_1d534c;
        default: break;
    }

    ctx->pc = 0x1d52a0u;

    // 0x1d52a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d52a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d52a4: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x1d52a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d52a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d52a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d52ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d52acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d52b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d52b4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D52B4u;
    SET_GPR_U32(ctx, 31, 0x1D52BCu);
    ctx->pc = 0x1D52B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52B4u;
    // 0x1d52b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D52B4u, 0x1D52BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52BCu;
label_1d52bc:
    // 0x1d52bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d52c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52c4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D52C4u;
    SET_GPR_U32(ctx, 31, 0x1D52CCu);
    ctx->pc = 0x1D52C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C4u;
    // 0x1d52c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D52C4u, 0x1D52CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52CCu;
label_1d52cc:
    // 0x1d52cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d52d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d52d4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D52D4u;
    SET_GPR_U32(ctx, 31, 0x1D52DCu);
    ctx->pc = 0x1D52D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52D4u;
    // 0x1d52d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D52D4u, 0x1D52DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52DCu;
label_1d52dc:
    // 0x1d52dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d52e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d52e4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D52E4u;
    SET_GPR_U32(ctx, 31, 0x1D52ECu);
    ctx->pc = 0x1D52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52E4u;
    // 0x1d52e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D52E4u, 0x1D52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52ECu;
label_1d52ec:
    // 0x1d52ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d52f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d52f4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D52F4u;
    SET_GPR_U32(ctx, 31, 0x1D52FCu);
    ctx->pc = 0x1D52F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52F4u;
    // 0x1d52f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D52F4u, 0x1D52FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52FCu;
label_1d52fc:
    // 0x1d52fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5300: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d5300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d5304: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5304u;
    SET_GPR_U32(ctx, 31, 0x1D530Cu);
    ctx->pc = 0x1D5308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5304u;
    // 0x1d5308: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5304u, 0x1D530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D530Cu;
label_1d530c:
    // 0x1d530c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5310: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1d5310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d5314: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5314u;
    SET_GPR_U32(ctx, 31, 0x1D531Cu);
    ctx->pc = 0x1D5318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5314u;
    // 0x1d5318: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5314u, 0x1D531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D531Cu;
label_1d531c:
    // 0x1d531c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5320: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d5320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d5324: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5324u;
    SET_GPR_U32(ctx, 31, 0x1D532Cu);
    ctx->pc = 0x1D5328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5324u;
    // 0x1d5328: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5324u, 0x1D532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D532Cu;
label_1d532c:
    // 0x1d532c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5330: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1d5330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d5334: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5334u;
    SET_GPR_U32(ctx, 31, 0x1D533Cu);
    ctx->pc = 0x1D5338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5334u;
    // 0x1d5338: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5334u, 0x1D533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D533Cu;
label_1d533c:
    // 0x1d533c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5340: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1d5340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d5344: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5344u;
    SET_GPR_U32(ctx, 31, 0x1D534Cu);
    ctx->pc = 0x1D5348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5344u;
    // 0x1d5348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5344u, 0x1D534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D534Cu;
label_1d534c:
    // 0x1d534c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d534cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5354: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5354u;
        // 0x1d5358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D535Cu;
    // 0x1d535c: 0x0  nop
    ctx->pc = 0x1d535cu;
    // NOP
    ctx->pc = 0x1d5360u;
}
