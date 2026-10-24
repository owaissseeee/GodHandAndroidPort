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
// Function: fileCheck__7cMcSave
// Address: 0x7c4368 - 0x7c4750
void fileCheck__7cMcSave_0x7c4368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileCheck__7cMcSave_0x7c4368");
#endif

    switch (ctx->pc) {
        case 0x7c43c4u: goto label_7c43c4;
        case 0x7c43d8u: goto label_7c43d8;
        case 0x7c43e8u: goto label_7c43e8;
        case 0x7c43f8u: goto label_7c43f8;
        case 0x7c4418u: goto label_7c4418;
        case 0x7c4438u: goto label_7c4438;
        case 0x7c4480u: goto label_7c4480;
        case 0x7c4490u: goto label_7c4490;
        case 0x7c44f8u: goto label_7c44f8;
        case 0x7c459cu: goto label_7c459c;
        case 0x7c45b4u: goto label_7c45b4;
        case 0x7c4688u: goto label_7c4688;
        default: break;
    }

    ctx->pc = 0x7c4368u;

    // 0x7c4368: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7c4368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7c436c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x7c436cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x7c4370: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x7c4370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x7c4374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c4374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4378: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x7c4378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x7c437c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x7c437cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4380: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x7c4380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x7c4384: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x7c4384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x7c4388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c4388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c438c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x7c438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x7c4390: 0x8e3000f4  lw          $s0, 0xF4($s1)
    ctx->pc = 0x7c4390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c4394: 0x1214001b  beq         $s0, $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x7C4394u;
    {
        const bool branch_taken_0x7c4394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x7C4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4394u;
        // 0x7c4398: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4394) {
            ctx->pc = 0x7C4404u;
            goto label_7c4404;
        }
    }
    ctx->pc = 0x7C439Cu;
    // 0x7c439c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C439Cu;
    {
        const bool branch_taken_0x7c439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c439c) {
            ctx->pc = 0x7C43A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C439Cu;
            // 0x7c43a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C43B4u;
            goto label_7c43b4;
        }
    }
    ctx->pc = 0x7C43A4u;
    // 0x7c43a4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C43A4u;
    {
        const bool branch_taken_0x7c43a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C43A4u;
        // 0x7c43a8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c43a4) {
            ctx->pc = 0x7C43C4u;
            goto label_7c43c4;
        }
    }
    ctx->pc = 0x7C43ACu;
    // 0x7c43ac: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x7C43ACu;
    {
        const bool branch_taken_0x7c43ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C43ACu;
        // 0x7c43b0: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c43ac) {
            ctx->pc = 0x7C4734u;
            goto label_7c4734;
        }
    }
    ctx->pc = 0x7C43B4u;
label_7c43b4:
    // 0x7c43b4: 0x12020074  beq         $s0, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x7C43B4u;
    {
        const bool branch_taken_0x7c43b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C43B4u;
        // 0x7c43b8: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c43b4) {
            ctx->pc = 0x7C4588u;
            goto label_7c4588;
        }
    }
    ctx->pc = 0x7C43BCu;
    // 0x7c43bc: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x7C43BCu;
    {
        const bool branch_taken_0x7c43bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C43BCu;
        // 0x7c43c0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c43bc) {
            ctx->pc = 0x7C4730u;
            goto label_7c4730;
        }
    }
    ctx->pc = 0x7C43C4u;
label_7c43c4:
    // 0x7c43c4: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7c43c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7c43c8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x7c43c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7c43cc: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x7c43ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c43d0: 0xc1f0c7c  jal         func_7C31F0
    ctx->pc = 0x7C43D0u;
    SET_GPR_U32(ctx, 31, 0x7C43D8u);
    ctx->pc = 0x7C43D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C43D0u;
    // 0x7c43d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C31F0u, 0x7C43D0u, 0x7C43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C43D8u;
label_7c43d8:
    // 0x7c43d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c43d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c43dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c43dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c43e0: 0xc1f0d42  jal         func_7C3508
    ctx->pc = 0x7C43E0u;
    SET_GPR_U32(ctx, 31, 0x7C43E8u);
    ctx->pc = 0x7C43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C43E0u;
    // 0x7c43e4: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3508u, 0x7C43E0u, 0x7C43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C43E8u;
