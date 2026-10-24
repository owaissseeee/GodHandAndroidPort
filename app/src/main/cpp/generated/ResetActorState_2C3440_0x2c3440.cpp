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

// Function: ResetActorState_2C3440
// Address: 0x2c3440 - 0x2c3500
void ResetActorState_2C3440_0x2c3440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetActorState_2C3440_0x2c3440");
#endif

    switch (ctx->pc) {
        case 0x2c3440u: goto label_2c3440;
        case 0x2c3444u: goto label_2c3444;
        case 0x2c3448u: goto label_2c3448;
        case 0x2c344cu: goto label_2c344c;
        case 0x2c3450u: goto label_2c3450;
        case 0x2c3454u: goto label_2c3454;
        case 0x2c3458u: goto label_2c3458;
        case 0x2c345cu: goto label_2c345c;
        case 0x2c3460u: goto label_2c3460;
        case 0x2c3464u: goto label_2c3464;
        case 0x2c3468u: goto label_2c3468;
        case 0x2c346cu: goto label_2c346c;
        case 0x2c3470u: goto label_2c3470;
        case 0x2c3474u: goto label_2c3474;
        case 0x2c3478u: goto label_2c3478;
        case 0x2c347cu: goto label_2c347c;
        case 0x2c3480u: goto label_2c3480;
        case 0x2c3484u: goto label_2c3484;
        case 0x2c3488u: goto label_2c3488;
        case 0x2c348cu: goto label_2c348c;
        case 0x2c3490u: goto label_2c3490;
        case 0x2c3494u: goto label_2c3494;
        case 0x2c3498u: goto label_2c3498;
        case 0x2c349cu: goto label_2c349c;
        case 0x2c34a0u: goto label_2c34a0;
        case 0x2c34a4u: goto label_2c34a4;
        case 0x2c34a8u: goto label_2c34a8;
        case 0x2c34acu: goto label_2c34ac;
        case 0x2c34b0u: goto label_2c34b0;
        case 0x2c34b4u: goto label_2c34b4;
        case 0x2c34b8u: goto label_2c34b8;
        case 0x2c34bcu: goto label_2c34bc;
        case 0x2c34c0u: goto label_2c34c0;
        case 0x2c34c4u: goto label_2c34c4;
        case 0x2c34c8u: goto label_2c34c8;
        case 0x2c34ccu: goto label_2c34cc;
        case 0x2c34d0u: goto label_2c34d0;
        case 0x2c34d4u: goto label_2c34d4;
        case 0x2c34d8u: goto label_2c34d8;
        case 0x2c34dcu: goto label_2c34dc;
        case 0x2c34e0u: goto label_2c34e0;
        case 0x2c34e4u: goto label_2c34e4;
        case 0x2c34e8u: goto label_2c34e8;
        case 0x2c34ecu: goto label_2c34ec;
        case 0x2c34f0u: goto label_2c34f0;
        case 0x2c34f4u: goto label_2c34f4;
        case 0x2c34f8u: goto label_2c34f8;
        case 0x2c34fcu: goto label_2c34fc;
        default: break;
    }

    ctx->pc = 0x2c3440u;

label_2c3440:
    // 0x2c3440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c3444:
    // 0x2c3444: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c3444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2c3448:
    // 0x2c3448: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c3448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2c344c:
    // 0x2c344c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2c344cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2c3450:
    // 0x2c3450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3454:
    // 0x2c3454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c3458:
    // 0x2c3458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c345c:
    // 0x2c345c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2c345cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_2c3460:
    // 0x2c3460: 0xa6020112  sh          $v0, 0x112($s0)
    ctx->pc = 0x2c3460u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 274), (uint16_t)GPR_U32(ctx, 2));
label_2c3464:
    // 0x2c3464: 0x248474a0  addiu       $a0, $a0, 0x74A0
    ctx->pc = 0x2c3464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
label_2c3468:
    // 0x2c3468: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x2c3468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
label_2c346c:
    // 0x2c346c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x2c346cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2c3470:
    // 0x2c3470: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x2c3470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_2c3474:
    // 0x2c3474: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2c3474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2c3478:
    // 0x2c3478: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2c3478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_2c347c:
    // 0x2c347c: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x2c347cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_2c3480:
    // 0x2c3480: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x2c3480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_2c3484:
    // 0x2c3484: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x2c3484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_2c3488:
    // 0x2c3488: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x2c3488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_2c348c:
    // 0x2c348c: 0xa2000108  sb          $zero, 0x108($s0)
    ctx->pc = 0x2c348cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 0));
