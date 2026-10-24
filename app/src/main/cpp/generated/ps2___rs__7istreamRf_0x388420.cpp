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

// Function: __rs__7istreamRf
// Address: 0x388420 - 0x3884c0
void ps2___rs__7istreamRf_0x388420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRf_0x388420");
#endif

    switch (ctx->pc) {
        case 0x388468u: goto label_388468;
        case 0x38848cu: goto label_38848c;
        case 0x3884a8u: goto label_3884a8;
        default: break;
    }

    ctx->pc = 0x388420u;

    // 0x388420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388424: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x388424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x388428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x388428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38842c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388434: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388438: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x388438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38843c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38843Cu;
    {
        const bool branch_taken_0x38843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38843Cu;
        // 0x388440: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38843c) {
            ctx->pc = 0x388454u;
            goto label_388454;
        }
    }
    ctx->pc = 0x388444u;
    // 0x388444: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x388444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x388448: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x388448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38844c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38844Cu;
    {
        const bool branch_taken_0x38844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38844Cu;
        // 0x388450: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38844c) {
            ctx->pc = 0x388490u;
            goto label_388490;
        }
    }
    ctx->pc = 0x388454u;
label_388454:
    // 0x388454: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x388454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x388458: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x388458u;
    {
        const bool branch_taken_0x388458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x388458) {
            ctx->pc = 0x38845Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388458u;
            // 0x38845c: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388470u;
            goto label_388470;
        }
    }
    ctx->pc = 0x388460u;
    // 0x388460: 0xc0e249a  jal         func_389268
    ctx->pc = 0x388460u;
    SET_GPR_U32(ctx, 31, 0x388468u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388460u, 0x388468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388468u;
label_388468:
    // 0x388468: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38846c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x38846cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_388470:
    // 0x388470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x388470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x388474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x388474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x388478: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x388478u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38847c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38847Cu;
    {
        const bool branch_taken_0x38847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38847Cu;
        // 0x388480: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38847c) {
            ctx->pc = 0x388490u;
            goto label_388490;
        }
    }
    ctx->pc = 0x388484u;
    // 0x388484: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x388484u;
    SET_GPR_U32(ctx, 31, 0x38848Cu);
    ctx->pc = 0x388488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388484u;
    // 0x388488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x388484u, 0x38848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38848Cu;
label_38848c:
    // 0x38848c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388490:
    // 0x388490: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x388490u;
    {
        const bool branch_taken_0x388490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388490u;
        // 0x388494: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388490) {
            ctx->pc = 0x3884A8u;
            goto label_3884a8;
        }
    }
    ctx->pc = 0x388498u;
    // 0x388498: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x388498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38849c: 0x24a5d0f0  addiu       $a1, $a1, -0x2F10
    ctx->pc = 0x38849cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955248));
    // 0x3884a0: 0xc0e2b72  jal         func_38ADC8
    ctx->pc = 0x3884A0u;
    SET_GPR_U32(ctx, 31, 0x3884A8u);
    ctx->pc = 0x3884A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3884A0u;
    // 0x3884a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38ADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38ADC8u, 0x3884A0u, 0x3884A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3884A8u;
label_3884a8:
    // 0x3884a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3884a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3884ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3884acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3884b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3884b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3884b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3884b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3884b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3884B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3884BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884B8u;
        // 0x3884bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3884B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3884C0u;
}