label_7c43e8:
    // 0x7c43e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c43e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c43ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c43f0: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C43F0u;
    SET_GPR_U32(ctx, 31, 0x7C43F8u);
    ctx->pc = 0x7C43F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C43F0u;
    // 0x7c43f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C43F0u, 0x7C43F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C43F8u;
label_7c43f8:
    // 0x7c43f8: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x7C43F8u;
    {
        const bool branch_taken_0x7c43f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C43F8u;
        // 0x7c43fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c43f8) {
            ctx->pc = 0x7C471Cu;
            goto label_7c471c;
        }
    }
    ctx->pc = 0x7C4400u;
    // 0x7c4400: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c4400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c4404:
    // 0x7c4404: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c4404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c4408: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c4408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c440c: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x7c440cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c4410: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C4410u;
    SET_GPR_U32(ctx, 31, 0x7C4418u);
    ctx->pc = 0x7C4414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4410u;
    // 0x7c4414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4410u, 0x7C4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4418u;
label_7c4418:
    // 0x7c4418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c4418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c441c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4420: 0x560200c3  bnel        $s0, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x7C4420u;
    {
        const bool branch_taken_0x7c4420 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c4420) {
            ctx->pc = 0x7C4424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4420u;
            // 0x7c4424: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4730u;
            goto label_7c4730;
        }
    }
    ctx->pc = 0x7C4428u;
    // 0x7c4428: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c4428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c442c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4430: 0xc1f1ba6  jal         func_7C6E98
    ctx->pc = 0x7C4430u;
    SET_GPR_U32(ctx, 31, 0x7C4438u);
    ctx->pc = 0x7C4434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4430u;
    // 0x7c4434: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6E98u, 0x7C4430u, 0x7C4438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4438u;
label_7c4438:
    // 0x7c4438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7c4438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c443c: 0x10930018  beq         $a0, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x7C443Cu;
    {
        const bool branch_taken_0x7c443c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x7C4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C443Cu;
        // 0x7c4440: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c443c) {
            ctx->pc = 0x7C44A0u;
            goto label_7c44a0;
        }
    }
    ctx->pc = 0x7C4444u;
    // 0x7c4444: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C4444u;
    {
        const bool branch_taken_0x7c4444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4444u;
        // 0x7c4448: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4444) {
            ctx->pc = 0x7C445Cu;
            goto label_7c445c;
        }
    }
    ctx->pc = 0x7C444Cu;
    // 0x7c444c: 0x10900007  beq         $a0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C444Cu;
    {
        const bool branch_taken_0x7c444c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C444Cu;
        // 0x7c4450: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c444c) {
            ctx->pc = 0x7C446Cu;
            goto label_7c446c;
        }
    }
    ctx->pc = 0x7C4454u;
    // 0x7c4454: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x7C4454u;
    {
        const bool branch_taken_0x7c4454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4454u;
        // 0x7c4458: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4454) {
            ctx->pc = 0x7C4724u;
            goto label_7c4724;
        }
    }
    ctx->pc = 0x7C445Cu;
label_7c445c:
    // 0x7c445c: 0x10820047  beq         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x7C445Cu;
    {
        const bool branch_taken_0x7c445c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C445Cu;
        // 0x7c4460: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c445c) {
            ctx->pc = 0x7C457Cu;
            goto label_7c457c;
        }
    }
    ctx->pc = 0x7C4464u;
    // 0x7c4464: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x7C4464u;
    {
        const bool branch_taken_0x7c4464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4464u;
        // 0x7c4468: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4464) {
            ctx->pc = 0x7C4724u;
            goto label_7c4724;
        }
    }
    ctx->pc = 0x7C446Cu;
