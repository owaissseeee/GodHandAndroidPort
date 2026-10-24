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

// Function: func_001DE340
// Address: 0x1de340 - 0x1de428
void func_001DE340_0x1de340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DE340_0x1de340");
#endif

    switch (ctx->pc) {
        case 0x1de384u: goto label_1de384;
        case 0x1de394u: goto label_1de394;
        case 0x1de3b0u: goto label_1de3b0;
        case 0x1de3ccu: goto label_1de3cc;
        case 0x1de3dcu: goto label_1de3dc;
        case 0x1de3f0u: goto label_1de3f0;
        case 0x1de400u: goto label_1de400;
        case 0x1de418u: goto label_1de418;
        default: break;
    }

    ctx->pc = 0x1de340u;

    // 0x1de340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de344: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1de344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1de348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1de34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de354: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DE354u;
    {
        const bool branch_taken_0x1de354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE354u;
        // 0x1de358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de354) {
            ctx->pc = 0x1DE3A4u;
            goto label_1de3a4;
        }
    }
    ctx->pc = 0x1DE35Cu;
    // 0x1de35c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1de35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de360: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE360u;
    {
        const bool branch_taken_0x1de360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de360) {
            ctx->pc = 0x1DE364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE360u;
            // 0x1de364: 0x26040630  addiu       $a0, $s0, 0x630 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE37Cu;
            goto label_1de37c;
        }
    }
    ctx->pc = 0x1DE368u;
    // 0x1de368: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de36c: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DE36Cu;
    {
        const bool branch_taken_0x1de36c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE36Cu;
        // 0x1de370: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de36c) {
            ctx->pc = 0x1DE3B8u;
            goto label_1de3b8;
        }
    }
    ctx->pc = 0x1DE374u;
    // 0x1de374: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DE374u;
    {
        const bool branch_taken_0x1de374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE374u;
        // 0x1de378: 0x26040630  addiu       $a0, $s0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de374) {
            ctx->pc = 0x1DE408u;
            goto label_1de408;
        }
    }
    ctx->pc = 0x1DE37Cu;
label_1de37c:
    // 0x1de37c: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE37Cu;
    SET_GPR_U32(ctx, 31, 0x1DE384u);
    ctx->pc = 0x1DE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE37Cu;
    // 0x1de380: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE37Cu, 0x1DE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE384u;
label_1de384:
    // 0x1de384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de388: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1de388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1de38c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE38Cu;
    SET_GPR_U32(ctx, 31, 0x1DE394u);
    ctx->pc = 0x1DE390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE38Cu;
    // 0x1de390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE38Cu, 0x1DE394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE394u;
label_1de394:
    // 0x1de394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de398: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1de398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1de39c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1DE39Cu;
    {
        const bool branch_taken_0x1de39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE39Cu;
        // 0x1de3a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de39c) {
            ctx->pc = 0x1DE3E8u;
            goto label_1de3e8;
        }
    }
    ctx->pc = 0x1DE3A4u;
label_1de3a4:
    // 0x1de3a4: 0x26040630  addiu       $a0, $s0, 0x630
    ctx->pc = 0x1de3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x1de3a8: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE3A8u;
    SET_GPR_U32(ctx, 31, 0x1DE3B0u);
    ctx->pc = 0x1DE3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3A8u;
    // 0x1de3ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE3A8u, 0x1DE3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3B0u;
label_1de3b0:
    // 0x1de3b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE3B0u;
    {
        const bool branch_taken_0x1de3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3B0u;
        // 0x1de3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3b0) {
            ctx->pc = 0x1DE3D0u;
            goto label_1de3d0;
        }
    }
    ctx->pc = 0x1DE3B8u;
label_1de3b8:
    // 0x1de3b8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1de3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de3bc: 0x26040630  addiu       $a0, $s0, 0x630
    ctx->pc = 0x1de3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x1de3c0: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1de3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1de3c4: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE3C4u;
    SET_GPR_U32(ctx, 31, 0x1DE3CCu);
    ctx->pc = 0x1DE3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3C4u;
    // 0x1de3c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE3C4u, 0x1DE3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3CCu;
label_1de3cc:
    // 0x1de3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de3d0:
    // 0x1de3d0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1de3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1de3d4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE3D4u;
    SET_GPR_U32(ctx, 31, 0x1DE3DCu);
    ctx->pc = 0x1DE3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3D4u;
    // 0x1de3d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE3D4u, 0x1DE3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3DCu;
label_1de3dc:
    // 0x1de3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3e0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1de3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1de3e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de3e8:
    // 0x1de3e8: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE3E8u;
    SET_GPR_U32(ctx, 31, 0x1DE3F0u);
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE3E8u, 0x1DE3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3F0u;
label_1de3f0:
    // 0x1de3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3f4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1de3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1de3f8: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE3F8u;
    SET_GPR_U32(ctx, 31, 0x1DE400u);
    ctx->pc = 0x1DE3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3F8u;
    // 0x1de3fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE3F8u, 0x1DE400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE400u;
label_1de400:
    // 0x1de400: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE400u;
    {
        const bool branch_taken_0x1de400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE400u;
        // 0x1de404: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de400) {
            ctx->pc = 0x1DE41Cu;
            goto label_1de41c;
        }
    }
    ctx->pc = 0x1DE408u;
label_1de408:
    // 0x1de408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de40c: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x1de40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1de410: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE410u;
    SET_GPR_U32(ctx, 31, 0x1DE418u);
    ctx->pc = 0x1DE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE410u;
    // 0x1de414: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE410u, 0x1DE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE418u;
label_1de418:
    // 0x1de418: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1de418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de41c:
    // 0x1de41c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de420: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE420u;
        // 0x1de424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE428u;
}
