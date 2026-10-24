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

// Function: func_0030B298
// Address: 0x30b298 - 0x30b420
void func_0030B298_0x30b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030B298_0x30b298");
#endif

    switch (ctx->pc) {
        case 0x30b2b4u: goto label_30b2b4;
        case 0x30b2c0u: goto label_30b2c0;
        case 0x30b2c8u: goto label_30b2c8;
        case 0x30b2d0u: goto label_30b2d0;
        case 0x30b2e0u: goto label_30b2e0;
        case 0x30b38cu: goto label_30b38c;
        case 0x30b394u: goto label_30b394;
        case 0x30b3bcu: goto label_30b3bc;
        case 0x30b3c4u: goto label_30b3c4;
        case 0x30b3d0u: goto label_30b3d0;
        case 0x30b3d8u: goto label_30b3d8;
        case 0x30b3ecu: goto label_30b3ec;
        case 0x30b408u: goto label_30b408;
        default: break;
    }

    ctx->pc = 0x30b298u;

    // 0x30b298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30b29c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30b29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30b2a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b2a4: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x30b2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x30b2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b2ac: 0xc0c3496  jal         func_30D258
    ctx->pc = 0x30B2ACu;
    SET_GPR_U32(ctx, 31, 0x30B2B4u);
    ctx->pc = 0x30B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2ACu;
    // 0x30b2b0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D258u, 0x30B2ACu, 0x30B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2B4u;
label_30b2b4:
    // 0x30b2b4: 0x261074a0  addiu       $s0, $s0, 0x74A0
    ctx->pc = 0x30b2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    // 0x30b2b8: 0xc0c3b3e  jal         func_30ECF8
    ctx->pc = 0x30B2B8u;
    SET_GPR_U32(ctx, 31, 0x30B2C0u);
    ctx->pc = 0x30B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2B8u;
    // 0x30b2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ECF8u, 0x30B2B8u, 0x30B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2C0u;
label_30b2c0:
    // 0x30b2c0: 0xc056c28  jal         func_15B0A0
    ctx->pc = 0x30B2C0u;
    SET_GPR_U32(ctx, 31, 0x30B2C8u);
    ctx->pc = 0x15B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0A0u, 0x30B2C0u, 0x30B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2C8u;
label_30b2c8:
    // 0x30b2c8: 0xc0c73ae  jal         func_31CEB8
    ctx->pc = 0x30B2C8u;
    SET_GPR_U32(ctx, 31, 0x30B2D0u);
    ctx->pc = 0x31CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEB8u, 0x30B2C8u, 0x30B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2D0u;
label_30b2d0:
    // 0x30b2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30b2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2d8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x30B2D8u;
    SET_GPR_U32(ctx, 31, 0x30B2E0u);
    ctx->pc = 0x30B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2D8u;
    // 0x30b2dc: 0x24060620  addiu       $a2, $zero, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x30B2D8u, 0x30B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2E0u;
label_30b2e0:
    // 0x30b2e0: 0x8e05059c  lw          $a1, 0x59C($s0)
    ctx->pc = 0x30b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1436)));
    // 0x30b2e4: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x30b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x30b2e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b2ec: 0x8e030598  lw          $v1, 0x598($s0)
    ctx->pc = 0x30b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    // 0x30b2f0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x30b2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x30b2f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b2f8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x30b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x30b2fc: 0xae04056c  sw          $a0, 0x56C($s0)
    ctx->pc = 0x30b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 4));
    // 0x30b300: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30b300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b304: 0xae000578  sw          $zero, 0x578($s0)
    ctx->pc = 0x30b304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1400), GPR_U32(ctx, 0));
    // 0x30b308: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B308u;
    {
        const bool branch_taken_0x30b308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B308u;
        // 0x30b30c: 0xae05059c  sw          $a1, 0x59C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b308) {
            ctx->pc = 0x30B320u;
            goto label_30b320;
        }
    }
    ctx->pc = 0x30B310u;
    // 0x30b310: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x30b310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x30b314: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x30b314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x30b318: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B318u;
    {
        const bool branch_taken_0x30b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b318) {
            ctx->pc = 0x30B31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B318u;
            // 0x30b31c: 0x8e020584  lw          $v0, 0x584($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B32Cu;
            goto label_30b32c;
        }
    }
    ctx->pc = 0x30B320u;
label_30b320:
    // 0x30b320: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x30b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30b324: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30B324u;
    {
        const bool branch_taken_0x30b324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B324u;
        // 0x30b328: 0xa60205b0  sh          $v0, 0x5B0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1456), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b324) {
            ctx->pc = 0x30B334u;
            goto label_30b334;
        }
    }
    ctx->pc = 0x30B32Cu;
label_30b32c:
    // 0x30b32c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x30b32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x30b330: 0xae020584  sw          $v0, 0x584($s0)
    ctx->pc = 0x30b330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 2));
label_30b334:
    // 0x30b334: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30b334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30b338: 0x24637a2c  addiu       $v1, $v1, 0x7A2C
    ctx->pc = 0x30b338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x30b33c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x30b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x30b340: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x30b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x30b344: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30B344u;
    {
        const bool branch_taken_0x30b344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B344u;
        // 0x30b348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b344) {
            ctx->pc = 0x30B350u;
            goto label_30b350;
        }
    }
    ctx->pc = 0x30B34Cu;
    // 0x30b34c: 0xac62ffe0  sw          $v0, -0x20($v1)
    ctx->pc = 0x30b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967264), GPR_U32(ctx, 2));
