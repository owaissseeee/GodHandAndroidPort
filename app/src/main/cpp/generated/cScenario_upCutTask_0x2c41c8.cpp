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

// Function: cScenario_upCutTask
// Address: 0x2c41c8 - 0x2c42e0
void cScenario_upCutTask_0x2c41c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_upCutTask_0x2c41c8");
#endif

    switch (ctx->pc) {
        case 0x2c41fcu: goto label_2c41fc;
        case 0x2c421cu: goto label_2c421c;
        case 0x2c424cu: goto label_2c424c;
        case 0x2c4274u: goto label_2c4274;
        case 0x2c42a0u: goto label_2c42a0;
        case 0x2c42a8u: goto label_2c42a8;
        case 0x2c42c4u: goto label_2c42c4;
        default: break;
    }

    ctx->pc = 0x2c41c8u;

    // 0x2c41c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c41c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c41cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c41d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c41d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c41d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c41d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2c41d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c41d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c41dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c41e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c41e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c41e4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x2c41e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2c41e8: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x2c41e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x2c41ec: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C41ECu;
    {
        const bool branch_taken_0x2c41ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41ECu;
        // 0x2c41f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41ec) {
            ctx->pc = 0x2C41FCu;
            goto label_2c41fc;
        }
    }
    ctx->pc = 0x2C41F4u;
    // 0x2c41f4: 0xc0b0fc4  jal         func_2C3F10
    ctx->pc = 0x2C41F4u;
    SET_GPR_U32(ctx, 31, 0x2C41FCu);
    ctx->pc = 0x2C41F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41F4u;
    // 0x2c41f8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F10u, 0x2C41F4u, 0x2C41FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C41FCu;
label_2c41fc:
    // 0x2c41fc: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x2c41fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x2c4200: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2c4200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c4204: 0x948200d8  lhu         $v0, 0xD8($a0)
    ctx->pc = 0x2c4204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2c4208: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4208u;
    {
        const bool branch_taken_0x2c4208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4208u;
        // 0x2c420c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4208) {
            ctx->pc = 0x2C421Cu;
            goto label_2c421c;
        }
    }
    ctx->pc = 0x2C4210u;
    // 0x2c4210: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2c4210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4214: 0xc0b10b8  jal         func_2C42E0
    ctx->pc = 0x2C4214u;
    SET_GPR_U32(ctx, 31, 0x2C421Cu);
    ctx->pc = 0x2C4218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4214u;
    // 0x2c4218: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C42E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C42E0u, 0x2C4214u, 0x2C421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C421Cu;
label_2c421c:
    // 0x2c421c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C421Cu;
    {
        const bool branch_taken_0x2c421c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C421Cu;
        // 0x2c4220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c421c) {
            ctx->pc = 0x2C4234u;
            goto label_2c4234;
        }
    }
    ctx->pc = 0x2C4224u;
    // 0x2c4224: 0x16050004  bne         $s0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4224u;
    {
        const bool branch_taken_0x2c4224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4224u;
        // 0x2c4228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4224) {
            ctx->pc = 0x2C4238u;
            goto label_2c4238;
        }
    }
    ctx->pc = 0x2C422Cu;
    // 0x2c422c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C422Cu;
    {
        const bool branch_taken_0x2c422c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C422Cu;
        // 0x2c4230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c422c) {
            ctx->pc = 0x2C4244u;
            goto label_2c4244;
        }
    }
    ctx->pc = 0x2C4234u;
label_2c4234:
    // 0x2c4234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4238:
    // 0x2c4238: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4238u;
    {
        const bool branch_taken_0x2c4238 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4238u;
        // 0x2c423c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4238) {
            ctx->pc = 0x2C4244u;
            goto label_2c4244;
        }
    }
    ctx->pc = 0x2C4240u;
    // 0x2c4240: 0x50280a  movz        $a1, $v0, $s0
    ctx->pc = 0x2c4240u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2c4244:
    // 0x2c4244: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x2C4244u;
    SET_GPR_U32(ctx, 31, 0x2C424Cu);
    ctx->pc = 0x2C4248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4244u;
    // 0x2c4248: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x2C4244u, 0x2C424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C424Cu;
