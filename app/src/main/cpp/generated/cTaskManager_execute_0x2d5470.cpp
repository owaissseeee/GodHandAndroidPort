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

// Function: cTaskManager_execute
// Address: 0x2d5470 - 0x2d54f0
void cTaskManager_execute_0x2d5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cTaskManager_execute_0x2d5470");
#endif

    switch (ctx->pc) {
        case 0x2d5470u: goto label_2d5470;
        case 0x2d5474u: goto label_2d5474;
        case 0x2d5478u: goto label_2d5478;
        case 0x2d547cu: goto label_2d547c;
        case 0x2d5480u: goto label_2d5480;
        case 0x2d5484u: goto label_2d5484;
        case 0x2d5488u: goto label_2d5488;
        case 0x2d548cu: goto label_2d548c;
        case 0x2d5490u: goto label_2d5490;
        case 0x2d5494u: goto label_2d5494;
        case 0x2d5498u: goto label_2d5498;
        case 0x2d549cu: goto label_2d549c;
        case 0x2d54a0u: goto label_2d54a0;
        case 0x2d54a4u: goto label_2d54a4;
        case 0x2d54a8u: goto label_2d54a8;
        case 0x2d54acu: goto label_2d54ac;
        case 0x2d54b0u: goto label_2d54b0;
        case 0x2d54b4u: goto label_2d54b4;
        case 0x2d54b8u: goto label_2d54b8;
        case 0x2d54bcu: goto label_2d54bc;
        case 0x2d54c0u: goto label_2d54c0;
        case 0x2d54c4u: goto label_2d54c4;
        case 0x2d54c8u: goto label_2d54c8;
        case 0x2d54ccu: goto label_2d54cc;
        case 0x2d54d0u: goto label_2d54d0;
        case 0x2d54d4u: goto label_2d54d4;
        case 0x2d54d8u: goto label_2d54d8;
        case 0x2d54dcu: goto label_2d54dc;
        case 0x2d54e0u: goto label_2d54e0;
        case 0x2d54e4u: goto label_2d54e4;
        case 0x2d54e8u: goto label_2d54e8;
        case 0x2d54ecu: goto label_2d54ec;
        default: break;
    }

    ctx->pc = 0x2d5470u;

label_2d5470:
    // 0x2d5470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d5474:
    // 0x2d5474: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d5474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d5478:
    // 0x2d5478: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d5478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d547c:
    // 0x2d547c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2d5480:
    // 0x2d5480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5484:
    // 0x2d5484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d5488:
    // 0x2d5488: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d5488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d548c:
    // 0x2d548c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2d548cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d5490:
    // 0x2d5490: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2d5490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2d5494:
    // 0x2d5494: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x2d5494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_2d5498:
    // 0x2d5498: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d5498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d549c:
    // 0x2d549c: 0x40f809  jalr        $v0
label_2d54a0:
    if (ctx->pc == 0x2D54A0u) {
        ctx->pc = 0x2D54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D549Cu;
        // 0x2d54a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D54A4u;
        goto label_2d54a4;
    }
    ctx->pc = 0x2D549Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D54A4u);
        ctx->pc = 0x2D54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D549Cu;
        // 0x2d54a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D549Cu, 0x2D54A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D54A4u;
label_2d54a4:
    // 0x2d54a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d54a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d54a8:
    // 0x2d54a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d54ac:
    // 0x2d54ac: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_2d54b0:
    if (ctx->pc == 0x2D54B0u) {
        ctx->pc = 0x2D54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54ACu;
        // 0x2d54b0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D54B4u;
        goto label_2d54b4;
    }
    ctx->pc = 0x2D54ACu;
    {
        const bool branch_taken_0x2d54ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54ACu;
        // 0x2d54b0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d54ac) {
            ctx->pc = 0x2D54C8u;
            goto label_2d54c8;
        }
    }
    ctx->pc = 0x2D54B4u;
label_2d54b4:
    // 0x2d54b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d54b8:
    // 0x2d54b8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2d54b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d54bc:
    // 0x2d54bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d54bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d54c0:
    // 0x2d54c0: 0xc0b5624  jal         func_2D5890
label_2d54c4:
    if (ctx->pc == 0x2D54C4u) {
        ctx->pc = 0x2D54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54C0u;
        // 0x2d54c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D54C8u;
        goto label_2d54c8;
    }
    ctx->pc = 0x2D54C0u;
    SET_GPR_U32(ctx, 31, 0x2D54C8u);
    ctx->pc = 0x2D54C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D54C0u;
    // 0x2d54c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5890u, 0x2D54C0u, 0x2D54C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54C8u;
label_2d54c8:
    // 0x2d54c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d54c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d54cc:
    // 0x2d54cc: 0xc0b5510  jal         func_2D5440
label_2d54d0:
    if (ctx->pc == 0x2D54D0u) {
        ctx->pc = 0x2D54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54CCu;
        // 0x2d54d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D54D4u;
        goto label_2d54d4;
    }
    ctx->pc = 0x2D54CCu;
    SET_GPR_U32(ctx, 31, 0x2D54D4u);
    ctx->pc = 0x2D54D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D54CCu;
    // 0x2d54d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5440u, 0x2D54CCu, 0x2D54D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54D4u;
label_2d54d4:
    // 0x2d54d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d54d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d54d8:
    // 0x2d54d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d54d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d54dc:
    // 0x2d54dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d54dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d54e0:
    // 0x2d54e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d54e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d54e4:
    // 0x2d54e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d54e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d54e8:
    // 0x2d54e8: 0x3e00008  jr          $ra
label_2d54ec:
    if (ctx->pc == 0x2D54ECu) {
        ctx->pc = 0x2D54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54E8u;
        // 0x2d54ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D54F0u;
        goto label_fallthrough_0x2d54e8;
    }
    ctx->pc = 0x2D54E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D54E8u;
        // 0x2d54ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D54E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d54e8:
    ctx->pc = 0x2D54F0u;
}
