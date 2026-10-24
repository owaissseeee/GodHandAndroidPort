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

// Function: ipfx__7istreami
// Address: 0x38a0c0 - 0x38a178
void ipfx__7istreami_0x38a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipfx__7istreami_0x38a0c0");
#endif

    switch (ctx->pc) {
        case 0x38a12cu: goto label_38a12c;
        case 0x38a158u: goto label_38a158;
        default: break;
    }

    ctx->pc = 0x38a0c0u;

    // 0x38a0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38a0c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38a0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38a0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38a0cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a0d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38a0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38a0d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38a0d8: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x38a0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x38a0dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38A0DCu;
    {
        const bool branch_taken_0x38a0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A0DCu;
        // 0x38a0e0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a0dc) {
            ctx->pc = 0x38A0F4u;
            goto label_38a0f4;
        }
    }
    ctx->pc = 0x38A0E4u;
    // 0x38a0e4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x38a0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x38a0e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38a0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a0ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x38A0ECu;
    {
        const bool branch_taken_0x38a0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A0ECu;
        // 0x38a0f0: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a0ec) {
            ctx->pc = 0x38A160u;
            goto label_38a160;
        }
    }
    ctx->pc = 0x38A0F4u;
label_38a0f4:
    // 0x38a0f4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x38a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38a0f8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x38A0F8u;
    {
        const bool branch_taken_0x38a0f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a0f8) {
            ctx->pc = 0x38A12Cu;
            goto label_38a12c;
        }
    }
    ctx->pc = 0x38A100u;
    // 0x38a100: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38A100u;
    {
        const bool branch_taken_0x38a100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a100) {
            ctx->pc = 0x38A124u;
            goto label_38a124;
        }
    }
    ctx->pc = 0x38A108u;
    // 0x38a108: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38a10c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38a10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x38a110: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x38a110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x38a114: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x38a114u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38a118: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x38a118u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38a11c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A11Cu;
    {
        const bool branch_taken_0x38a11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a11c) {
            ctx->pc = 0x38A12Cu;
            goto label_38a12c;
        }
    }
    ctx->pc = 0x38A124u;
label_38a124:
    // 0x38a124: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38A124u;
    SET_GPR_U32(ctx, 31, 0x38A12Cu);
    ctx->pc = 0x38A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A124u;
    // 0x38a128: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38A124u, 0x38A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A12Cu;
label_38a12c:
    // 0x38a12c: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x38A12Cu;
    {
        const bool branch_taken_0x38a12c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A12Cu;
        // 0x38a130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a12c) {
            ctx->pc = 0x38A160u;
            goto label_38a160;
        }
    }
    ctx->pc = 0x38A134u;
    // 0x38a134: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38a134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38a138: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x38a138u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x38a13c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38a140: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38a140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38a144: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38a144u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38a148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38A148u;
    {
        const bool branch_taken_0x38a148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A148u;
        // 0x38a14c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a148) {
            ctx->pc = 0x38A160u;
            goto label_38a160;
        }
    }
    ctx->pc = 0x38A150u;
    // 0x38a150: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x38A150u;
    SET_GPR_U32(ctx, 31, 0x38A158u);
    ctx->pc = 0x38A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A150u;
    // 0x38a154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x38A150u, 0x38A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A158u;
label_38a158:
    // 0x38a158: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38A158u;
    {
        const bool branch_taken_0x38a158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A158u;
        // 0x38a15c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a158) {
            ctx->pc = 0x38A164u;
            goto label_38a164;
        }
    }
    ctx->pc = 0x38A160u;
label_38a160:
    // 0x38a160: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38a160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38a164:
    // 0x38a164: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38a164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38a168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a16c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A16Cu;
        // 0x38a170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A174u;
    // 0x38a174: 0x0  nop
    ctx->pc = 0x38a174u;
    // NOP
    ctx->pc = 0x38a178u;
}
