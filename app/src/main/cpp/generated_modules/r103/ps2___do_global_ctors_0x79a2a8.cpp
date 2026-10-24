#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r103_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r103
{
// Function: __do_global_ctors
// Address: 0x79a2a8 - 0x79a358
void ps2___do_global_ctors_0x79a2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79a2a8");
#endif

    switch (ctx->pc) {
        case 0x79a2a8u: goto label_79a2a8;
        case 0x79a2acu: goto label_79a2ac;
        case 0x79a2b0u: goto label_79a2b0;
        case 0x79a2b4u: goto label_79a2b4;
        case 0x79a2b8u: goto label_79a2b8;
        case 0x79a2bcu: goto label_79a2bc;
        case 0x79a2c0u: goto label_79a2c0;
        case 0x79a2c4u: goto label_79a2c4;
        case 0x79a2c8u: goto label_79a2c8;
        case 0x79a2ccu: goto label_79a2cc;
        case 0x79a2d0u: goto label_79a2d0;
        case 0x79a2d4u: goto label_79a2d4;
        case 0x79a2d8u: goto label_79a2d8;
        case 0x79a2dcu: goto label_79a2dc;
        case 0x79a2e0u: goto label_79a2e0;
        case 0x79a2e4u: goto label_79a2e4;
        case 0x79a2e8u: goto label_79a2e8;
        case 0x79a2ecu: goto label_79a2ec;
        case 0x79a2f0u: goto label_79a2f0;
        case 0x79a2f4u: goto label_79a2f4;
        case 0x79a2f8u: goto label_79a2f8;
        case 0x79a2fcu: goto label_79a2fc;
        case 0x79a300u: goto label_79a300;
        case 0x79a304u: goto label_79a304;
        case 0x79a308u: goto label_79a308;
        case 0x79a30cu: goto label_79a30c;
        case 0x79a310u: goto label_79a310;
        case 0x79a314u: goto label_79a314;
        case 0x79a318u: goto label_79a318;
        case 0x79a31cu: goto label_79a31c;
        case 0x79a320u: goto label_79a320;
        case 0x79a324u: goto label_79a324;
        case 0x79a328u: goto label_79a328;
        case 0x79a32cu: goto label_79a32c;
        case 0x79a330u: goto label_79a330;
        case 0x79a334u: goto label_79a334;
        case 0x79a338u: goto label_79a338;
        case 0x79a33cu: goto label_79a33c;
        case 0x79a340u: goto label_79a340;
        case 0x79a344u: goto label_79a344;
        case 0x79a348u: goto label_79a348;
        case 0x79a34cu: goto label_79a34c;
        case 0x79a350u: goto label_79a350;
        case 0x79a354u: goto label_79a354;
        default: break;
    }

    ctx->pc = 0x79a2a8u;

label_79a2a8:
    // 0x79a2a8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79a2ac:
    // 0x79a2ac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a2acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79a2b0:
    // 0x79a2b0: 0x8ce5a580  lw          $a1, -0x5A80($a3)
    ctx->pc = 0x79a2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944128)));
label_79a2b4:
    // 0x79a2b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a2b8:
    // 0x79a2b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a2bc:
    // 0x79a2bc: 0x24e3a580  addiu       $v1, $a3, -0x5A80
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944128));
label_79a2c0:
    // 0x79a2c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79a2c4:
    // 0x79a2c4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79a2c8:
    if (ctx->pc == 0x79A2C8u) {
        ctx->pc = 0x79A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C4u;
        // 0x79a2c8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2CCu;
        goto label_79a2cc;
    }
    ctx->pc = 0x79A2C4u;
    {
        const bool branch_taken_0x79a2c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C4u;
        // 0x79a2c8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2c4) {
            ctx->pc = 0x79A30Cu;
            goto label_79a30c;
        }
    }
    ctx->pc = 0x79A2CCu;
