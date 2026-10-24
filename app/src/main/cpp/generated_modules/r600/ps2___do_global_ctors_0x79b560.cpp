#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: __do_global_ctors
// Address: 0x79b560 - 0x79b610
void ps2___do_global_ctors_0x79b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79b560");
#endif

    switch (ctx->pc) {
        case 0x79b560u: goto label_79b560;
        case 0x79b564u: goto label_79b564;
        case 0x79b568u: goto label_79b568;
        case 0x79b56cu: goto label_79b56c;
        case 0x79b570u: goto label_79b570;
        case 0x79b574u: goto label_79b574;
        case 0x79b578u: goto label_79b578;
        case 0x79b57cu: goto label_79b57c;
        case 0x79b580u: goto label_79b580;
        case 0x79b584u: goto label_79b584;
        case 0x79b588u: goto label_79b588;
        case 0x79b58cu: goto label_79b58c;
        case 0x79b590u: goto label_79b590;
        case 0x79b594u: goto label_79b594;
        case 0x79b598u: goto label_79b598;
        case 0x79b59cu: goto label_79b59c;
        case 0x79b5a0u: goto label_79b5a0;
        case 0x79b5a4u: goto label_79b5a4;
        case 0x79b5a8u: goto label_79b5a8;
        case 0x79b5acu: goto label_79b5ac;
        case 0x79b5b0u: goto label_79b5b0;
        case 0x79b5b4u: goto label_79b5b4;
        case 0x79b5b8u: goto label_79b5b8;
        case 0x79b5bcu: goto label_79b5bc;
        case 0x79b5c0u: goto label_79b5c0;
        case 0x79b5c4u: goto label_79b5c4;
        case 0x79b5c8u: goto label_79b5c8;
        case 0x79b5ccu: goto label_79b5cc;
        case 0x79b5d0u: goto label_79b5d0;
        case 0x79b5d4u: goto label_79b5d4;
        case 0x79b5d8u: goto label_79b5d8;
        case 0x79b5dcu: goto label_79b5dc;
        case 0x79b5e0u: goto label_79b5e0;
        case 0x79b5e4u: goto label_79b5e4;
        case 0x79b5e8u: goto label_79b5e8;
        case 0x79b5ecu: goto label_79b5ec;
        case 0x79b5f0u: goto label_79b5f0;
        case 0x79b5f4u: goto label_79b5f4;
        case 0x79b5f8u: goto label_79b5f8;
        case 0x79b5fcu: goto label_79b5fc;
        case 0x79b600u: goto label_79b600;
        case 0x79b604u: goto label_79b604;
        case 0x79b608u: goto label_79b608;
        case 0x79b60cu: goto label_79b60c;
        default: break;
    }

    ctx->pc = 0x79b560u;

label_79b560:
    // 0x79b560: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79b560u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79b564:
    // 0x79b564: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79b568:
    // 0x79b568: 0x8ce5b880  lw          $a1, -0x4780($a3)
    ctx->pc = 0x79b568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948992)));
label_79b56c:
    // 0x79b56c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b570:
    // 0x79b570: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79b574:
    // 0x79b574: 0x24e3b880  addiu       $v1, $a3, -0x4780
    ctx->pc = 0x79b574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948992));
label_79b578:
    // 0x79b578: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79b57c:
    // 0x79b57c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79b580:
    if (ctx->pc == 0x79B580u) {
        ctx->pc = 0x79B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B57Cu;
        // 0x79b580: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B584u;
        goto label_79b584;
    }
    ctx->pc = 0x79B57Cu;
    {
        const bool branch_taken_0x79b57c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B57Cu;
        // 0x79b580: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b57c) {
            ctx->pc = 0x79B5C4u;
            goto label_79b5c4;
        }
    }
    ctx->pc = 0x79B584u;
label_79b584:
    // 0x79b584: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79b588:
    // 0x79b588: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79b58c:
    if (ctx->pc == 0x79B58Cu) {
        ctx->pc = 0x79B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B588u;
        // 0x79b58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B590u;
        goto label_79b590;
    }
    ctx->pc = 0x79B588u;
    {
        const bool branch_taken_0x79b588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B588u;
        // 0x79b58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b588) {
            ctx->pc = 0x79B5C4u;
            goto label_79b5c4;
        }
    }
    ctx->pc = 0x79B590u;