label_7c446c:
    // 0x7c446c: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c446cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c4470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c4470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4474: 0x24a50bf0  addiu       $a1, $a1, 0xBF0
    ctx->pc = 0x7c4474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3056));
    // 0x7c4478: 0xc1f0d6a  jal         func_7C35A8
    ctx->pc = 0x7C4478u;
    SET_GPR_U32(ctx, 31, 0x7C4480u);
    ctx->pc = 0x7C447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4478u;
    // 0x7c447c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C35A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C35A8u, 0x7C4478u, 0x7C4480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4480u;
label_7c4480:
    // 0x7c4480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c4480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c4484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4488: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C4488u;
    SET_GPR_U32(ctx, 31, 0x7C4490u);
    ctx->pc = 0x7C448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4488u;
    // 0x7c448c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C4488u, 0x7C4490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4490u;
label_7c4490:
    // 0x7c4490: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x7C4490u;
    {
        const bool branch_taken_0x7c4490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4490u;
        // 0x7c4494: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4490) {
            ctx->pc = 0x7C4720u;
            goto label_7c4720;
        }
    }
    ctx->pc = 0x7C4498u;
    // 0x7c4498: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x7C4498u;
    {
        const bool branch_taken_0x7c4498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4498u;
        // 0x7c449c: 0xae3300f4  sw          $s3, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4498) {
            ctx->pc = 0x7C472Cu;
            goto label_7c472c;
        }
    }
    ctx->pc = 0x7C44A0u;
label_7c44a0:
    // 0x7c44a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7c44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7c44a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c44a8: 0x28430014  slti        $v1, $v0, 0x14
    ctx->pc = 0x7c44a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c44ac: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x7C44ACu;
    {
        const bool branch_taken_0x7c44ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C44ACu;
        // 0x7c44b0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c44ac) {
            ctx->pc = 0x7C43C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c43c4;
        }
    }
    ctx->pc = 0x7C44B4u;
    // 0x7c44b4: 0xae2400f0  sw          $a0, 0xF0($s1)
    ctx->pc = 0x7c44b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 4));
    // 0x7c44b8: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c44b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c44bc: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c44c0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x7c44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x7c44c4: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x7c44c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x7c44c8: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x7C44C8u;
    {
        const bool branch_taken_0x7c44c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C44C8u;
        // 0x7c44cc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c44c8) {
            ctx->pc = 0x7C472Cu;
            goto label_7c472c;
        }
    }
    ctx->pc = 0x7C44D0u;
    // 0x7c44d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c44d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c44d4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x7c44d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c44d8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C44D8u;
    {
        const bool branch_taken_0x7c44d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c44d8) {
            ctx->pc = 0x7C44DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C44D8u;
            // 0x7c44dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C44E0u;
            goto label_7c44e0;
        }
    }
    ctx->pc = 0x7C44E0u;
label_7c44e0:
    // 0x7c44e0: 0x2010  mfhi        $a0
    ctx->pc = 0x7c44e0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x7c44e4: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x7C44E4u;
    {
        const bool branch_taken_0x7c44e4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x7C44E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C44E4u;
        // 0x7c44e8: 0x64182a  slt         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c44e4) {
            ctx->pc = 0x7C4520u;
            goto label_7c4520;
        }
    }
    ctx->pc = 0x7C44ECu;
    // 0x7c44ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c44ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c44f0: 0x26230088  addiu       $v1, $s1, 0x88
    ctx->pc = 0x7c44f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c44f4: 0x0  nop
    ctx->pc = 0x7c44f4u;
    // NOP
label_7c44f8:
    // 0x7c44f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c44fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C44FCu;
    {
        const bool branch_taken_0x7c44fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C44FCu;
        // 0x7c4500: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c44fc) {
            ctx->pc = 0x7C4518u;
            goto label_7c4518;
        }
    }
    ctx->pc = 0x7C4504u;
    // 0x7c4504: 0x0  nop
    ctx->pc = 0x7c4504u;
    // NOP
    // 0x7c4508: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C4508u;
    {
        const bool branch_taken_0x7c4508 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4508u;
        // 0x7c450c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4508) {
            ctx->pc = 0x7C44F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c44f8;
        }
    }
    ctx->pc = 0x7C4510u;
    // 0x7c4510: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7C4510u;
    {
        const bool branch_taken_0x7c4510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4510u;
        // 0x7c4514: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4510) {
            ctx->pc = 0x7C4544u;
            goto label_7c4544;
        }
    }
    ctx->pc = 0x7C4518u;
