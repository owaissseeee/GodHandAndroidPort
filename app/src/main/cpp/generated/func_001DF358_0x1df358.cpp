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

// Function: func_001DF358
// Address: 0x1df358 - 0x1df428
void func_001DF358_0x1df358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DF358_0x1df358");
#endif

    switch (ctx->pc) {
        case 0x1df39cu: goto label_1df39c;
        case 0x1df3acu: goto label_1df3ac;
        case 0x1df3c0u: goto label_1df3c0;
        case 0x1df3dcu: goto label_1df3dc;
        case 0x1df3ecu: goto label_1df3ec;
        case 0x1df404u: goto label_1df404;
        case 0x1df414u: goto label_1df414;
        default: break;
    }

    ctx->pc = 0x1df358u;

    // 0x1df358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df35c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1df35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1df360: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df36c: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DF36Cu;
    {
        const bool branch_taken_0x1df36c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF36Cu;
        // 0x1df370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df36c) {
            ctx->pc = 0x1DF3B4u;
            goto label_1df3b4;
        }
    }
    ctx->pc = 0x1DF374u;
    // 0x1df374: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1df374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df378: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF378u;
    {
        const bool branch_taken_0x1df378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df378) {
            ctx->pc = 0x1DF37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF378u;
            // 0x1df37c: 0x260400dc  addiu       $a0, $s0, 0xDC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF394u;
            goto label_1df394;
        }
    }
    ctx->pc = 0x1DF380u;
    // 0x1df380: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df384: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF384u;
    {
        const bool branch_taken_0x1df384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF384u;
        // 0x1df388: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df384) {
            ctx->pc = 0x1DF3C8u;
            goto label_1df3c8;
        }
    }
    ctx->pc = 0x1DF38Cu;
    // 0x1df38c: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DF38Cu;
    {
        const bool branch_taken_0x1df38c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF38Cu;
        // 0x1df390: 0x260400dc  addiu       $a0, $s0, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df38c) {
            ctx->pc = 0x1DF3F4u;
            goto label_1df3f4;
        }
    }
    ctx->pc = 0x1DF394u;
label_1df394:
    // 0x1df394: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1DF394u;
    SET_GPR_U32(ctx, 31, 0x1DF39Cu);
    ctx->pc = 0x1DF398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF394u;
    // 0x1df398: 0x2405ffba  addiu       $a1, $zero, -0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1DF394u, 0x1DF39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF39Cu;
label_1df39c:
    // 0x1df39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1df3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df3a4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF3A4u;
    SET_GPR_U32(ctx, 31, 0x1DF3ACu);
    ctx->pc = 0x1DF3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3A4u;
    // 0x1df3a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF3A4u, 0x1DF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3ACu;
label_1df3ac:
    // 0x1df3ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DF3ACu;
    {
        const bool branch_taken_0x1df3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3ACu;
        // 0x1df3b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3ac) {
            ctx->pc = 0x1DF418u;
            goto label_1df418;
        }
    }
    ctx->pc = 0x1DF3B4u;
label_1df3b4:
    // 0x1df3b4: 0x260400dc  addiu       $a0, $s0, 0xDC
    ctx->pc = 0x1df3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x1df3b8: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1DF3B8u;
    SET_GPR_U32(ctx, 31, 0x1DF3C0u);
    ctx->pc = 0x1DF3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3B8u;
    // 0x1df3bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1DF3B8u, 0x1DF3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3C0u;
label_1df3c0:
    // 0x1df3c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF3C0u;
    {
        const bool branch_taken_0x1df3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3C0u;
        // 0x1df3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3c0) {
            ctx->pc = 0x1DF3E0u;
            goto label_1df3e0;
        }
    }
    ctx->pc = 0x1DF3C8u;
label_1df3c8:
    // 0x1df3c8: 0x260400dc  addiu       $a0, $s0, 0xDC
    ctx->pc = 0x1df3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x1df3cc: 0x2405ffba  addiu       $a1, $zero, -0x46
    ctx->pc = 0x1df3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x1df3d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3d4: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1DF3D4u;
    SET_GPR_U32(ctx, 31, 0x1DF3DCu);
    ctx->pc = 0x1DF3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3D4u;
    // 0x1df3d8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1DF3D4u, 0x1DF3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3DCu;
label_1df3dc:
    // 0x1df3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df3e0:
    // 0x1df3e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1df3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df3e4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF3E4u;
    SET_GPR_U32(ctx, 31, 0x1DF3ECu);
    ctx->pc = 0x1DF3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3E4u;
    // 0x1df3e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF3E4u, 0x1DF3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3ECu;
label_1df3ec:
    // 0x1df3ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DF3ECu;
    {
        const bool branch_taken_0x1df3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3ECu;
        // 0x1df3f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3ec) {
            ctx->pc = 0x1DF418u;
            goto label_1df418;
        }
    }
    ctx->pc = 0x1DF3F4u;
label_1df3f4:
    // 0x1df3f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3f8: 0x2406ffba  addiu       $a2, $zero, -0x46
    ctx->pc = 0x1df3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x1df3fc: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1DF3FCu;
    SET_GPR_U32(ctx, 31, 0x1DF404u);
    ctx->pc = 0x1DF400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3FCu;
    // 0x1df400: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1DF3FCu, 0x1DF404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF404u;
label_1df404:
    // 0x1df404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1df408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df40c: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF40Cu;
    SET_GPR_U32(ctx, 31, 0x1DF414u);
    ctx->pc = 0x1DF410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF40Cu;
    // 0x1df410: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF40Cu, 0x1DF414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF414u;
label_1df414:
    // 0x1df414: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df418:
    // 0x1df418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df41c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF41Cu;
        // 0x1df420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF424u;
    // 0x1df424: 0x0  nop
    ctx->pc = 0x1df424u;
    // NOP
    ctx->pc = 0x1df428u;
}
