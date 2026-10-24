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

// Function: func_0011B900
// Address: 0x11b900 - 0x11baf8
void func_0011B900_0x11b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011B900_0x11b900");
#endif

    switch (ctx->pc) {
        case 0x11b938u: goto label_11b938;
        case 0x11b9b4u: goto label_11b9b4;
        case 0x11b9bcu: goto label_11b9bc;
        case 0x11b9ecu: goto label_11b9ec;
        case 0x11ba1cu: goto label_11ba1c;
        case 0x11ba28u: goto label_11ba28;
        case 0x11ba38u: goto label_11ba38;
        case 0x11ba40u: goto label_11ba40;
        case 0x11ba48u: goto label_11ba48;
        case 0x11ba50u: goto label_11ba50;
        case 0x11ba64u: goto label_11ba64;
        case 0x11ba9cu: goto label_11ba9c;
        case 0x11baa8u: goto label_11baa8;
        case 0x11bae0u: goto label_11bae0;
        default: break;
    }

    ctx->pc = 0x11b900u;

    // 0x11b900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b904: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11b904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11b908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b910: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x11b910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11b914: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x11b914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11b918: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B918u;
    {
        const bool branch_taken_0x11b918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B918u;
        // 0x11b91c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b918) {
            ctx->pc = 0x11B930u;
            goto label_11b930;
        }
    }
    ctx->pc = 0x11B920u;
    // 0x11b920: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x11B920u;
    {
        const bool branch_taken_0x11b920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b920) {
            ctx->pc = 0x11BA5Cu;
            goto label_11ba5c;
        }
    }
    ctx->pc = 0x11B928u;
    // 0x11b928: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x11B928u;
    {
        const bool branch_taken_0x11b928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B928u;
        // 0x11b92c: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b928) {
            ctx->pc = 0x11BAACu;
            goto label_11baac;
        }
    }
    ctx->pc = 0x11B930u;
label_11b930:
    // 0x11b930: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x11B930u;
    SET_GPR_U32(ctx, 31, 0x11B938u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x11B930u, 0x11B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B938u;
label_11b938:
    // 0x11b938: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x11b938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11b93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b940: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B940u;
    {
        const bool branch_taken_0x11b940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b940) {
            ctx->pc = 0x11B944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B940u;
            // 0x11b944: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B970u;
            goto label_11b970;
        }
    }
    ctx->pc = 0x11B948u;
    // 0x11b948: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B948u;
    {
        const bool branch_taken_0x11b948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B948u;
        // 0x11b94c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b948) {
            ctx->pc = 0x11B960u;
            goto label_11b960;
        }
    }
    ctx->pc = 0x11B950u;
    // 0x11b950: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11B950u;
    {
        const bool branch_taken_0x11b950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B950u;
        // 0x11b954: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b950) {
            ctx->pc = 0x11B97Cu;
            goto label_11b97c;
        }
    }
    ctx->pc = 0x11B958u;
    // 0x11b958: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11B958u;
    {
        const bool branch_taken_0x11b958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b958) {
            ctx->pc = 0x11B95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B958u;
            // 0x11b95c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B98Cu;
            goto label_11b98c;
        }
    }
    ctx->pc = 0x11B960u;
label_11b960:
    // 0x11b960: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11b964: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x11b964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x11b968: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11B968u;
    {
        const bool branch_taken_0x11b968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B968u;
        // 0x11b96c: 0x8c44014c  lw          $a0, 0x14C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b968) {
            ctx->pc = 0x11B994u;
            goto label_11b994;
        }
    }
    ctx->pc = 0x11B970u;
label_11b970:
    // 0x11b970: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x11b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x11b974: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11B974u;
    {
        const bool branch_taken_0x11b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B974u;
        // 0x11b978: 0x8c440154  lw          $a0, 0x154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b974) {
            ctx->pc = 0x11B994u;
            goto label_11b994;
        }
    }
    ctx->pc = 0x11B97Cu;
label_11b97c:
    // 0x11b97c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11b980: 0x8c4304ec  lw          $v1, 0x4EC($v0)
    ctx->pc = 0x11b980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1260)));
    // 0x11b984: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B984u;
    {
        const bool branch_taken_0x11b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B984u;
        // 0x11b988: 0x8c4404f0  lw          $a0, 0x4F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b984) {
            ctx->pc = 0x11B994u;
            goto label_11b994;
        }
    }
    ctx->pc = 0x11B98Cu;
label_11b98c:
    // 0x11b98c: 0x8c4304f4  lw          $v1, 0x4F4($v0)
    ctx->pc = 0x11b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1268)));
    // 0x11b990: 0x8c4404f8  lw          $a0, 0x4F8($v0)
    ctx->pc = 0x11b990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1272)));
label_11b994:
    // 0x11b994: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x11b994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b998: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x11b998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11b99c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11b99cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11b9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b9a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b9a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9ac: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11B9ACu;
    SET_GPR_U32(ctx, 31, 0x11B9B4u);
    ctx->pc = 0x11B9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9ACu;
    // 0x11b9b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11B9ACu, 0x11B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9B4u;
