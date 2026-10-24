#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __check_eh_spec
// Address: 0x7ca188 - 0x7ca340
void ps2___check_eh_spec_0x7ca188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___check_eh_spec_0x7ca188");
#endif

    switch (ctx->pc) {
        case 0x7ca188u: goto label_7ca188;
        case 0x7ca18cu: goto label_7ca18c;
        case 0x7ca190u: goto label_7ca190;
        case 0x7ca194u: goto label_7ca194;
        case 0x7ca198u: goto label_7ca198;
        case 0x7ca19cu: goto label_7ca19c;
        case 0x7ca1a0u: goto label_7ca1a0;
        case 0x7ca1a4u: goto label_7ca1a4;
        case 0x7ca1a8u: goto label_7ca1a8;
        case 0x7ca1acu: goto label_7ca1ac;
        case 0x7ca1b0u: goto label_7ca1b0;
        case 0x7ca1b4u: goto label_7ca1b4;
        case 0x7ca1b8u: goto label_7ca1b8;
        case 0x7ca1bcu: goto label_7ca1bc;
        case 0x7ca1c0u: goto label_7ca1c0;
        case 0x7ca1c4u: goto label_7ca1c4;
        case 0x7ca1c8u: goto label_7ca1c8;
        case 0x7ca1ccu: goto label_7ca1cc;
        case 0x7ca1d0u: goto label_7ca1d0;
        case 0x7ca1d4u: goto label_7ca1d4;
        case 0x7ca1d8u: goto label_7ca1d8;
        case 0x7ca1dcu: goto label_7ca1dc;
        case 0x7ca1e0u: goto label_7ca1e0;
        case 0x7ca1e4u: goto label_7ca1e4;
        case 0x7ca1e8u: goto label_7ca1e8;
        case 0x7ca1ecu: goto label_7ca1ec;
        case 0x7ca1f0u: goto label_7ca1f0;
        case 0x7ca1f4u: goto label_7ca1f4;
        case 0x7ca1f8u: goto label_7ca1f8;
        case 0x7ca1fcu: goto label_7ca1fc;
        case 0x7ca200u: goto label_7ca200;
        case 0x7ca204u: goto label_7ca204;
        case 0x7ca208u: goto label_7ca208;
        case 0x7ca20cu: goto label_7ca20c;
        case 0x7ca210u: goto label_7ca210;
        case 0x7ca214u: goto label_7ca214;
        case 0x7ca218u: goto label_7ca218;
        case 0x7ca21cu: goto label_7ca21c;
        case 0x7ca220u: goto label_7ca220;
        case 0x7ca224u: goto label_7ca224;
        case 0x7ca228u: goto label_7ca228;
        case 0x7ca22cu: goto label_7ca22c;
        case 0x7ca230u: goto label_7ca230;
        case 0x7ca234u: goto label_7ca234;
        case 0x7ca238u: goto label_7ca238;
        case 0x7ca23cu: goto label_7ca23c;
        case 0x7ca240u: goto label_7ca240;
        case 0x7ca244u: goto label_7ca244;
        case 0x7ca248u: goto label_7ca248;
        case 0x7ca24cu: goto label_7ca24c;
        case 0x7ca250u: goto label_7ca250;
        case 0x7ca254u: goto label_7ca254;
        case 0x7ca258u: goto label_7ca258;
        case 0x7ca25cu: goto label_7ca25c;
        case 0x7ca260u: goto label_7ca260;
        case 0x7ca264u: goto label_7ca264;
        case 0x7ca268u: goto label_7ca268;
        case 0x7ca26cu: goto label_7ca26c;
        case 0x7ca270u: goto label_7ca270;
        case 0x7ca274u: goto label_7ca274;
        case 0x7ca278u: goto label_7ca278;
        case 0x7ca27cu: goto label_7ca27c;
        case 0x7ca280u: goto label_7ca280;
        case 0x7ca284u: goto label_7ca284;
        case 0x7ca288u: goto label_7ca288;
        case 0x7ca28cu: goto label_7ca28c;
        case 0x7ca290u: goto label_7ca290;
        case 0x7ca294u: goto label_7ca294;
        case 0x7ca298u: goto label_7ca298;
        case 0x7ca29cu: goto label_7ca29c;
        case 0x7ca2a0u: goto label_7ca2a0;
        case 0x7ca2a4u: goto label_7ca2a4;
        case 0x7ca2a8u: goto label_7ca2a8;
        case 0x7ca2acu: goto label_7ca2ac;
        case 0x7ca2b0u: goto label_7ca2b0;
        case 0x7ca2b4u: goto label_7ca2b4;
        case 0x7ca2b8u: goto label_7ca2b8;
        case 0x7ca2bcu: goto label_7ca2bc;
        case 0x7ca2c0u: goto label_7ca2c0;
        case 0x7ca2c4u: goto label_7ca2c4;
        case 0x7ca2c8u: goto label_7ca2c8;
        case 0x7ca2ccu: goto label_7ca2cc;
        case 0x7ca2d0u: goto label_7ca2d0;
        case 0x7ca2d4u: goto label_7ca2d4;
        case 0x7ca2d8u: goto label_7ca2d8;
        case 0x7ca2dcu: goto label_7ca2dc;
        case 0x7ca2e0u: goto label_7ca2e0;
        case 0x7ca2e4u: goto label_7ca2e4;
        case 0x7ca2e8u: goto label_7ca2e8;
        case 0x7ca2ecu: goto label_7ca2ec;
        case 0x7ca2f0u: goto label_7ca2f0;
        case 0x7ca2f4u: goto label_7ca2f4;
        case 0x7ca2f8u: goto label_7ca2f8;
        case 0x7ca2fcu: goto label_7ca2fc;
        case 0x7ca300u: goto label_7ca300;
        case 0x7ca304u: goto label_7ca304;
        case 0x7ca308u: goto label_7ca308;
        case 0x7ca30cu: goto label_7ca30c;
        case 0x7ca310u: goto label_7ca310;
        case 0x7ca314u: goto label_7ca314;
        case 0x7ca318u: goto label_7ca318;
        case 0x7ca31cu: goto label_7ca31c;
        case 0x7ca320u: goto label_7ca320;
        case 0x7ca324u: goto label_7ca324;
        case 0x7ca328u: goto label_7ca328;
        case 0x7ca32cu: goto label_7ca32c;
        case 0x7ca330u: goto label_7ca330;
        case 0x7ca334u: goto label_7ca334;
        case 0x7ca338u: goto label_7ca338;
        case 0x7ca33cu: goto label_7ca33c;
        default: break;
    }

    ctx->pc = 0x7ca188u;

