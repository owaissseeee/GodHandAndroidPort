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

// Function: func_00334310
// Address: 0x334310 - 0x3344c8
void func_00334310_0x334310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334310_0x334310");
#endif

    switch (ctx->pc) {
        case 0x334340u: goto label_334340;
        case 0x334360u: goto label_334360;
        case 0x334368u: goto label_334368;
        case 0x334374u: goto label_334374;
        case 0x334380u: goto label_334380;
        case 0x334398u: goto label_334398;
        case 0x3343c0u: goto label_3343c0;
        case 0x3343e4u: goto label_3343e4;
        case 0x334400u: goto label_334400;
        case 0x334410u: goto label_334410;
        case 0x334418u: goto label_334418;
        case 0x334420u: goto label_334420;
        case 0x334430u: goto label_334430;
        case 0x33443cu: goto label_33443c;
        case 0x334450u: goto label_334450;
        case 0x334458u: goto label_334458;
        case 0x334460u: goto label_334460;
        case 0x334468u: goto label_334468;
        case 0x334478u: goto label_334478;
        case 0x334480u: goto label_334480;
        case 0x33448cu: goto label_33448c;
        case 0x3344a8u: goto label_3344a8;
        default: break;
    }

    ctx->pc = 0x334310u;

    // 0x334310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x334314: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x334314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x334318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x334318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33431c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33431cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x334320: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x334320u;
    {
        const bool branch_taken_0x334320 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x334324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334320u;
        // 0x334324: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334320) {
            ctx->pc = 0x334338u;
            goto label_334338;
        }
    }
    ctx->pc = 0x334328u;
    // 0x334328: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x334328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33432c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x33432Cu;
    {
        const bool branch_taken_0x33432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33432Cu;
        // 0x334330: 0x24a54708  addiu       $a1, $a1, 0x4708 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33432c) {
            ctx->pc = 0x3344A0u;
            goto label_3344a0;
        }
    }
    ctx->pc = 0x334334u;
    // 0x334334: 0x0  nop
    ctx->pc = 0x334334u;
    // NOP
label_334338:
    // 0x334338: 0xc0cd470  jal         func_3351C0
    ctx->pc = 0x334338u;
    SET_GPR_U32(ctx, 31, 0x334340u);
    ctx->pc = 0x33433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334338u;
    // 0x33433c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3351C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3351C0u, 0x334338u, 0x334340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334340u;
label_334340:
    // 0x334340: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x334340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x334344: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x334344u;
    {
        const bool branch_taken_0x334344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334344u;
        // 0x334348: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334344) {
            ctx->pc = 0x3344B0u;
            goto label_3344b0;
        }
    }
    ctx->pc = 0x33434Cu;
    // 0x33434c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x334350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334354: 0x2451a250  addiu       $s1, $v0, -0x5DB0
    ctx->pc = 0x334354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x334358: 0xc0cd35a  jal         func_334D68
    ctx->pc = 0x334358u;
    SET_GPR_U32(ctx, 31, 0x334360u);
    ctx->pc = 0x33435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334358u;
    // 0x33435c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334D68u, 0x334358u, 0x334360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334360u;
label_334360:
    // 0x334360: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334360u;
    SET_GPR_U32(ctx, 31, 0x334368u);
    ctx->pc = 0x334364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334360u;
    // 0x334364: 0x24044400  addiu       $a0, $zero, 0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334360u, 0x334368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334368u;
label_334368:
    // 0x334368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33436c: 0xc0cc7ba  jal         func_331EE8
    ctx->pc = 0x33436Cu;
    SET_GPR_U32(ctx, 31, 0x334374u);
    ctx->pc = 0x334370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33436Cu;
    // 0x334370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331EE8u, 0x33436Cu, 0x334374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334374u;
label_334374:
    // 0x334374: 0x24044401  addiu       $a0, $zero, 0x4401
    ctx->pc = 0x334374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17409));
    // 0x334378: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334378u;
    SET_GPR_U32(ctx, 31, 0x334380u);
    ctx->pc = 0x33437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334378u;
    // 0x33437c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334378u, 0x334380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334380u;
label_334380:
    // 0x334380: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334380u;
    {
        const bool branch_taken_0x334380 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x334384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334380u;
        // 0x334384: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334380) {
            ctx->pc = 0x3343A8u;
            goto label_3343a8;
        }
    }
    ctx->pc = 0x334388u;
    // 0x334388: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x334388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33438c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33438cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334390: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x334390u;
    SET_GPR_U32(ctx, 31, 0x334398u);
    ctx->pc = 0x334394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334390u;
    // 0x334394: 0x24844738  addiu       $a0, $a0, 0x4738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x334390u, 0x334398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334398u;
