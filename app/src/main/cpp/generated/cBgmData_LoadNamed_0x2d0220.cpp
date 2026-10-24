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

// Function: cBgmData_LoadNamed
// Address: 0x2d0220 - 0x2d0318
void cBgmData_LoadNamed_0x2d0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_LoadNamed_0x2d0220");
#endif

    switch (ctx->pc) {
        case 0x2d0260u: goto label_2d0260;
        case 0x2d028cu: goto label_2d028c;
        case 0x2d02a0u: goto label_2d02a0;
        case 0x2d02d0u: goto label_2d02d0;
        case 0x2d02ecu: goto label_2d02ec;
        case 0x2d02fcu: goto label_2d02fc;
        default: break;
    }

    ctx->pc = 0x2d0220u;

    // 0x2d0220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d0220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d0224: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2d0224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2d0228: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d0228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d022c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2d022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2d0230: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d0230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d0234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0238: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d0238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d023c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d0240: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d0240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0244: 0x24424210  addiu       $v0, $v0, 0x4210
    ctx->pc = 0x2d0244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16912));
    // 0x2d0248: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x2d0248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x2d024c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x2d024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2d0250: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2d0250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2d0254: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0258: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x2D0258u;
    SET_GPR_U32(ctx, 31, 0x2D0260u);
    ctx->pc = 0x2D025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0258u;
    // 0x2d025c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x2D0258u, 0x2D0260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0260u;
label_2d0260:
    // 0x2d0260: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d0260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d0264: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2d0264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d0268: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0268u;
    {
        const bool branch_taken_0x2d0268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0268u;
        // 0x2d026c: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0268) {
            ctx->pc = 0x2D02A8u;
            goto label_2d02a8;
        }
    }
    ctx->pc = 0x2D0270u;
    // 0x2d0270: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0270u;
    {
        const bool branch_taken_0x2d0270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0270u;
        // 0x2d0274: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0270) {
            ctx->pc = 0x2D0290u;
            goto label_2d0290;
        }
    }
    ctx->pc = 0x2D0278u;
    // 0x2d0278: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d0278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d027c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d027cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0280: 0x24a5d0a0  addiu       $a1, $a1, -0x2F60
    ctx->pc = 0x2d0280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955168));
    // 0x2d0284: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2D0284u;
    SET_GPR_U32(ctx, 31, 0x2D028Cu);
    ctx->pc = 0x2D0288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0284u;
    // 0x2d0288: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2D0284u, 0x2D028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D028Cu;
label_2d028c:
    // 0x2d028c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2d028cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_2d0290:
    // 0x2d0290: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d0290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0294: 0x24513f20  addiu       $s1, $v0, 0x3F20
    ctx->pc = 0x2d0294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16160));
    // 0x2d0298: 0xc08047e  jal         func_2011F8
    ctx->pc = 0x2D0298u;
    SET_GPR_U32(ctx, 31, 0x2D02A0u);
    ctx->pc = 0x2D029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0298u;
    // 0x2d029c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2011F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2011F8u, 0x2D0298u, 0x2D02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D02A0u;
label_2d02a0:
    // 0x2d02a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D02A0u;
    {
        const bool branch_taken_0x2d02a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d02a0) {
            ctx->pc = 0x2D02A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D02A0u;
            // 0x2d02a4: 0x8e070008  lw          $a3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D02B0u;
            goto label_2d02b0;
        }
    }
    ctx->pc = 0x2D02A8u;
label_2d02a8:
    // 0x2d02a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D02A8u;
    {
        const bool branch_taken_0x2d02a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D02ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02A8u;
        // 0x2d02ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02a8) {
            ctx->pc = 0x2D0300u;
            goto label_2d0300;
        }
    }
    ctx->pc = 0x2D02B0u;
label_2d02b0:
    // 0x2d02b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d02b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d02b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02b8: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2d02b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2d02bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d02bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d02c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d02c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02c8: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x2D02C8u;
    SET_GPR_U32(ctx, 31, 0x2D02D0u);
    ctx->pc = 0x2D02CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D02C8u;
    // 0x2d02cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x2D02C8u, 0x2D02D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D02D0u;
label_2d02d0:
    // 0x2d02d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D02D0u;
    {
        const bool branch_taken_0x2d02d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02D0u;
        // 0x2d02d4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02d0) {
            ctx->pc = 0x2D02E4u;
            goto label_2d02e4;
        }
    }
    ctx->pc = 0x2D02D8u;
    // 0x2d02d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d02dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D02DCu;
    {
        const bool branch_taken_0x2d02dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02DCu;
        // 0x2d02e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02dc) {
            ctx->pc = 0x2D02F4u;
            goto label_2d02f4;
        }
    }
    ctx->pc = 0x2D02E4u;
label_2d02e4:
    // 0x2d02e4: 0xc0b3fe4  jal         func_2CFF90
    ctx->pc = 0x2D02E4u;
    SET_GPR_U32(ctx, 31, 0x2D02ECu);
    ctx->pc = 0x2D02E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D02E4u;
    // 0x2d02e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF90u, 0x2D02E4u, 0x2D02ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D02ECu;
label_2d02ec:
    // 0x2d02ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D02ECu;
    {
        const bool branch_taken_0x2d02ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02ECu;
        // 0x2d02f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02ec) {
            ctx->pc = 0x2D0300u;
            goto label_2d0300;
        }
    }
    ctx->pc = 0x2D02F4u;
label_2d02f4:
    // 0x2d02f4: 0xc0b40d4  jal         func_2D0350
    ctx->pc = 0x2D02F4u;
    SET_GPR_U32(ctx, 31, 0x2D02FCu);
    ctx->pc = 0x2D02F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D02F4u;
    // 0x2d02f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0350u, 0x2D02F4u, 0x2D02FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D02FCu;
label_2d02fc:
    // 0x2d02fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d02fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0300:
    // 0x2d0300: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d0300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d0304: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d0304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0308: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d0308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d030c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D030Cu;
        // 0x2d0310: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D030Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0314u;
    // 0x2d0314: 0x0  nop
    ctx->pc = 0x2d0314u;
    // NOP
    ctx->pc = 0x2d0318u;
}
