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

// Function: func_00330580
// Address: 0x330580 - 0x330648
void func_00330580_0x330580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330580_0x330580");
#endif

    switch (ctx->pc) {
        case 0x3305c0u: goto label_3305c0;
        case 0x3305f0u: goto label_3305f0;
        case 0x3305fcu: goto label_3305fc;
        default: break;
    }

    ctx->pc = 0x330580u;

    // 0x330580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x330584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33058c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33058cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x330590: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x330590u;
    {
        const bool branch_taken_0x330590 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x330594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330590u;
        // 0x330594: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330590) {
            ctx->pc = 0x3305B8u;
            goto label_3305b8;
        }
    }
    ctx->pc = 0x330598u;
    // 0x330598: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33059c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33059cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3305a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3305a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3305a4: 0x248431c8  addiu       $a0, $a0, 0x31C8
    ctx->pc = 0x3305a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12744));
    // 0x3305a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3305a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3305ac: 0x80cc0b8  j           func_3302E0
    ctx->pc = 0x3305ACu;
    ctx->pc = 0x3305B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3305ACu;
    // 0x3305b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x3305ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3305B4u;
    // 0x3305b4: 0x0  nop
    ctx->pc = 0x3305b4u;
    // NOP
label_3305b8:
    // 0x3305b8: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3305B8u;
    SET_GPR_U32(ctx, 31, 0x3305C0u);
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3305B8u, 0x3305C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305C0u;
label_3305c0:
    // 0x3305c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3305c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3305c4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3305C4u;
    {
        const bool branch_taken_0x3305c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3305C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305C4u;
        // 0x3305c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3305c4) {
            ctx->pc = 0x3305E8u;
            goto label_3305e8;
        }
    }
    ctx->pc = 0x3305CCu;
    // 0x3305cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3305ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3305d0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x3305d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x3305d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3305d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3305d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3305d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3305dc: 0xa0406080  sb          $zero, 0x6080($v0)
    ctx->pc = 0x3305dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x756080u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x756080u, _value); } while (0);
    // 0x3305e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3305E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3305E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305E0u;
        // 0x3305e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3305E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3305E8u;
label_3305e8:
    // 0x3305e8: 0xc0cc146  jal         func_330518
    ctx->pc = 0x3305E8u;
    SET_GPR_U32(ctx, 31, 0x3305F0u);
    ctx->pc = 0x330518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330518u, 0x3305E8u, 0x3305F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305F0u;
label_3305f0:
    // 0x3305f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3305f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3305f4: 0xc0cc192  jal         func_330648
    ctx->pc = 0x3305F4u;
    SET_GPR_U32(ctx, 31, 0x3305FCu);
    ctx->pc = 0x3305F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3305F4u;
    // 0x3305f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330648u, 0x3305F4u, 0x3305FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305FCu;
label_3305fc:
    // 0x3305fc: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x3305fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x330600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330604: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x330604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x330608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x330608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33060c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33060Cu;
    {
        const bool branch_taken_0x33060c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x330610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33060Cu;
        // 0x330610: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33060c) {
            ctx->pc = 0x330628u;
            goto label_330628;
        }
    }
    ctx->pc = 0x330614u;
    // 0x330614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330618: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33061c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33061cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330620: 0x80e9452  j           func_3A5148
    ctx->pc = 0x330620u;
    ctx->pc = 0x330624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330620u;
    // 0x330624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x330620u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330628u;
label_330628:
    // 0x330628: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33062c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33062cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330630: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330634: 0x248431f0  addiu       $a0, $a0, 0x31F0
    ctx->pc = 0x330634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12784));
    // 0x330638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x330638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33063c: 0x80cc0b8  j           func_3302E0
    ctx->pc = 0x33063Cu;
    ctx->pc = 0x330640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33063Cu;
    // 0x330640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x33063Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330644u;
    // 0x330644: 0x0  nop
    ctx->pc = 0x330644u;
    // NOP
    ctx->pc = 0x330648u;
}
