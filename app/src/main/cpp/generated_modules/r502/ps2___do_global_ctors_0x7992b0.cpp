#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r502_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r502
{
// Function: __do_global_ctors
// Address: 0x7992b0 - 0x799360
void ps2___do_global_ctors_0x7992b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x7992b0");
#endif

    switch (ctx->pc) {
        case 0x7992b0u: goto label_7992b0;
        case 0x7992b4u: goto label_7992b4;
        case 0x7992b8u: goto label_7992b8;
        case 0x7992bcu: goto label_7992bc;
        case 0x7992c0u: goto label_7992c0;
        case 0x7992c4u: goto label_7992c4;
        case 0x7992c8u: goto label_7992c8;
        case 0x7992ccu: goto label_7992cc;
        case 0x7992d0u: goto label_7992d0;
        case 0x7992d4u: goto label_7992d4;
        case 0x7992d8u: goto label_7992d8;
        case 0x7992dcu: goto label_7992dc;
        case 0x7992e0u: goto label_7992e0;
        case 0x7992e4u: goto label_7992e4;
        case 0x7992e8u: goto label_7992e8;
        case 0x7992ecu: goto label_7992ec;
        case 0x7992f0u: goto label_7992f0;
        case 0x7992f4u: goto label_7992f4;
        case 0x7992f8u: goto label_7992f8;
        case 0x7992fcu: goto label_7992fc;
        case 0x799300u: goto label_799300;
        case 0x799304u: goto label_799304;
        case 0x799308u: goto label_799308;
        case 0x79930cu: goto label_79930c;
        case 0x799310u: goto label_799310;
        case 0x799314u: goto label_799314;
        case 0x799318u: goto label_799318;
        case 0x79931cu: goto label_79931c;
        case 0x799320u: goto label_799320;
        case 0x799324u: goto label_799324;
        case 0x799328u: goto label_799328;
        case 0x79932cu: goto label_79932c;
        case 0x799330u: goto label_799330;
        case 0x799334u: goto label_799334;
        case 0x799338u: goto label_799338;
        case 0x79933cu: goto label_79933c;
        case 0x799340u: goto label_799340;
        case 0x799344u: goto label_799344;
        case 0x799348u: goto label_799348;
        case 0x79934cu: goto label_79934c;
        case 0x799350u: goto label_799350;
        case 0x799354u: goto label_799354;
        case 0x799358u: goto label_799358;
        case 0x79935cu: goto label_79935c;
        default: break;
    }

    ctx->pc = 0x7992b0u;

label_7992b0:
    // 0x7992b0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_7992b4:
    // 0x7992b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_7992b8:
    // 0x7992b8: 0x8ce59480  lw          $a1, -0x6B80($a3)
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939776)));
label_7992bc:
    // 0x7992bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7992c0:
    // 0x7992c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7992c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7992c4:
    // 0x7992c4: 0x24e39480  addiu       $v1, $a3, -0x6B80
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939776));
label_7992c8:
    // 0x7992c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7992c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7992cc:
    // 0x7992cc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7992d0:
    if (ctx->pc == 0x7992D0u) {
        ctx->pc = 0x7992D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992CCu;
        // 0x7992d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992D4u;
        goto label_7992d4;
    }
    ctx->pc = 0x7992CCu;
    {
        const bool branch_taken_0x7992cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7992D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992CCu;
        // 0x7992d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992cc) {
            ctx->pc = 0x799314u;
            goto label_799314;
        }
    }
    ctx->pc = 0x7992D4u;
label_7992d4:
    // 0x7992d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7992d8:
    // 0x7992d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7992dc:
    if (ctx->pc == 0x7992DCu) {
        ctx->pc = 0x7992DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D8u;
        // 0x7992dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992E0u;
        goto label_7992e0;
    }
    ctx->pc = 0x7992D8u;
    {
        const bool branch_taken_0x7992d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D8u;
        // 0x7992dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992d8) {
            ctx->pc = 0x799314u;
            goto label_799314;
        }
    }
    ctx->pc = 0x7992E0u;
label_7992e0:
    // 0x7992e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7992e4:
    // 0x7992e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7992e8:
    // 0x7992e8: 0x24e49480  addiu       $a0, $a3, -0x6B80
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939776));
label_7992ec:
    // 0x7992ec: 0x0  nop
    ctx->pc = 0x7992ecu;
    // NOP
label_7992f0:
    // 0x7992f0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x7992f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_7992f4:
    // 0x7992f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7992f8:
    // 0x7992f8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_7992fc:
    // 0x7992fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x7992fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799300:
    // 0x799300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799304:
    // 0x799304: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799308:
    // 0x799308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79930c:
    // 0x79930c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799310:
    if (ctx->pc == 0x799310u) {
        ctx->pc = 0x799310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79930Cu;
        // 0x799310: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799314u;
        goto label_799314;
    }
    ctx->pc = 0x79930Cu;
    {
        const bool branch_taken_0x79930c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79930c) {
            ctx->pc = 0x799310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79930Cu;
            // 0x799310: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992f0;
        }
    }
    ctx->pc = 0x799314u;
label_799314:
    // 0x799314: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799318:
    // 0x799318: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799318u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79931c:
    // 0x79931c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799320:
    if (ctx->pc == 0x799320u) {
        ctx->pc = 0x799320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79931Cu;
        // 0x799320: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799324u;
        goto label_799324;
    }
    ctx->pc = 0x79931Cu;
    {
        const bool branch_taken_0x79931c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79931Cu;
        // 0x799320: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79931c) {
            ctx->pc = 0x79934Cu;
            goto label_79934c;
        }
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799328:
    // 0x799328: 0x24429480  addiu       $v0, $v0, -0x6B80
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939776));
label_79932c:
    // 0x79932c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799330:
    // 0x799330: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799334:
    // 0x799334: 0x0  nop
    ctx->pc = 0x799334u;
    // NOP
label_799338:
    // 0x799338: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79933c:
    // 0x79933c: 0x40f809  jalr        $v0
label_799340:
    if (ctx->pc == 0x799340u) {
        ctx->pc = 0x799340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79933Cu;
        // 0x799340: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799344u;
        goto label_799344;
    }
    ctx->pc = 0x79933Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799344u);
        ctx->pc = 0x799340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79933Cu;
        // 0x799340: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79933Cu, 0x799344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799344u;
label_799344:
    // 0x799344: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799348:
    if (ctx->pc == 0x799348u) {
        ctx->pc = 0x799348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799344u;
        // 0x799348: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79934Cu;
        goto label_79934c;
    }
    ctx->pc = 0x799344u;
    {
        const bool branch_taken_0x799344 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799344) {
            ctx->pc = 0x799348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799344u;
            // 0x799348: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799338;
        }
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799350:
    // 0x799350: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799354:
    // 0x799354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799358:
    // 0x799358: 0x3e00008  jr          $ra
label_79935c:
    if (ctx->pc == 0x79935Cu) {
        ctx->pc = 0x79935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799358u;
        // 0x79935c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799360u;
        goto label_fallthrough_0x799358;
    }
    ctx->pc = 0x799358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799358u;
        // 0x79935c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799358:
    ctx->pc = 0x799360u;
}
} // namespace gh_r502
