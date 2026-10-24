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

// Function: func_00319848
// Address: 0x319848 - 0x319960
void func_00319848_0x319848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00319848_0x319848");
#endif

    switch (ctx->pc) {
        case 0x319930u: goto label_319930;
        default: break;
    }

    ctx->pc = 0x319848u;

    // 0x319848: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x319848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x31984c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31984cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319850: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x319850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x319854: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x319854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x319858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31985c: 0x24477a80  addiu       $a3, $v0, 0x7A80
    ctx->pc = 0x31985cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
    // 0x319860: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x319860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x319864: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x319864u;
    {
        const bool branch_taken_0x319864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x319868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319864u;
        // 0x319868: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319864) {
            ctx->pc = 0x31994Cu;
            goto label_31994c;
        }
    }
    ctx->pc = 0x31986Cu;
    // 0x31986c: 0x90e2ffad  lbu         $v0, -0x53($a3)
    ctx->pc = 0x31986cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967213)));
    // 0x319870: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x319870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x319874: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x319874u;
    {
        const bool branch_taken_0x319874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319874u;
        // 0x319878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319874) {
            ctx->pc = 0x319950u;
            goto label_319950;
        }
    }
    ctx->pc = 0x31987Cu;
    // 0x31987c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x31987cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x319880: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x319880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319884: 0x24634c38  addiu       $v1, $v1, 0x4C38
    ctx->pc = 0x319884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x319888: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x319888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x754C3Cu));
    // 0x31988c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31988Cu;
    {
        const bool branch_taken_0x31988c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31988Cu;
        // 0x319890: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31988c) {
            ctx->pc = 0x3198B8u;
            goto label_3198b8;
        }
    }
    ctx->pc = 0x319894u;
    // 0x319894: 0x5c400010  bgtzl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x319894u;
    {
        const bool branch_taken_0x319894 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x319894) {
            ctx->pc = 0x319898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319894u;
            // 0x319898: 0x90c2032d  lbu         $v0, 0x32D($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 813)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3198D8u;
            goto label_3198d8;
        }
    }
    ctx->pc = 0x31989Cu;
    // 0x31989c: 0x8cc30320  lw          $v1, 0x320($a2)
    ctx->pc = 0x31989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 800)));
    // 0x3198a0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3198a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x3198a4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3198a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3198a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3198A8u;
    {
        const bool branch_taken_0x3198a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3198ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198A8u;
        // 0x3198ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198a8) {
            ctx->pc = 0x3198D4u;
            goto label_3198d4;
        }
    }
    ctx->pc = 0x3198B0u;
    // 0x3198b0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3198B0u;
    {
        const bool branch_taken_0x3198b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3198B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198B0u;
        // 0x3198b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198b0) {
            ctx->pc = 0x319954u;
            goto label_319954;
        }
    }
    ctx->pc = 0x3198B8u;
label_3198b8:
    // 0x3198b8: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3198B8u;
    {
        const bool branch_taken_0x3198b8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3198b8) {
            ctx->pc = 0x3198BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3198B8u;
            // 0x3198bc: 0x90c2032d  lbu         $v0, 0x32D($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 813)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3198D8u;
            goto label_3198d8;
        }
    }
    ctx->pc = 0x3198C0u;
    // 0x3198c0: 0x8cc30320  lw          $v1, 0x320($a2)
    ctx->pc = 0x3198c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 800)));
    // 0x3198c4: 0x90620035  lbu         $v0, 0x35($v1)
    ctx->pc = 0x3198c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 53)));
    // 0x3198c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3198c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3198cc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3198CCu;
    {
        const bool branch_taken_0x3198cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3198D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198CCu;
        // 0x3198d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198cc) {
            ctx->pc = 0x319950u;
            goto label_319950;
        }
    }
    ctx->pc = 0x3198D4u;
label_3198d4:
    // 0x3198d4: 0x90c2032d  lbu         $v0, 0x32D($a2)
    ctx->pc = 0x3198d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 813)));
label_3198d8:
    // 0x3198d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3198D8u;
    {
        const bool branch_taken_0x3198d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3198DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198D8u;
        // 0x3198dc: 0x24824c38  addiu       $v0, $a0, 0x4C38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 19512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198d8) {
            ctx->pc = 0x3198F4u;
            goto label_3198f4;
        }
    }
    ctx->pc = 0x3198E0u;
    // 0x3198e0: 0x90430005  lbu         $v1, 0x5($v0)
    ctx->pc = 0x3198e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x3198e4: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3198E4u;
    {
        const bool branch_taken_0x3198e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3198e4) {
            ctx->pc = 0x3198E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3198E4u;
            // 0x3198e8: 0x8cc30250  lw          $v1, 0x250($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319908u;
            goto label_319908;
        }
    }
    ctx->pc = 0x3198ECu;
    // 0x3198ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3198ECu;
    {
        const bool branch_taken_0x3198ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3198F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198ECu;
        // 0x3198f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198ec) {
            ctx->pc = 0x319950u;
            goto label_319950;
        }
    }
    ctx->pc = 0x3198F4u;
label_3198f4:
    // 0x3198f4: 0x90430005  lbu         $v1, 0x5($v0)
    ctx->pc = 0x3198f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x3198f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3198f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3198fc: 0x10640014  beq         $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3198FCu;
    {
        const bool branch_taken_0x3198fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x319900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198FCu;
        // 0x319900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198fc) {
            ctx->pc = 0x319950u;
            goto label_319950;
        }
    }
    ctx->pc = 0x319904u;
    // 0x319904: 0x8cc30250  lw          $v1, 0x250($a2)
    ctx->pc = 0x319904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
label_319908:
    // 0x319908: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x319908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x31990c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31990Cu;
    {
        const bool branch_taken_0x31990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31990Cu;
        // 0x319910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31990c) {
            ctx->pc = 0x319950u;
            goto label_319950;
        }
    }
    ctx->pc = 0x319914u;
    // 0x319914: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x319914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x319918: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x319918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31991c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31991Cu;
    {
        const bool branch_taken_0x31991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31991Cu;
        // 0x319920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31991c) {
            ctx->pc = 0x319950u;
            goto label_319950;
        }
    }
    ctx->pc = 0x319924u;
    // 0x319924: 0x24c50080  addiu       $a1, $a2, 0x80
    ctx->pc = 0x319924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x319928: 0xc07e2b6  jal         func_1F8AD8
    ctx->pc = 0x319928u;
    SET_GPR_U32(ctx, 31, 0x319930u);
    ctx->pc = 0x31992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319928u;
    // 0x31992c: 0x24c40260  addiu       $a0, $a2, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8AD8u, 0x319928u, 0x319930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319930u;
label_319930:
    // 0x319930: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319930u;
    {
        const bool branch_taken_0x319930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319930u;
        // 0x319934: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319930) {
            ctx->pc = 0x31994Cu;
            goto label_31994c;
        }
    }
    ctx->pc = 0x319938u;
    // 0x319938: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x319938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x31993c: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x31993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
    // 0x319940: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x319940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x319944: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319944u;
    {
        const bool branch_taken_0x319944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319944u;
        // 0x319948: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319944) {
            ctx->pc = 0x319950u;
            goto label_319950;
        }
    }
    ctx->pc = 0x31994Cu;
label_31994c:
    // 0x31994c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319950:
    // 0x319950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_319954:
    // 0x319954: 0x3e00008  jr          $ra
    ctx->pc = 0x319954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319954u;
        // 0x319958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31995Cu;
    // 0x31995c: 0x0  nop
    ctx->pc = 0x31995cu;
    // NOP
    ctx->pc = 0x319960u;
}
