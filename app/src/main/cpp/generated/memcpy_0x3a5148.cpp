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

// Function: memcpy
// Address: 0x3a5148 - 0x3a51f4
void memcpy_0x3a5148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memcpy_0x3a5148");
#endif

    switch (ctx->pc) {
        case 0x3a516cu: goto label_3a516c;
        case 0x3a51a4u: goto label_3a51a4;
        case 0x3a51d4u: goto label_3a51d4;
        default: break;
    }

    ctx->pc = 0x3a5148u;

    // 0x3a5148: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a5148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a514c: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x3a514cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a5150: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A5150u;
    {
        const bool branch_taken_0x3a5150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5150u;
        // 0x3a5154: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5150) {
            ctx->pc = 0x3A51C4u;
            goto label_3a51c4;
        }
    }
    ctx->pc = 0x3A5158u;
    // 0x3a5158: 0xa81025  or          $v0, $a1, $t0
    ctx->pc = 0x3a5158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x3a515c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3a515cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3a5160: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A5160u;
    {
        const bool branch_taken_0x3a5160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5160) {
            ctx->pc = 0x3A5164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5160u;
            // 0x3a5164: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A51C8u;
            goto label_3a51c8;
        }
    }
    ctx->pc = 0x3A5168u;
    // 0x3a5168: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3a5168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3a516c:
    // 0x3a516c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a516cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5170: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3a5170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x3a5174: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3a5174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3a5178: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x3a5178u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a517c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3a517cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3a5180: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3a5180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3a5184: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a5184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5188: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3a5188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3a518c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3a518cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3a5190: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A5190u;
    {
        const bool branch_taken_0x3a5190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5190u;
        // 0x3a5194: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5190) {
            ctx->pc = 0x3A516Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a516c;
        }
    }
    ctx->pc = 0x3A5198u;
    // 0x3a5198: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3a5198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a519c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A519Cu;
    {
        const bool branch_taken_0x3a519c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A519Cu;
        // 0x3a51a0: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a519c) {
            ctx->pc = 0x3A51C4u;
            goto label_3a51c4;
        }
    }
    ctx->pc = 0x3A51A4u;
label_3a51a4:
    // 0x3a51a4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3a51a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a51a8: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3a51a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3a51ac: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a51acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3a51b0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3a51b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a51b4: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3a51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3a51b8: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A51B8u;
    {
        const bool branch_taken_0x3a51b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51B8u;
        // 0x3a51bc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51b8) {
            ctx->pc = 0x3A51A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a51a4;
        }
    }
    ctx->pc = 0x3A51C0u;
    // 0x3a51c0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3a51c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a51c4:
    // 0x3a51c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a51c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3a51c8:
    // 0x3a51c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a51cc: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A51CCu;
    {
        const bool branch_taken_0x3a51cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51CCu;
        // 0x3a51d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51cc) {
            ctx->pc = 0x3A51ECu;
            goto label_3a51ec;
        }
    }
    ctx->pc = 0x3A51D4u;
label_3a51d4:
    // 0x3a51d4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a51d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a51d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a51d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a51dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a51dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a51e0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3a51e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a51e4: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A51E4u;
    {
        const bool branch_taken_0x3a51e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51E4u;
        // 0x3a51e8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51e4) {
            ctx->pc = 0x3A51D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a51d4;
        }
    }
    ctx->pc = 0x3A51ECu;
label_3a51ec:
    // 0x3a51ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3A51ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51ECu;
        // 0x3a51f0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A51ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A51F4u;
}
