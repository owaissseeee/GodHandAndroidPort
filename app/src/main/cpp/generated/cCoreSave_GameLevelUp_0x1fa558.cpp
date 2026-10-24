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

// Function: cCoreSave_GameLevelUp
// Address: 0x1fa558 - 0x1fa620
void cCoreSave_GameLevelUp_0x1fa558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_GameLevelUp_0x1fa558");
#endif

    switch (ctx->pc) {
        case 0x1fa590u: goto label_1fa590;
        case 0x1fa5c4u: goto label_1fa5c4;
        case 0x1fa5d8u: goto label_1fa5d8;
        case 0x1fa5ecu: goto label_1fa5ec;
        case 0x1fa600u: goto label_1fa600;
        default: break;
    }

    ctx->pc = 0x1fa558u;

    // 0x1fa558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa55c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fa55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fa560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fa564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa56c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FA56Cu;
    {
        const bool branch_taken_0x1fa56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA56Cu;
        // 0x1fa570: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa56c) {
            ctx->pc = 0x1FA60Cu;
            goto label_1fa60c;
        }
    }
    ctx->pc = 0x1FA574u;
    // 0x1fa574: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1fa574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1fa578: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x1fa578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x1fa57c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fa57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fa580: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FA580u;
    {
        const bool branch_taken_0x1fa580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa580) {
            ctx->pc = 0x1FA584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA580u;
            // 0x1fa584: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA610u;
            goto label_1fa610;
        }
    }
    ctx->pc = 0x1FA588u;
    // 0x1fa588: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1FA588u;
    SET_GPR_U32(ctx, 31, 0x1FA590u);
    ctx->pc = 0x1FA58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA588u;
    // 0x1fa58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1FA588u, 0x1FA590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA590u;
label_1fa590:
    // 0x1fa590: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1fa590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fa594: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1fa594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fa598: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA598u;
    {
        const bool branch_taken_0x1fa598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA598u;
        // 0x1fa59c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa598) {
            ctx->pc = 0x1FA5B8u;
            goto label_1fa5b8;
        }
    }
    ctx->pc = 0x1FA5A0u;
    // 0x1fa5a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa5a4: 0x2442c450  addiu       $v0, $v0, -0x3BB0
    ctx->pc = 0x1fa5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    // 0x1fa5a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa5ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fa5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa5b0: 0x800008  jr          $a0
    ctx->pc = 0x1FA5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA5B8u: goto label_1fa5b8;
            case 0x1FA5CCu: goto label_1fa5cc;
            case 0x1FA5E0u: goto label_1fa5e0;
            case 0x1FA5F4u: goto label_1fa5f4;
            case 0x1FA60Cu: goto label_1fa60c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA5B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FA5B8u;
label_1fa5b8:
    // 0x1fa5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5bc: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1FA5BCu;
    SET_GPR_U32(ctx, 31, 0x1FA5C4u);
    ctx->pc = 0x1FA5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA5BCu;
    // 0x1fa5c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1FA5BCu, 0x1FA5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5C4u;
label_1fa5c4:
    // 0x1fa5c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FA5C4u;
    {
        const bool branch_taken_0x1fa5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5C4u;
        // 0x1fa5c8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5c4) {
            ctx->pc = 0x1FA604u;
            goto label_1fa604;
        }
    }
    ctx->pc = 0x1FA5CCu;
label_1fa5cc:
    // 0x1fa5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5d0: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1FA5D0u;
    SET_GPR_U32(ctx, 31, 0x1FA5D8u);
    ctx->pc = 0x1FA5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA5D0u;
    // 0x1fa5d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1FA5D0u, 0x1FA5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5D8u;
label_1fa5d8:
    // 0x1fa5d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FA5D8u;
    {
        const bool branch_taken_0x1fa5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5D8u;
        // 0x1fa5dc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5d8) {
            ctx->pc = 0x1FA604u;
            goto label_1fa604;
        }
    }
    ctx->pc = 0x1FA5E0u;
label_1fa5e0:
    // 0x1fa5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5e4: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1FA5E4u;
    SET_GPR_U32(ctx, 31, 0x1FA5ECu);
    ctx->pc = 0x1FA5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA5E4u;
    // 0x1fa5e8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1FA5E4u, 0x1FA5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5ECu;
label_1fa5ec:
    // 0x1fa5ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA5ECu;
    {
        const bool branch_taken_0x1fa5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5ECu;
        // 0x1fa5f0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5ec) {
            ctx->pc = 0x1FA604u;
            goto label_1fa604;
        }
    }
    ctx->pc = 0x1FA5F4u;
label_1fa5f4:
    // 0x1fa5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5f8: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1FA5F8u;
    SET_GPR_U32(ctx, 31, 0x1FA600u);
    ctx->pc = 0x1FA5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA5F8u;
    // 0x1fa5fc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1FA5F8u, 0x1FA600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA600u;
label_1fa600:
    // 0x1fa600: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fa604:
    // 0x1fa604: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fa604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa608: 0xa062001e  sb          $v0, 0x1E($v1)
    ctx->pc = 0x1fa608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 2));
label_1fa60c:
    // 0x1fa60c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fa60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa610:
    // 0x1fa610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa614: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA614u;
        // 0x1fa618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA61Cu;
    // 0x1fa61c: 0x0  nop
    ctx->pc = 0x1fa61cu;
    // NOP
    ctx->pc = 0x1fa620u;
}
