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

// Function: peek__7istream
// Address: 0x3876d0 - 0x387788
void peek__7istream_0x3876d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("peek__7istream_0x3876d0");
#endif

    switch (ctx->pc) {
        case 0x38771cu: goto label_38771c;
        case 0x387740u: goto label_387740;
        default: break;
    }

    ctx->pc = 0x3876d0u;

    // 0x3876d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3876d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3876d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3876d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3876d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3876d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3876dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3876dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3876e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3876e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3876e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3876e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3876e8: 0x90a2001a  lbu         $v0, 0x1A($a1)
    ctx->pc = 0x3876e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x3876ec: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3876ECu;
    {
        const bool branch_taken_0x3876ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3876F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3876ECu;
        // 0x3876f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3876ec) {
            ctx->pc = 0x387774u;
            goto label_387774;
        }
    }
    ctx->pc = 0x3876F4u;
    // 0x3876f4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x3876f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3876f8: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3876F8u;
    {
        const bool branch_taken_0x3876f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3876f8) {
            ctx->pc = 0x3876FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3876F8u;
            // 0x3876fc: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387724u;
            goto label_387724;
        }
    }
    ctx->pc = 0x387700u;
    // 0x387700: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x387700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387704: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x387704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x387708: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x387708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x38770c: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38770Cu;
    {
        const bool branch_taken_0x38770c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x38770c) {
            ctx->pc = 0x387710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38770Cu;
            // 0x387710: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387724u;
            goto label_387724;
        }
    }
    ctx->pc = 0x387714u;
    // 0x387714: 0xc0e249a  jal         func_389268
    ctx->pc = 0x387714u;
    SET_GPR_U32(ctx, 31, 0x38771Cu);
    ctx->pc = 0x387718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387714u;
    // 0x387718: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x387714u, 0x38771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38771Cu;
label_38771c:
    // 0x38771c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x38771cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x387720: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x387720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_387724:
    // 0x387724: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x387724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x387728: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x387728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38772c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x38772cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x387730: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x387730u;
    {
        const bool branch_taken_0x387730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387730) {
            ctx->pc = 0x387734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387730u;
            // 0x387734: 0x90650000  lbu         $a1, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387754u;
            goto label_387754;
        }
    }
    ctx->pc = 0x387738u;
    // 0x387738: 0xc0e316e  jal         func_38C5B8
    ctx->pc = 0x387738u;
    SET_GPR_U32(ctx, 31, 0x387740u);
    ctx->pc = 0x38773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387738u;
    // 0x38773c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x387738u, 0x387740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387740u;
label_387740:
    // 0x387740: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x387740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387744: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x387744u;
    {
        const bool branch_taken_0x387744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x387748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387744u;
        // 0x387748: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387744) {
            ctx->pc = 0x387754u;
            goto label_387754;
        }
    }
    ctx->pc = 0x38774Cu;
    // 0x38774c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x387750: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x387750u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_387754:
    // 0x387754: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x387754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387758: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x387758u;
    {
        const bool branch_taken_0x387758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x38775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387758u;
        // 0x38775c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387758) {
            ctx->pc = 0x387774u;
            goto label_387774;
        }
    }
    ctx->pc = 0x387760u;
    // 0x387760: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x387760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x387764: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x387768: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x387768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x38776c: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x38776cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x387770: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x387770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_387774:
    // 0x387774: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x387774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387778: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x387778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38777c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38777cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387780: 0x3e00008  jr          $ra
    ctx->pc = 0x387780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387780u;
        // 0x387784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387788u;
}
