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

// Function: func_003A6308
// Address: 0x3a6308 - 0x3a6420
void func_003A6308_0x3a6308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A6308_0x3a6308");
#endif

    switch (ctx->pc) {
        case 0x3a6348u: goto label_3a6348;
        case 0x3a6388u: goto label_3a6388;
        case 0x3a6398u: goto label_3a6398;
        case 0x3a63b0u: goto label_3a63b0;
        case 0x3a63d8u: goto label_3a63d8;
        default: break;
    }

    ctx->pc = 0x3a6308u;

    // 0x3a6308: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a6308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3a630c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3a630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3a6310: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3a6310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3a6314: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3a6314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6318: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a6318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3a631c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3a631cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6320: 0x2d49818  mult        $s3, $s6, $s4
    ctx->pc = 0x3a6320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x3a6324: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3a6324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3a6328: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3a6328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3a632c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3a632cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6330: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3a6330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3a6334: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3a6334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3a6338: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A6338u;
    {
        const bool branch_taken_0x3a6338 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6338u;
        // 0x3a633c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6338) {
            ctx->pc = 0x3A6360u;
            goto label_3a6360;
        }
    }
    ctx->pc = 0x3A6340u;
    // 0x3a6340: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3A6340u;
    {
        const bool branch_taken_0x3a6340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6340u;
        // 0x3a6344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6340) {
            ctx->pc = 0x3A63F4u;
            goto label_3a63f4;
        }
    }
    ctx->pc = 0x3A6348u;
label_3a6348:
    // 0x3a6348: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A6348u;
    {
        const bool branch_taken_0x3a6348 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6348) {
            ctx->pc = 0x3A634Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6348u;
            // 0x3a634c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6350u;
            goto label_3a6350;
        }
    }
    ctx->pc = 0x3A6350u;
label_3a6350:
    // 0x3a6350: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x3a6350u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3a6354: 0x1012  mflo        $v0
    ctx->pc = 0x3a6354u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3a6358: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3A6358u;
    {
        const bool branch_taken_0x3a6358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6358u;
        // 0x3a635c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6358) {
            ctx->pc = 0x3A63F8u;
            goto label_3a63f8;
        }
    }
    ctx->pc = 0x3A6360u;
label_3a6360:
    // 0x3a6360: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a6360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a6364: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A6364u;
    {
        const bool branch_taken_0x3a6364 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a6364) {
            ctx->pc = 0x3A6368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6364u;
            // 0x3a6368: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A636Cu;
            goto label_3a636c;
        }
    }
    ctx->pc = 0x3A636Cu;
label_3a636c:
    // 0x3a636c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3a636cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a6370: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a6370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6374: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3a6374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3a6378: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A6378u;
    {
        const bool branch_taken_0x3a6378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6378u;
        // 0x3a637c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6378) {
            ctx->pc = 0x3A63C8u;
            goto label_3a63c8;
        }
    }
    ctx->pc = 0x3A6380u;
    // 0x3a6380: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3a6380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a6384: 0x0  nop
    ctx->pc = 0x3a6384u;
    // NOP
label_3a6388:
    // 0x3a6388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a638c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a638cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6390: 0xc0e98b6  jal         func_3A62D8
    ctx->pc = 0x3A6390u;
    SET_GPR_U32(ctx, 31, 0x3A6398u);
    ctx->pc = 0x3A6394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6390u;
    // 0x3a6394: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A62D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A62D8u, 0x3A6390u, 0x3A6398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6398u;
label_3a6398:
    // 0x3a6398: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x3a6398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3a639c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a63a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a63a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a63a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3a63a8: 0xc0e9aaa  jal         func_3A6AA8
    ctx->pc = 0x3A63A8u;
    SET_GPR_U32(ctx, 31, 0x3A63B0u);
    ctx->pc = 0x3A63ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A63A8u;
    // 0x3a63ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A63A8u, 0x3A63B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63B0u;
label_3a63b0:
    // 0x3a63b0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3A63B0u;
    {
        const bool branch_taken_0x3a63b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63B0u;
        // 0x3a63b4: 0x2b31023  subu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63b0) {
            ctx->pc = 0x3A6348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6348;
        }
    }
    ctx->pc = 0x3A63B8u;
    // 0x3a63b8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3a63b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a63bc: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3a63bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3a63c0: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x3A63C0u;
    {
        const bool branch_taken_0x3a63c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a63c0) {
            ctx->pc = 0x3A63C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A63C0u;
            // 0x3a63c4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6388;
        }
    }
    ctx->pc = 0x3A63C8u;
label_3a63c8:
    // 0x3a63c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3a63c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a63cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a63ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a63d0: 0xc0e98b6  jal         func_3A62D8
    ctx->pc = 0x3A63D0u;
    SET_GPR_U32(ctx, 31, 0x3A63D8u);
    ctx->pc = 0x3A63D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A63D0u;
    // 0x3a63d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A62D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A62D8u, 0x3A63D0u, 0x3A63D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63D8u;
label_3a63d8:
    // 0x3a63d8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3a63d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a63dc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3a63dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a63e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a63e4: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x3a63e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x3a63e8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3a63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3a63ec: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x3a63ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x3a63f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3a63f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3a63f4:
    // 0x3a63f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3a63f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a63f8:
    // 0x3a63f8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3a63f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a63fc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3a63fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a6400: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a6400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a6404: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3a6404u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a6408: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3a6408u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a640c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3a640cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6414: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6414u;
        // 0x3a6418: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A641Cu;
    // 0x3a641c: 0x0  nop
    ctx->pc = 0x3a641cu;
    // NOP
    ctx->pc = 0x3a6420u;
}
