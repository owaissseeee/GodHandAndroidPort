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

// Function: func_002261C8
// Address: 0x2261c8 - 0x226450
void func_002261C8_0x2261c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002261C8_0x2261c8");
#endif

    switch (ctx->pc) {
        case 0x226204u: goto label_226204;
        case 0x226230u: goto label_226230;
        case 0x226254u: goto label_226254;
        case 0x226278u: goto label_226278;
        case 0x22628cu: goto label_22628c;
        case 0x2262d8u: goto label_2262d8;
        case 0x2262e4u: goto label_2262e4;
        case 0x22637cu: goto label_22637c;
        case 0x22639cu: goto label_22639c;
        case 0x2263c4u: goto label_2263c4;
        case 0x2263d4u: goto label_2263d4;
        case 0x2263e8u: goto label_2263e8;
        case 0x2263f4u: goto label_2263f4;
        case 0x2263fcu: goto label_2263fc;
        default: break;
    }

    ctx->pc = 0x2261c8u;

    // 0x2261c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2261c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2261cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2261ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2261d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2261d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2261d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2261d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2261d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2261d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2261dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2261e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2261e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2261e4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2261e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2261e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2261e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2261ec: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2261ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2261f0: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x2261f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x2261f4: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2261f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2261f8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2261f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2261fc: 0xc098a84  jal         func_262A10
    ctx->pc = 0x2261FCu;
    SET_GPR_U32(ctx, 31, 0x226204u);
    ctx->pc = 0x226200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261FCu;
    // 0x226200: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x2261FCu, 0x226204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226204u;
label_226204:
    // 0x226204: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x226204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x226208: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x226208u;
    {
        const bool branch_taken_0x226208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226208u;
        // 0x22620c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226208) {
            ctx->pc = 0x226220u;
            goto label_226220;
        }
    }
    ctx->pc = 0x226210u;
    // 0x226210: 0x50620056  beql        $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x226210u;
    {
        const bool branch_taken_0x226210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x226210) {
            ctx->pc = 0x226214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226210u;
            // 0x226214: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22636Cu;
            goto label_22636c;
        }
    }
    ctx->pc = 0x226218u;
    // 0x226218: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x226218u;
    {
        const bool branch_taken_0x226218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226218) {
            ctx->pc = 0x2263F4u;
            goto label_2263f4;
        }
    }
    ctx->pc = 0x226220u;
label_226220:
    // 0x226220: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x226220u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x226224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226228: 0xc09d91a  jal         func_276468
    ctx->pc = 0x226228u;
    SET_GPR_U32(ctx, 31, 0x226230u);
    ctx->pc = 0x22622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226228u;
    // 0x22622c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x226228u, 0x226230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226230u;
label_226230:
    // 0x226230: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x226230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226234: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x226234u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x226238: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x226238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22623c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x22623cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x226240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226244: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x226244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x226248: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x226248u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22624c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22624Cu;
    SET_GPR_U32(ctx, 31, 0x226254u);
    ctx->pc = 0x226250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22624Cu;
    // 0x226250: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22624Cu, 0x226254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226254u;
label_226254:
    // 0x226254: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x226254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x226258: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x226258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x22625c: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x22625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x226260: 0x8c431990  lw          $v1, 0x1990($v0)
    ctx->pc = 0x226260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6544)));
    // 0x226264: 0x8c451994  lw          $a1, 0x1994($v0)
    ctx->pc = 0x226264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6548)));
    // 0x226268: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x226268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22626c: 0xae2605f0  sw          $a2, 0x5F0($s1)
    ctx->pc = 0x22626cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 6));
    // 0x226270: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x226270u;
    SET_GPR_U32(ctx, 31, 0x226278u);
    ctx->pc = 0x226274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226270u;
    // 0x226274: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x226270u, 0x226278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226278u;
