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

// Function: _IO_switch_to_get_mode
// Address: 0x38c2f0 - 0x38c3a0
void ps2__IO_switch_to_get_mode_0x38c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_switch_to_get_mode_0x38c2f0");
#endif

    switch (ctx->pc) {
        case 0x38c2f0u: goto label_38c2f0;
        case 0x38c2f4u: goto label_38c2f4;
        case 0x38c2f8u: goto label_38c2f8;
        case 0x38c2fcu: goto label_38c2fc;
        case 0x38c300u: goto label_38c300;
        case 0x38c304u: goto label_38c304;
        case 0x38c308u: goto label_38c308;
        case 0x38c30cu: goto label_38c30c;
        case 0x38c310u: goto label_38c310;
        case 0x38c314u: goto label_38c314;
        case 0x38c318u: goto label_38c318;
        case 0x38c31cu: goto label_38c31c;
        case 0x38c320u: goto label_38c320;
        case 0x38c324u: goto label_38c324;
        case 0x38c328u: goto label_38c328;
        case 0x38c32cu: goto label_38c32c;
        case 0x38c330u: goto label_38c330;
        case 0x38c334u: goto label_38c334;
        case 0x38c338u: goto label_38c338;
        case 0x38c33cu: goto label_38c33c;
        case 0x38c340u: goto label_38c340;
        case 0x38c344u: goto label_38c344;
        case 0x38c348u: goto label_38c348;
        case 0x38c34cu: goto label_38c34c;
        case 0x38c350u: goto label_38c350;
        case 0x38c354u: goto label_38c354;
        case 0x38c358u: goto label_38c358;
        case 0x38c35cu: goto label_38c35c;
        case 0x38c360u: goto label_38c360;
        case 0x38c364u: goto label_38c364;
        case 0x38c368u: goto label_38c368;
        case 0x38c36cu: goto label_38c36c;
        case 0x38c370u: goto label_38c370;
        case 0x38c374u: goto label_38c374;
        case 0x38c378u: goto label_38c378;
        case 0x38c37cu: goto label_38c37c;
        case 0x38c380u: goto label_38c380;
        case 0x38c384u: goto label_38c384;
        case 0x38c388u: goto label_38c388;
        case 0x38c38cu: goto label_38c38c;
        case 0x38c390u: goto label_38c390;
        case 0x38c394u: goto label_38c394;
        case 0x38c398u: goto label_38c398;
        case 0x38c39cu: goto label_38c39c;
        default: break;
    }

    ctx->pc = 0x38c2f0u;

label_38c2f0:
    // 0x38c2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38c2f4:
    // 0x38c2f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38c2f8:
    // 0x38c2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38c2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38c2fc:
    // 0x38c2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c300:
    // 0x38c300: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x38c300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38c304:
    // 0x38c304: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x38c304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_38c308:
    // 0x38c308: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x38c308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_38c30c:
    // 0x38c30c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_38c310:
    if (ctx->pc == 0x38C310u) {
        ctx->pc = 0x38C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C30Cu;
        // 0x38c310: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C314u;
        goto label_38c314;
    }
    ctx->pc = 0x38C30Cu;
    {
        const bool branch_taken_0x38c30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c30c) {
            ctx->pc = 0x38C310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C30Cu;
            // 0x38c310: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C340u;
            goto label_38c340;
        }
    }
    ctx->pc = 0x38C314u;
label_38c314:
    // 0x38c314: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38c318:
    // 0x38c318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c31c:
    // 0x38c31c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x38c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38c320:
    // 0x38c320: 0x40f809  jalr        $v0
label_38c324:
    if (ctx->pc == 0x38C324u) {
        ctx->pc = 0x38C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C320u;
        // 0x38c324: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C328u;
        goto label_38c328;
    }
    ctx->pc = 0x38C320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C328u);
        ctx->pc = 0x38C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C320u;
        // 0x38c324: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C320u, 0x38C328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C328u;