label_7c4518:
    // 0x7c4518: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7C4518u;
    {
        const bool branch_taken_0x7c4518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4518u;
        // 0x7c451c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4518) {
            ctx->pc = 0x7C4544u;
            goto label_7c4544;
        }
    }
    ctx->pc = 0x7C4520u;
label_7c4520:
    // 0x7c4520: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x7c4520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c4524: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x7c4524u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x7c4528: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7c4528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7c452c: 0x902004  sllv        $a0, $s0, $a0
    ctx->pc = 0x7c452cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c4530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c4530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c4534: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x7c4534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x7c4538: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x7c4538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x7c453c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c453cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c4540: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x7c4540u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_7c4544:
    // 0x7c4544: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x7c4544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x7c4548: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x7C4548u;
    {
        const bool branch_taken_0x7c4548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4548u;
        // 0x7c454c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4548) {
            ctx->pc = 0x7C4730u;
            goto label_7c4730;
        }
    }
    ctx->pc = 0x7C4550u;
    // 0x7c4550: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7c4550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c4554: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x7c4554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x7c4558: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x7c4558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x7c455c: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x7c455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x7c4560: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c4560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4564: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x7c4564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7c4568: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x7c4568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E6910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E6910u, _value); } while (0);
    // 0x7c456c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x7c456cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E690Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E690Cu, _value); } while (0);
    // 0x7c4570: 0xae2400f0  sw          $a0, 0xF0($s1)
    ctx->pc = 0x7c4570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 4));
    // 0x7c4574: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x7C4574u;
    {
        const bool branch_taken_0x7c4574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4574u;
        // 0x7c4578: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4574) {
            ctx->pc = 0x7C4728u;
            goto label_7c4728;
        }
    }
    ctx->pc = 0x7C457Cu;
label_7c457c:
    // 0x7c457c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c457cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c4580: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x7C4580u;
    {
        const bool branch_taken_0x7c4580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4580u;
        // 0x7c4584: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4580) {
            ctx->pc = 0x7C4728u;
            goto label_7c4728;
        }
    }
    ctx->pc = 0x7C4588u;
label_7c4588:
    // 0x7c4588: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c4588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c458c: 0x24531740  addiu       $s3, $v0, 0x1740
    ctx->pc = 0x7c458cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c4590: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7c4590u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4594: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C4594u;
    SET_GPR_U32(ctx, 31, 0x7C459Cu);
    ctx->pc = 0x7C4598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4594u;
    // 0x7c4598: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4594u, 0x7C459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C459Cu;
label_7c459c:
    // 0x7c459c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7c459cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c45a0: 0x56540063  bnel        $s2, $s4, . + 4 + (0x63 << 2)
    ctx->pc = 0x7C45A0u;
    {
        const bool branch_taken_0x7c45a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x7c45a0) {
            ctx->pc = 0x7C45A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C45A0u;
            // 0x7c45a4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4730u;
            goto label_7c4730;
        }
    }
    ctx->pc = 0x7C45A8u;
    // 0x7c45a8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c45a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c45ac: 0xc1f1ba6  jal         func_7C6E98
    ctx->pc = 0x7C45ACu;
    SET_GPR_U32(ctx, 31, 0x7C45B4u);
    ctx->pc = 0x7C45B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C45ACu;
    // 0x7c45b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6E98u, 0x7C45ACu, 0x7C45B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C45B4u;
