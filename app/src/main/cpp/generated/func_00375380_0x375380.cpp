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

// Function: func_00375380
// Address: 0x375380 - 0x3754a8
void func_00375380_0x375380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375380_0x375380");
#endif

    if (__builtin_expect(ctx->pc != 0x375380u, 0)) {
        switch (ctx->pc) {
            case 0x3753b4u: goto label_3753b4;
            case 0x3753d4u: goto label_3753d4;
            case 0x3753dcu: goto label_3753dc;
            case 0x3753e4u: goto label_3753e4;
            case 0x3753ecu: goto label_3753ec;
            case 0x3753f4u: goto label_3753f4;
            case 0x3753fcu: goto label_3753fc;
            case 0x375404u: goto label_375404;
            case 0x37540cu: goto label_37540c;
            case 0x375414u: goto label_375414;
            case 0x37541cu: goto label_37541c;
            case 0x375424u: goto label_375424;
            case 0x37542cu: goto label_37542c;
            case 0x375434u: goto label_375434;
            case 0x375440u: goto label_375440;
            case 0x375448u: goto label_375448;
            default: break;
        }
    }


    // 0x375380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x375384: 0x3c020077  lui         $v0, 0x77
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x375388: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x375388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37538c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x375390: 0x2451a790  addiu       $s1, $v0, -0x5870
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x375394: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x375394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x375398: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x375398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37539c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3753a0: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x3753a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x76A814u));
    // 0x3753a4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3753A4u;
    {
        const bool branch_taken_0x3753a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3753a4) {
            ctx->pc = 0x3753A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3753A4u;
            // 0x3753a8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3753BCu;
            goto label_3753bc;
        }
    }
    // 0x3753ac: 0xc0dd540  jal         func_375500
    ctx->pc = 0x3753ACu;
    SET_GPR_U32(ctx, 31, 0x3753B4u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00375500_0x375500, 0x375500u, 0x3753b4u)) {
        return;
    }
    ctx->pc = 0x3753B4u;
label_3753b4:
    // 0x3753b4: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x3753b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x3753b8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3753b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3753bc:
    // 0x3753bc: 0x3c031000  lui         $v1, 0x1000
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3753c0: 0x34630800  ori         $v1, $v1, 0x800
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x3753c4: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x3753c4u;
    SET_GPR_S32(ctx, 19, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x3753c8: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3753cc: 0xc0ddfe8  jal         func_377FA0
    SET_GPR_U32(ctx, 31, 0x3753D4u);
    ctx->pc = 0x3753D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3753CCu;
    // 0x3753d0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00377FA0_0x377fa0, 0x377fa0u, 0x3753d4u)) {
        return;
    }
    ctx->pc = 0x3753D4u;
label_3753d4:
    // 0x3753d4: 0xc0dddf0  jal         func_3777C0
    ctx->pc = 0x3753D4u;
    SET_GPR_U32(ctx, 31, 0x3753DCu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003777C0_0x3777c0, 0x3777c0u, 0x3753dcu)) {
        return;
    }
    ctx->pc = 0x3753DCu;
label_3753dc:
    // 0x3753dc: 0xc0df24c  jal         func_37C930
    ctx->pc = 0x3753DCu;
    SET_GPR_U32(ctx, 31, 0x3753E4u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0037C930_0x37c930, 0x37c930u, 0x3753e4u)) {
        return;
    }
    ctx->pc = 0x3753E4u;
label_3753e4:
    // 0x3753e4: 0xc0dd52a  jal         func_3754A8
    SET_GPR_U32(ctx, 31, 0x3753ECu);
    ctx->pc = 0x3753E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3753E4u;
    // 0x3753e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003754A8_0x3754a8, 0x3754a8u, 0x3753ecu)) {
        return;
    }
    ctx->pc = 0x3753ECu;
label_3753ec:
    // 0x3753ec: 0xc0df2a6  jal         func_37CA98
    ctx->pc = 0x3753ECu;
    SET_GPR_U32(ctx, 31, 0x3753F4u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0037CA98_0x37ca98, 0x37ca98u, 0x3753f4u)) {
        return;
    }
    ctx->pc = 0x3753F4u;
label_3753f4:
    // 0x3753f4: 0xc0e1b52  jal         func_386D48
    ctx->pc = 0x3753F4u;
    SET_GPR_U32(ctx, 31, 0x3753FCu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00386D48_0x386d48, 0x386d48u, 0x3753fcu)) {
        return;
    }
    ctx->pc = 0x3753FCu;
