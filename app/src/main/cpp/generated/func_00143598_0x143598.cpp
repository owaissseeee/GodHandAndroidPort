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

// Function: func_00143598
// Address: 0x143598 - 0x143670
void func_00143598_0x143598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00143598_0x143598");
#endif

    switch (ctx->pc) {
        case 0x1435c0u: goto label_1435c0;
        case 0x1435d8u: goto label_1435d8;
        case 0x1435e0u: goto label_1435e0;
        case 0x1435e8u: goto label_1435e8;
        case 0x143610u: goto label_143610;
        case 0x143650u: goto label_143650;
        default: break;
    }

    ctx->pc = 0x143598u;

    // 0x143598: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x143598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14359c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1435a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1435a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1435a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1435a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1435a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1435ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1435acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1435b0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1435b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1435b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1435b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1435b8: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1435B8u;
    SET_GPR_U32(ctx, 31, 0x1435C0u);
    ctx->pc = 0x1435BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1435B8u;
    // 0x1435bc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1435B8u, 0x1435C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435C0u;
label_1435c0:
    // 0x1435c0: 0x26320094  addiu       $s2, $s1, 0x94
    ctx->pc = 0x1435c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x1435c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1435c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1435c8: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x1435c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1435cc: 0xa222001c  sb          $v0, 0x1C($s1)
    ctx->pc = 0x1435ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x1435d0: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1435D0u;
    SET_GPR_U32(ctx, 31, 0x1435D8u);
    ctx->pc = 0x1435D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1435D0u;
    // 0x1435d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1435D0u, 0x1435D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435D8u;
label_1435d8:
    // 0x1435d8: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x1435d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x1435dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1435dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1435e0:
    // 0x1435e0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1435E0u;
    SET_GPR_U32(ctx, 31, 0x1435E8u);
    ctx->pc = 0x1435E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1435E0u;
    // 0x1435e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1435E0u, 0x1435E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435E8u;
label_1435e8:
    // 0x1435e8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1435e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1435ec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1435ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1435f0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1435f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1435f4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1435f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1435f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1435f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1435fc: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1435fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x143600: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x143600u;
    {
        const bool branch_taken_0x143600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143600u;
        // 0x143604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143600) {
            ctx->pc = 0x1435E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1435e0;
        }
    }
    ctx->pc = 0x143608u;
    // 0x143608: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x143608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14360c: 0x262401b0  addiu       $a0, $s1, 0x1B0
    ctx->pc = 0x14360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_143610:
    // 0x143610: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x143610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x143614: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x143614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x143618: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x143618u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14361c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x14361cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x143620: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x143620u;
    {
        const bool branch_taken_0x143620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143620u;
        // 0x143624: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143620) {
            ctx->pc = 0x143610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143610;
        }
    }
    ctx->pc = 0x143628u;
    // 0x143628: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x143628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x14362c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x14362cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x143630: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x143630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x143634: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x143634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x143638: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x143638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14363c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x14363cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x143640: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x143640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x143644: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x143644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x143648: 0xc07ea08  jal         func_1FA820
    ctx->pc = 0x143648u;
    SET_GPR_U32(ctx, 31, 0x143650u);
    ctx->pc = 0x14364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143648u;
    // 0x14364c: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA820u, 0x143648u, 0x143650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143650u;
label_143650:
    // 0x143650: 0xa22001c0  sb          $zero, 0x1C0($s1)
    ctx->pc = 0x143650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 448), (uint8_t)GPR_U32(ctx, 0));
    // 0x143654: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x143654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143658: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x143658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14365c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14365cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143660: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x143660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143668: 0x3e00008  jr          $ra
    ctx->pc = 0x143668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143668u;
        // 0x14366c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143670u;
}
