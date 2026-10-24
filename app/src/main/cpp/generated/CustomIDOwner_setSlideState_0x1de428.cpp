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

// Function: CustomIDOwner_setSlideState
// Address: 0x1de428 - 0x1de4f8
void CustomIDOwner_setSlideState_0x1de428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDOwner_setSlideState_0x1de428");
#endif

    switch (ctx->pc) {
        case 0x1de46cu: goto label_1de46c;
        case 0x1de47cu: goto label_1de47c;
        case 0x1de490u: goto label_1de490;
        case 0x1de4acu: goto label_1de4ac;
        case 0x1de4bcu: goto label_1de4bc;
        case 0x1de4d4u: goto label_1de4d4;
        case 0x1de4e4u: goto label_1de4e4;
        default: break;
    }

    ctx->pc = 0x1de428u;

    // 0x1de428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de42c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1de42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de430: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1de430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1de434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de43c: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE43Cu;
    {
        const bool branch_taken_0x1de43c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE43Cu;
        // 0x1de440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de43c) {
            ctx->pc = 0x1DE484u;
            goto label_1de484;
        }
    }
    ctx->pc = 0x1DE444u;
    // 0x1de444: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1de444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de448: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE448u;
    {
        const bool branch_taken_0x1de448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de448) {
            ctx->pc = 0x1DE44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE448u;
            // 0x1de44c: 0x260400dc  addiu       $a0, $s0, 0xDC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE464u;
            goto label_1de464;
        }
    }
    ctx->pc = 0x1DE450u;
    // 0x1de450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de454: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DE454u;
    {
        const bool branch_taken_0x1de454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE454u;
        // 0x1de458: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de454) {
            ctx->pc = 0x1DE498u;
            goto label_1de498;
        }
    }
    ctx->pc = 0x1DE45Cu;
    // 0x1de45c: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DE45Cu;
    {
        const bool branch_taken_0x1de45c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE45Cu;
        // 0x1de460: 0x260400dc  addiu       $a0, $s0, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de45c) {
            ctx->pc = 0x1DE4C4u;
            goto label_1de4c4;
        }
    }
    ctx->pc = 0x1DE464u;
label_1de464:
    // 0x1de464: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1DE464u;
    SET_GPR_U32(ctx, 31, 0x1DE46Cu);
    ctx->pc = 0x1DE468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE464u;
    // 0x1de468: 0x2405ffba  addiu       $a1, $zero, -0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1DE464u, 0x1DE46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE46Cu;
label_1de46c:
    // 0x1de46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de470: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1de470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de474: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE474u;
    SET_GPR_U32(ctx, 31, 0x1DE47Cu);
    ctx->pc = 0x1DE478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE474u;
    // 0x1de478: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE474u, 0x1DE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE47Cu;
label_1de47c:
    // 0x1de47c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DE47Cu;
    {
        const bool branch_taken_0x1de47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE47Cu;
        // 0x1de480: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de47c) {
            ctx->pc = 0x1DE4E8u;
            goto label_1de4e8;
        }
    }
    ctx->pc = 0x1DE484u;
label_1de484:
    // 0x1de484: 0x260400dc  addiu       $a0, $s0, 0xDC
    ctx->pc = 0x1de484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x1de488: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1DE488u;
    SET_GPR_U32(ctx, 31, 0x1DE490u);
    ctx->pc = 0x1DE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE488u;
    // 0x1de48c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1DE488u, 0x1DE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE490u;
label_1de490:
    // 0x1de490: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE490u;
    {
        const bool branch_taken_0x1de490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE490u;
        // 0x1de494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de490) {
            ctx->pc = 0x1DE4B0u;
            goto label_1de4b0;
        }
    }
    ctx->pc = 0x1DE498u;
label_1de498:
    // 0x1de498: 0x260400dc  addiu       $a0, $s0, 0xDC
    ctx->pc = 0x1de498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x1de49c: 0x2405ffba  addiu       $a1, $zero, -0x46
    ctx->pc = 0x1de49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x1de4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4a4: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1DE4A4u;
    SET_GPR_U32(ctx, 31, 0x1DE4ACu);
    ctx->pc = 0x1DE4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4A4u;
    // 0x1de4a8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1DE4A4u, 0x1DE4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4ACu;
label_1de4ac:
    // 0x1de4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de4b0:
    // 0x1de4b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1de4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de4b4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE4B4u;
    SET_GPR_U32(ctx, 31, 0x1DE4BCu);
    ctx->pc = 0x1DE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4B4u;
    // 0x1de4b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE4B4u, 0x1DE4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4BCu;
label_1de4bc:
    // 0x1de4bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DE4BCu;
    {
        const bool branch_taken_0x1de4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4BCu;
        // 0x1de4c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4bc) {
            ctx->pc = 0x1DE4E8u;
            goto label_1de4e8;
        }
    }
    ctx->pc = 0x1DE4C4u;
label_1de4c4:
    // 0x1de4c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4c8: 0x2406ffba  addiu       $a2, $zero, -0x46
    ctx->pc = 0x1de4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x1de4cc: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1DE4CCu;
    SET_GPR_U32(ctx, 31, 0x1DE4D4u);
    ctx->pc = 0x1DE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4CCu;
    // 0x1de4d0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1DE4CCu, 0x1DE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4D4u;
label_1de4d4:
    // 0x1de4d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1de4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de4dc: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE4DCu;
    SET_GPR_U32(ctx, 31, 0x1DE4E4u);
    ctx->pc = 0x1DE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4DCu;
    // 0x1de4e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE4DCu, 0x1DE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4E4u;
label_1de4e4:
    // 0x1de4e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1de4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de4e8:
    // 0x1de4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4ECu;
        // 0x1de4f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE4F4u;
    // 0x1de4f4: 0x0  nop
    ctx->pc = 0x1de4f4u;
    // NOP
    ctx->pc = 0x1de4f8u;
}
