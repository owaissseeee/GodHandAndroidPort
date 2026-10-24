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

// Function: func_003533A8
// Address: 0x3533a8 - 0x3534b0
void func_003533A8_0x3533a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003533A8_0x3533a8");
#endif

    switch (ctx->pc) {
        case 0x3533f4u: goto label_3533f4;
        case 0x353424u: goto label_353424;
        default: break;
    }

    ctx->pc = 0x3533a8u;

    // 0x3533a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3533a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3533ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3533acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3533b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3533b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533b4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3533b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3533b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3533b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533bc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3533bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3533c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3533c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3533c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3533c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3533c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3533cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3533ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3533d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3533d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3533d4: 0x8e331fc0  lw          $s3, 0x1FC0($s1)
    ctx->pc = 0x3533d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8128)));
    // 0x3533d8: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x3533d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x3533dc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3533dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3533e0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3533E0u;
    {
        const bool branch_taken_0x3533e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3533E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3533E0u;
        // 0x3533e4: 0x8e700074  lw          $s0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3533e0) {
            ctx->pc = 0x353444u;
            goto label_353444;
        }
    }
    ctx->pc = 0x3533E8u;
    // 0x3533e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3533e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3533ec: 0xc0da8c0  jal         func_36A300
    ctx->pc = 0x3533ECu;
    SET_GPR_U32(ctx, 31, 0x3533F4u);
    ctx->pc = 0x3533F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3533ECu;
    // 0x3533f0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A300u, 0x3533ECu, 0x3533F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3533F4u;
label_3533f4:
    // 0x3533f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3533f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3533f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3533f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3533fc: 0x54720004  bnel        $v1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3533FCu;
    {
        const bool branch_taken_0x3533fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x3533fc) {
            ctx->pc = 0x353400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3533FCu;
            // 0x353400: 0x8e220e48  lw          $v0, 0xE48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353410u;
            goto label_353410;
        }
    }
    ctx->pc = 0x353404u;
    // 0x353404: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x353404u;
    {
        const bool branch_taken_0x353404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353404u;
        // 0x353408: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353404) {
            ctx->pc = 0x353444u;
            goto label_353444;
        }
    }
    ctx->pc = 0x35340Cu;
    // 0x35340c: 0x0  nop
    ctx->pc = 0x35340cu;
    // NOP
label_353410:
    // 0x353410: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x353410u;
    {
        const bool branch_taken_0x353410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353410) {
            ctx->pc = 0x353414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353410u;
            // 0x353414: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353438u;
            goto label_353438;
        }
    }
    ctx->pc = 0x353418u;
    // 0x353418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35341c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35341Cu;
    SET_GPR_U32(ctx, 31, 0x353424u);
    ctx->pc = 0x353420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35341Cu;
    // 0x353420: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35341Cu, 0x353424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353424u;
label_353424:
    // 0x353424: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x353424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x353428: 0x522026  xor         $a0, $v0, $s2
    ctx->pc = 0x353428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x35342c: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x35342cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x353430: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x353430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x353434: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x353434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_353438:
    // 0x353438: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x353438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35343c: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x35343cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x353440: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x353440u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_353444:
    // 0x353444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353448: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x353448u;
    {
        const bool branch_taken_0x353448 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x35344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353448u;
        // 0x35344c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353448) {
            ctx->pc = 0x353470u;
            goto label_353470;
        }
    }
    ctx->pc = 0x353450u;
    // 0x353450: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x353450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x353454: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x353454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x353458: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x353458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35345c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x35345Cu;
    {
        const bool branch_taken_0x35345c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35345c) {
            ctx->pc = 0x353460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35345Cu;
            // 0x353460: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353488u;
            goto label_353488;
        }
    }
    ctx->pc = 0x353464u;
    // 0x353464: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x353464u;
    {
        const bool branch_taken_0x353464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353464u;
        // 0x353468: 0xae700074  sw          $s0, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353464) {
            ctx->pc = 0x35348Cu;
            goto label_35348c;
        }
    }
    ctx->pc = 0x35346Cu;
    // 0x35346c: 0x0  nop
    ctx->pc = 0x35346cu;
    // NOP
label_353470:
    // 0x353470: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353470u;
    {
        const bool branch_taken_0x353470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x353474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353470u;
        // 0x353474: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353470) {
            ctx->pc = 0x353480u;
            goto label_353480;
        }
    }
    ctx->pc = 0x353478u;
    // 0x353478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x353478u;
    {
        const bool branch_taken_0x353478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353478u;
        // 0x35347c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353478) {
            ctx->pc = 0x353488u;
            goto label_353488;
        }
    }
    ctx->pc = 0x353480u;
label_353480:
    // 0x353480: 0x3a020003  xori        $v0, $s0, 0x3
    ctx->pc = 0x353480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)3);
    // 0x353484: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x353484u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_353488:
    // 0x353488: 0xae700074  sw          $s0, 0x74($s3)
    ctx->pc = 0x353488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 16));
label_35348c:
    // 0x35348c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35348cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353490: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x353490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353494: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x353494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353498: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x353498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35349c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x35349cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3534a0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3534a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3534a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3534a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3534A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3534ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3534A8u;
        // 0x3534ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3534A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3534B0u;
}