label_7ca188:
    // 0x7ca188: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7ca188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_7ca18c:
    // 0x7ca18c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7ca18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_7ca190:
    // 0x7ca190: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7ca190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_7ca194:
    // 0x7ca194: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7ca194u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_7ca198:
    // 0x7ca198: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ca198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_7ca19c:
    // 0x7ca19c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7ca19cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7ca1a0:
    // 0x7ca1a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x7ca1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_7ca1a4:
    // 0x7ca1a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7ca1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_7ca1a8:
    // 0x7ca1a8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ca1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_7ca1ac:
    // 0x7ca1ac: 0xc1f2d0c  jal         func_7CB430
label_7ca1b0:
    if (ctx->pc == 0x7CA1B0u) {
        ctx->pc = 0x7CA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA1ACu;
        // 0x7ca1b0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA1B4u;
        goto label_7ca1b4;
    }
    ctx->pc = 0x7CA1ACu;
    SET_GPR_U32(ctx, 31, 0x7CA1B4u);
    ctx->pc = 0x7CA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA1ACu;
    // 0x7ca1b0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB430u, 0x7CA1ACu, 0x7CA1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA1B4u;
label_7ca1b4:
    // 0x7ca1b4: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_7ca1b8:
    if (ctx->pc == 0x7CA1B8u) {
        ctx->pc = 0x7CA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA1B4u;
        // 0x7ca1b8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA1BCu;
        goto label_7ca1bc;
    }
    ctx->pc = 0x7CA1B4u;
    {
        const bool branch_taken_0x7ca1b4 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x7CA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA1B4u;
        // 0x7ca1b8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca1b4) {
            ctx->pc = 0x7CA1F8u;
            goto label_7ca1f8;
        }
    }
    ctx->pc = 0x7CA1BCu;
