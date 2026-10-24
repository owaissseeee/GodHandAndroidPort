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

// Function: sys_read__8stdiobufPcl
// Address: 0x393628 - 0x3936c0
void sys_read__8stdiobufPcl_0x393628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sys_read__8stdiobufPcl_0x393628");
#endif

    switch (ctx->pc) {
        case 0x39365cu: goto label_39365c;
        case 0x3936a8u: goto label_3936a8;
        default: break;
    }

    ctx->pc = 0x393628u;

    // 0x393628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x393628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39362c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x393630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x393630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x393634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x393634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x393638: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x393638u;
    {
        const bool branch_taken_0x393638 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x39363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393638u;
        // 0x39363c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393638) {
            ctx->pc = 0x393690u;
            goto label_393690;
        }
    }
    ctx->pc = 0x393640u;
    // 0x393640: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x393640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x393644: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x393644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x393648: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x393648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39364c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39364Cu;
    {
        const bool branch_taken_0x39364c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x393650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39364Cu;
        // 0x393650: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39364c) {
            ctx->pc = 0x393664u;
            goto label_393664;
        }
    }
    ctx->pc = 0x393654u;
    // 0x393654: 0xc0e9b04  jal         func_3A6C10
    ctx->pc = 0x393654u;
    SET_GPR_U32(ctx, 31, 0x39365Cu);
    ctx->pc = 0x3A6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C10u, 0x393654u, 0x39365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39365Cu;
label_39365c:
    // 0x39365c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39365Cu;
    {
        const bool branch_taken_0x39365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39365Cu;
        // 0x393660: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39365c) {
            ctx->pc = 0x393674u;
            goto label_393674;
        }
    }
    ctx->pc = 0x393664u;
label_393664:
    // 0x393664: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x393664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x393668: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x393668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39366c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x393670: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x393670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_393674:
    // 0x393674: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x393674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x393678: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x393678u;
    {
        const bool branch_taken_0x393678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x393678) {
            ctx->pc = 0x39367Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393678u;
            // 0x39367c: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393688u;
            goto label_393688;
        }
    }
    ctx->pc = 0x393680u;
    // 0x393680: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x393680u;
    {
        const bool branch_taken_0x393680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393680u;
        // 0x393684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393680) {
            ctx->pc = 0x3936B0u;
            goto label_3936b0;
        }
    }
    ctx->pc = 0x393688u;
label_393688:
    // 0x393688: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x393688u;
    {
        const bool branch_taken_0x393688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393688u;
        // 0x39368c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393688) {
            ctx->pc = 0x3936B0u;
            goto label_3936b0;
        }
    }
    ctx->pc = 0x393690u;
label_393690:
    // 0x393690: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x393690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x393694: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x393694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x393698: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x393698u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x39369c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3936a0: 0xc0e98c2  jal         func_3A6308
    ctx->pc = 0x3936A0u;
    SET_GPR_U32(ctx, 31, 0x3936A8u);
    ctx->pc = 0x3936A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3936A0u;
    // 0x3936a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6308u, 0x3936A0u, 0x3936A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3936A8u;
label_3936a8:
    // 0x3936a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3936a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3936ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3936acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3936b0:
    // 0x3936b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3936b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3936b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3936b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3936b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3936B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3936BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936B8u;
        // 0x3936bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3936B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3936C0u;
}