label_2c3490:
    // 0x2c3490: 0xa60000e8  sh          $zero, 0xE8($s0)
    ctx->pc = 0x2c3490u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 0));
label_2c3494:
    // 0x2c3494: 0xac850610  sw          $a1, 0x610($a0)
    ctx->pc = 0x2c3494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1552), GPR_U32(ctx, 5));
label_2c3498:
    // 0x2c3498: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2c3498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c349c:
    // 0x2c349c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2c34a0:
    // 0x2c34a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c34a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c34a4:
    // 0x2c34a4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2c34a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2c34a8:
    // 0x2c34a8: 0x8c830590  lw          $v1, 0x590($a0)
    ctx->pc = 0x2c34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1424)));
label_2c34ac:
    // 0x2c34ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c34acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2c34b0:
    // 0x2c34b0: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_2c34b4:
    if (ctx->pc == 0x2C34B4u) {
        ctx->pc = 0x2C34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34B0u;
        // 0x2c34b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C34B8u;
        goto label_2c34b8;
    }
    ctx->pc = 0x2C34B0u;
    {
        const bool branch_taken_0x2c34b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c34b0) {
            ctx->pc = 0x2C34B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C34B0u;
            // 0x2c34b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C34ECu;
            goto label_2c34ec;
        }
    }
    ctx->pc = 0x2C34B8u;
label_2c34b8:
    // 0x2c34b8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2c34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2c34bc:
    // 0x2c34bc: 0x2451a990  addiu       $s1, $v0, -0x5670
    ctx->pc = 0x2c34bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945168));
label_2c34c0:
    // 0x2c34c0: 0xc0b66f4  jal         func_2D9BD0
label_2c34c4:
    if (ctx->pc == 0x2C34C4u) {
        ctx->pc = 0x2C34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34C0u;
        // 0x2c34c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C34C8u;
        goto label_2c34c8;
    }
    ctx->pc = 0x2C34C0u;
    SET_GPR_U32(ctx, 31, 0x2C34C8u);
    ctx->pc = 0x2C34C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C34C0u;
    // 0x2c34c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BD0u, 0x2C34C0u, 0x2C34C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C34C8u;
label_2c34c8:
    // 0x2c34c8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2c34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2c34cc:
    // 0x2c34cc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2c34ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2c34d0:
    // 0x2c34d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c34d4:
    if (ctx->pc == 0x2C34D4u) {
        ctx->pc = 0x2C34D8u;
        goto label_2c34d8;
    }
    ctx->pc = 0x2C34D0u;
    {
        const bool branch_taken_0x2c34d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c34d0) {
            ctx->pc = 0x2C34E0u;
            goto label_2c34e0;
        }
    }
    ctx->pc = 0x2C34D8u;
label_2c34d8:
    // 0x2c34d8: 0x80f809  jalr        $a0
label_2c34dc:
    if (ctx->pc == 0x2C34DCu) {
        ctx->pc = 0x2C34E0u;
        goto label_2c34e0;
    }
    ctx->pc = 0x2C34D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x2C34E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C34D8u, 0x2C34E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C34E0u;
label_2c34e0:
    // 0x2c34e0: 0xc0b66f6  jal         func_2D9BD8
label_2c34e4:
    if (ctx->pc == 0x2C34E4u) {
        ctx->pc = 0x2C34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34E0u;
        // 0x2c34e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C34E8u;
        goto label_2c34e8;
    }
    ctx->pc = 0x2C34E0u;
    SET_GPR_U32(ctx, 31, 0x2C34E8u);
    ctx->pc = 0x2C34E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C34E0u;
    // 0x2c34e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BD8u, 0x2C34E0u, 0x2C34E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C34E8u;
label_2c34e8:
    // 0x2c34e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c34e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c34ec:
    // 0x2c34ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c34ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c34f0:
    // 0x2c34f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c34f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c34f4:
    // 0x2c34f4: 0x3e00008  jr          $ra
label_2c34f8:
    if (ctx->pc == 0x2C34F8u) {
        ctx->pc = 0x2C34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34F4u;
        // 0x2c34f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C34FCu;
        goto label_2c34fc;
    }
    ctx->pc = 0x2C34F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34F4u;
        // 0x2c34f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C34F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C34FCu;
label_2c34fc:
    // 0x2c34fc: 0x0  nop
    ctx->pc = 0x2c34fcu;
    // NOP
    ctx->pc = 0x2c3500u;
}
