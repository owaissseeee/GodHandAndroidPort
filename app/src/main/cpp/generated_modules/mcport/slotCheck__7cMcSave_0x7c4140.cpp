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
// Function: slotCheck__7cMcSave
// Address: 0x7c4140 - 0x7c4368
void slotCheck__7cMcSave_0x7c4140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("slotCheck__7cMcSave_0x7c4140");
#endif

    switch (ctx->pc) {
        case 0x7c41a8u: goto label_7c41a8;
        case 0x7c41b4u: goto label_7c41b4;
        case 0x7c41c8u: goto label_7c41c8;
        case 0x7c41f8u: goto label_7c41f8;
        case 0x7c4200u: goto label_7c4200;
        case 0x7c4210u: goto label_7c4210;
        case 0x7c4224u: goto label_7c4224;
        case 0x7c423cu: goto label_7c423c;
        case 0x7c424cu: goto label_7c424c;
        case 0x7c426cu: goto label_7c426c;
        case 0x7c4284u: goto label_7c4284;
        default: break;
    }

    ctx->pc = 0x7c4140u;

    // 0x7c4140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7c4140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7c4144: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7c4144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7c4148: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7c4148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7c414c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c414cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4150: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7c4150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7c4154: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c4154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4158: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7c4158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7c415c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c4160: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x7c4160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x7c4164: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x7c4164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x7c4168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c4168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c416c: 0x1072002f  beq         $v1, $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x7C416Cu;
    {
        const bool branch_taken_0x7c416c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C416Cu;
        // 0x7c4170: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c416c) {
            ctx->pc = 0x7C422Cu;
            goto label_7c422c;
        }
    }
    ctx->pc = 0x7C4174u;
    // 0x7c4174: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x7c4174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x7c4178: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C4178u;
    {
        const bool branch_taken_0x7c4178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4178) {
            ctx->pc = 0x7C417Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4178u;
            // 0x7c417c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4190u;
            goto label_7c4190;
        }
    }
    ctx->pc = 0x7C4180u;
    // 0x7c4180: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C4180u;
    {
        const bool branch_taken_0x7c4180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4180) {
            ctx->pc = 0x7C41A0u;
            goto label_7c41a0;
        }
    }
    ctx->pc = 0x7C4188u;
    // 0x7c4188: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x7C4188u;
    {
        const bool branch_taken_0x7c4188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4188u;
        // 0x7c418c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4188) {
            ctx->pc = 0x7C434Cu;
            goto label_7c434c;
        }
    }
    ctx->pc = 0x7C4190u;
label_7c4190:
    // 0x7c4190: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x7C4190u;
    {
        const bool branch_taken_0x7c4190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4190u;
        // 0x7c4194: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4190) {
            ctx->pc = 0x7C425Cu;
            goto label_7c425c;
        }
    }
    ctx->pc = 0x7C4198u;
    // 0x7c4198: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x7C4198u;
    {
        const bool branch_taken_0x7c4198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4198u;
        // 0x7c419c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4198) {
            ctx->pc = 0x7C434Cu;
            goto label_7c434c;
        }
    }
    ctx->pc = 0x7C41A0u;
label_7c41a0:
    // 0x7c41a0: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C41A0u;
    SET_GPR_U32(ctx, 31, 0x7C41A8u);
    ctx->pc = 0x7C41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C41A0u;
    // 0x7c41a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C41A0u, 0x7C41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C41A8u;
label_7c41a8:
    // 0x7c41a8: 0xae120078  sw          $s2, 0x78($s0)
    ctx->pc = 0x7c41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 18));
    // 0x7c41ac: 0xc1f2336  jal         func_7C8CD8
    ctx->pc = 0x7C41ACu;
    SET_GPR_U32(ctx, 31, 0x7C41B4u);
    ctx->pc = 0x7C41B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C41ACu;
    // 0x7c41b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8CD8u, 0x7C41ACu, 0x7C41B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C41B4u;
label_7c41b4:
    // 0x7c41b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x7c41b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x7c41b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x7c41b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c41bc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x7c41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x7c41c0: 0x26020088  addiu       $v0, $s0, 0x88
    ctx->pc = 0x7c41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x7c41c4: 0x0  nop
    ctx->pc = 0x7c41c4u;
    // NOP
label_7c41c8:
    // 0x7c41c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x7c41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x7c41cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7c41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7c41d0: 0x0  nop
    ctx->pc = 0x7c41d0u;
    // NOP
    // 0x7c41d4: 0x0  nop
    ctx->pc = 0x7c41d4u;
    // NOP
    // 0x7c41d8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C41D8u;
    {
        const bool branch_taken_0x7c41d8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x7C41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C41D8u;
        // 0x7c41dc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c41d8) {
            ctx->pc = 0x7C41C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c41c8;
        }
    }
    ctx->pc = 0x7C41E0u;
    // 0x7c41e0: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x7c41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x7c41e4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C41E4u;
    {
        const bool branch_taken_0x7c41e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C41E4u;
        // 0x7c41e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c41e4) {
            ctx->pc = 0x7C421Cu;
            goto label_7c421c;
        }
    }
    ctx->pc = 0x7C41ECu;
    // 0x7c41ec: 0x24065000  addiu       $a2, $zero, 0x5000
    ctx->pc = 0x7c41ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c41f0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C41F0u;
    SET_GPR_U32(ctx, 31, 0x7C41F8u);
    ctx->pc = 0x7C41F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C41F0u;
    // 0x7c41f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C41F0u, 0x7C41F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C41F8u;