label_226278:
    // 0x226278: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x226278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22627c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22627Cu;
    {
        const bool branch_taken_0x22627c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22627c) {
            ctx->pc = 0x2262B8u;
            goto label_2262b8;
        }
    }
    ctx->pc = 0x226284u;
    // 0x226284: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x226284u;
    SET_GPR_U32(ctx, 31, 0x22628Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x226284u, 0x22628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22628Cu;
label_22628c:
    // 0x22628c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226290: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226290u;
    {
        const bool branch_taken_0x226290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226290u;
        // 0x226294: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226290) {
            ctx->pc = 0x2262A4u;
            goto label_2262a4;
        }
    }
    ctx->pc = 0x226298u;
    // 0x226298: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x226298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22629c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22629Cu;
    {
        const bool branch_taken_0x22629c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2262A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22629Cu;
        // 0x2262a0: 0x8c441998  lw          $a0, 0x1998($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22629c) {
            ctx->pc = 0x2262B0u;
            goto label_2262b0;
        }
    }
    ctx->pc = 0x2262A4u;
label_2262a4:
    // 0x2262a4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2262a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2262a8: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2262a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2262ac: 0x8c44199c  lw          $a0, 0x199C($v0)
    ctx->pc = 0x2262acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6556)));
label_2262b0:
    // 0x2262b0: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x2262b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x2262b4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2262b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2262b8:
    // 0x2262b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2262b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2262bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2262bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2262c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262c4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2262c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2262c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262cc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2262ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2262d0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2262D0u;
    SET_GPR_U32(ctx, 31, 0x2262D8u);
    ctx->pc = 0x2262D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2262D0u;
    // 0x2262d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2262D0u, 0x2262D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262D8u;
label_2262d8:
    // 0x2262d8: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x2262d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x2262dc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2262DCu;
    SET_GPR_U32(ctx, 31, 0x2262E4u);
    ctx->pc = 0x2262E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2262DCu;
    // 0x2262e0: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2262DCu, 0x2262E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262E4u;
label_2262e4:
    // 0x2262e4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2262e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2262e8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2262e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2262ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2262ECu;
    {
        const bool branch_taken_0x2262ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2262F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262ECu;
        // 0x2262f0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262ec) {
            ctx->pc = 0x22630Cu;
            goto label_22630c;
        }
    }
    ctx->pc = 0x2262F4u;
    // 0x2262f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2262f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2262f8: 0x24428590  addiu       $v0, $v0, -0x7A70
    ctx->pc = 0x2262f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935952));
    // 0x2262fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2262fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226300: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x226300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226304: 0x800008  jr          $a0
    ctx->pc = 0x226304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22630Cu: goto label_22630c;
            case 0x226328u: goto label_226328;
            case 0x226344u: goto label_226344;
            case 0x226354u: goto label_226354;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226304u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22630Cu;
label_22630c:
    // 0x22630c: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x22630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x226314: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x226314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x226318: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x226318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22631c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22631cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226320: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x226320u;
    {
        const bool branch_taken_0x226320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226320u;
        // 0x226324: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226320) {
            ctx->pc = 0x22634Cu;
            goto label_22634c;
        }
    }
    ctx->pc = 0x226328u;
label_226328:
    // 0x226328: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x226328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22632c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22632cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x226330: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x226330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x226334: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x226334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x226338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22633c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22633Cu;
    {
        const bool branch_taken_0x22633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22633Cu;
        // 0x226340: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22633c) {
            ctx->pc = 0x22634Cu;
            goto label_22634c;
        }
    }
    ctx->pc = 0x226344u;
label_226344:
    // 0x226344: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x226344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226348: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22634c:
    // 0x22634c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22634cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x226350: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x226350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_226354:
    // 0x226354: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x226354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x226358: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x226358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x22635c: 0xae2305f4  sw          $v1, 0x5F4($s1)
    ctx->pc = 0x22635cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 3));
    // 0x226360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x226364: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x226364u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x226368: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x226368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_22636c:
    // 0x22636c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22636Cu;
    {
        const bool branch_taken_0x22636c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22636Cu;
        // 0x226370: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22636c) {
            ctx->pc = 0x22639Cu;
            goto label_22639c;
        }
    }
    ctx->pc = 0x226374u;
    // 0x226374: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x226374u;
    SET_GPR_U32(ctx, 31, 0x22637Cu);
    ctx->pc = 0x226378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226374u;
    // 0x226378: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x226374u, 0x22637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22637Cu;
