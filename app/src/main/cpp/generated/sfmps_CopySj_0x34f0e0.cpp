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

// Function: sfmps_CopySj
// Address: 0x34f0e0 - 0x34f188
void sfmps_CopySj_0x34f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmps_CopySj_0x34f0e0");
#endif

    switch (ctx->pc) {
        case 0x34f0e0u: goto label_34f0e0;
        case 0x34f0e4u: goto label_34f0e4;
        case 0x34f0e8u: goto label_34f0e8;
        case 0x34f0ecu: goto label_34f0ec;
        case 0x34f0f0u: goto label_34f0f0;
        case 0x34f0f4u: goto label_34f0f4;
        case 0x34f0f8u: goto label_34f0f8;
        case 0x34f0fcu: goto label_34f0fc;
        case 0x34f100u: goto label_34f100;
        case 0x34f104u: goto label_34f104;
        case 0x34f108u: goto label_34f108;
        case 0x34f10cu: goto label_34f10c;
        case 0x34f110u: goto label_34f110;
        case 0x34f114u: goto label_34f114;
        case 0x34f118u: goto label_34f118;
        case 0x34f11cu: goto label_34f11c;
        case 0x34f120u: goto label_34f120;
        case 0x34f124u: goto label_34f124;
        case 0x34f128u: goto label_34f128;
        case 0x34f12cu: goto label_34f12c;
        case 0x34f130u: goto label_34f130;
        case 0x34f134u: goto label_34f134;
        case 0x34f138u: goto label_34f138;
        case 0x34f13cu: goto label_34f13c;
        case 0x34f140u: goto label_34f140;
        case 0x34f144u: goto label_34f144;
        case 0x34f148u: goto label_34f148;
        case 0x34f14cu: goto label_34f14c;
        case 0x34f150u: goto label_34f150;
        case 0x34f154u: goto label_34f154;
        case 0x34f158u: goto label_34f158;
        case 0x34f15cu: goto label_34f15c;
        case 0x34f160u: goto label_34f160;
        case 0x34f164u: goto label_34f164;
        case 0x34f168u: goto label_34f168;
        case 0x34f16cu: goto label_34f16c;
        case 0x34f170u: goto label_34f170;
        case 0x34f174u: goto label_34f174;
        case 0x34f178u: goto label_34f178;
        case 0x34f17cu: goto label_34f17c;
        case 0x34f180u: goto label_34f180;
        case 0x34f184u: goto label_34f184;
        default: break;
    }

    ctx->pc = 0x34f0e0u;

label_34f0e0:
    // 0x34f0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34f0e4:
    // 0x34f0e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34f0e8:
    // 0x34f0e8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34f0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34f0ec:
    // 0x34f0ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_34f0f0:
    // 0x34f0f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34f0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34f0f4:
    // 0x34f0f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_34f0f8:
    // 0x34f0f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34f0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34f0fc:
    // 0x34f0fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34f100:
    // 0x34f100: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x34f100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_34f104:
    // 0x34f104: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x34f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_34f108:
    // 0x34f108: 0x40f809  jalr        $v0
label_34f10c:
    if (ctx->pc == 0x34F10Cu) {
        ctx->pc = 0x34F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F108u;
        // 0x34f10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F110u;
        goto label_34f110;
    }
    ctx->pc = 0x34F108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F110u);
        ctx->pc = 0x34F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F108u;
        // 0x34f10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F108u, 0x34F110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F110u;
label_34f110:
    // 0x34f110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34f110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34f114:
    // 0x34f114: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x34f114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_34f118:
    // 0x34f118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f11c:
    // 0x34f11c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34f11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34f120:
    // 0x34f120: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_34f124:
    if (ctx->pc == 0x34F124u) {
        ctx->pc = 0x34F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F120u;
        // 0x34f124: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F128u;
        goto label_34f128;
    }
    ctx->pc = 0x34F120u;
    {
        const bool branch_taken_0x34f120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F120u;
        // 0x34f124: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f120) {
            ctx->pc = 0x34F170u;
            goto label_34f170;
        }
    }
    ctx->pc = 0x34F128u;
