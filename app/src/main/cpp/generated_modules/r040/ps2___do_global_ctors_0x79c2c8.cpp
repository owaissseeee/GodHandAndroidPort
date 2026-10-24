#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: __do_global_ctors
// Address: 0x79c2c8 - 0x79c378
void ps2___do_global_ctors_0x79c2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79c2c8");
#endif

    switch (ctx->pc) {
        case 0x79c2c8u: goto label_79c2c8;
        case 0x79c2ccu: goto label_79c2cc;
        case 0x79c2d0u: goto label_79c2d0;
        case 0x79c2d4u: goto label_79c2d4;
        case 0x79c2d8u: goto label_79c2d8;
        case 0x79c2dcu: goto label_79c2dc;
        case 0x79c2e0u: goto label_79c2e0;
        case 0x79c2e4u: goto label_79c2e4;
        case 0x79c2e8u: goto label_79c2e8;
        case 0x79c2ecu: goto label_79c2ec;
        case 0x79c2f0u: goto label_79c2f0;
        case 0x79c2f4u: goto label_79c2f4;
        case 0x79c2f8u: goto label_79c2f8;
        case 0x79c2fcu: goto label_79c2fc;
        case 0x79c300u: goto label_79c300;
        case 0x79c304u: goto label_79c304;
        case 0x79c308u: goto label_79c308;
        case 0x79c30cu: goto label_79c30c;
        case 0x79c310u: goto label_79c310;
        case 0x79c314u: goto label_79c314;
        case 0x79c318u: goto label_79c318;
        case 0x79c31cu: goto label_79c31c;
        case 0x79c320u: goto label_79c320;
        case 0x79c324u: goto label_79c324;
        case 0x79c328u: goto label_79c328;
        case 0x79c32cu: goto label_79c32c;
        case 0x79c330u: goto label_79c330;
        case 0x79c334u: goto label_79c334;
        case 0x79c338u: goto label_79c338;
        case 0x79c33cu: goto label_79c33c;
        case 0x79c340u: goto label_79c340;
        case 0x79c344u: goto label_79c344;
        case 0x79c348u: goto label_79c348;
        case 0x79c34cu: goto label_79c34c;
        case 0x79c350u: goto label_79c350;
        case 0x79c354u: goto label_79c354;
        case 0x79c358u: goto label_79c358;
        case 0x79c35cu: goto label_79c35c;
        case 0x79c360u: goto label_79c360;
        case 0x79c364u: goto label_79c364;
        case 0x79c368u: goto label_79c368;
        case 0x79c36cu: goto label_79c36c;
        case 0x79c370u: goto label_79c370;
        case 0x79c374u: goto label_79c374;
        default: break;
    }

    ctx->pc = 0x79c2c8u;

label_79c2c8:
    // 0x79c2c8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79c2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79c2cc:
    // 0x79c2cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c2ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79c2d0:
    // 0x79c2d0: 0x8ce5c780  lw          $a1, -0x3880($a3)
    ctx->pc = 0x79c2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294952832)));
label_79c2d4:
    // 0x79c2d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79c2d8:
    // 0x79c2d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79c2dc:
    // 0x79c2dc: 0x24e3c780  addiu       $v1, $a3, -0x3880
    ctx->pc = 0x79c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952832));
label_79c2e0:
    // 0x79c2e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79c2e4:
    // 0x79c2e4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79c2e8:
    if (ctx->pc == 0x79C2E8u) {
        ctx->pc = 0x79C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2E4u;
        // 0x79c2e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C2ECu;
        goto label_79c2ec;
    }
    ctx->pc = 0x79C2E4u;
    {
        const bool branch_taken_0x79c2e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2E4u;
        // 0x79c2e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2e4) {
            ctx->pc = 0x79C32Cu;
            goto label_79c32c;
        }
    }
    ctx->pc = 0x79C2ECu;
