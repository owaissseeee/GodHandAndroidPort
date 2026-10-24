#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r509_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r509
{
// Function: __5cR509
// Address: 0x799280 - 0x799368
void ps2___5cR509_0x799280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___5cR509_0x799280");
#endif

    switch (ctx->pc) {
        case 0x7992c4u: goto label_7992c4;
        case 0x7992f8u: goto label_7992f8;
        case 0x799328u: goto label_799328;
        case 0x799338u: goto label_799338;
        case 0x799348u: goto label_799348;
        default: break;
    }

    ctx->pc = 0x799280u;

    // 0x799280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799284: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799288: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79928c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79928cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799294: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79929c: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7992a0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7992a4: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7992A4u;
    {
        const bool branch_taken_0x7992a4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x7992A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A4u;
        // 0x7992a8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992a4) {
            ctx->pc = 0x7992CCu;
            goto label_7992cc;
        }
    }
    ctx->pc = 0x7992ACu;
    // 0x7992ac: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992b0: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x7992b4: 0x24a595f0  addiu       $a1, $a1, -0x6A10
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940144));
    // 0x7992b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992bc: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992BCu;
    SET_GPR_U32(ctx, 31, 0x7992C4u);
    ctx->pc = 0x7992C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992BCu;
    // 0x7992c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992BCu, 0x7992C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C4u;
label_7992c4:
    // 0x7992c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x7992C4u;
    {
        const bool branch_taken_0x7992c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C4u;
        // 0x7992c8: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992c4) {
            ctx->pc = 0x799338u;
            goto label_799338;
        }
    }
    ctx->pc = 0x7992CCu;
label_7992cc:
    // 0x7992cc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7992d0: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7992d4: 0x804499a0  lb          $a0, -0x6660($v0)
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x7999A0u));
    // 0x7992d8: 0x244699a0  addiu       $a2, $v0, -0x6660
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941088));
    // 0x7992dc: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x7992e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e8: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x7992ec: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x7992ECu;
    {
        const bool branch_taken_0x7992ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ECu;
        // 0x7992f0: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992ec) {
            ctx->pc = 0x799320u;
            goto label_799320;
        }
    }
    ctx->pc = 0x7992F4u;
    // 0x7992f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7992f8:
    // 0x7992f8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7992fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799300: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799304: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799308: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79930c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79930Cu;
    {
        const bool branch_taken_0x79930c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79930Cu;
        // 0x799310: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79930c) {
            ctx->pc = 0x799320u;
            goto label_799320;
        }
    }
    ctx->pc = 0x799314u;
    // 0x799314: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799318: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799318u;
    {
        const bool branch_taken_0x799318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799318) {
            ctx->pc = 0x79931Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799318u;
            // 0x79931c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992f8;
        }
    }
    ctx->pc = 0x799320u;
label_799320:
    // 0x799320: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799320u;
    SET_GPR_U32(ctx, 31, 0x799328u);
    ctx->pc = 0x799324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799320u;
    // 0x799324: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799320u, 0x799328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799328u;
label_799328:
    // 0x799328: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799328u;
    {
        const bool branch_taken_0x799328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799328u;
        // 0x79932c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799328) {
            ctx->pc = 0x79933Cu;
            goto label_79933c;
        }
    }
    ctx->pc = 0x799330u;
    // 0x799330: 0xc06b646  jal         func_1AD918
    ctx->pc = 0x799330u;
    SET_GPR_U32(ctx, 31, 0x799338u);
    ctx->pc = 0x799334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799330u;
    // 0x799334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD918u, 0x799330u, 0x799338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799338u;
label_799338:
    // 0x799338: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79933c:
    // 0x79933c: 0x26259370  addiu       $a1, $s1, -0x6C90
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939504));
    // 0x799340: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799340u;
    SET_GPR_U32(ctx, 31, 0x799348u);
    ctx->pc = 0x799344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799340u;
    // 0x799344: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799340u, 0x799348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799348u;
label_799348:
    // 0x799348: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x799348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79934c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79934cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799350: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799354: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x799354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79935c: 0x3e00008  jr          $ra
    ctx->pc = 0x79935Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79935Cu;
        // 0x799360: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79935Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799364u;
    // 0x799364: 0x0  nop
    ctx->pc = 0x799364u;
    // NOP
    ctx->pc = 0x799368u;
}
} // namespace gh_r509