label_7ca1bc:
    // 0x7ca1bc: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x7ca1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_7ca1c0:
    // 0x7ca1c0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x7ca1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7ca1c4:
    // 0x7ca1c4: 0x0  nop
    ctx->pc = 0x7ca1c4u;
    // NOP
label_7ca1c8:
    // 0x7ca1c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7ca1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7ca1cc:
    // 0x7ca1cc: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x7ca1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_7ca1d0:
    // 0x7ca1d0: 0xc1f297a  jal         func_7CA5E8
label_7ca1d4:
    if (ctx->pc == 0x7CA1D4u) {
        ctx->pc = 0x7CA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA1D0u;
        // 0x7ca1d4: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA1D8u;
        goto label_7ca1d8;
    }
    ctx->pc = 0x7CA1D0u;
    SET_GPR_U32(ctx, 31, 0x7CA1D8u);
    ctx->pc = 0x7CA1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA1D0u;
    // 0x7ca1d4: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CA5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA5E8u, 0x7CA1D0u, 0x7CA1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA1D8u;
label_7ca1d8:
    // 0x7ca1d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_7ca1dc:
    if (ctx->pc == 0x7CA1DCu) {
        ctx->pc = 0x7CA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA1D8u;
        // 0x7ca1dc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA1E0u;
        goto label_7ca1e0;
    }
    ctx->pc = 0x7CA1D8u;
    {
        const bool branch_taken_0x7ca1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ca1d8) {
            ctx->pc = 0x7CA1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA1D8u;
            // 0x7ca1dc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CA1F0u;
            goto label_7ca1f0;
        }
    }
    ctx->pc = 0x7CA1E0u;
label_7ca1e0:
    // 0x7ca1e0: 0xc1f2856  jal         func_7CA158
label_7ca1e4:
    if (ctx->pc == 0x7CA1E4u) {
        ctx->pc = 0x7CA1E8u;
        goto label_7ca1e8;
    }
    ctx->pc = 0x7CA1E0u;
    SET_GPR_U32(ctx, 31, 0x7CA1E8u);
    ctx->pc = 0x7CA158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA158u, 0x7CA1E0u, 0x7CA1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA1E8u;
label_7ca1e8:
    // 0x7ca1e8: 0xc1f2fba  jal         func_7CBEE8
label_7ca1ec:
    if (ctx->pc == 0x7CA1ECu) {
        ctx->pc = 0x7CA1F0u;
        goto label_7ca1f0;
    }
    ctx->pc = 0x7CA1E8u;
    SET_GPR_U32(ctx, 31, 0x7CA1F0u);
    ctx->pc = 0x7CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBEE8u, 0x7CA1E8u, 0x7CA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA1F0u;
label_7ca1f0:
    // 0x7ca1f0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_7ca1f4:
    if (ctx->pc == 0x7CA1F4u) {
        ctx->pc = 0x7CA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA1F0u;
        // 0x7ca1f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA1F8u;
        goto label_7ca1f8;
    }
    ctx->pc = 0x7CA1F0u;
    {
        const bool branch_taken_0x7ca1f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA1F0u;
        // 0x7ca1f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca1f0) {
            ctx->pc = 0x7CA1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ca1c8;
        }
    }
    ctx->pc = 0x7CA1F8u;
label_7ca1f8:
    // 0x7ca1f8: 0xc1f27ac  jal         func_7C9EB0
label_7ca1fc:
    if (ctx->pc == 0x7CA1FCu) {
        ctx->pc = 0x7CA200u;
        goto label_7ca200;
    }
    ctx->pc = 0x7CA1F8u;
    SET_GPR_U32(ctx, 31, 0x7CA200u);
    ctx->pc = 0x7C9EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9EB0u, 0x7CA1F8u, 0x7CA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA200u;
label_7ca200:
    // 0x7ca200: 0xc1f2fba  jal         func_7CBEE8
