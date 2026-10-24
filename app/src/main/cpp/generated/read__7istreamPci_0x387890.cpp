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

// Function: read__7istreamPci
// Address: 0x387890 - 0x387958
void read__7istreamPci_0x387890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("read__7istreamPci_0x387890");
#endif

    switch (ctx->pc) {
        case 0x3878f4u: goto label_3878f4;
        case 0x387914u: goto label_387914;
        default: break;
    }

    ctx->pc = 0x387890u;

    // 0x387890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x387890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x387894: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x387894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x387898: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x387898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38789c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38789cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3878a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3878a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3878a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3878a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3878a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3878a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3878ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3878acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3878b0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x3878b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x3878b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3878B4u;
    {
        const bool branch_taken_0x3878b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3878B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878B4u;
        // 0x3878b8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878b4) {
            ctx->pc = 0x3878CCu;
            goto label_3878cc;
        }
    }
    ctx->pc = 0x3878BCu;
    // 0x3878bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3878bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3878c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3878c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3878c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3878C4u;
    {
        const bool branch_taken_0x3878c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3878C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878C4u;
        // 0x3878c8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878c4) {
            ctx->pc = 0x3878F8u;
            goto label_3878f8;
        }
    }
    ctx->pc = 0x3878CCu;
label_3878cc:
    // 0x3878cc: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x3878ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3878d0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3878D0u;
    {
        const bool branch_taken_0x3878d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3878D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878D0u;
        // 0x3878d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878d0) {
            ctx->pc = 0x3878F8u;
            goto label_3878f8;
        }
    }
    ctx->pc = 0x3878D8u;
    // 0x3878d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3878d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3878dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3878dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3878e0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3878e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3878e4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3878E4u;
    {
        const bool branch_taken_0x3878e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3878E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878E4u;
        // 0x3878e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878e4) {
            ctx->pc = 0x3878F8u;
            goto label_3878f8;
        }
    }
    ctx->pc = 0x3878ECu;
    // 0x3878ec: 0xc0e249a  jal         func_389268
    ctx->pc = 0x3878ECu;
    SET_GPR_U32(ctx, 31, 0x3878F4u);
    ctx->pc = 0x3878F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3878ECu;
    // 0x3878f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x3878ECu, 0x3878F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3878F4u;
label_3878f4:
    // 0x3878f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3878f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3878f8:
    // 0x3878f8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3878F8u;
    {
        const bool branch_taken_0x3878f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878F8u;
        // 0x3878fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878f8) {
            ctx->pc = 0x387938u;
            goto label_387938;
        }
    }
    ctx->pc = 0x387900u;
    // 0x387900: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x387900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387904: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x387904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x387908: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x387908u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x38790c: 0xc0e327a  jal         func_38C9E8
    ctx->pc = 0x38790Cu;
    SET_GPR_U32(ctx, 31, 0x387914u);
    ctx->pc = 0x387910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38790Cu;
    // 0x387910: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C9E8u, 0x38790Cu, 0x387914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387914u;
label_387914:
    // 0x387914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x387914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x387918: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x387918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38791c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38791Cu;
    {
        const bool branch_taken_0x38791c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x387920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38791Cu;
        // 0x387920: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38791c) {
            ctx->pc = 0x38793Cu;
            goto label_38793c;
        }
    }
    ctx->pc = 0x387924u;
    // 0x387924: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x387924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387928: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38792c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x38792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x387930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x387930u;
    {
        const bool branch_taken_0x387930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387930u;
        // 0x387934: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387930) {
            ctx->pc = 0x38793Cu;
            goto label_38793c;
        }
    }
    ctx->pc = 0x387938u;
label_387938:
    // 0x387938: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x387938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_38793c:
    // 0x38793c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38793cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387940: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x387940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387944: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x387944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387948: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x387948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38794c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38794cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387950: 0x3e00008  jr          $ra
    ctx->pc = 0x387950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387950u;
        // 0x387954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387958u;
}