label_334398:
    // 0x334398: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x334398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33439c: 0x24a54758  addiu       $a1, $a1, 0x4758
    ctx->pc = 0x33439cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18264));
    // 0x3343a0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3343A0u;
    {
        const bool branch_taken_0x3343a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3343A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343A0u;
        // 0x3343a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3343a0) {
            ctx->pc = 0x3344A0u;
            goto label_3344a0;
        }
    }
    ctx->pc = 0x3343A8u;
label_3343a8:
    // 0x3343a8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3343a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3343ac: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3343ACu;
    {
        const bool branch_taken_0x3343ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3343ac) {
            ctx->pc = 0x3343B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3343ACu;
            // 0x3343b0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3343D0u;
            goto label_3343d0;
        }
    }
    ctx->pc = 0x3343B4u;
    // 0x3343b4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3343b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3343b8: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x3343B8u;
    SET_GPR_U32(ctx, 31, 0x3343C0u);
    ctx->pc = 0x3343BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343B8u;
    // 0x3343bc: 0x24844780  addiu       $a0, $a0, 0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x3343B8u, 0x3343C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343C0u;
label_3343c0:
    // 0x3343c0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3343c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3343c4: 0x24a547b8  addiu       $a1, $a1, 0x47B8
    ctx->pc = 0x3343c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18360));
    // 0x3343c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3343C8u;
    {
        const bool branch_taken_0x3343c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3343CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343C8u;
        // 0x3343cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3343c8) {
            ctx->pc = 0x3344A0u;
            goto label_3344a0;
        }
    }
    ctx->pc = 0x3343D0u;
label_3343d0:
    // 0x3343d0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3343D0u;
    {
        const bool branch_taken_0x3343d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3343d0) {
            ctx->pc = 0x3343F8u;
            goto label_3343f8;
        }
    }
    ctx->pc = 0x3343D8u;
    // 0x3343d8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3343d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3343dc: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x3343DCu;
    SET_GPR_U32(ctx, 31, 0x3343E4u);
    ctx->pc = 0x3343E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343DCu;
    // 0x3343e0: 0x248447e0  addiu       $a0, $a0, 0x47E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x3343DCu, 0x3343E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343E4u;
label_3343e4:
    // 0x3343e4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3343e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3343e8: 0x24a547b8  addiu       $a1, $a1, 0x47B8
    ctx->pc = 0x3343e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18360));
    // 0x3343ec: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3343ECu;
    {
        const bool branch_taken_0x3343ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3343F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343ECu;
        // 0x3343f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3343ec) {
            ctx->pc = 0x3344A0u;
            goto label_3344a0;
        }
    }
    ctx->pc = 0x3343F4u;
    // 0x3343f4: 0x0  nop
    ctx->pc = 0x3343f4u;
    // NOP
label_3343f8:
    // 0x3343f8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3343F8u;
    SET_GPR_U32(ctx, 31, 0x334400u);
    ctx->pc = 0x3343FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343F8u;
    // 0x3343fc: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3343F8u, 0x334400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334400u;
label_334400:
    // 0x334400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334408: 0xc0cc76e  jal         func_331DB8
    ctx->pc = 0x334408u;
    SET_GPR_U32(ctx, 31, 0x334410u);
    ctx->pc = 0x33440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334408u;
    // 0x33440c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331DB8u, 0x334408u, 0x334410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334410u;
label_334410:
    // 0x334410: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334410u;
    SET_GPR_U32(ctx, 31, 0x334418u);
    ctx->pc = 0x334414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334410u;
    // 0x334414: 0x24044601  addiu       $a0, $zero, 0x4601 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334410u, 0x334418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334418u;
label_334418:
    // 0x334418: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334418u;
    SET_GPR_U32(ctx, 31, 0x334420u);
    ctx->pc = 0x33441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334418u;
    // 0x33441c: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334418u, 0x334420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334420u;
label_334420:
    // 0x334420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334428: 0xc0cc76e  jal         func_331DB8
    ctx->pc = 0x334428u;
    SET_GPR_U32(ctx, 31, 0x334430u);
    ctx->pc = 0x33442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334428u;
    // 0x33442c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331DB8u, 0x334428u, 0x334430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334430u;