label_7c45b4:
    // 0x7c45b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7c45b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c45b8: 0x10d0001c  beq         $a2, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x7C45B8u;
    {
        const bool branch_taken_0x7c45b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C45B8u;
        // 0x7c45bc: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c45b8) {
            ctx->pc = 0x7C462Cu;
            goto label_7c462c;
        }
    }
    ctx->pc = 0x7C45C0u;
    // 0x7c45c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C45C0u;
    {
        const bool branch_taken_0x7c45c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C45C0u;
        // 0x7c45c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c45c0) {
            ctx->pc = 0x7C45D8u;
            goto label_7c45d8;
        }
    }
    ctx->pc = 0x7C45C8u;
    // 0x7c45c8: 0x10d20007  beq         $a2, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C45C8u;
    {
        const bool branch_taken_0x7c45c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C45C8u;
        // 0x7c45cc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c45c8) {
            ctx->pc = 0x7C45E8u;
            goto label_7c45e8;
        }
    }
    ctx->pc = 0x7C45D0u;
    // 0x7c45d0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x7C45D0u;
    {
        const bool branch_taken_0x7c45d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C45D0u;
        // 0x7c45d4: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c45d0) {
            ctx->pc = 0x7C4724u;
            goto label_7c4724;
        }
    }
    ctx->pc = 0x7C45D8u;
label_7c45d8:
    // 0x7c45d8: 0x10c2004d  beq         $a2, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x7C45D8u;
    {
        const bool branch_taken_0x7c45d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C45D8u;
        // 0x7c45dc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c45d8) {
            ctx->pc = 0x7C4710u;
            goto label_7c4710;
        }
    }
    ctx->pc = 0x7C45E0u;
    // 0x7c45e0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x7C45E0u;
    {
        const bool branch_taken_0x7c45e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C45E0u;
        // 0x7c45e4: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c45e0) {
            ctx->pc = 0x7C4724u;
            goto label_7c4724;
        }
    }
    ctx->pc = 0x7C45E8u;
label_7c45e8:
    // 0x7c45e8: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x7c45e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x7c45ec: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x7c45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x7c45f0: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7C45F0u;
    {
        const bool branch_taken_0x7c45f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c45f0) {
            ctx->pc = 0x7C45F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C45F0u;
            // 0x7c45f4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4630u;
            goto label_7c4630;
        }
    }
    ctx->pc = 0x7C45F8u;
    // 0x7c45f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x7c45f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7c45fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4600: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x7c4600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c4604: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x7c4604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x7c4608: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x7c4608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c460c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x7c460cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x7c4610: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7c4610u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7c4614: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x7c4614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c4618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c4618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c461c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7c461cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c4620: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7c4620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7c4624: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c4624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c4628: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x7c4628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_7c462c:
    // 0x7c462c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7c462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_7c4630:
    // 0x7c4630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c4630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c4634: 0x28430014  slti        $v1, $v0, 0x14
    ctx->pc = 0x7c4634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c4638: 0x1460ff62  bnez        $v1, . + 4 + (-0x9E << 2)
    ctx->pc = 0x7C4638u;
    {
        const bool branch_taken_0x7c4638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4638u;
        // 0x7c463c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4638) {
            ctx->pc = 0x7C43C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c43c4;
        }
    }
    ctx->pc = 0x7C4640u;
    // 0x7c4640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c4640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c4644: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c4644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c4648: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c4648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c464c: 0x26a31740  addiu       $v1, $s5, 0x1740
    ctx->pc = 0x7c464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 5952));
    // 0x7c4650: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c4650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c4654: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x7c4654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x7c4658: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x7c4658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x7c465c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x7C465Cu;
    {
        const bool branch_taken_0x7c465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C465Cu;
        // 0x7c4660: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c465c) {
            ctx->pc = 0x7C472Cu;
            goto label_7c472c;
        }
    }
    ctx->pc = 0x7C4664u;
    // 0x7c4664: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c4664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4668: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x7c4668u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c466c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C466Cu;
    {
        const bool branch_taken_0x7c466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c466c) {
            ctx->pc = 0x7C4670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C466Cu;
            // 0x7c4670: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4674u;
            goto label_7c4674;
        }
    }
    ctx->pc = 0x7C4674u;
