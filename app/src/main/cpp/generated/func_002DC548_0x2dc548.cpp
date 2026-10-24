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

// Function: func_002DC548
// Address: 0x2dc548 - 0x2dc5e0
void func_002DC548_0x2dc548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC548_0x2dc548");
#endif

    switch (ctx->pc) {
        case 0x2dc560u: goto label_2dc560;
        case 0x2dc578u: goto label_2dc578;
        case 0x2dc59cu: goto label_2dc59c;
        case 0x2dc5ccu: goto label_2dc5cc;
        default: break;
    }

    ctx->pc = 0x2dc548u;

    // 0x2dc548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc54c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dc54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dc550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc558: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC558u;
    SET_GPR_U32(ctx, 31, 0x2DC560u);
    ctx->pc = 0x2DC55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC558u;
    // 0x2dc55c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC558u, 0x2DC560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC560u;
label_2dc560:
    // 0x2dc560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dc560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc564: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dc564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dc568: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DC568u;
    {
        const bool branch_taken_0x2dc568 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc568) {
            ctx->pc = 0x2DC56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC568u;
            // 0x2dc56c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC5D0u;
            goto label_2dc5d0;
        }
    }
    ctx->pc = 0x2DC570u;
    // 0x2dc570: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC570u;
    SET_GPR_U32(ctx, 31, 0x2DC578u);
    ctx->pc = 0x2DC574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC570u;
    // 0x2dc574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC570u, 0x2DC578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC578u;
label_2dc578:
    // 0x2dc578: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DC578u;
    {
        const bool branch_taken_0x2dc578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc578) {
            ctx->pc = 0x2DC57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC578u;
            // 0x2dc57c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC5D0u;
            goto label_2dc5d0;
        }
    }
    ctx->pc = 0x2DC580u;
    // 0x2dc580: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc584: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc588: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc588u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc58c: 0x5c600010  bgtzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC58Cu;
    {
        const bool branch_taken_0x2dc58c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc58c) {
            ctx->pc = 0x2DC590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC58Cu;
            // 0x2dc590: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC5D0u;
            goto label_2dc5d0;
        }
    }
    ctx->pc = 0x2DC594u;
    // 0x2dc594: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC594u;
    SET_GPR_U32(ctx, 31, 0x2DC59Cu);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC594u, 0x2DC59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC59Cu;
label_2dc59c:
    // 0x2dc59c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC59Cu;
    {
        const bool branch_taken_0x2dc59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc59c) {
            ctx->pc = 0x2DC5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC59Cu;
            // 0x2dc5a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC5D0u;
            goto label_2dc5d0;
        }
    }
    ctx->pc = 0x2DC5A4u;
    // 0x2dc5a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc5a8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2dc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2dc5ac: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dc5acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5b4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dc5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc5b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dc5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5bc: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2dc5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dc5c0: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x2dc5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2dc5c4: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DC5C4u;
    SET_GPR_U32(ctx, 31, 0x2DC5CCu);
    ctx->pc = 0x2DC5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5C4u;
    // 0x2dc5c8: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DC5C4u, 0x2DC5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5CCu;
label_2dc5cc:
    // 0x2dc5cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dc5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc5d0:
    // 0x2dc5d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc5d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC5D8u;
        // 0x2dc5dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC5E0u;
}