label_334430:
    // 0x334430: 0x24044601  addiu       $a0, $zero, 0x4601
    ctx->pc = 0x334430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    // 0x334434: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334434u;
    SET_GPR_U32(ctx, 31, 0x33443Cu);
    ctx->pc = 0x334438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334434u;
    // 0x334438: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334434u, 0x33443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33443Cu;
label_33443c:
    // 0x33443c: 0x621000c  bgez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x33443Cu;
    {
        const bool branch_taken_0x33443c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x334440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33443Cu;
        // 0x334440: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33443c) {
            ctx->pc = 0x334470u;
            goto label_334470;
        }
    }
    ctx->pc = 0x334444u;
    // 0x334444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x334444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334448: 0xc0cd002  jal         func_334008
    ctx->pc = 0x334448u;
    SET_GPR_U32(ctx, 31, 0x334450u);
    ctx->pc = 0x33444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334448u;
    // 0x33444c: 0x24a54818  addiu       $a1, $a1, 0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334008u, 0x334448u, 0x334450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334450u;
label_334450:
    // 0x334450: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334450u;
    SET_GPR_U32(ctx, 31, 0x334458u);
    ctx->pc = 0x334454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334450u;
    // 0x334454: 0x24044500  addiu       $a0, $zero, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334450u, 0x334458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334458u;
label_334458:
    // 0x334458: 0xc0cc7d4  jal         func_331F50
    ctx->pc = 0x334458u;
    SET_GPR_U32(ctx, 31, 0x334460u);
    ctx->pc = 0x33445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334458u;
    // 0x33445c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F50u, 0x334458u, 0x334460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334460u;
label_334460:
    // 0x334460: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334460u;
    SET_GPR_U32(ctx, 31, 0x334468u);
    ctx->pc = 0x334464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334460u;
    // 0x334464: 0x24044501  addiu       $a0, $zero, 0x4501 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17665));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334460u, 0x334468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334468u;
label_334468:
    // 0x334468: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x334468u;
    {
        const bool branch_taken_0x334468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334468u;
        // 0x33446c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334468) {
            ctx->pc = 0x3344B4u;
            goto label_3344b4;
        }
    }
    ctx->pc = 0x334470u;
label_334470:
    // 0x334470: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334470u;
    SET_GPR_U32(ctx, 31, 0x334478u);
    ctx->pc = 0x334474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334470u;
    // 0x334474: 0x24045000  addiu       $a0, $zero, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334470u, 0x334478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334478u;
label_334478:
    // 0x334478: 0xc0cc7d4  jal         func_331F50
    ctx->pc = 0x334478u;
    SET_GPR_U32(ctx, 31, 0x334480u);
    ctx->pc = 0x33447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334478u;
    // 0x33447c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F50u, 0x334478u, 0x334480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334480u;
label_334480:
    // 0x334480: 0x24045001  addiu       $a0, $zero, 0x5001
    ctx->pc = 0x334480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20481));
    // 0x334484: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x334484u;
    SET_GPR_U32(ctx, 31, 0x33448Cu);
    ctx->pc = 0x334488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334484u;
    // 0x334488: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x334484u, 0x33448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33448Cu;
label_33448c:
    // 0x33448c: 0x6030009  bgezl       $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33448Cu;
    {
        const bool branch_taken_0x33448c = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x33448c) {
            ctx->pc = 0x334490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33448Cu;
            // 0x334490: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3344B4u;
            goto label_3344b4;
        }
    }
    ctx->pc = 0x334494u;
    // 0x334494: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x334494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x334498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x334498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33449c: 0x24a54848  addiu       $a1, $a1, 0x4848
    ctx->pc = 0x33449cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18504));
label_3344a0:
    // 0x3344a0: 0xc0cd002  jal         func_334008
    ctx->pc = 0x3344A0u;
    SET_GPR_U32(ctx, 31, 0x3344A8u);
    ctx->pc = 0x334008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334008u, 0x3344A0u, 0x3344A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3344A8u;
label_3344a8:
    // 0x3344a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3344A8u;
    {
        const bool branch_taken_0x3344a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3344ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344A8u;
        // 0x3344ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344a8) {
            ctx->pc = 0x3344B4u;
            goto label_3344b4;
        }
    }
    ctx->pc = 0x3344B0u;
label_3344b0:
    // 0x3344b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3344b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3344b4:
    // 0x3344b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3344b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3344b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3344b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3344bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3344bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3344c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3344C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3344C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344C0u;
        // 0x3344c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3344C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3344C8u;
}