label_79a2cc:
    // 0x79a2cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a2d0:
    // 0x79a2d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a2d4:
    if (ctx->pc == 0x79A2D4u) {
        ctx->pc = 0x79A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D0u;
        // 0x79a2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2D8u;
        goto label_79a2d8;
    }
    ctx->pc = 0x79A2D0u;
    {
        const bool branch_taken_0x79a2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D0u;
        // 0x79a2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2d0) {
            ctx->pc = 0x79A30Cu;
            goto label_79a30c;
        }
    }
    ctx->pc = 0x79A2D8u;
label_79a2d8:
    // 0x79a2d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a2dc:
    // 0x79a2dc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79a2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79a2e0:
    // 0x79a2e0: 0x24e4a580  addiu       $a0, $a3, -0x5A80
    ctx->pc = 0x79a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944128));
label_79a2e4:
    // 0x79a2e4: 0x0  nop
    ctx->pc = 0x79a2e4u;
    // NOP
label_79a2e8:
    // 0x79a2e8: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79a2e8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79a2ec:
    // 0x79a2ec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a2f0:
    // 0x79a2f0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79a2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79a2f4:
    // 0x79a2f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79a2f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79a2f8:
    // 0x79a2f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a2fc:
    // 0x79a2fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a300:
    // 0x79a300: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a304:
    // 0x79a304: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79a308:
    if (ctx->pc == 0x79A308u) {
        ctx->pc = 0x79A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A304u;
        // 0x79a308: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A30Cu;
        goto label_79a30c;
    }
    ctx->pc = 0x79A304u;
    {
        const bool branch_taken_0x79a304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a304) {
            ctx->pc = 0x79A308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A304u;
            // 0x79a308: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2e8;
        }
    }
    ctx->pc = 0x79A30Cu;
label_79a30c:
    // 0x79a30c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79a30cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79a310:
    // 0x79a310: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79a310u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79a314:
    // 0x79a314: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79a318:
    if (ctx->pc == 0x79A318u) {
        ctx->pc = 0x79A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A314u;
        // 0x79a318: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A31Cu;
        goto label_79a31c;
    }
    ctx->pc = 0x79A314u;
    {
        const bool branch_taken_0x79a314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A314u;
        // 0x79a318: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a314) {
            ctx->pc = 0x79A344u;
            goto label_79a344;
        }
    }
    ctx->pc = 0x79A31Cu;
label_79a31c:
    // 0x79a31c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a320:
    // 0x79a320: 0x2442a580  addiu       $v0, $v0, -0x5A80
    ctx->pc = 0x79a320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944128));
label_79a324:
    // 0x79a324: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79a324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a328:
    // 0x79a328: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a32c:
    // 0x79a32c: 0x0  nop
    ctx->pc = 0x79a32cu;
    // NOP
label_79a330:
    // 0x79a330: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a334:
    // 0x79a334: 0x40f809  jalr        $v0
label_79a338:
    if (ctx->pc == 0x79A338u) {
        ctx->pc = 0x79A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A334u;
        // 0x79a338: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A33Cu;
        goto label_79a33c;
    }
    ctx->pc = 0x79A334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A33Cu);
        ctx->pc = 0x79A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A334u;
        // 0x79a338: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A334u, 0x79A33Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A33Cu;
label_79a33c:
    // 0x79a33c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79a340:
    if (ctx->pc == 0x79A340u) {
        ctx->pc = 0x79A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A33Cu;
        // 0x79a340: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A344u;
        goto label_79a344;
    }
    ctx->pc = 0x79A33Cu;
    {
        const bool branch_taken_0x79a33c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a33c) {
            ctx->pc = 0x79A340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A33Cu;
            // 0x79a340: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a330;
        }
    }
    ctx->pc = 0x79A344u;
label_79a344:
    // 0x79a344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a348:
    // 0x79a348: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79a348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a34c:
    // 0x79a34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a350:
    // 0x79a350: 0x3e00008  jr          $ra
label_79a354:
    if (ctx->pc == 0x79A354u) {
        ctx->pc = 0x79A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A350u;
        // 0x79a354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A358u;
        goto label_fallthrough_0x79a350;
    }
    ctx->pc = 0x79A350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A350u;
        // 0x79a354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a350:
    ctx->pc = 0x79A358u;
}
} // namespace gh_r103
