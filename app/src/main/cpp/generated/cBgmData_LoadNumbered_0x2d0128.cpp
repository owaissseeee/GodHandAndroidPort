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

// Function: cBgmData_LoadNumbered
// Address: 0x2d0128 - 0x2d0220
void cBgmData_LoadNumbered_0x2d0128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_LoadNumbered_0x2d0128");
#endif

    switch (ctx->pc) {
        case 0x2d0180u: goto label_2d0180;
        case 0x2d0198u: goto label_2d0198;
        case 0x2d01acu: goto label_2d01ac;
        case 0x2d01dcu: goto label_2d01dc;
        case 0x2d01f8u: goto label_2d01f8;
        case 0x2d0208u: goto label_2d0208;
        default: break;
    }

    ctx->pc = 0x2d0128u;

    // 0x2d0128: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d0128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d012c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2d012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2d0130: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d0130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d0134: 0x24424210  addiu       $v0, $v0, 0x4210
    ctx->pc = 0x2d0134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16912));
    // 0x2d0138: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d0138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d013c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d013cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0140: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d0140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d0144: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2d0144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2d0148: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d0148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2d014c: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x2d014cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x2d0150: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2d0150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d0154: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0154u;
    {
        const bool branch_taken_0x2d0154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0154u;
        // 0x2d0158: 0xae060020  sw          $a2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0154) {
            ctx->pc = 0x2D0170u;
            goto label_2d0170;
        }
    }
    ctx->pc = 0x2D015Cu;
    // 0x2d015c: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x2d015cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2d0160: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0160u;
    {
        const bool branch_taken_0x2d0160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0160u;
        // 0x2d0164: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0160) {
            ctx->pc = 0x2D0188u;
            goto label_2d0188;
        }
    }
    ctx->pc = 0x2D0168u;
    // 0x2d0168: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D0168u;
    {
        const bool branch_taken_0x2d0168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0168u;
        // 0x2d016c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0168) {
            ctx->pc = 0x2D01A0u;
            goto label_2d01a0;
        }
    }
    ctx->pc = 0x2D0170u;
label_2d0170:
    // 0x2d0170: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d0170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d0174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d0174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0178: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2D0178u;
    SET_GPR_U32(ctx, 31, 0x2D0180u);
    ctx->pc = 0x2D017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0178u;
    // 0x2d017c: 0x24a5d078  addiu       $a1, $a1, -0x2F88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2D0178u, 0x2D0180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0180u;
label_2d0180:
    // 0x2d0180: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0180u;
    {
        const bool branch_taken_0x2d0180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0180u;
        // 0x2d0184: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0180) {
            ctx->pc = 0x2D019Cu;
            goto label_2d019c;
        }
    }
    ctx->pc = 0x2D0188u;
label_2d0188:
    // 0x2d0188: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d0188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d018c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d018cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0190: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2D0190u;
    SET_GPR_U32(ctx, 31, 0x2D0198u);
    ctx->pc = 0x2D0194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0190u;
    // 0x2d0194: 0x24a5d088  addiu       $a1, $a1, -0x2F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2D0190u, 0x2D0198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0198u;
label_2d0198:
    // 0x2d0198: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2d0198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_2d019c:
    // 0x2d019c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d01a0:
    // 0x2d01a0: 0x24513f20  addiu       $s1, $v0, 0x3F20
    ctx->pc = 0x2d01a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16160));
    // 0x2d01a4: 0xc08047e  jal         func_2011F8
    ctx->pc = 0x2D01A4u;
    SET_GPR_U32(ctx, 31, 0x2D01ACu);
    ctx->pc = 0x2D01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D01A4u;
    // 0x2d01a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2011F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2011F8u, 0x2D01A4u, 0x2D01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01ACu;
label_2d01ac:
    // 0x2d01ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D01ACu;
    {
        const bool branch_taken_0x2d01ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d01ac) {
            ctx->pc = 0x2D01B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D01ACu;
            // 0x2d01b0: 0x8e070008  lw          $a3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D01BCu;
            goto label_2d01bc;
        }
    }
    ctx->pc = 0x2D01B4u;
    // 0x2d01b4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D01B4u;
    {
        const bool branch_taken_0x2d01b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01B4u;
        // 0x2d01b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01b4) {
            ctx->pc = 0x2D020Cu;
            goto label_2d020c;
        }
    }
    ctx->pc = 0x2D01BCu;
label_2d01bc:
    // 0x2d01bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d01bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d01c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01c4: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2d01c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2d01c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d01c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d01ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d01d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01d4: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x2D01D4u;
    SET_GPR_U32(ctx, 31, 0x2D01DCu);
    ctx->pc = 0x2D01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D01D4u;
    // 0x2d01d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x2D01D4u, 0x2D01DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01DCu;
label_2d01dc:
    // 0x2d01dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D01DCu;
    {
        const bool branch_taken_0x2d01dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01DCu;
        // 0x2d01e0: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01dc) {
            ctx->pc = 0x2D01F0u;
            goto label_2d01f0;
        }
    }
    ctx->pc = 0x2D01E4u;
    // 0x2d01e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d01e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D01E8u;
    {
        const bool branch_taken_0x2d01e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01E8u;
        // 0x2d01ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01e8) {
            ctx->pc = 0x2D0200u;
            goto label_2d0200;
        }
    }
    ctx->pc = 0x2D01F0u;
label_2d01f0:
    // 0x2d01f0: 0xc0b3fe4  jal         func_2CFF90
    ctx->pc = 0x2D01F0u;
    SET_GPR_U32(ctx, 31, 0x2D01F8u);
    ctx->pc = 0x2D01F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D01F0u;
    // 0x2d01f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF90u, 0x2D01F0u, 0x2D01F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01F8u;
label_2d01f8:
    // 0x2d01f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D01F8u;
    {
        const bool branch_taken_0x2d01f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01F8u;
        // 0x2d01fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01f8) {
            ctx->pc = 0x2D020Cu;
            goto label_2d020c;
        }
    }
    ctx->pc = 0x2D0200u;
label_2d0200:
    // 0x2d0200: 0xc0b40d4  jal         func_2D0350
    ctx->pc = 0x2D0200u;
    SET_GPR_U32(ctx, 31, 0x2D0208u);
    ctx->pc = 0x2D0204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0200u;
    // 0x2d0204: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0350u, 0x2D0200u, 0x2D0208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0208u;
label_2d0208:
    // 0x2d0208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d020c:
    // 0x2d020c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d020cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d0210: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d0210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0214: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d0214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0218: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0218u;
        // 0x2d021c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0220u;
}