label_7c41f8:
    // 0x7c41f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7c41f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c41fc: 0x0  nop
    ctx->pc = 0x7c41fcu;
    // NOP
label_7c4200:
    // 0x7c4200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c4200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4204: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c4204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4208: 0xc1f23de  jal         func_7C8F78
    ctx->pc = 0x7C4208u;
    SET_GPR_U32(ctx, 31, 0x7C4210u);
    ctx->pc = 0x7C420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4208u;
    // 0x7c420c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F78u, 0x7C4208u, 0x7C4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4210u;
label_7c4210:
    // 0x7c4210: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x7c4210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c4214: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C4214u;
    {
        const bool branch_taken_0x7c4214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4214u;
        // 0x7c4218: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4214) {
            ctx->pc = 0x7C4200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c4200;
        }
    }
    ctx->pc = 0x7C421Cu;
label_7c421c:
    // 0x7c421c: 0xc1f2336  jal         func_7C8CD8
    ctx->pc = 0x7C421Cu;
    SET_GPR_U32(ctx, 31, 0x7C4224u);
    ctx->pc = 0x7C4220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C421Cu;
    // 0x7c4220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8CD8u, 0x7C421Cu, 0x7C4224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4224u;
label_7c4224:
    // 0x7c4224: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c4224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x7c4228: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x7c4228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
label_7c422c:
    // 0x7c422c: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c422cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c4230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c4230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4234: 0xc1f0e1c  jal         func_7C3870
    ctx->pc = 0x7C4234u;
    SET_GPR_U32(ctx, 31, 0x7C423Cu);
    ctx->pc = 0x7C4238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4234u;
    // 0x7c4238: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3870u, 0x7C4234u, 0x7C423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C423Cu;
label_7c423c:
    // 0x7c423c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c423cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4240: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c4240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c4244: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C4244u;
    SET_GPR_U32(ctx, 31, 0x7C424Cu);
    ctx->pc = 0x7C4248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4244u;
    // 0x7c4248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C4244u, 0x7C424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C424Cu;
label_7c424c:
    // 0x7c424c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x7C424Cu;
    {
        const bool branch_taken_0x7c424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C424Cu;
        // 0x7c4250: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c424c) {
            ctx->pc = 0x7C4338u;
            goto label_7c4338;
        }
    }
    ctx->pc = 0x7C4254u;
    // 0x7c4254: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x7C4254u;
    {
        const bool branch_taken_0x7c4254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4254u;
        // 0x7c4258: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4254) {
            ctx->pc = 0x7C4348u;
            goto label_7c4348;
        }
    }
    ctx->pc = 0x7C425Cu;
label_7c425c:
    // 0x7c425c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c425cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4260: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7c4260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4264: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C4264u;
    SET_GPR_U32(ctx, 31, 0x7C426Cu);
    ctx->pc = 0x7C4268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4264u;
    // 0x7c4268: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4264u, 0x7C426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C426Cu;
label_7c426c:
    // 0x7c426c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c426cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4270: 0x56320036  bnel        $s1, $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x7C4270u;
    {
        const bool branch_taken_0x7c4270 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c4270) {
            ctx->pc = 0x7C4274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4270u;
            // 0x7c4274: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C434Cu;
            goto label_7c434c;
        }
    }
    ctx->pc = 0x7C4278u;
    // 0x7c4278: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c4278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c427c: 0xc1f1b8e  jal         func_7C6E38
    ctx->pc = 0x7C427Cu;
    SET_GPR_U32(ctx, 31, 0x7C4284u);
    ctx->pc = 0x7C4280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C427Cu;
    // 0x7c4280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6E38u, 0x7C427Cu, 0x7C4284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4284u;
label_7c4284:
    // 0x7c4284: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c4284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4288: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7c4288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c428c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C428Cu;
    {
        const bool branch_taken_0x7c428c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C428Cu;
        // 0x7c4290: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c428c) {
            ctx->pc = 0x7C42BCu;
            goto label_7c42bc;
        }
    }
    ctx->pc = 0x7C4294u;
    // 0x7c4294: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C4294u;
    {
        const bool branch_taken_0x7c4294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4294u;
        // 0x7c4298: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4294) {
            ctx->pc = 0x7C42ACu;
            goto label_7c42ac;
        }
    }
    ctx->pc = 0x7C429Cu;
    // 0x7c429c: 0x10710007  beq         $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C429Cu;
    {
        const bool branch_taken_0x7c429c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x7C42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C429Cu;
        // 0x7c42a0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c429c) {
            ctx->pc = 0x7C42BCu;
            goto label_7c42bc;
        }
    }
    ctx->pc = 0x7C42A4u;
    // 0x7c42a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x7C42A4u;
    {
        const bool branch_taken_0x7c42a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C42A4u;
        // 0x7c42a8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c42a4) {
            ctx->pc = 0x7C4340u;
            goto label_7c4340;
        }
    }
    ctx->pc = 0x7C42ACu;