label_11b9b4:
    // 0x11b9b4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x11B9B4u;
    SET_GPR_U32(ctx, 31, 0x11B9BCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x11B9B4u, 0x11B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9BCu;
label_11b9bc:
    // 0x11b9bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11b9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11b9c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11B9C0u;
    {
        const bool branch_taken_0x11b9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9C0u;
        // 0x11b9c4: 0x240600cf  addiu       $a2, $zero, 0xCF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9c0) {
            ctx->pc = 0x11B9F4u;
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11B9C8u;
    // 0x11b9c8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11b9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9d0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11b9d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11b9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b9d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b9dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b9e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11B9E4u;
    SET_GPR_U32(ctx, 31, 0x11B9ECu);
    ctx->pc = 0x11B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9E4u;
    // 0x11b9e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11B9E4u, 0x11B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9ECu;
label_11b9ec:
    // 0x11b9ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11B9ECu;
    {
        const bool branch_taken_0x11b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9ECu;
        // 0x11b9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9ec) {
            ctx->pc = 0x11BA20u;
            goto label_11ba20;
        }
    }
    ctx->pc = 0x11B9F4u;
label_11b9f4:
    // 0x11b9f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11b9f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11ba00: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x11ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x11ba04: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11ba04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ba08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ba0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11ba10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba14: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11BA14u;
    SET_GPR_U32(ctx, 31, 0x11BA1Cu);
    ctx->pc = 0x11BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA14u;
    // 0x11ba18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11BA14u, 0x11BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA1Cu;
label_11ba1c:
    // 0x11ba1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ba20:
    // 0x11ba20: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11BA20u;
    SET_GPR_U32(ctx, 31, 0x11BA28u);
    ctx->pc = 0x11BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA20u;
    // 0x11ba24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11BA20u, 0x11BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA28u;
label_11ba28:
    // 0x11ba28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ba28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ba2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba30: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11BA30u;
    SET_GPR_U32(ctx, 31, 0x11BA38u);
    ctx->pc = 0x11BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA30u;
    // 0x11ba34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11BA30u, 0x11BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA38u;
label_11ba38:
    // 0x11ba38: 0xc0499dc  jal         func_126770
    ctx->pc = 0x11BA38u;
    SET_GPR_U32(ctx, 31, 0x11BA40u);
    ctx->pc = 0x11BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA38u;
    // 0x11ba3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x11BA38u, 0x11BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA40u;
label_11ba40:
    // 0x11ba40: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11BA40u;
    SET_GPR_U32(ctx, 31, 0x11BA48u);
    ctx->pc = 0x11BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA40u;
    // 0x11ba44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11BA40u, 0x11BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA48u;
label_11ba48:
    // 0x11ba48: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11BA48u;
    SET_GPR_U32(ctx, 31, 0x11BA50u);
    ctx->pc = 0x11BA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA48u;
    // 0x11ba4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11BA48u, 0x11BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA50u;
label_11ba50:
    // 0x11ba50: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11ba50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11ba54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11ba58: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11ba58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11ba5c:
    // 0x11ba5c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11BA5Cu;
    SET_GPR_U32(ctx, 31, 0x11BA64u);
    ctx->pc = 0x11BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA5Cu;
    // 0x11ba60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11BA5Cu, 0x11BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA64u;
label_11ba64:
    // 0x11ba64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BA64u;
    {
        const bool branch_taken_0x11ba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ba64) {
            ctx->pc = 0x11BA88u;
            goto label_11ba88;
        }
    }
    ctx->pc = 0x11BA6Cu;
    // 0x11ba6c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x11ba6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x11ba70: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11BA70u;
    {
        const bool branch_taken_0x11ba70 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA70u;
        // 0x11ba74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba70) {
            ctx->pc = 0x11BAC4u;
            goto label_11bac4;
        }
    }
    ctx->pc = 0x11BA78u;
    // 0x11ba78: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x11ba78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ba7c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11ba7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ba80: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x11ba80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ba84: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x11ba84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_11ba88:
    // 0x11ba88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ba88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ba8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11ba8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11ba90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ba90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba94: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11BA94u;
    SET_GPR_U32(ctx, 31, 0x11BA9Cu);
    ctx->pc = 0x11BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA94u;
    // 0x11ba98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11BA94u, 0x11BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA9Cu;
label_11ba9c:
    // 0x11ba9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11ba9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11baa0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11BAA0u;
    SET_GPR_U32(ctx, 31, 0x11BAA8u);
    ctx->pc = 0x11BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAA0u;
    // 0x11baa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11BAA0u, 0x11BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAA8u;
label_11baa8:
    // 0x11baa8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x11baa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_11baac:
    // 0x11baac: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11BAACu;
    {
        const bool branch_taken_0x11baac = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x11baac) {
            ctx->pc = 0x11BAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BAACu;
            // 0x11bab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BAD8u;
            goto label_11bad8;
        }
    }
    ctx->pc = 0x11BAB4u;
    // 0x11bab4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11bab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x11bab8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x11bab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x11babc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BABCu;
    {
        const bool branch_taken_0x11babc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BABCu;
        // 0x11bac0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11babc) {
            ctx->pc = 0x11BAE0u;
            goto label_11bae0;
        }
    }
    ctx->pc = 0x11BAC4u;
label_11bac4:
    // 0x11bac4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x11bac4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x11bac8: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x11bac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11bacc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11baccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11bad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BAD0u;
    {
        const bool branch_taken_0x11bad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAD0u;
        // 0x11bad4: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bad0) {
            ctx->pc = 0x11BAE0u;
            goto label_11bae0;
        }
    }
    ctx->pc = 0x11BAD8u;
label_11bad8:
    // 0x11bad8: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11BAD8u;
    SET_GPR_U32(ctx, 31, 0x11BAE0u);
    ctx->pc = 0x11BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAD8u;
    // 0x11badc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11BAD8u, 0x11BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAE0u;
label_11bae0:
    // 0x11bae0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11bae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bae8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x11bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11baec: 0x3e00008  jr          $ra
    ctx->pc = 0x11BAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAECu;
        // 0x11baf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BAF4u;
    // 0x11baf4: 0x0  nop
    ctx->pc = 0x11baf4u;
    // NOP
    ctx->pc = 0x11baf8u;
}