label_7ca204:
    if (ctx->pc == 0x7CA204u) {
        ctx->pc = 0x7CA208u;
        goto label_7ca208;
    }
    ctx->pc = 0x7CA200u;
    SET_GPR_U32(ctx, 31, 0x7CA208u);
    ctx->pc = 0x7CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBEE8u, 0x7CA200u, 0x7CA208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA208u;
label_7ca208:
    // 0x7ca208: 0xc1f27c4  jal         func_7C9F10
label_7ca20c:
    if (ctx->pc == 0x7CA20Cu) {
        ctx->pc = 0x7CA210u;
        goto label_7ca210;
    }
    ctx->pc = 0x7CA208u;
    SET_GPR_U32(ctx, 31, 0x7CA210u);
    ctx->pc = 0x7C9F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9F10u, 0x7CA208u, 0x7CA210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA210u;
label_7ca210:
    // 0x7ca210: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7ca210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca214:
    // 0x7ca214: 0x12540012  beq         $s2, $s4, . + 4 + (0x12 << 2)
label_7ca218:
    if (ctx->pc == 0x7CA218u) {
        ctx->pc = 0x7CA21Cu;
        goto label_7ca21c;
    }
    ctx->pc = 0x7CA214u;
    {
        const bool branch_taken_0x7ca214 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x7ca214) {
            ctx->pc = 0x7CA260u;
            goto label_7ca260;
        }
    }
    ctx->pc = 0x7CA21Cu;
label_7ca21c:
    // 0x7ca21c: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_7ca220:
    if (ctx->pc == 0x7CA220u) {
        ctx->pc = 0x7CA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA21Cu;
        // 0x7ca220: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA224u;
        goto label_7ca224;
    }
    ctx->pc = 0x7CA21Cu;
    {
        const bool branch_taken_0x7ca21c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x7CA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA21Cu;
        // 0x7ca220: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca21c) {
            ctx->pc = 0x7CA260u;
            goto label_7ca260;
        }
    }
    ctx->pc = 0x7CA224u;
label_7ca224:
    // 0x7ca224: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x7ca224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_7ca228:
    // 0x7ca228: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x7ca228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7ca22c:
    // 0x7ca22c: 0x0  nop
    ctx->pc = 0x7ca22cu;
    // NOP
label_7ca230:
    // 0x7ca230: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7ca230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7ca234:
    // 0x7ca234: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x7ca234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_7ca238:
    // 0x7ca238: 0xc1f297a  jal         func_7CA5E8
label_7ca23c:
    if (ctx->pc == 0x7CA23Cu) {
        ctx->pc = 0x7CA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA238u;
        // 0x7ca23c: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA240u;
        goto label_7ca240;
    }
    ctx->pc = 0x7CA238u;
    SET_GPR_U32(ctx, 31, 0x7CA240u);
    ctx->pc = 0x7CA23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA238u;
    // 0x7ca23c: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CA5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA5E8u, 0x7CA238u, 0x7CA240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA240u;
label_7ca240:
    // 0x7ca240: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_7ca244:
    if (ctx->pc == 0x7CA244u) {
        ctx->pc = 0x7CA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA240u;
        // 0x7ca244: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA248u;
        goto label_7ca248;
    }
    ctx->pc = 0x7CA240u;
    {
        const bool branch_taken_0x7ca240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ca240) {
            ctx->pc = 0x7CA244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA240u;
            // 0x7ca244: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CA258u;
            goto label_7ca258;
        }
    }
    ctx->pc = 0x7CA248u;
label_7ca248:
    // 0x7ca248: 0xc1f2856  jal         func_7CA158
label_7ca24c:
    if (ctx->pc == 0x7CA24Cu) {
        ctx->pc = 0x7CA250u;
        goto label_7ca250;
    }
    ctx->pc = 0x7CA248u;
    SET_GPR_U32(ctx, 31, 0x7CA250u);
    ctx->pc = 0x7CA158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA158u, 0x7CA248u, 0x7CA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA250u;
label_7ca250:
    // 0x7ca250: 0xc1f2fba  jal         func_7CBEE8
