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

// Function: func_0034C2D0
// Address: 0x34c2d0 - 0x34c378
void func_0034C2D0_0x34c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C2D0_0x34c2d0");
#endif

    switch (ctx->pc) {
        case 0x34c340u: goto label_34c340;
        default: break;
    }

    ctx->pc = 0x34c2d0u;

    // 0x34c2d0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34c2d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34c2d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c2dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34c2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34c2e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c2e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34c2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c2e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c2ec: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x34c2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c2f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34c2f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c2f8: 0x24841310  addiu       $a0, $a0, 0x1310
    ctx->pc = 0x34c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x34c2fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x34c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x34c300: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x34c300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x34c304: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34c304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c308: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x34c308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x34c30c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x34c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x34c310: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x34c310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x34c314: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x34c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34c318: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x34c318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x34c31c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x34c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x34c320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34C320u;
    {
        const bool branch_taken_0x34c320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C320u;
        // 0x34c324: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c320) {
            ctx->pc = 0x34C330u;
            goto label_34c330;
        }
    }
    ctx->pc = 0x34C328u;
    // 0x34c328: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34C328u;
    {
        const bool branch_taken_0x34c328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C328u;
        // 0x34c32c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c328) {
            ctx->pc = 0x34C338u;
            goto label_34c338;
        }
    }
    ctx->pc = 0x34C330u;
label_34c330:
    // 0x34c330: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34C330u;
    {
        const bool branch_taken_0x34c330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C330u;
        // 0x34c334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c330) {
            ctx->pc = 0x34C364u;
            goto label_34c364;
        }
    }
    ctx->pc = 0x34C338u;
label_34c338:
    // 0x34c338: 0xc0d3162  jal         func_34C588
    ctx->pc = 0x34C338u;
    SET_GPR_U32(ctx, 31, 0x34C340u);
    ctx->pc = 0x34C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C338u;
    // 0x34c33c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C588u, 0x34C338u, 0x34C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C340u;
label_34c340:
    // 0x34c340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34c340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c344: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x34c344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c348: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x34c348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34c34c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x34c34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c350: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x34c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34c354: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x34c354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x34c358: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x34c358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x34c35c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x34c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x34c360: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x34c360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_34c364:
    // 0x34c364: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34c364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c368: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34c368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34c36c: 0x3e00008  jr          $ra
    ctx->pc = 0x34C36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C36Cu;
        // 0x34c370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C374u;
    // 0x34c374: 0x0  nop
    ctx->pc = 0x34c374u;
    // NOP
    ctx->pc = 0x34c378u;
}