label_2c424c:
    // 0x2c424c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4250: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C4250u;
    {
        const bool branch_taken_0x2c4250 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4250u;
        // 0x2c4254: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4250) {
            ctx->pc = 0x2C427Cu;
            goto label_2c427c;
        }
    }
    ctx->pc = 0x2C4258u;
    // 0x2c4258: 0x908200e5  lbu         $v0, 0xE5($a0)
    ctx->pc = 0x2c4258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 229)));
    // 0x2c425c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c4260: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c4260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4264: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C4264u;
    {
        const bool branch_taken_0x2c4264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4264) {
            ctx->pc = 0x2C42A0u;
            goto label_2c42a0;
        }
    }
    ctx->pc = 0x2C426Cu;
    // 0x2c426c: 0xc0b10f6  jal         func_2C43D8
    ctx->pc = 0x2C426Cu;
    SET_GPR_U32(ctx, 31, 0x2C4274u);
    ctx->pc = 0x2C43D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C43D8u, 0x2C426Cu, 0x2C4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4274u;
label_2c4274:
    // 0x2c4274: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C4274u;
    {
        const bool branch_taken_0x2c4274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4274) {
            ctx->pc = 0x2C42A0u;
            goto label_2c42a0;
        }
    }
    ctx->pc = 0x2C427Cu;
label_2c427c:
    // 0x2c427c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C427Cu;
    {
        const bool branch_taken_0x2c427c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c427c) {
            ctx->pc = 0x2C42A0u;
            goto label_2c42a0;
        }
    }
    ctx->pc = 0x2C4284u;
    // 0x2c4284: 0x908200e5  lbu         $v0, 0xE5($a0)
    ctx->pc = 0x2c4284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 229)));
    // 0x2c4288: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c4288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c428c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c428cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4290: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4290u;
    {
        const bool branch_taken_0x2c4290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4290) {
            ctx->pc = 0x2C42A0u;
            goto label_2c42a0;
        }
    }
    ctx->pc = 0x2C4298u;
    // 0x2c4298: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x2C4298u;
    SET_GPR_U32(ctx, 31, 0x2C42A0u);
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x2C4298u, 0x2C42A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42A0u;
label_2c42a0:
    // 0x2c42a0: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x2C42A0u;
    SET_GPR_U32(ctx, 31, 0x2C42A8u);
    ctx->pc = 0x2C42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C42A0u;
    // 0x2c42a4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x2C42A0u, 0x2C42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42A8u;
label_2c42a8:
    // 0x2c42a8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x2c42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x2c42ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c42acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c42b0: 0x908200e4  lbu         $v0, 0xE4($a0)
    ctx->pc = 0x2c42b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x2c42b4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C42B4u;
    {
        const bool branch_taken_0x2c42b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42B4u;
        // 0x2c42b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42b4) {
            ctx->pc = 0x2C42C8u;
            goto label_2c42c8;
        }
    }
    ctx->pc = 0x2C42BCu;
    // 0x2c42bc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x2C42BCu;
    SET_GPR_U32(ctx, 31, 0x2C42C4u);
    ctx->pc = 0x2C42C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C42BCu;
    // 0x2c42c0: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x2C42BCu, 0x2C42C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42C4u;
label_2c42c4:
    // 0x2c42c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c42c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c42c8:
    // 0x2c42c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c42c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c42cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c42ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c42d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c42d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c42d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C42D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42D4u;
        // 0x2c42d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C42D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C42DCu;
    // 0x2c42dc: 0x0  nop
    ctx->pc = 0x2c42dcu;
    // NOP
    ctx->pc = 0x2c42e0u;
}
