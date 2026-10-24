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

// Function: SetViewScrollIdAll
// Address: 0x2db620 - 0x2db6b0
void SetViewScrollIdAll_0x2db620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetViewScrollIdAll_0x2db620");
#endif

    switch (ctx->pc) {
        case 0x2db650u: goto label_2db650;
        default: break;
    }

    ctx->pc = 0x2db620u;

    // 0x2db620: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x2db620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x2db624: 0x8ca24c38  lw          $v0, 0x4C38($a1)
    ctx->pc = 0x2db624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C38u));
    // 0x2db628: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2db628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db62c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2db62cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db630: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2DB630u;
    {
        const bool branch_taken_0x2db630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB630u;
        // 0x2db634: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db630) {
            ctx->pc = 0x2DB6A4u;
            goto label_2db6a4;
        }
    }
    ctx->pc = 0x2DB638u;
    // 0x2db638: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2db638u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2db63c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2db63cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db640: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x2db640u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x2db644: 0x34e7fffd  ori         $a3, $a3, 0xFFFD
    ctx->pc = 0x2db644u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65533);
    // 0x2db648: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2db648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2db64c: 0x0  nop
    ctx->pc = 0x2db64cu;
    // NOP
label_2db650:
    // 0x2db650: 0x90a402fd  lbu         $a0, 0x2FD($a1)
    ctx->pc = 0x2db650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 765)));
    // 0x2db654: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x2db654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2db658: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB658u;
    {
        const bool branch_taken_0x2db658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB658u;
        // 0x2db65c: 0x41142  srl         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db658) {
            ctx->pc = 0x2DB690u;
            goto label_2db690;
        }
    }
    ctx->pc = 0x2DB660u;
    // 0x2db660: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db664: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2db664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2db668: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2db668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2db66c: 0x892006  srlv        $a0, $t1, $a0
    ctx->pc = 0x2db66cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2db670: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2db670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db674: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2db674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2db678: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB678u;
    {
        const bool branch_taken_0x2db678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB678u;
        // 0x2db67c: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db678) {
            ctx->pc = 0x2DB688u;
            goto label_2db688;
        }
    }
    ctx->pc = 0x2DB680u;
    // 0x2db680: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB680u;
    {
        const bool branch_taken_0x2db680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB680u;
        // 0x2db684: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db680) {
            ctx->pc = 0x2DB68Cu;
            goto label_2db68c;
        }
    }
    ctx->pc = 0x2DB688u;
label_2db688:
    // 0x2db688: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2db688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2db68c:
    // 0x2db68c: 0xaca20250  sw          $v0, 0x250($a1)
    ctx->pc = 0x2db68cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
label_2db690:
    // 0x2db690: 0x8d434c38  lw          $v1, 0x4C38($t2)
    ctx->pc = 0x2db690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19512)));
    // 0x2db694: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2db694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2db698: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db69c: 0x54c2ffec  bnel        $a2, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2DB69Cu;
    {
        const bool branch_taken_0x2db69c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db69c) {
            ctx->pc = 0x2DB6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB69Cu;
            // 0x2db6a0: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db650;
        }
    }
    ctx->pc = 0x2DB6A4u;
label_2db6a4:
    // 0x2db6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB6ACu;
    // 0x2db6ac: 0x0  nop
    ctx->pc = 0x2db6acu;
    // NOP
    ctx->pc = 0x2db6b0u;
}
