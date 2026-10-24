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

// Function: cEvent_updateRelease
// Address: 0x297038 - 0x297128
void cEvent_updateRelease_0x297038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_updateRelease_0x297038");
#endif

    switch (ctx->pc) {
        case 0x29706cu: goto label_29706c;
        case 0x2970c4u: goto label_2970c4;
        case 0x2970d8u: goto label_2970d8;
        case 0x2970e4u: goto label_2970e4;
        case 0x2970ecu: goto label_2970ec;
        case 0x297104u: goto label_297104;
        case 0x297114u: goto label_297114;
        default: break;
    }

    ctx->pc = 0x297038u;

    // 0x297038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29703c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x297040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297048: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x297048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29704c: 0x311fa  dsrl        $v0, $v1, 7
    ctx->pc = 0x29704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
    // 0x297050: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x297050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x297054: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297054u;
    {
        const bool branch_taken_0x297054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297054u;
        // 0x297058: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297054) {
            ctx->pc = 0x297064u;
            goto label_297064;
        }
    }
    ctx->pc = 0x29705Cu;
    // 0x29705c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29705Cu;
    {
        const bool branch_taken_0x29705c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29705c) {
            ctx->pc = 0x297060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29705Cu;
            // 0x297060: 0x82030005  lb          $v1, 0x5($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297074u;
            goto label_297074;
        }
    }
    ctx->pc = 0x297064u;
label_297064:
    // 0x297064: 0xc0a5c4a  jal         func_297128
    ctx->pc = 0x297064u;
    SET_GPR_U32(ctx, 31, 0x29706Cu);
    ctx->pc = 0x297068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297064u;
    // 0x297068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297128u, 0x297064u, 0x29706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29706Cu;
label_29706c:
    // 0x29706c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x29706Cu;
    {
        const bool branch_taken_0x29706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29706Cu;
        // 0x297070: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29706c) {
            ctx->pc = 0x297118u;
            goto label_297118;
        }
    }
    ctx->pc = 0x297074u;
label_297074:
    // 0x297074: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297074u;
    {
        const bool branch_taken_0x297074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297074u;
        // 0x297078: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297074) {
            ctx->pc = 0x29708Cu;
            goto label_29708c;
        }
    }
    ctx->pc = 0x29707Cu;
    // 0x29707c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29707Cu;
    {
        const bool branch_taken_0x29707c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29707c) {
            ctx->pc = 0x2970FCu;
            goto label_2970fc;
        }
    }
    ctx->pc = 0x297084u;
    // 0x297084: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x297084u;
    {
        const bool branch_taken_0x297084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297084u;
        // 0x297088: 0x92020005  lbu         $v0, 0x5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297084) {
            ctx->pc = 0x2970F0u;
            goto label_2970f0;
        }
    }
    ctx->pc = 0x29708Cu;
label_29708c:
    // 0x29708c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x29708cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x297090: 0x8c626b34  lw          $v0, 0x6B34($v1)
    ctx->pc = 0x297090u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x586B34u));
    // 0x297094: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x297094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x297098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x297098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29709c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29709Cu;
    {
        const bool branch_taken_0x29709c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2970A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29709Cu;
        // 0x2970a0: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29709c) {
            ctx->pc = 0x2970E4u;
            goto label_2970e4;
        }
    }
    ctx->pc = 0x2970A4u;
    // 0x2970a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2970a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970a8: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x2970a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x2970ac: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2970acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2970b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2970b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970b4: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x2970b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x2970b8: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x2970b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x2970bc: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x2970BCu;
    SET_GPR_U32(ctx, 31, 0x2970C4u);
    ctx->pc = 0x2970C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970BCu;
    // 0x2970c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x2970BCu, 0x2970C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970C4u;
label_2970c4:
    // 0x2970c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2970c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2970c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2970c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2970ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970d0: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x2970D0u;
    SET_GPR_U32(ctx, 31, 0x2970D8u);
    ctx->pc = 0x2970D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970D0u;
    // 0x2970d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x2970D0u, 0x2970D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970D8u;
label_2970d8:
    // 0x2970d8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2970d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2970dc: 0xc0ad96c  jal         func_2B65B0
    ctx->pc = 0x2970DCu;
    SET_GPR_U32(ctx, 31, 0x2970E4u);
    ctx->pc = 0x2970E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970DCu;
    // 0x2970e0: 0x8c442558  lw          $a0, 0x2558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x2970DCu, 0x2970E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970E4u;
label_2970e4:
    // 0x2970e4: 0xc0a5ea2  jal         func_297A88
    ctx->pc = 0x2970E4u;
    SET_GPR_U32(ctx, 31, 0x2970ECu);
    ctx->pc = 0x2970E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970E4u;
    // 0x2970e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A88u, 0x2970E4u, 0x2970ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970ECu;
label_2970ec:
    // 0x2970ec: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x2970ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_2970f0:
    // 0x2970f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2970f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2970f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2970F4u;
    {
        const bool branch_taken_0x2970f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2970F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970F4u;
        // 0x2970f8: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2970f4) {
            ctx->pc = 0x297114u;
            goto label_297114;
        }
    }
    ctx->pc = 0x2970FCu;
label_2970fc:
    // 0x2970fc: 0xc0a5eaa  jal         func_297AA8
    ctx->pc = 0x2970FCu;
    SET_GPR_U32(ctx, 31, 0x297104u);
    ctx->pc = 0x297100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970FCu;
    // 0x297100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297AA8u, 0x2970FCu, 0x297104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297104u;
label_297104:
    // 0x297104: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x297104u;
    {
        const bool branch_taken_0x297104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297104) {
            ctx->pc = 0x297108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297104u;
            // 0x297108: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297118u;
            goto label_297118;
        }
    }
    ctx->pc = 0x29710Cu;
    // 0x29710c: 0xc0a5c4a  jal         func_297128
    ctx->pc = 0x29710Cu;
    SET_GPR_U32(ctx, 31, 0x297114u);
    ctx->pc = 0x297110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29710Cu;
    // 0x297110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297128u, 0x29710Cu, 0x297114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297114u;
label_297114:
    // 0x297114: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x297114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_297118:
    // 0x297118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29711c: 0x3e00008  jr          $ra
    ctx->pc = 0x29711Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29711Cu;
        // 0x297120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29711Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297124u;
    // 0x297124: 0x0  nop
    ctx->pc = 0x297124u;
    // NOP
    ctx->pc = 0x297128u;
}