label_79b590:
    // 0x79b590: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b594:
    // 0x79b594: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79b594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79b598:
    // 0x79b598: 0x24e4b880  addiu       $a0, $a3, -0x4780
    ctx->pc = 0x79b598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948992));
label_79b59c:
    // 0x79b59c: 0x0  nop
    ctx->pc = 0x79b59cu;
    // NOP
label_79b5a0:
    // 0x79b5a0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79b5a0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79b5a4:
    // 0x79b5a4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79b5a8:
    // 0x79b5a8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79b5ac:
    // 0x79b5ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79b5acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79b5b0:
    // 0x79b5b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79b5b4:
    // 0x79b5b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79b5b8:
    // 0x79b5b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b5bc:
    // 0x79b5bc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79b5c0:
    if (ctx->pc == 0x79B5C0u) {
        ctx->pc = 0x79B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5BCu;
        // 0x79b5c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B5C4u;
        goto label_79b5c4;
    }
    ctx->pc = 0x79B5BCu;
    {
        const bool branch_taken_0x79b5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b5bc) {
            ctx->pc = 0x79B5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B5BCu;
            // 0x79b5c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b5a0;
        }
    }
    ctx->pc = 0x79B5C4u;
label_79b5c4:
    // 0x79b5c4: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79b5c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79b5c8:
    // 0x79b5c8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79b5c8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79b5cc:
    // 0x79b5cc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79b5d0:
    if (ctx->pc == 0x79B5D0u) {
        ctx->pc = 0x79B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5CCu;
        // 0x79b5d0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B5D4u;
        goto label_79b5d4;
    }
    ctx->pc = 0x79B5CCu;
    {
        const bool branch_taken_0x79b5cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5CCu;
        // 0x79b5d0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5cc) {
            ctx->pc = 0x79B5FCu;
            goto label_79b5fc;
        }
    }
    ctx->pc = 0x79B5D4u;
label_79b5d4:
    // 0x79b5d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79b5d8:
    // 0x79b5d8: 0x2442b880  addiu       $v0, $v0, -0x4780
    ctx->pc = 0x79b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_79b5dc:
    // 0x79b5dc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79b5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79b5e0:
    // 0x79b5e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79b5e4:
    // 0x79b5e4: 0x0  nop
    ctx->pc = 0x79b5e4u;
    // NOP
label_79b5e8:
    // 0x79b5e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79b5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79b5ec:
    // 0x79b5ec: 0x40f809  jalr        $v0
label_79b5f0:
    if (ctx->pc == 0x79B5F0u) {
        ctx->pc = 0x79B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5ECu;
        // 0x79b5f0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B5F4u;
        goto label_79b5f4;
    }
    ctx->pc = 0x79B5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79B5F4u);
        ctx->pc = 0x79B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5ECu;
        // 0x79b5f0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B5ECu, 0x79B5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B5F4u;
label_79b5f4:
    // 0x79b5f4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79b5f8:
    if (ctx->pc == 0x79B5F8u) {
        ctx->pc = 0x79B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5F4u;
        // 0x79b5f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B5FCu;
        goto label_79b5fc;
    }
    ctx->pc = 0x79B5F4u;
    {
        const bool branch_taken_0x79b5f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b5f4) {
            ctx->pc = 0x79B5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B5F4u;
            // 0x79b5f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b5e8;
        }
    }
    ctx->pc = 0x79B5FCu;
label_79b5fc:
    // 0x79b5fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79b600:
    // 0x79b600: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79b600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b604:
    // 0x79b604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b608:
    // 0x79b608: 0x3e00008  jr          $ra
label_79b60c:
    if (ctx->pc == 0x79B60Cu) {
        ctx->pc = 0x79B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B608u;
        // 0x79b60c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B610u;
        goto label_fallthrough_0x79b608;
    }
    ctx->pc = 0x79B608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B608u;
        // 0x79b60c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79b608:
    ctx->pc = 0x79B610u;
}
} // namespace gh_r600
