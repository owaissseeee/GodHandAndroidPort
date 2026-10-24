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

// Function: BuildHitMsgNode_376618
// Address: 0x376618 - 0x3766e0
void BuildHitMsgNode_376618_0x376618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildHitMsgNode_376618_0x376618");
#endif

    switch (ctx->pc) {
        case 0x376638u: goto label_376638;
        case 0x376640u: goto label_376640;
        case 0x376694u: goto label_376694;
        default: break;
    }

    ctx->pc = 0x376618u;

    // 0x376618: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x376618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37661c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x376620: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x376620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x376624: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x376624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376628: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x376628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37662c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376630: 0xc0dda2c  jal         func_3768B0
    ctx->pc = 0x376630u;
    SET_GPR_U32(ctx, 31, 0x376638u);
    ctx->pc = 0x376634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376630u;
    // 0x376634: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3768B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3768B0u, 0x376630u, 0x376638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376638u;
label_376638:
    // 0x376638: 0xc0df45c  jal         func_37D170
    ctx->pc = 0x376638u;
    SET_GPR_U32(ctx, 31, 0x376640u);
    ctx->pc = 0x37D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D170u, 0x376638u, 0x376640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376640u;
label_376640:
    // 0x376640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x376640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376644: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x376644u;
    {
        const bool branch_taken_0x376644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x376648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376644u;
        // 0x376648: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376644) {
            ctx->pc = 0x3766C4u;
            goto label_3766c4;
        }
    }
    ctx->pc = 0x37664Cu;
    // 0x37664c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x37664cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x376650: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x376650u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x376654: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x376654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x376658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37665c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37665cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376660: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x376660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x376664: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x376664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x376668: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x376668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37666c: 0xa207000c  sb          $a3, 0xC($s0)
    ctx->pc = 0x37666cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 7));
    // 0x376670: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x376670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x376674: 0xa208000d  sb          $t0, 0xD($s0)
    ctx->pc = 0x376674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 8));
    // 0x376678: 0xa606000e  sh          $a2, 0xE($s0)
    ctx->pc = 0x376678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x37667c: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x37667cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x376680: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x376680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x376684: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x376684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x376688: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x376688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x37668c: 0xc0ddb3e  jal         func_376CF8
    ctx->pc = 0x37668Cu;
    SET_GPR_U32(ctx, 31, 0x376694u);
    ctx->pc = 0x376690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37668Cu;
    // 0x376690: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376CF8u, 0x37668Cu, 0x376694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376694u;
label_376694:
    // 0x376694: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x376694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x376698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x376698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37669c: 0xa604002a  sh          $a0, 0x2A($s0)
    ctx->pc = 0x37669cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x3766a0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3766a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3766a4: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x3766a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x3766a8: 0x9624000c  lhu         $a0, 0xC($s1)
    ctx->pc = 0x3766a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3766ac: 0xa6040032  sh          $a0, 0x32($s0)
    ctx->pc = 0x3766acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 4));
    // 0x3766b0: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x3766b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3766b4: 0xa6030034  sh          $v1, 0x34($s0)
    ctx->pc = 0x3766b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x3766b8: 0x96240010  lhu         $a0, 0x10($s1)
    ctx->pc = 0x3766b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3766bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3766BCu;
    {
        const bool branch_taken_0x3766bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3766C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3766BCu;
        // 0x3766c0: 0xa604003c  sh          $a0, 0x3C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3766bc) {
            ctx->pc = 0x3766C8u;
            goto label_3766c8;
        }
    }
    ctx->pc = 0x3766C4u;
label_3766c4:
    // 0x3766c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3766c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3766c8:
    // 0x3766c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3766c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3766cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3766ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3766d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3766d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3766d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3766d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3766d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3766D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3766DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3766D8u;
        // 0x3766dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3766D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3766E0u;
}