label_7c42ac:
    // 0x7c42ac: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C42ACu;
    {
        const bool branch_taken_0x7c42ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C42ACu;
        // 0x7c42b0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c42ac) {
            ctx->pc = 0x7C4314u;
            goto label_7c4314;
        }
    }
    ctx->pc = 0x7C42B4u;
    // 0x7c42b4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x7C42B4u;
    {
        const bool branch_taken_0x7c42b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C42B4u;
        // 0x7c42b8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c42b4) {
            ctx->pc = 0x7C4340u;
            goto label_7c4340;
        }
    }
    ctx->pc = 0x7C42BCu;
label_7c42bc:
    // 0x7c42bc: 0x26641740  addiu       $a0, $s3, 0x1740
    ctx->pc = 0x7c42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
    // 0x7c42c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7c42c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c42c4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x7c42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x7c42c8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C42C8u;
    {
        const bool branch_taken_0x7c42c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x7C42CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C42C8u;
        // 0x7c42cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c42c8) {
            ctx->pc = 0x7C42E4u;
            goto label_7c42e4;
        }
    }
    ctx->pc = 0x7C42D0u;
    // 0x7c42d0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x7c42d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7c42d4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x7c42d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x7c42d8: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x7c42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x7c42dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x7C42DCu;
    {
        const bool branch_taken_0x7c42dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C42E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C42DCu;
        // 0x7c42e0: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c42dc) {
            ctx->pc = 0x7C4344u;
            goto label_7c4344;
        }
    }
    ctx->pc = 0x7C42E4u;
label_7c42e4:
    // 0x7c42e4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x7c42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x7c42e8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x7C42E8u;
    {
        const bool branch_taken_0x7c42e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c42e8) {
            ctx->pc = 0x7C42ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C42E8u;
            // 0x7c42ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C433Cu;
            goto label_7c433c;
        }
    }
    ctx->pc = 0x7C42F0u;
    // 0x7c42f0: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x7c42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x7c42f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c42f8: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x7c42f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x7c42fc: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x7c42fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x7c4300: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7C4300u;
    {
        const bool branch_taken_0x7c4300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4300u;
        // 0x7c4304: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4300) {
            ctx->pc = 0x7C433Cu;
            goto label_7c433c;
        }
    }
    ctx->pc = 0x7C4308u;
    // 0x7c4308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c4308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c430c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7C430Cu;
    {
        const bool branch_taken_0x7c430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C430Cu;
        // 0x7c4310: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c430c) {
            ctx->pc = 0x7C4348u;
            goto label_7c4348;
        }
    }
    ctx->pc = 0x7C4314u;
label_7c4314:
    // 0x7c4314: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x7c4314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x7c4318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c4318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c431c: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x7c431cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x7c4320: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C4320u;
    {
        const bool branch_taken_0x7c4320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4320u;
        // 0x7c4324: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4320) {
            ctx->pc = 0x7C4330u;
            goto label_7c4330;
        }
    }
    ctx->pc = 0x7C4328u;
    // 0x7c4328: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C4328u;
    {
        const bool branch_taken_0x7c4328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4328u;
        // 0x7c432c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4328) {
            ctx->pc = 0x7C433Cu;
            goto label_7c433c;
        }
    }
    ctx->pc = 0x7C4330u;
label_7c4330:
    // 0x7c4330: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7C4330u;
    {
        const bool branch_taken_0x7c4330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4330u;
        // 0x7c4334: 0xae1100f4  sw          $s1, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4330) {
            ctx->pc = 0x7C4348u;
            goto label_7c4348;
        }
    }
    ctx->pc = 0x7C4338u;
label_7c4338:
    // 0x7c4338: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7c4338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7c433c:
    // 0x7c433c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c433cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_7c4340:
    // 0x7c4340: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x7c4340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_7c4344:
    // 0x7c4344: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x7c4344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_7c4348:
    // 0x7c4348: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7c4348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7c434c:
    // 0x7c434c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7c434cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c4350: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7c4350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c4354: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7c4354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c4358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c4358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c435c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C435Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C435Cu;
        // 0x7c4360: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C435Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C4364u;
    // 0x7c4364: 0x0  nop
    ctx->pc = 0x7c4364u;
    // NOP
    ctx->pc = 0x7c4368u;
}
} // namespace gh_mcport
