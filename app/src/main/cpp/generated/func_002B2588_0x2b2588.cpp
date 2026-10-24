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

// Function: func_002B2588
// Address: 0x2b2588 - 0x2b2638
void func_002B2588_0x2b2588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2588_0x2b2588");
#endif

    switch (ctx->pc) {
        case 0x2b25a8u: goto label_2b25a8;
        case 0x2b25b4u: goto label_2b25b4;
        case 0x2b25c0u: goto label_2b25c0;
        case 0x2b25d8u: goto label_2b25d8;
        case 0x2b261cu: goto label_2b261c;
        default: break;
    }

    ctx->pc = 0x2b2588u;

    // 0x2b2588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b258c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b258cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b2590: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b2590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b2594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b259c: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x2b259cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2b25a0: 0xc0abb70  jal         func_2AEDC0
    ctx->pc = 0x2B25A0u;
    SET_GPR_U32(ctx, 31, 0x2B25A8u);
    ctx->pc = 0x2B25A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25A0u;
    // 0x2b25a4: 0x9205002c  lbu         $a1, 0x2C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEDC0u, 0x2B25A0u, 0x2B25A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B25A8u;
label_2b25a8:
    // 0x2b25a8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2b25a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b25ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B25ACu;
    {
        const bool branch_taken_0x2b25ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b25ac) {
            ctx->pc = 0x2B25B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B25ACu;
            // 0x2b25b0: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B25C0u;
            goto label_2b25c0;
        }
    }
    ctx->pc = 0x2B25B4u;
label_2b25b4:
    // 0x2b25b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2B25B4u;
    {
        const bool branch_taken_0x2b25b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25B4u;
        // 0x2b25b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25b4) {
            ctx->pc = 0x2B2624u;
            goto label_2b2624;
        }
    }
    ctx->pc = 0x2B25BCu;
    // 0x2b25bc: 0x0  nop
    ctx->pc = 0x2b25bcu;
    // NOP
label_2b25c0:
    // 0x2b25c0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b25c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b25c4: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x2b25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2b25c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B25C8u;
    {
        const bool branch_taken_0x2b25c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25C8u;
        // 0x2b25cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25c8) {
            ctx->pc = 0x2B2624u;
            goto label_2b2624;
        }
    }
    ctx->pc = 0x2B25D0u;
    // 0x2b25d0: 0xc0ac98e  jal         func_2B2638
    ctx->pc = 0x2B25D0u;
    SET_GPR_U32(ctx, 31, 0x2B25D8u);
    ctx->pc = 0x2B25D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25D0u;
    // 0x2b25d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2638u, 0x2B25D0u, 0x2B25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B25D8u;
label_2b25d8:
    // 0x2b25d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b25d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b25dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b25e0: 0x1062fff4  beq         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B25E0u;
    {
        const bool branch_taken_0x2b25e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25E0u;
        // 0x2b25e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25e0) {
            ctx->pc = 0x2B25B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b25b4;
        }
    }
    ctx->pc = 0x2B25E8u;
    // 0x2b25e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B25E8u;
    {
        const bool branch_taken_0x2b25e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25E8u;
        // 0x2b25ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25e8) {
            ctx->pc = 0x2B2600u;
            goto label_2b2600;
        }
    }
    ctx->pc = 0x2B25F0u;
    // 0x2b25f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B25F0u;
    {
        const bool branch_taken_0x2b25f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25F0u;
        // 0x2b25f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25f0) {
            ctx->pc = 0x2B2610u;
            goto label_2b2610;
        }
    }
    ctx->pc = 0x2B25F8u;
    // 0x2b25f8: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x2B25F8u;
    {
        const bool branch_taken_0x2b25f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25F8u;
        // 0x2b25fc: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25f8) {
            ctx->pc = 0x2B25C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b25c0;
        }
    }
    ctx->pc = 0x2B2600u;
label_2b2600:
    // 0x2b2600: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2600u;
    {
        const bool branch_taken_0x2b2600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2600u;
        // 0x2b2604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2600) {
            ctx->pc = 0x2B2624u;
            goto label_2b2624;
        }
    }
    ctx->pc = 0x2B2608u;
    // 0x2b2608: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2B2608u;
    {
        const bool branch_taken_0x2b2608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2608u;
        // 0x2b260c: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2608) {
            ctx->pc = 0x2B25C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b25c0;
        }
    }
    ctx->pc = 0x2B2610u;
label_2b2610:
    // 0x2b2610: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x2b2610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2b2614: 0xc0ad1da  jal         func_2B4768
    ctx->pc = 0x2B2614u;
    SET_GPR_U32(ctx, 31, 0x2B261Cu);
    ctx->pc = 0x2B2618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2614u;
    // 0x2b2618: 0x2606008c  addiu       $a2, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4768u, 0x2B2614u, 0x2B261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B261Cu;
label_2b261c:
    // 0x2b261c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2B261Cu;
    {
        const bool branch_taken_0x2b261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B261Cu;
        // 0x2b2620: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b261c) {
            ctx->pc = 0x2B25C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b25c0;
        }
    }
    ctx->pc = 0x2B2624u;
label_2b2624:
    // 0x2b2624: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b2624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b262c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B262Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B262Cu;
        // 0x2b2630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B262Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2634u;
    // 0x2b2634: 0x0  nop
    ctx->pc = 0x2b2634u;
    // NOP
    ctx->pc = 0x2b2638u;
}
