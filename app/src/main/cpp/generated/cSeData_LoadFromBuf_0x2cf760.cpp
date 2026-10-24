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

// Function: cSeData_LoadFromBuf
// Address: 0x2cf760 - 0x2cf830
void cSeData_LoadFromBuf_0x2cf760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_LoadFromBuf_0x2cf760");
#endif

    switch (ctx->pc) {
        case 0x2cf79cu: goto label_2cf79c;
        case 0x2cf7b4u: goto label_2cf7b4;
        case 0x2cf7c4u: goto label_2cf7c4;
        case 0x2cf7ccu: goto label_2cf7cc;
        case 0x2cf7dcu: goto label_2cf7dc;
        case 0x2cf7ecu: goto label_2cf7ec;
        case 0x2cf7fcu: goto label_2cf7fc;
        case 0x2cf80cu: goto label_2cf80c;
        default: break;
    }

    ctx->pc = 0x2cf760u;

    // 0x2cf760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cf760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cf764: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2cf764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2cf768: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2cf768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2cf76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf770: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cf770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cf774: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cf774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf778: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2cf778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2cf77c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cf77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf780: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2cf780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2cf784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf788: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cf788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf78c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF78Cu;
    {
        const bool branch_taken_0x2cf78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF78Cu;
        // 0x2cf790: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf78c) {
            ctx->pc = 0x2CF79Cu;
            goto label_2cf79c;
        }
    }
    ctx->pc = 0x2CF794u;
    // 0x2cf794: 0xc0b3cc4  jal         func_2CF310
    ctx->pc = 0x2CF794u;
    SET_GPR_U32(ctx, 31, 0x2CF79Cu);
    ctx->pc = 0x2CF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF310u, 0x2CF794u, 0x2CF79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF79Cu;
label_2cf79c:
    // 0x2cf79c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2cf79cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf7a0: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x2cf7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x2cf7a4: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x2cf7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
    // 0x2cf7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf7ac: 0xc0b3f54  jal         func_2CFD50
    ctx->pc = 0x2CF7ACu;
    SET_GPR_U32(ctx, 31, 0x2CF7B4u);
    ctx->pc = 0x2CF7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7ACu;
    // 0x2cf7b0: 0xae140000  sw          $s4, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD50u, 0x2CF7ACu, 0x2CF7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7B4u;
label_2cf7b4:
    // 0x2cf7b4: 0xae130010  sw          $s3, 0x10($s0)
    ctx->pc = 0x2cf7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    // 0x2cf7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf7bc: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CF7BCu;
    SET_GPR_U32(ctx, 31, 0x2CF7C4u);
    ctx->pc = 0x2CF7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7BCu;
    // 0x2cf7c0: 0x24050181  addiu       $a1, $zero, 0x181 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CF7BCu, 0x2CF7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7C4u;
label_2cf7c4:
    // 0x2cf7c4: 0xc0b3e82  jal         func_2CFA08
    ctx->pc = 0x2CF7C4u;
    SET_GPR_U32(ctx, 31, 0x2CF7CCu);
    ctx->pc = 0x2CF7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7C4u;
    // 0x2cf7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFA08u, 0x2CF7C4u, 0x2CF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7CCu;
label_2cf7cc:
    // 0x2cf7cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CF7CCu;
    {
        const bool branch_taken_0x2cf7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf7cc) {
            ctx->pc = 0x2CF804u;
            goto label_2cf804;
        }
    }
    ctx->pc = 0x2CF7D4u;
    // 0x2cf7d4: 0xc0b3e1a  jal         func_2CF868
    ctx->pc = 0x2CF7D4u;
    SET_GPR_U32(ctx, 31, 0x2CF7DCu);
    ctx->pc = 0x2CF7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7D4u;
    // 0x2cf7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF868u, 0x2CF7D4u, 0x2CF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7DCu;
label_2cf7dc:
    // 0x2cf7dc: 0x1454000c  bne         $v0, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x2CF7DCu;
    {
        const bool branch_taken_0x2cf7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2CF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7DCu;
        // 0x2cf7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7dc) {
            ctx->pc = 0x2CF810u;
            goto label_2cf810;
        }
    }
    ctx->pc = 0x2CF7E4u;
    // 0x2cf7e4: 0xc0b3e22  jal         func_2CF888
    ctx->pc = 0x2CF7E4u;
    SET_GPR_U32(ctx, 31, 0x2CF7ECu);
    ctx->pc = 0x2CF7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7E4u;
    // 0x2cf7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF888u, 0x2CF7E4u, 0x2CF7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7ECu;
label_2cf7ec:
    // 0x2cf7ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF7ECu;
    {
        const bool branch_taken_0x2cf7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf7ec) {
            ctx->pc = 0x2CF804u;
            goto label_2cf804;
        }
    }
    ctx->pc = 0x2CF7F4u;
    // 0x2cf7f4: 0xc0b3e3a  jal         func_2CF8E8
    ctx->pc = 0x2CF7F4u;
    SET_GPR_U32(ctx, 31, 0x2CF7FCu);
    ctx->pc = 0x2CF7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7F4u;
    // 0x2cf7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF8E8u, 0x2CF7F4u, 0x2CF7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7FCu;
label_2cf7fc:
    // 0x2cf7fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF7FCu;
    {
        const bool branch_taken_0x2cf7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7FCu;
        // 0x2cf800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7fc) {
            ctx->pc = 0x2CF810u;
            goto label_2cf810;
        }
    }
    ctx->pc = 0x2CF804u;
label_2cf804:
    // 0x2cf804: 0xc0b3f26  jal         func_2CFC98
    ctx->pc = 0x2CF804u;
    SET_GPR_U32(ctx, 31, 0x2CF80Cu);
    ctx->pc = 0x2CF808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF804u;
    // 0x2cf808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC98u, 0x2CF804u, 0x2CF80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF80Cu;
label_2cf80c:
    // 0x2cf80c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf810:
    // 0x2cf810: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2cf810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf814: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2cf814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf818: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cf818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf81c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2cf81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf820: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2cf820u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf828: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF828u;
        // 0x2cf82c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF830u;
}
