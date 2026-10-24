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

// Function: func_00344568
// Address: 0x344568 - 0x344610
void func_00344568_0x344568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344568_0x344568");
#endif

    switch (ctx->pc) {
        case 0x34459cu: goto label_34459c;
        case 0x3445c4u: goto label_3445c4;
        case 0x3445d8u: goto label_3445d8;
        case 0x3445f8u: goto label_3445f8;
        default: break;
    }

    ctx->pc = 0x344568u;

    // 0x344568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34456c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34456cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344570: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x344570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x344574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34457c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344580: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x344580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x344584: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x344584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x344588: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x344588u;
    {
        const bool branch_taken_0x344588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344588u;
        // 0x34458c: 0x262301ec  addiu       $v1, $s1, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344588) {
            ctx->pc = 0x3445A8u;
            goto label_3445a8;
        }
    }
    ctx->pc = 0x344590u;
    // 0x344590: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x344590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x344594: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x344594u;
    SET_GPR_U32(ctx, 31, 0x34459Cu);
    ctx->pc = 0x344598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344594u;
    // 0x344598: 0x24847748  addiu       $a0, $a0, 0x7748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x344594u, 0x34459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34459Cu;
label_34459c:
    // 0x34459c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x34459Cu;
    {
        const bool branch_taken_0x34459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3445A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34459Cu;
        // 0x3445a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34459c) {
            ctx->pc = 0x3445FCu;
            goto label_3445fc;
        }
    }
    ctx->pc = 0x3445A4u;
    // 0x3445a4: 0x0  nop
    ctx->pc = 0x3445a4u;
    // NOP
label_3445a8:
    // 0x3445a8: 0x4c00014  bltz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3445A8u;
    {
        const bool branch_taken_0x3445a8 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x3445ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445A8u;
        // 0x3445ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3445a8) {
            ctx->pc = 0x3445FCu;
            goto label_3445fc;
        }
    }
    ctx->pc = 0x3445B0u;
    // 0x3445b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3445b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3445b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3445B4u;
    {
        const bool branch_taken_0x3445b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3445b4) {
            ctx->pc = 0x3445D0u;
            goto label_3445d0;
        }
    }
    ctx->pc = 0x3445BCu;
    // 0x3445bc: 0xc0d1184  jal         func_344610
    ctx->pc = 0x3445BCu;
    SET_GPR_U32(ctx, 31, 0x3445C4u);
    ctx->pc = 0x344610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344610u, 0x3445BCu, 0x3445C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445C4u;
label_3445c4:
    // 0x3445c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3445C4u;
    {
        const bool branch_taken_0x3445c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3445C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445C4u;
        // 0x3445c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3445c4) {
            ctx->pc = 0x3445DCu;
            goto label_3445dc;
        }
    }
    ctx->pc = 0x3445CCu;
    // 0x3445cc: 0x0  nop
    ctx->pc = 0x3445ccu;
    // NOP
label_3445d0:
    // 0x3445d0: 0xc0d1192  jal         func_344648
    ctx->pc = 0x3445D0u;
    SET_GPR_U32(ctx, 31, 0x3445D8u);
    ctx->pc = 0x3445D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445D0u;
    // 0x3445d4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344648u, 0x3445D0u, 0x3445D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445D8u;
label_3445d8:
    // 0x3445d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3445d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3445dc:
    // 0x3445dc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3445DCu;
    {
        const bool branch_taken_0x3445dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3445E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445DCu;
        // 0x3445e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3445dc) {
            ctx->pc = 0x3445F8u;
            goto label_3445f8;
        }
    }
    ctx->pc = 0x3445E4u;
    // 0x3445e4: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x3445e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x3445e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3445e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3445ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3445ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3445f0: 0xc0d11dc  jal         func_344770
    ctx->pc = 0x3445F0u;
    SET_GPR_U32(ctx, 31, 0x3445F8u);
    ctx->pc = 0x3445F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445F0u;
    // 0x3445f4: 0xac500204  sw          $s0, 0x204($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 516), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344770u, 0x3445F0u, 0x3445F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445F8u;
label_3445f8:
    // 0x3445f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3445f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3445fc:
    // 0x3445fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3445fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344608: 0x3e00008  jr          $ra
    ctx->pc = 0x344608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344608u;
        // 0x34460c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344610u;
}
