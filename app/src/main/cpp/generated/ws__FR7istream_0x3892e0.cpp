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

// Function: ws__FR7istream
// Address: 0x3892e0 - 0x389398
void ws__FR7istream_0x3892e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ws__FR7istream_0x3892e0");
#endif

    switch (ctx->pc) {
        case 0x389334u: goto label_389334;
        case 0x38934cu: goto label_38934c;
        case 0x389380u: goto label_389380;
        default: break;
    }

    ctx->pc = 0x3892e0u;

    // 0x3892e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3892e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3892e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3892e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3892e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3892e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3892ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3892ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3892f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3892f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3892f4: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x3892f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x3892f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3892F8u;
    {
        const bool branch_taken_0x3892f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3892FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892F8u;
        // 0x3892fc: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3892f8) {
            ctx->pc = 0x38930Cu;
            goto label_38930c;
        }
    }
    ctx->pc = 0x389300u;
    // 0x389300: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x389300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389304: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x389304u;
    {
        const bool branch_taken_0x389304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389304u;
        // 0x389308: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389304) {
            ctx->pc = 0x389338u;
            goto label_389338;
        }
    }
    ctx->pc = 0x38930Cu;
label_38930c:
    // 0x38930c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x38930cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x389310: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x389310u;
    {
        const bool branch_taken_0x389310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x389314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389310u;
        // 0x389314: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389310) {
            ctx->pc = 0x389338u;
            goto label_389338;
        }
    }
    ctx->pc = 0x389318u;
    // 0x389318: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x389318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38931c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38931cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x389320: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x389320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x389324: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x389324u;
    {
        const bool branch_taken_0x389324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x389328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389324u;
        // 0x389328: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389324) {
            ctx->pc = 0x389338u;
            goto label_389338;
        }
    }
    ctx->pc = 0x38932Cu;
    // 0x38932c: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38932Cu;
    SET_GPR_U32(ctx, 31, 0x389334u);
    ctx->pc = 0x389330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38932Cu;
    // 0x389330: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38932Cu, 0x389334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389334u;
label_389334:
    // 0x389334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x389334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389338:
    // 0x389338: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x389338u;
    {
        const bool branch_taken_0x389338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389338u;
        // 0x38933c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389338) {
            ctx->pc = 0x389384u;
            goto label_389384;
        }
    }
    ctx->pc = 0x389340u;
    // 0x389340: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x389340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389344: 0xc0e1d6a  jal         func_3875A8
    ctx->pc = 0x389344u;
    SET_GPR_U32(ctx, 31, 0x38934Cu);
    ctx->pc = 0x389348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389344u;
    // 0x389348: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3875A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3875A8u, 0x389344u, 0x38934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38934Cu;
label_38934c:
    // 0x38934c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38934cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389350: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x389350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x389354: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x389354u;
    {
        const bool branch_taken_0x389354 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x389354) {
            ctx->pc = 0x389358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389354u;
            // 0x389358: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389370u;
            goto label_389370;
        }
    }
    ctx->pc = 0x38935Cu;
    // 0x38935c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389360: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x389360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x389364: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x389364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x389368: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x389368u;
    {
        const bool branch_taken_0x389368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389368u;
        // 0x38936c: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389368) {
            ctx->pc = 0x389380u;
            goto label_389380;
        }
    }
    ctx->pc = 0x389370u;
label_389370:
    // 0x389370: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x389370u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x389374: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x389374u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x389378: 0xc0e2d18  jal         func_38B460
    ctx->pc = 0x389378u;
    SET_GPR_U32(ctx, 31, 0x389380u);
    ctx->pc = 0x38937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389378u;
    // 0x38937c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B460u, 0x389378u, 0x389380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389380u;
label_389380:
    // 0x389380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389384:
    // 0x389384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38938c: 0x3e00008  jr          $ra
    ctx->pc = 0x38938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38938Cu;
        // 0x389390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38938Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389394u;
    // 0x389394: 0x0  nop
    ctx->pc = 0x389394u;
    // NOP
    ctx->pc = 0x389398u;
}