label_30b350:
    // 0x30b350: 0x2462fa74  addiu       $v0, $v1, -0x58C
    ctx->pc = 0x30b350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965876));
    // 0x30b354: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x30b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x30b358: 0xac40057c  sw          $zero, 0x57C($v0)
    ctx->pc = 0x30b358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1404), GPR_U32(ctx, 0));
    // 0x30b35c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x30b35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x30b360: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B360u;
    {
        const bool branch_taken_0x30b360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B360u;
        // 0x30b364: 0xac400580  sw          $zero, 0x580($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b360) {
            ctx->pc = 0x30B374u;
            goto label_30b374;
        }
    }
    ctx->pc = 0x30B368u;
    // 0x30b368: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30b368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30b36c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30B36Cu;
    {
        const bool branch_taken_0x30b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B36Cu;
        // 0x30b370: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b36c) {
            ctx->pc = 0x30B37Cu;
            goto label_30b37c;
        }
    }
    ctx->pc = 0x30B374u;
label_30b374:
    // 0x30b374: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30b374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30b378: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x30b378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_30b37c:
    // 0x30b37c: 0xac623ccc  sw          $v0, 0x3CCC($v1)
    ctx->pc = 0x30b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15564), GPR_U32(ctx, 2));
    // 0x30b380: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x30b380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x30b384: 0xc0af7fe  jal         func_2BDFF8
    ctx->pc = 0x30B384u;
    SET_GPR_U32(ctx, 31, 0x30B38Cu);
    ctx->pc = 0x30B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B384u;
    // 0x30b388: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDFF8u, 0x30B384u, 0x30B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B38Cu;
label_30b38c:
    // 0x30b38c: 0xc0c32cc  jal         func_30CB30
    ctx->pc = 0x30B38Cu;
    SET_GPR_U32(ctx, 31, 0x30B394u);
    ctx->pc = 0x30CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CB30u, 0x30B38Cu, 0x30B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B394u;
label_30b394:
    // 0x30b394: 0x262374a0  addiu       $v1, $s1, 0x74A0
    ctx->pc = 0x30b394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x30b398: 0x8c620578  lw          $v0, 0x578($v1)
    ctx->pc = 0x30b398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1400)));
    // 0x30b39c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30b39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30b3a0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x30B3A0u;
    {
        const bool branch_taken_0x30b3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b3a0) {
            ctx->pc = 0x30B3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B3A0u;
            // 0x30b3a4: 0x3c040031  lui         $a0, 0x31 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B3C8u;
            goto label_30b3c8;
        }
    }
    ctx->pc = 0x30B3A8u;
    // 0x30b3a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30b3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b3ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b3b0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x30b3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30b3b4: 0xc0e547e  jal         func_3951F8
    ctx->pc = 0x30B3B4u;
    SET_GPR_U32(ctx, 31, 0x30B3BCu);
    ctx->pc = 0x30B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B3B4u;
    // 0x30b3b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951F8u, 0x30B3B4u, 0x30B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B3BCu;
label_30b3bc:
    // 0x30b3bc: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x30B3BCu;
    SET_GPR_U32(ctx, 31, 0x30B3C4u);
    ctx->pc = 0x30B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B3BCu;
    // 0x30b3c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x30B3BCu, 0x30B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B3C4u;
label_30b3c4:
    // 0x30b3c4: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30b3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
label_30b3c8:
    // 0x30b3c8: 0xc0e57da  jal         func_395F68
    ctx->pc = 0x30B3C8u;
    SET_GPR_U32(ctx, 31, 0x30B3D0u);
    ctx->pc = 0x30B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B3C8u;
    // 0x30b3cc: 0x2484b148  addiu       $a0, $a0, -0x4EB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F68u, 0x30B3C8u, 0x30B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B3D0u;
label_30b3d0:
    // 0x30b3d0: 0xc0c347e  jal         func_30D1F8
    ctx->pc = 0x30B3D0u;
    SET_GPR_U32(ctx, 31, 0x30B3D8u);
    ctx->pc = 0x30D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D1F8u, 0x30B3D0u, 0x30B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B3D8u;
label_30b3d8:
    // 0x30b3d8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x30b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x30b3dc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x30b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x30b3e0: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x30b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x30b3e4: 0xc07fe16  jal         func_1FF858
    ctx->pc = 0x30B3E4u;
    SET_GPR_U32(ctx, 31, 0x30B3ECu);
    ctx->pc = 0x30B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B3E4u;
    // 0x30b3e8: 0x24a504d8  addiu       $a1, $a1, 0x4D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF858u, 0x30B3E4u, 0x30B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B3ECu;
label_30b3ec:
    // 0x30b3ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b3f0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x30b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x30b3f4: 0xa2030569  sb          $v1, 0x569($s0)
    ctx->pc = 0x30b3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 3));
    // 0x30b3f8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x30b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x30b3fc: 0xac402d3c  sw          $zero, 0x2D3C($v0)
    ctx->pc = 0x30b3fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x752D3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x752D3Cu, _value); } while (0);
    // 0x30b400: 0xc0af9ba  jal         func_2BE6E8
    ctx->pc = 0x30B400u;
    SET_GPR_U32(ctx, 31, 0x30B408u);
    ctx->pc = 0x30B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B400u;
    // 0x30b404: 0x24848640  addiu       $a0, $a0, -0x79C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE6E8u, 0x30B400u, 0x30B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B408u;
label_30b408:
    // 0x30b408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30b408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b40c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b414: 0x3e00008  jr          $ra
    ctx->pc = 0x30B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B414u;
        // 0x30b418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B41Cu;
    // 0x30b41c: 0x0  nop
    ctx->pc = 0x30b41cu;
    // NOP
    ctx->pc = 0x30b420u;
}
