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

// Function: func_001DE088
// Address: 0x1de088 - 0x1de170
void func_001DE088_0x1de088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DE088_0x1de088");
#endif

    switch (ctx->pc) {
        case 0x1de0ccu: goto label_1de0cc;
        case 0x1de0dcu: goto label_1de0dc;
        case 0x1de0f8u: goto label_1de0f8;
        case 0x1de114u: goto label_1de114;
        case 0x1de124u: goto label_1de124;
        case 0x1de138u: goto label_1de138;
        case 0x1de148u: goto label_1de148;
        case 0x1de160u: goto label_1de160;
        default: break;
    }

    ctx->pc = 0x1de088u;

    // 0x1de088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de08c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1de08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de090: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1de090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1de094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de09c: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DE09Cu;
    {
        const bool branch_taken_0x1de09c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE09Cu;
        // 0x1de0a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de09c) {
            ctx->pc = 0x1DE0ECu;
            goto label_1de0ec;
        }
    }
    ctx->pc = 0x1DE0A4u;
    // 0x1de0a4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1de0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de0a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE0A8u;
    {
        const bool branch_taken_0x1de0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de0a8) {
            ctx->pc = 0x1DE0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE0A8u;
            // 0x1de0ac: 0x260401d4  addiu       $a0, $s0, 0x1D4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 468));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE0C4u;
            goto label_1de0c4;
        }
    }
    ctx->pc = 0x1DE0B0u;
    // 0x1de0b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de0b4: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DE0B4u;
    {
        const bool branch_taken_0x1de0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0B4u;
        // 0x1de0b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0b4) {
            ctx->pc = 0x1DE100u;
            goto label_1de100;
        }
    }
    ctx->pc = 0x1DE0BCu;
    // 0x1de0bc: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DE0BCu;
    {
        const bool branch_taken_0x1de0bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0BCu;
        // 0x1de0c0: 0x260401d4  addiu       $a0, $s0, 0x1D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 468));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0bc) {
            ctx->pc = 0x1DE150u;
            goto label_1de150;
        }
    }
    ctx->pc = 0x1DE0C4u;
label_1de0c4:
    // 0x1de0c4: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE0C4u;
    SET_GPR_U32(ctx, 31, 0x1DE0CCu);
    ctx->pc = 0x1DE0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0C4u;
    // 0x1de0c8: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE0C4u, 0x1DE0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0CCu;
label_1de0cc:
    // 0x1de0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1de0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1de0d4: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE0D4u;
    SET_GPR_U32(ctx, 31, 0x1DE0DCu);
    ctx->pc = 0x1DE0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0D4u;
    // 0x1de0d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE0D4u, 0x1DE0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0DCu;
label_1de0dc:
    // 0x1de0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1de0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1de0e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1DE0E4u;
    {
        const bool branch_taken_0x1de0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0E4u;
        // 0x1de0e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0e4) {
            ctx->pc = 0x1DE130u;
            goto label_1de130;
        }
    }
    ctx->pc = 0x1DE0ECu;
label_1de0ec:
    // 0x1de0ec: 0x260401d4  addiu       $a0, $s0, 0x1D4
    ctx->pc = 0x1de0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 468));
    // 0x1de0f0: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE0F0u;
    SET_GPR_U32(ctx, 31, 0x1DE0F8u);
    ctx->pc = 0x1DE0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0F0u;
    // 0x1de0f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE0F0u, 0x1DE0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0F8u;
label_1de0f8:
    // 0x1de0f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE0F8u;
    {
        const bool branch_taken_0x1de0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0F8u;
        // 0x1de0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0f8) {
            ctx->pc = 0x1DE118u;
            goto label_1de118;
        }
    }
    ctx->pc = 0x1DE100u;
label_1de100:
    // 0x1de100: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1de100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de104: 0x260401d4  addiu       $a0, $s0, 0x1D4
    ctx->pc = 0x1de104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 468));
    // 0x1de108: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1de108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1de10c: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE10Cu;
    SET_GPR_U32(ctx, 31, 0x1DE114u);
    ctx->pc = 0x1DE110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE10Cu;
    // 0x1de110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE10Cu, 0x1DE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE114u;
label_1de114:
    // 0x1de114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de118:
    // 0x1de118: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1de118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1de11c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE11Cu;
    SET_GPR_U32(ctx, 31, 0x1DE124u);
    ctx->pc = 0x1DE120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE11Cu;
    // 0x1de120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE11Cu, 0x1DE124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE124u;
label_1de124:
    // 0x1de124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de128: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1de128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1de12c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de130:
    // 0x1de130: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE130u;
    SET_GPR_U32(ctx, 31, 0x1DE138u);
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE130u, 0x1DE138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE138u;
label_1de138:
    // 0x1de138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de13c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1de13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1de140: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE140u;
    SET_GPR_U32(ctx, 31, 0x1DE148u);
    ctx->pc = 0x1DE144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE140u;
    // 0x1de144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE140u, 0x1DE148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE148u;
label_1de148:
    // 0x1de148: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE148u;
    {
        const bool branch_taken_0x1de148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE148u;
        // 0x1de14c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de148) {
            ctx->pc = 0x1DE164u;
            goto label_1de164;
        }
    }
    ctx->pc = 0x1DE150u;
label_1de150:
    // 0x1de150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de154: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x1de154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1de158: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE158u;
    SET_GPR_U32(ctx, 31, 0x1DE160u);
    ctx->pc = 0x1DE15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE158u;
    // 0x1de15c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE158u, 0x1DE160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE160u;
label_1de160:
    // 0x1de160: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1de160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de164:
    // 0x1de164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de168: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE168u;
        // 0x1de16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE170u;
}
