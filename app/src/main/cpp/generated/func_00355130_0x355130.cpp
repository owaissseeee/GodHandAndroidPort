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

// Function: func_00355130
// Address: 0x355130 - 0x355258
void func_00355130_0x355130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355130_0x355130");
#endif

    switch (ctx->pc) {
        case 0x355168u: goto label_355168;
        case 0x3551a0u: goto label_3551a0;
        case 0x3551b0u: goto label_3551b0;
        case 0x3551f0u: goto label_3551f0;
        case 0x355234u: goto label_355234;
        default: break;
    }

    ctx->pc = 0x355130u;

    // 0x355130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x355134: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x355134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x355138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35513c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35513cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355140: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x355140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x355144: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x355144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355148: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x355148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35514c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35514cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x355150: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x355150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x355154: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x355154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x355158: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x355158u;
    {
        const bool branch_taken_0x355158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355158u;
        // 0x35515c: 0x8e131fc0  lw          $s3, 0x1FC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355158) {
            ctx->pc = 0x3551A8u;
            goto label_3551a8;
        }
    }
    ctx->pc = 0x355160u;
    // 0x355160: 0xc0d5514  jal         func_355450
    ctx->pc = 0x355160u;
    SET_GPR_U32(ctx, 31, 0x355168u);
    ctx->pc = 0x355164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355160u;
    // 0x355164: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355450u, 0x355160u, 0x355168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355168u;
label_355168:
    // 0x355168: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x355168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35516c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35516cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x355170: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x355170u;
    {
        const bool branch_taken_0x355170 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x355174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355170u;
        // 0x355174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355170) {
            ctx->pc = 0x355198u;
            goto label_355198;
        }
    }
    ctx->pc = 0x355178u;
    // 0x355178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35517c: 0x34a50f1f  ori         $a1, $a1, 0xF1F
    ctx->pc = 0x35517cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3871);
    // 0x355180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x355180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355184: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x355184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355188: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x355188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35518c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35518cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355190: 0x80d375c  j           func_34DD70
    ctx->pc = 0x355190u;
    ctx->pc = 0x355194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355190u;
    // 0x355194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x355190u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x355198u;
label_355198:
    // 0x355198: 0xc0d5524  jal         func_355490
    ctx->pc = 0x355198u;
    SET_GPR_U32(ctx, 31, 0x3551A0u);
    ctx->pc = 0x35519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355198u;
    // 0x35519c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355490u, 0x355198u, 0x3551A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551A0u;
label_3551a0:
    // 0x3551a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3551A0u;
    {
        const bool branch_taken_0x3551a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3551A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551A0u;
        // 0x3551a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3551a0) {
            ctx->pc = 0x355228u;
            goto label_355228;
        }
    }
    ctx->pc = 0x3551A8u;
label_3551a8:
    // 0x3551a8: 0xc0d5496  jal         func_355258
    ctx->pc = 0x3551A8u;
    SET_GPR_U32(ctx, 31, 0x3551B0u);
    ctx->pc = 0x355258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355258u, 0x3551A8u, 0x3551B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551B0u;
label_3551b0:
    // 0x3551b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3551b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3551b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3551b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3551b8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3551b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x3551bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3551bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3551c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3551c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3551c4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3551C4u;
    {
        const bool branch_taken_0x3551c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3551C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3551C4u;
        // 0x3551c8: 0x34a50f0e  ori         $a1, $a1, 0xF0E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3854);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3551c4) {
            ctx->pc = 0x3551E8u;
            goto label_3551e8;
        }
    }
    ctx->pc = 0x3551CCu;
    // 0x3551cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3551ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3551d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3551d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3551d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3551d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3551d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3551d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3551dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3551dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3551e0: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3551E0u;
    ctx->pc = 0x3551E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551E0u;
    // 0x3551e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3551E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3551E8u;
label_3551e8:
    // 0x3551e8: 0xc0d5502  jal         func_355408
    ctx->pc = 0x3551E8u;
    SET_GPR_U32(ctx, 31, 0x3551F0u);
    ctx->pc = 0x3551ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551E8u;
    // 0x3551ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355408u, 0x3551E8u, 0x3551F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551F0u;
label_3551f0:
    // 0x3551f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3551f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3551f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3551f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3551f8: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x3551f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x3551fc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3551fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x355200: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x355200u;
    {
        const bool branch_taken_0x355200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x355204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355200u;
        // 0x355204: 0x34a50f0f  ori         $a1, $a1, 0xF0F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3855);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355200) {
            ctx->pc = 0x355228u;
            goto label_355228;
        }
    }
    ctx->pc = 0x355208u;
    // 0x355208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35520c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35520cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355210: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x355210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355214: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x355214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x355218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35521c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35521Cu;
    ctx->pc = 0x355220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35521Cu;
    // 0x355220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35521Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x355224u;
    // 0x355224: 0x0  nop
    ctx->pc = 0x355224u;
    // NOP
label_355228:
    // 0x355228: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x355228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35522c: 0xc0d559c  jal         func_355670
    ctx->pc = 0x35522Cu;
    SET_GPR_U32(ctx, 31, 0x355234u);
    ctx->pc = 0x355230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35522Cu;
    // 0x355230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355670u, 0x35522Cu, 0x355234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355234u;
label_355234:
    // 0x355234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35523c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35523cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x355240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355244: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x355244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x355248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35524c: 0x3e00008  jr          $ra
    ctx->pc = 0x35524Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35524Cu;
        // 0x355250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35524Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355254u;
    // 0x355254: 0x0  nop
    ctx->pc = 0x355254u;
    // NOP
    ctx->pc = 0x355258u;
}