label_7ca254:
    if (ctx->pc == 0x7CA254u) {
        ctx->pc = 0x7CA258u;
        goto label_7ca258;
    }
    ctx->pc = 0x7CA250u;
    SET_GPR_U32(ctx, 31, 0x7CA258u);
    ctx->pc = 0x7CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBEE8u, 0x7CA250u, 0x7CA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA258u;
label_7ca258:
    // 0x7ca258: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_7ca25c:
    if (ctx->pc == 0x7CA25Cu) {
        ctx->pc = 0x7CA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA258u;
        // 0x7ca25c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA260u;
        goto label_7ca260;
    }
    ctx->pc = 0x7CA258u;
    {
        const bool branch_taken_0x7ca258 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA258u;
        // 0x7ca25c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca258) {
            ctx->pc = 0x7CA230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ca230;
        }
    }
    ctx->pc = 0x7CA260u;
label_7ca260:
    // 0x7ca260: 0xc1f293a  jal         func_7CA4E8
label_7ca264:
    if (ctx->pc == 0x7CA264u) {
        ctx->pc = 0x7CA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA260u;
        // 0x7ca264: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA268u;
        goto label_7ca268;
    }
    ctx->pc = 0x7CA260u;
    SET_GPR_U32(ctx, 31, 0x7CA268u);
    ctx->pc = 0x7CA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA260u;
    // 0x7ca264: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CA4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA4E8u, 0x7CA260u, 0x7CA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA268u;
label_7ca268:
    // 0x7ca268: 0x1a600025  blez        $s3, . + 4 + (0x25 << 2)
label_7ca26c:
    if (ctx->pc == 0x7CA26Cu) {
        ctx->pc = 0x7CA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA268u;
        // 0x7ca26c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA270u;
        goto label_7ca270;
    }
    ctx->pc = 0x7CA268u;
    {
        const bool branch_taken_0x7ca268 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x7CA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA268u;
        // 0x7ca26c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca268) {
            ctx->pc = 0x7CA300u;
            goto label_7ca300;
        }
    }
    ctx->pc = 0x7CA270u;
label_7ca270:
    // 0x7ca270: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x7ca270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_7ca274:
    // 0x7ca274: 0x0  nop
    ctx->pc = 0x7ca274u;
    // NOP
label_7ca278:
    // 0x7ca278: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x7ca278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_7ca27c:
    // 0x7ca27c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x7ca27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_7ca280:
    // 0x7ca280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7ca280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7ca284:
    // 0x7ca284: 0xc1f297a  jal         func_7CA5E8
label_7ca288:
    if (ctx->pc == 0x7CA288u) {
        ctx->pc = 0x7CA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA284u;
        // 0x7ca288: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA28Cu;
        goto label_7ca28c;
    }
    ctx->pc = 0x7CA284u;
    SET_GPR_U32(ctx, 31, 0x7CA28Cu);
    ctx->pc = 0x7CA288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA284u;
    // 0x7ca288: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CA5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA5E8u, 0x7CA284u, 0x7CA28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA28Cu;
label_7ca28c:
    // 0x7ca28c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_7ca290:
    if (ctx->pc == 0x7CA290u) {
        ctx->pc = 0x7CA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA28Cu;
        // 0x7ca290: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA294u;
        goto label_7ca294;
    }
    ctx->pc = 0x7CA28Cu;
    {
        const bool branch_taken_0x7ca28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA28Cu;
        // 0x7ca290: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca28c) {
            ctx->pc = 0x7CA2F0u;
            goto label_7ca2f0;
        }
    }
    ctx->pc = 0x7CA294u;
label_7ca294:
    // 0x7ca294: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7ca294u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
label_7ca298:
    // 0x7ca298: 0x24511040  addiu       $s1, $v0, 0x1040
    ctx->pc = 0x7ca298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4160));
label_7ca29c:
    // 0x7ca29c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x7ca29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7ca2a0:
    // 0x7ca2a0: 0xc1f27d2  jal         func_7C9F48
