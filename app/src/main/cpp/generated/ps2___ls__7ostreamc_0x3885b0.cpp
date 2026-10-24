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

// Function: __ls__7ostreamc
// Address: 0x3885b0 - 0x388660
void ps2___ls__7ostreamc_0x3885b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreamc_0x3885b0");
#endif

    switch (ctx->pc) {
        case 0x3885f4u: goto label_3885f4;
        case 0x388610u: goto label_388610;
        case 0x388644u: goto label_388644;
        default: break;
    }

    ctx->pc = 0x3885b0u;

    // 0x3885b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3885b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3885b4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3885b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3885b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3885b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3885bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3885bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3885c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3885c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3885c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3885c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3885c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3885c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3885cc: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x3885ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x3885d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3885D0u;
    {
        const bool branch_taken_0x3885d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3885D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885D0u;
        // 0x3885d4: 0x58e03  sra         $s1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885d0) {
            ctx->pc = 0x3885E0u;
            goto label_3885e0;
        }
    }
    ctx->pc = 0x3885D8u;
    // 0x3885d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3885D8u;
    {
        const bool branch_taken_0x3885d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3885DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885D8u;
        // 0x3885dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885d8) {
            ctx->pc = 0x3885F8u;
            goto label_3885f8;
        }
    }
    ctx->pc = 0x3885E0u;
label_3885e0:
    // 0x3885e0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3885e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3885e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3885E4u;
    {
        const bool branch_taken_0x3885e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3885E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885E4u;
        // 0x3885e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885e4) {
            ctx->pc = 0x3885F8u;
            goto label_3885f8;
        }
    }
    ctx->pc = 0x3885ECu;
    // 0x3885ec: 0xc0e249a  jal         func_389268
    ctx->pc = 0x3885ECu;
    SET_GPR_U32(ctx, 31, 0x3885F4u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x3885ECu, 0x3885F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3885F4u;
label_3885f4:
    // 0x3885f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3885f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3885f8:
    // 0x3885f8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3885F8u;
    {
        const bool branch_taken_0x3885f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3885FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885F8u;
        // 0x3885fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885f8) {
            ctx->pc = 0x388648u;
            goto label_388648;
        }
    }
    ctx->pc = 0x388600u;
    // 0x388600: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x388600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x388604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388608: 0xc0e3aca  jal         func_38EB28
    ctx->pc = 0x388608u;
    SET_GPR_U32(ctx, 31, 0x388610u);
    ctx->pc = 0x38860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388608u;
    // 0x38860c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x388608u, 0x388610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388610u;
label_388610:
    // 0x388610: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x388610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x388614: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x388614u;
    {
        const bool branch_taken_0x388614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x388618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388614u;
        // 0x388618: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388614) {
            ctx->pc = 0x38862Cu;
            goto label_38862c;
        }
    }
    ctx->pc = 0x38861Cu;
    // 0x38861c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38861cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x388620: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x388620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x388624: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x388624u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x388628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38862c:
    // 0x38862c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x38862cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x388630: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x388630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x388634: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388634u;
    {
        const bool branch_taken_0x388634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388634u;
        // 0x388638: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388634) {
            ctx->pc = 0x388648u;
            goto label_388648;
        }
    }
    ctx->pc = 0x38863Cu;
    // 0x38863c: 0xc0e2552  jal         func_389548
    ctx->pc = 0x38863Cu;
    SET_GPR_U32(ctx, 31, 0x388644u);
    ctx->pc = 0x388640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38863Cu;
    // 0x388640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389548u, 0x38863Cu, 0x388644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388644u;
label_388644:
    // 0x388644: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388648:
    // 0x388648: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38864c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38864cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x388650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388654: 0x3e00008  jr          $ra
    ctx->pc = 0x388654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388654u;
        // 0x388658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38865Cu;
    // 0x38865c: 0x0  nop
    ctx->pc = 0x38865cu;
    // NOP
    ctx->pc = 0x388660u;
}
