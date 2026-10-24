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

// Function: EntTable_init
// Address: 0x2d50e8 - 0x2d51c0
void EntTable_init_0x2d50e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntTable_init_0x2d50e8");
#endif

    switch (ctx->pc) {
        case 0x2d5134u: goto label_2d5134;
        case 0x2d5148u: goto label_2d5148;
        case 0x2d5158u: goto label_2d5158;
        case 0x2d5178u: goto label_2d5178;
        case 0x2d51a0u: goto label_2d51a0;
        default: break;
    }

    ctx->pc = 0x2d50e8u;

    // 0x2d50e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d50e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d50ec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d50ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d50f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d50f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d50f8: 0x24100058  addiu       $s0, $zero, 0x58
    ctx->pc = 0x2d50f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2d50fc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d50fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d5100: 0x508018  mult        $s0, $v0, $s0
    ctx->pc = 0x2d5100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2d5104: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d5104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d5108: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d5108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d510c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d5110: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5118: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x2d5118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x2d511c: 0xa627000e  sh          $a3, 0xE($s1)
    ctx->pc = 0x2d511cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x2d5120: 0x24c64200  addiu       $a2, $a2, 0x4200
    ctx->pc = 0x2d5120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16896));
    // 0x2d5124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5128: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x2d5128u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d512c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2D512Cu;
    SET_GPR_U32(ctx, 31, 0x2D5134u);
    ctx->pc = 0x2D5130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D512Cu;
    // 0x2d5130: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2D512Cu, 0x2D5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5134u;
label_2d5134:
    // 0x2d5134: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d5134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d513c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d513cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2d5140: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2D5140u;
    SET_GPR_U32(ctx, 31, 0x2D5148u);
    ctx->pc = 0x2D5144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5140u;
    // 0x2d5144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2D5140u, 0x2D5148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5148u;
label_2d5148:
    // 0x2d5148: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2d5148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d514c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D514Cu;
    {
        const bool branch_taken_0x2d514c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D514Cu;
        // 0x2d5150: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d514c) {
            ctx->pc = 0x2D518Cu;
            goto label_2d518c;
        }
    }
    ctx->pc = 0x2D5154u;
    // 0x2d5154: 0x0  nop
    ctx->pc = 0x2d5154u;
    // NOP
label_2d5158:
    // 0x2d5158: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x2d5158u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2d515c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d515cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5160: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d5160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d5164: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d5164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5168: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x2d5168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2d516c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2d516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d5170: 0xc0b55da  jal         func_2D5768
    ctx->pc = 0x2D5170u;
    SET_GPR_U32(ctx, 31, 0x2D5178u);
    ctx->pc = 0x2D5174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5170u;
    // 0x2d5174: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5768u, 0x2D5170u, 0x2D5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5178u;
label_2d5178:
    // 0x2d5178: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d5178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d517c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2d517cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d5180: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2d5180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d5184: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D5184u;
    {
        const bool branch_taken_0x2d5184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5184u;
        // 0x2d5188: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5184) {
            ctx->pc = 0x2D5158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5158;
        }
    }
    ctx->pc = 0x2D518Cu;
label_2d518c:
    // 0x2d518c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5190: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2d5190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2d5194: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2d5194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d5198: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x2D5198u;
    SET_GPR_U32(ctx, 31, 0x2D51A0u);
    ctx->pc = 0x2D519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5198u;
    // 0x2d519c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x2D5198u, 0x2D51A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D51A0u;
label_2d51a0:
    // 0x2d51a0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2d51a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2d51a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d51a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d51a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d51a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d51ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d51acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d51b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d51b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d51b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d51b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d51b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D51B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51B8u;
        // 0x2d51bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D51B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D51C0u;
}