label_7ca2a4:
    if (ctx->pc == 0x7CA2A4u) {
        ctx->pc = 0x7CA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA2A0u;
        // 0x7ca2a4: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA2A8u;
        goto label_7ca2a8;
    }
    ctx->pc = 0x7CA2A0u;
    SET_GPR_U32(ctx, 31, 0x7CA2A8u);
    ctx->pc = 0x7CA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA2A0u;
    // 0x7ca2a4: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9F48u, 0x7CA2A0u, 0x7CA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA2A8u;
label_7ca2a8:
    // 0x7ca2a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ca2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca2ac:
    // 0x7ca2ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_7ca2b0:
    if (ctx->pc == 0x7CA2B0u) {
        ctx->pc = 0x7CA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA2ACu;
        // 0x7ca2b0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA2B4u;
        goto label_7ca2b4;
    }
    ctx->pc = 0x7CA2ACu;
    {
        const bool branch_taken_0x7ca2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA2ACu;
        // 0x7ca2b0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca2ac) {
            ctx->pc = 0x7CA2BCu;
            goto label_7ca2bc;
        }
    }
    ctx->pc = 0x7CA2B4u;
label_7ca2b4:
    // 0x7ca2b4: 0xc1f2fba  jal         func_7CBEE8
label_7ca2b8:
    if (ctx->pc == 0x7CA2B8u) {
        ctx->pc = 0x7CA2BCu;
        goto label_7ca2bc;
    }
    ctx->pc = 0x7CA2B4u;
    SET_GPR_U32(ctx, 31, 0x7CA2BCu);
    ctx->pc = 0x7CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBEE8u, 0x7CA2B4u, 0x7CA2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA2BCu;
label_7ca2bc:
    // 0x7ca2bc: 0x26421058  addiu       $v0, $s2, 0x1058
    ctx->pc = 0x7ca2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4184));
label_7ca2c0:
    // 0x7ca2c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7ca2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_7ca2c4:
    // 0x7ca2c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7ca2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7ca2c8:
    // 0x7ca2c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7ca2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7ca2cc:
    // 0x7ca2cc: 0x40f809  jalr        $v0
label_7ca2d0:
    if (ctx->pc == 0x7CA2D0u) {
        ctx->pc = 0x7CA2D4u;
        goto label_7ca2d4;
    }
    ctx->pc = 0x7CA2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CA2D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA2CCu, 0x7CA2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CA2D4u;
label_7ca2d4:
    // 0x7ca2d4: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7ca2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
label_7ca2d8:
    // 0x7ca2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ca2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7ca2dc:
    // 0x7ca2dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7ca2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca2e0:
    // 0x7ca2e0: 0xc1f2800  jal         func_7CA000
label_7ca2e4:
    if (ctx->pc == 0x7CA2E4u) {
        ctx->pc = 0x7CA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA2E0u;
        // 0x7ca2e4: 0x24c6a4a0  addiu       $a2, $a2, -0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA2E8u;
        goto label_7ca2e8;
    }
    ctx->pc = 0x7CA2E0u;
    SET_GPR_U32(ctx, 31, 0x7CA2E8u);
    ctx->pc = 0x7CA2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA2E0u;
    // 0x7ca2e4: 0x24c6a4a0  addiu       $a2, $a2, -0x5B60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA000u, 0x7CA2E0u, 0x7CA2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA2E8u;
label_7ca2e8:
    // 0x7ca2e8: 0xc1f2fba  jal         func_7CBEE8
label_7ca2ec:
    if (ctx->pc == 0x7CA2ECu) {
        ctx->pc = 0x7CA2F0u;
        goto label_7ca2f0;
    }
    ctx->pc = 0x7CA2E8u;
    SET_GPR_U32(ctx, 31, 0x7CA2F0u);
    ctx->pc = 0x7CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBEE8u, 0x7CA2E8u, 0x7CA2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA2F0u;
label_7ca2f0:
    // 0x7ca2f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x7ca2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_7ca2f4:
    // 0x7ca2f4: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x7ca2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_7ca2f8:
    // 0x7ca2f8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_7ca2fc:
    if (ctx->pc == 0x7CA2FCu) {
        ctx->pc = 0x7CA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA2F8u;
        // 0x7ca2fc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA300u;
        goto label_7ca300;
    }
    ctx->pc = 0x7CA2F8u;
    {
        const bool branch_taken_0x7ca2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA2F8u;
        // 0x7ca2fc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca2f8) {
            ctx->pc = 0x7CA278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ca278;
        }
    }
    ctx->pc = 0x7CA300u;