label_34f128:
    // 0x34f128: 0xc0d3c62  jal         func_34F188
label_34f12c:
    if (ctx->pc == 0x34F12Cu) {
        ctx->pc = 0x34F130u;
        goto label_34f130;
    }
    ctx->pc = 0x34F128u;
    SET_GPR_U32(ctx, 31, 0x34F130u);
    ctx->pc = 0x34F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F188u, 0x34F128u, 0x34F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F130u;
label_34f130:
    // 0x34f130: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34f130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34f134:
    // 0x34f134: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_34f138:
    if (ctx->pc == 0x34F138u) {
        ctx->pc = 0x34F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F134u;
        // 0x34f138: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F13Cu;
        goto label_34f13c;
    }
    ctx->pc = 0x34F134u;
    {
        const bool branch_taken_0x34f134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F134u;
        // 0x34f138: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f134) {
            ctx->pc = 0x34F170u;
            goto label_34f170;
        }
    }
    ctx->pc = 0x34F13Cu;
label_34f13c:
    // 0x34f13c: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
label_34f140:
    if (ctx->pc == 0x34F140u) {
        ctx->pc = 0x34F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F13Cu;
        // 0x34f140: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F144u;
        goto label_34f144;
    }
    ctx->pc = 0x34F13Cu;
    {
        const bool branch_taken_0x34f13c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x34F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F13Cu;
        // 0x34f140: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f13c) {
            ctx->pc = 0x34F16Cu;
            goto label_34f16c;
        }
    }
    ctx->pc = 0x34F144u;
label_34f144:
    // 0x34f144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34f144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34f148:
    // 0x34f148: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34f148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34f14c:
    // 0x34f14c: 0xc0d3c62  jal         func_34F188
label_34f150:
    if (ctx->pc == 0x34F150u) {
        ctx->pc = 0x34F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F14Cu;
        // 0x34f150: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F154u;
        goto label_34f154;
    }
    ctx->pc = 0x34F14Cu;
    SET_GPR_U32(ctx, 31, 0x34F154u);
    ctx->pc = 0x34F150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F14Cu;
    // 0x34f150: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F188u, 0x34F14Cu, 0x34F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F154u;
label_34f154:
    // 0x34f154: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34f154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_34f158:
    // 0x34f158: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
label_34f15c:
    if (ctx->pc == 0x34F15Cu) {
        ctx->pc = 0x34F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F158u;
        // 0x34f15c: 0x2463e2e8  addiu       $v1, $v1, -0x1D18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F160u;
        goto label_34f160;
    }
    ctx->pc = 0x34F158u;
    {
        const bool branch_taken_0x34f158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x34F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F158u;
        // 0x34f15c: 0x2463e2e8  addiu       $v1, $v1, -0x1D18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f158) {
            ctx->pc = 0x34F16Cu;
            goto label_34f16c;
        }
    }
    ctx->pc = 0x34F160u;
label_34f160:
    // 0x34f160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34f164:
    // 0x34f164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34f168:
    // 0x34f168: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34f168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34f16c:
    // 0x34f16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f170:
    // 0x34f170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34f174:
    // 0x34f174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34f174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34f178:
    // 0x34f178: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34f178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34f17c:
    // 0x34f17c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34f17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34f180:
    // 0x34f180: 0x3e00008  jr          $ra
label_34f184:
    if (ctx->pc == 0x34F184u) {
        ctx->pc = 0x34F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F180u;
        // 0x34f184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F188u;
        goto label_fallthrough_0x34f180;
    }
    ctx->pc = 0x34F180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F180u;
        // 0x34f184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f180:
    ctx->pc = 0x34F188u;
}