label_22637c:
    // 0x22637c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226384: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x226384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x226388: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x226388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22638c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22638cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226390: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x226390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x226394: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x226394u;
    SET_GPR_U32(ctx, 31, 0x22639Cu);
    ctx->pc = 0x226398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226394u;
    // 0x226398: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x226394u, 0x22639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22639Cu;
label_22639c:
    // 0x22639c: 0x8e2405f4  lw          $a0, 0x5F4($s1)
    ctx->pc = 0x22639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x2263a0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2263A0u;
    {
        const bool branch_taken_0x2263a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2263A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263A0u;
        // 0x2263a4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263a0) {
            ctx->pc = 0x2263BCu;
            goto label_2263bc;
        }
    }
    ctx->pc = 0x2263A8u;
    // 0x2263a8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2263a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2263ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2263acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2263b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2263b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2263b4: 0xae2405f4  sw          $a0, 0x5F4($s1)
    ctx->pc = 0x2263b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 4));
    // 0x2263b8: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x2263b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_2263bc:
    // 0x2263bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2263BCu;
    SET_GPR_U32(ctx, 31, 0x2263C4u);
    ctx->pc = 0x2263C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263BCu;
    // 0x2263c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2263BCu, 0x2263C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263C4u;
label_2263c4:
    // 0x2263c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2263C4u;
    {
        const bool branch_taken_0x2263c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2263c4) {
            ctx->pc = 0x2263D4u;
            goto label_2263d4;
        }
    }
    ctx->pc = 0x2263CCu;
    // 0x2263cc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2263CCu;
    SET_GPR_U32(ctx, 31, 0x2263D4u);
    ctx->pc = 0x2263D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263CCu;
    // 0x2263d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2263CCu, 0x2263D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263D4u;
label_2263d4:
    // 0x2263d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2263d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2263d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2263d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2263dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2263dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263e0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2263E0u;
    SET_GPR_U32(ctx, 31, 0x2263E8u);
    ctx->pc = 0x2263E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263E0u;
    // 0x2263e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2263E0u, 0x2263E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263E8u;
label_2263e8:
    // 0x2263e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2263e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2263ec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2263ECu;
    SET_GPR_U32(ctx, 31, 0x2263F4u);
    ctx->pc = 0x2263F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263ECu;
    // 0x2263f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2263ECu, 0x2263F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263F4u;
label_2263f4:
    // 0x2263f4: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x2263F4u;
    SET_GPR_U32(ctx, 31, 0x2263FCu);
    ctx->pc = 0x2263F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263F4u;
    // 0x2263f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x2263F4u, 0x2263FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263FCu;
label_2263fc:
    // 0x2263fc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2263fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x226400: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x226400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x226404: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x226404u;
    {
        const bool branch_taken_0x226404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226404u;
        // 0x226408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226404) {
            ctx->pc = 0x226410u;
            goto label_226410;
        }
    }
    ctx->pc = 0x22640Cu;
    // 0x22640c: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x22640cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_226410:
    // 0x226410: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x226410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x226414: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226414u;
    {
        const bool branch_taken_0x226414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226414u;
        // 0x226418: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226414) {
            ctx->pc = 0x226430u;
            goto label_226430;
        }
    }
    ctx->pc = 0x22641Cu;
    // 0x22641c: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x22641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x226420: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x226420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x226424: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x226424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x226428: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x226428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22642c: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x22642cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_226430:
    // 0x226430: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x226430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226434: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x226434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226438: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x226438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22643c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22643cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226444: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x226444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x226448: 0x3e00008  jr          $ra
    ctx->pc = 0x226448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226448u;
        // 0x22644c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226450u;
}