label_7ca300:
    // 0x7ca300: 0xc1f279a  jal         func_7C9E68
label_7ca304:
    if (ctx->pc == 0x7CA304u) {
        ctx->pc = 0x7CA308u;
        goto label_7ca308;
    }
    ctx->pc = 0x7CA300u;
    SET_GPR_U32(ctx, 31, 0x7CA308u);
    ctx->pc = 0x7C9E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E68u, 0x7CA300u, 0x7CA308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA308u;
label_7ca308:
    // 0x7ca308: 0xc1f2fba  jal         func_7CBEE8
label_7ca30c:
    if (ctx->pc == 0x7CA30Cu) {
        ctx->pc = 0x7CA310u;
        goto label_7ca310;
    }
    ctx->pc = 0x7CA308u;
    SET_GPR_U32(ctx, 31, 0x7CA310u);
    ctx->pc = 0x7CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBEE8u, 0x7CA308u, 0x7CA310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA310u;
label_7ca310:
    // 0x7ca310: 0x26421058  addiu       $v0, $s2, 0x1058
    ctx->pc = 0x7ca310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4184));
label_7ca314:
    // 0x7ca314: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_7ca318:
    if (ctx->pc == 0x7CA318u) {
        ctx->pc = 0x7CA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA314u;
        // 0x7ca318: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA31Cu;
        goto label_7ca31c;
    }
    ctx->pc = 0x7CA314u;
    {
        const bool branch_taken_0x7ca314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA314u;
        // 0x7ca318: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca314) {
            ctx->pc = 0x7CA2B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ca2b4;
        }
    }
    ctx->pc = 0x7CA31Cu;
label_7ca31c:
    // 0x7ca31c: 0xc1f2824  jal         func_7CA090
label_7ca320:
    if (ctx->pc == 0x7CA320u) {
        ctx->pc = 0x7CA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA31Cu;
        // 0x7ca320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA324u;
        goto label_7ca324;
    }
    ctx->pc = 0x7CA31Cu;
    SET_GPR_U32(ctx, 31, 0x7CA324u);
    ctx->pc = 0x7CA320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA31Cu;
    // 0x7ca320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CA090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA090u, 0x7CA31Cu, 0x7CA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA324u;
label_7ca324:
    // 0x7ca324: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_7ca328:
    if (ctx->pc == 0x7CA328u) {
        ctx->pc = 0x7CA32Cu;
        goto label_7ca32c;
    }
    ctx->pc = 0x7CA324u;
    {
        const bool branch_taken_0x7ca324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ca324) {
            ctx->pc = 0x7CA308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ca308;
        }
    }
    ctx->pc = 0x7CA32Cu;
label_7ca32c:
    // 0x7ca32c: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_7ca330:
    if (ctx->pc == 0x7CA330u) {
        ctx->pc = 0x7CA334u;
        goto label_7ca334;
    }
    ctx->pc = 0x7CA32Cu;
    {
        const bool branch_taken_0x7ca32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ca32c) {
            ctx->pc = 0x7CA200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ca200;
        }
    }
    ctx->pc = 0x7CA334u;
label_7ca334:
    // 0x7ca334: 0xc1f279a  jal         func_7C9E68
label_7ca338:
    if (ctx->pc == 0x7CA338u) {
        ctx->pc = 0x7CA33Cu;
        goto label_7ca33c;
    }
    ctx->pc = 0x7CA334u;
    SET_GPR_U32(ctx, 31, 0x7CA33Cu);
    ctx->pc = 0x7C9E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E68u, 0x7CA334u, 0x7CA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA33Cu;
label_7ca33c:
    // 0x7ca33c: 0x0  nop
    ctx->pc = 0x7ca33cu;
    // NOP
    ctx->pc = 0x7ca340u;
}
} // namespace gh_mcport