label_3753fc:
    // 0x3753fc: 0xc0ddb80  jal         func_376E00
    ctx->pc = 0x3753FCu;
    SET_GPR_U32(ctx, 31, 0x375404u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00376E00_0x376e00, 0x376e00u, 0x375404u)) {
        return;
    }
    ctx->pc = 0x375404u;
label_375404:
    // 0x375404: 0xc0dd7da  jal         func_375F68
    ctx->pc = 0x375404u;
    SET_GPR_U32(ctx, 31, 0x37540Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00375F68_0x375f68, 0x375f68u, 0x37540cu)) {
        return;
    }
    ctx->pc = 0x37540Cu;
label_37540c:
    // 0x37540c: 0xc0df2b8  jal         func_37CAE0
    ctx->pc = 0x37540Cu;
    SET_GPR_U32(ctx, 31, 0x375414u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0037CAE0_0x37cae0, 0x37cae0u, 0x375414u)) {
        return;
    }
    ctx->pc = 0x375414u;
label_375414:
    // 0x375414: 0xc0dd2c0  jal         func_374B00
    ctx->pc = 0x375414u;
    SET_GPR_U32(ctx, 31, 0x37541Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00374B00_0x374b00, 0x374b00u, 0x37541cu)) {
        return;
    }
    ctx->pc = 0x37541Cu;
label_37541c:
    // 0x37541c: 0xc0dde36  jal         func_3778D8
    ctx->pc = 0x37541Cu;
    SET_GPR_U32(ctx, 31, 0x375424u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003778D8_0x3778d8, 0x3778d8u, 0x375424u)) {
        return;
    }
    ctx->pc = 0x375424u;
label_375424:
    // 0x375424: 0xc0df388  jal         func_37CE20
    ctx->pc = 0x375424u;
    SET_GPR_U32(ctx, 31, 0x37542Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0037CE20_0x37ce20, 0x37ce20u, 0x37542cu)) {
        return;
    }
    ctx->pc = 0x37542Cu;
label_37542c:
    // 0x37542c: 0xc0dd53c  jal         func_3754F0
    SET_GPR_U32(ctx, 31, 0x375434u);
    ctx->pc = 0x375430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37542Cu;
    // 0x375430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Set_D_0076B080_Field_A4_3754F0_0x3754f0, 0x3754f0u, 0x375434u)) {
        return;
    }
    ctx->pc = 0x375434u;
label_375434:
    // 0x375434: 0x3c020077  lui         $v0, 0x77
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x375438: 0x2450a600  addiu       $s0, $v0, -0x5A00
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
    // 0x37543c: 0x2612018c  addiu       $s2, $s0, 0x18C
    ctx->pc = 0x37543cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 396));
label_375440:
    // 0x375440: 0xc0dcb2c  jal         func_372CB0
    SET_GPR_U32(ctx, 31, 0x375448u);
    ctx->pc = 0x375444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375440u;
    // 0x375444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00372CB0_0x372cb0, 0x372cb0u, 0x375448u)) {
        return;
    }
    ctx->pc = 0x375448u;
label_375448:
    // 0x375448: 0x26100084  addiu       $s0, $s0, 0x84
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x37544c: 0x212102a  slt         $v0, $s0, $s2
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x375450: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x375450u;
    {
        const bool branch_taken_0x375450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375450u;
        // 0x375454: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375450) {
            ctx->pc = 0x375440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375440;
        }
    }
    // 0x375458: 0x34420800  ori         $v0, $v0, 0x800
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x37545c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x375460: 0x53182b  sltu        $v1, $v0, $s3
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x375464: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x375464u;
    {
        const bool branch_taken_0x375464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375464u;
        // 0x375468: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375464) {
            ctx->pc = 0x375474u;
            goto label_375474;
        }
    }
    // 0x37546c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37546Cu;
    {
        const bool branch_taken_0x37546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37546Cu;
        // 0x375470: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37546c) {
            ctx->pc = 0x375478u;
            goto label_375478;
        }
    }
    ctx->pc = 0x375474u;
label_375474:
    // 0x375474: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x375474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_375478:
    // 0x375478: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x375478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x37547c: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x37547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x375480: 0x43102b  sltu        $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x375484: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x375484u;
    {
        const bool branch_taken_0x375484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x375484) {
            ctx->pc = 0x375488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375484u;
            // 0x375488: 0xae230090  sw          $v1, 0x90($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37548Cu;
            goto label_37548c;
        }
    }
    ctx->pc = 0x37548Cu;
label_37548c:
    // 0x37548c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37548cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375490: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x375490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375494: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x375494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375498: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x375498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37549c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37549cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3754a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3754A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3754A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3754A0u;
        // 0x3754a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3754A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3754A8u;
}