label_38c328:
    // 0x38c328: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38c328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38c32c:
    // 0x38c32c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_38c330:
    if (ctx->pc == 0x38C330u) {
        ctx->pc = 0x38C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C32Cu;
        // 0x38c330: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C334u;
        goto label_38c334;
    }
    ctx->pc = 0x38C32Cu;
    {
        const bool branch_taken_0x38c32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38c32c) {
            ctx->pc = 0x38C330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C32Cu;
            // 0x38c330: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C33Cu;
            goto label_38c33c;
        }
    }
    ctx->pc = 0x38C334u;
label_38c334:
    // 0x38c334: 0x10000015  b           . + 4 + (0x15 << 2)
label_38c338:
    if (ctx->pc == 0x38C338u) {
        ctx->pc = 0x38C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C334u;
        // 0x38c338: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C33Cu;
        goto label_38c33c;
    }
    ctx->pc = 0x38C334u;
    {
        const bool branch_taken_0x38c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C334u;
        // 0x38c338: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c334) {
            ctx->pc = 0x38C38Cu;
            goto label_38c38c;
        }
    }
    ctx->pc = 0x38C33Cu;
label_38c33c:
    // 0x38c33c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38c340:
    // 0x38c340: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x38c340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_38c344:
    // 0x38c344: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_38c348:
    if (ctx->pc == 0x38C348u) {
        ctx->pc = 0x38C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C344u;
        // 0x38c348: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C34Cu;
        goto label_38c34c;
    }
    ctx->pc = 0x38C344u;
    {
        const bool branch_taken_0x38c344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c344) {
            ctx->pc = 0x38C348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C344u;
            // 0x38c348: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C358u;
            goto label_38c358;
        }
    }
    ctx->pc = 0x38C34Cu;
label_38c34c:
    // 0x38c34c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x38c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_38c350:
    // 0x38c350: 0x10000006  b           . + 4 + (0x6 << 2)
label_38c354:
    if (ctx->pc == 0x38C354u) {
        ctx->pc = 0x38C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C350u;
        // 0x38c354: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C358u;
        goto label_38c358;
    }
    ctx->pc = 0x38C350u;
    {
        const bool branch_taken_0x38c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C350u;
        // 0x38c354: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c350) {
            ctx->pc = 0x38C36Cu;
            goto label_38c36c;
        }
    }
    ctx->pc = 0x38C358u;
label_38c358:
    // 0x38c358: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38c358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38c35c:
    // 0x38c35c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x38c35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_38c360:
    // 0x38c360: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_38c364:
    if (ctx->pc == 0x38C364u) {
        ctx->pc = 0x38C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C360u;
        // 0x38c364: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C368u;
        goto label_38c368;
    }
    ctx->pc = 0x38C360u;
    {
        const bool branch_taken_0x38c360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C360u;
        // 0x38c364: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c360) {
            ctx->pc = 0x38C36Cu;
            goto label_38c36c;
        }
    }
    ctx->pc = 0x38C368u;
label_38c368:
    // 0x38c368: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x38c368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_38c36c:
    // 0x38c36c: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x38c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_38c370:
    // 0x38c370: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x38c370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_38c374:
    // 0x38c374: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x38c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_38c378:
    // 0x38c378: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x38c378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_38c37c:
    // 0x38c37c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_38c380:
    // 0x38c380: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x38c380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_38c384:
    // 0x38c384: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38c384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c388:
    // 0x38c388: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x38c388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_38c38c:
    // 0x38c38c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38c390:
    // 0x38c390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38c394:
    // 0x38c394: 0x3e00008  jr          $ra
label_38c398:
    if (ctx->pc == 0x38C398u) {
        ctx->pc = 0x38C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C394u;
        // 0x38c398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C39Cu;
        goto label_38c39c;
    }
    ctx->pc = 0x38C394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C394u;
        // 0x38c398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C39Cu;
label_38c39c:
    // 0x38c39c: 0x0  nop
    ctx->pc = 0x38c39cu;
    // NOP
    ctx->pc = 0x38c3a0u;
}