label_79c2ec:
    // 0x79c2ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79c2f0:
    // 0x79c2f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79c2f4:
    if (ctx->pc == 0x79C2F4u) {
        ctx->pc = 0x79C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2F0u;
        // 0x79c2f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C2F8u;
        goto label_79c2f8;
    }
    ctx->pc = 0x79C2F0u;
    {
        const bool branch_taken_0x79c2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2F0u;
        // 0x79c2f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2f0) {
            ctx->pc = 0x79C32Cu;
            goto label_79c32c;
        }
    }
    ctx->pc = 0x79C2F8u;
label_79c2f8:
    // 0x79c2f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79c2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79c2fc:
    // 0x79c2fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79c2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79c300:
    // 0x79c300: 0x24e4c780  addiu       $a0, $a3, -0x3880
    ctx->pc = 0x79c300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952832));
label_79c304:
    // 0x79c304: 0x0  nop
    ctx->pc = 0x79c304u;
    // NOP
label_79c308:
    // 0x79c308: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79c308u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79c30c:
    // 0x79c30c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79c30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79c310:
    // 0x79c310: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79c314:
    // 0x79c314: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79c314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79c318:
    // 0x79c318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79c318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79c31c:
    // 0x79c31c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79c320:
    // 0x79c320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c324:
    // 0x79c324: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79c328:
    if (ctx->pc == 0x79C328u) {
        ctx->pc = 0x79C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C324u;
        // 0x79c328: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C32Cu;
        goto label_79c32c;
    }
    ctx->pc = 0x79C324u;
    {
        const bool branch_taken_0x79c324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c324) {
            ctx->pc = 0x79C328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C324u;
            // 0x79c328: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c308;
        }
    }
    ctx->pc = 0x79C32Cu;
label_79c32c:
    // 0x79c32c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79c32cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79c330:
    // 0x79c330: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79c330u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79c334:
    // 0x79c334: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79c338:
    if (ctx->pc == 0x79C338u) {
        ctx->pc = 0x79C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C334u;
        // 0x79c338: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C33Cu;
        goto label_79c33c;
    }
    ctx->pc = 0x79C334u;
    {
        const bool branch_taken_0x79c334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C334u;
        // 0x79c338: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c334) {
            ctx->pc = 0x79C364u;
            goto label_79c364;
        }
    }
    ctx->pc = 0x79C33Cu;
label_79c33c:
    // 0x79c33c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79c340:
    // 0x79c340: 0x2442c780  addiu       $v0, $v0, -0x3880
    ctx->pc = 0x79c340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952832));
label_79c344:
    // 0x79c344: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79c344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79c348:
    // 0x79c348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79c34c:
    // 0x79c34c: 0x0  nop
    ctx->pc = 0x79c34cu;
    // NOP
label_79c350:
    // 0x79c350: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79c350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79c354:
    // 0x79c354: 0x40f809  jalr        $v0
label_79c358:
    if (ctx->pc == 0x79C358u) {
        ctx->pc = 0x79C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C354u;
        // 0x79c358: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C35Cu;
        goto label_79c35c;
    }
    ctx->pc = 0x79C354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79C35Cu);
        ctx->pc = 0x79C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C354u;
        // 0x79c358: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C354u, 0x79C35Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79C35Cu;
label_79c35c:
    // 0x79c35c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79c360:
    if (ctx->pc == 0x79C360u) {
        ctx->pc = 0x79C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C35Cu;
        // 0x79c360: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C364u;
        goto label_79c364;
    }
    ctx->pc = 0x79C35Cu;
    {
        const bool branch_taken_0x79c35c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c35c) {
            ctx->pc = 0x79C360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C35Cu;
            // 0x79c360: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c350;
        }
    }
    ctx->pc = 0x79C364u;
label_79c364:
    // 0x79c364: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79c364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79c368:
    // 0x79c368: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79c368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79c36c:
    // 0x79c36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79c36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79c370:
    // 0x79c370: 0x3e00008  jr          $ra
label_79c374:
    if (ctx->pc == 0x79C374u) {
        ctx->pc = 0x79C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C370u;
        // 0x79c374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C378u;
        goto label_fallthrough_0x79c370;
    }
    ctx->pc = 0x79C370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C370u;
        // 0x79c374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79c370:
    ctx->pc = 0x79C378u;
}
} // namespace gh_r040