label_7c4674:
    // 0x7c4674: 0x2810  mfhi        $a1
    ctx->pc = 0x7c4674u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x7c4678: 0x4a1000d  bgez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x7C4678u;
    {
        const bool branch_taken_0x7c4678 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x7C467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4678u;
        // 0x7c467c: 0x65102a  slt         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4678) {
            ctx->pc = 0x7C46B0u;
            goto label_7c46b0;
        }
    }
    ctx->pc = 0x7C4680u;
    // 0x7c4680: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c4680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4684: 0x26230088  addiu       $v1, $s1, 0x88
    ctx->pc = 0x7c4684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_7c4688:
    // 0x7c4688: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c4688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c468c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C468Cu;
    {
        const bool branch_taken_0x7c468c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C468Cu;
        // 0x7c4690: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c468c) {
            ctx->pc = 0x7C46A8u;
            goto label_7c46a8;
        }
    }
    ctx->pc = 0x7C4694u;
    // 0x7c4694: 0x0  nop
    ctx->pc = 0x7c4694u;
    // NOP
    // 0x7c4698: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C4698u;
    {
        const bool branch_taken_0x7c4698 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4698u;
        // 0x7c469c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4698) {
            ctx->pc = 0x7C4688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c4688;
        }
    }
    ctx->pc = 0x7C46A0u;
    // 0x7c46a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C46A0u;
    {
        const bool branch_taken_0x7c46a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C46A0u;
        // 0x7c46a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c46a0) {
            ctx->pc = 0x7C46D8u;
            goto label_7c46d8;
        }
    }
    ctx->pc = 0x7C46A8u;
label_7c46a8:
    // 0x7c46a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C46A8u;
    {
        const bool branch_taken_0x7c46a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C46A8u;
        // 0x7c46ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c46a8) {
            ctx->pc = 0x7C46D8u;
            goto label_7c46d8;
        }
    }
    ctx->pc = 0x7C46B0u;
label_7c46b0:
    // 0x7c46b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7c46b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c46b4: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x7c46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x7c46b8: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x7c46b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x7c46bc: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x7c46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x7c46c0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c46c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c46c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c46c8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x7c46c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x7c46cc: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x7c46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x7c46d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c46d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c46d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c46d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7c46d8:
    // 0x7c46d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7c46d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7c46dc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x7C46DCu;
    {
        const bool branch_taken_0x7c46dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C46DCu;
        // 0x7c46e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c46dc) {
            ctx->pc = 0x7C4730u;
            goto label_7c4730;
        }
    }
    ctx->pc = 0x7C46E4u;
    // 0x7c46e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7c46e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c46e8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x7c46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x7c46ec: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x7c46ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x7c46f0: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x7c46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x7c46f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c46f8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x7c46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7c46fc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x7c46fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E6910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E6910u, _value); } while (0);
    // 0x7c4700: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x7c4700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E690Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E690Cu, _value); } while (0);
    // 0x7c4704: 0xae2400f0  sw          $a0, 0xF0($s1)
    ctx->pc = 0x7c4704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 4));
    // 0x7c4708: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C4708u;
    {
        const bool branch_taken_0x7c4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4708u;
        // 0x7c470c: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4708) {
            ctx->pc = 0x7C4728u;
            goto label_7c4728;
        }
    }
    ctx->pc = 0x7C4710u;
label_7c4710:
    // 0x7c4710: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c4710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c4714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C4714u;
    {
        const bool branch_taken_0x7c4714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4714u;
        // 0x7c4718: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4714) {
            ctx->pc = 0x7C4728u;
            goto label_7c4728;
        }
    }
    ctx->pc = 0x7C471Cu;
label_7c471c:
    // 0x7c471c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7c471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7c4720:
    // 0x7c4720: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c4720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_7c4724:
    // 0x7c4724: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c4724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_7c4728:
    // 0x7c4728: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c4728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c472c:
    // 0x7c472c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x7c472cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7c4730:
    // 0x7c4730: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x7c4730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7c4734:
    // 0x7c4734: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x7c4734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c4738: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x7c4738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c473c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x7c473cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c4740: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x7c4740u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c4744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c4744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c4748: 0x3e00008  jr          $ra
    ctx->pc = 0x7C4748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4748u;
        // 0x7c474c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C4748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C4750u;
}
} // namespace gh_mcport
