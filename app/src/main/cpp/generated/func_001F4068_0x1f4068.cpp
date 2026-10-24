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

// Function: func_001F4068
// Address: 0x1f4068 - 0x1f4248
void func_001F4068_0x1f4068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F4068_0x1f4068");
#endif

    switch (ctx->pc) {
        case 0x1f40b0u: goto label_1f40b0;
        case 0x1f40c0u: goto label_1f40c0;
        case 0x1f40d8u: goto label_1f40d8;
        case 0x1f40ecu: goto label_1f40ec;
        case 0x1f4100u: goto label_1f4100;
        case 0x1f4114u: goto label_1f4114;
        case 0x1f4128u: goto label_1f4128;
        case 0x1f413cu: goto label_1f413c;
        case 0x1f4148u: goto label_1f4148;
        case 0x1f4164u: goto label_1f4164;
        case 0x1f4174u: goto label_1f4174;
        case 0x1f418cu: goto label_1f418c;
        case 0x1f41a0u: goto label_1f41a0;
        case 0x1f41b4u: goto label_1f41b4;
        case 0x1f41c8u: goto label_1f41c8;
        case 0x1f41dcu: goto label_1f41dc;
        case 0x1f41f0u: goto label_1f41f0;
        case 0x1f41fcu: goto label_1f41fc;
        case 0x1f4218u: goto label_1f4218;
        case 0x1f4228u: goto label_1f4228;
        default: break;
    }

    ctx->pc = 0x1f4068u;

    // 0x1f4068: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f4068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f406c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f4070: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f4070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f4074: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x1f4074u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f4078: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f4078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f407c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f407cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4080: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f4080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f4084: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f4084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4088: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f4088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f408c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f408cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4090: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x1f4090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f4094: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1F4094u;
    {
        const bool branch_taken_0x1f4094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4094u;
        // 0x1f4098: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4094) {
            ctx->pc = 0x1F4228u;
            goto label_1f4228;
        }
    }
    ctx->pc = 0x1F409Cu;
    // 0x1f409c: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x1f409cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f40a0: 0x26120060  addiu       $s2, $s0, 0x60
    ctx->pc = 0x1f40a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1f40a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f40a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40a8: 0xc07d310  jal         func_1F4C40
    ctx->pc = 0x1F40A8u;
    SET_GPR_U32(ctx, 31, 0x1F40B0u);
    ctx->pc = 0x1F40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F40A8u;
    // 0x1f40ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C40u, 0x1F40A8u, 0x1F40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40B0u;
label_1f40b0:
    // 0x1f40b0: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x1f40b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f40b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f40b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40b8: 0xc07d14c  jal         func_1F4530
    ctx->pc = 0x1F40B8u;
    SET_GPR_U32(ctx, 31, 0x1F40C0u);
    ctx->pc = 0x1F40BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F40B8u;
    // 0x1f40bc: 0x96260004  lhu         $a2, 0x4($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4530u, 0x1F40B8u, 0x1F40C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40C0u;
label_1f40c0:
    // 0x1f40c0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F40C0u;
    {
        const bool branch_taken_0x1f40c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40C0u;
        // 0x1f40c4: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f40c0) {
            ctx->pc = 0x1F417Cu;
            goto label_1f417c;
        }
    }
    ctx->pc = 0x1F40C8u;
    // 0x1f40c8: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x1f40c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f40cc: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1f40ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1f40d0: 0xc07f134  jal         func_1FC4D0
    ctx->pc = 0x1F40D0u;
    SET_GPR_U32(ctx, 31, 0x1F40D8u);
    ctx->pc = 0x1F40D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F40D0u;
    // 0x1f40d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC4D0u, 0x1F40D0u, 0x1F40D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40D8u;
label_1f40d8:
    // 0x1f40d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f40d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f40dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f40e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40e4: 0xc07d2e6  jal         func_1F4B98
    ctx->pc = 0x1F40E4u;
    SET_GPR_U32(ctx, 31, 0x1F40ECu);
    ctx->pc = 0x1F40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F40E4u;
    // 0x1f40e8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B98u, 0x1F40E4u, 0x1F40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40ECu;
label_1f40ec:
    // 0x1f40ec: 0x86260008  lh          $a2, 0x8($s1)
    ctx->pc = 0x1f40ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f40f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f40f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f40f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40f8: 0xc07d32a  jal         func_1F4CA8
    ctx->pc = 0x1F40F8u;
    SET_GPR_U32(ctx, 31, 0x1F4100u);
    ctx->pc = 0x1F40FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F40F8u;
    // 0x1f40fc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CA8u, 0x1F40F8u, 0x1F4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4100u;
label_1f4100:
    // 0x1f4100: 0x8626000a  lh          $a2, 0xA($s1)
    ctx->pc = 0x1f4100u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1f4104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4108: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f410c: 0xc07d3fc  jal         func_1F4FF0
    ctx->pc = 0x1F410Cu;
    SET_GPR_U32(ctx, 31, 0x1F4114u);
    ctx->pc = 0x1F4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F410Cu;
    // 0x1f4110: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF0u, 0x1F410Cu, 0x1F4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4114u;
label_1f4114:
    // 0x1f4114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4118: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f411c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f411cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4120: 0xc07d426  jal         func_1F5098
    ctx->pc = 0x1F4120u;
    SET_GPR_U32(ctx, 31, 0x1F4128u);
    ctx->pc = 0x1F4124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4120u;
    // 0x1f4124: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5098u, 0x1F4120u, 0x1F4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4128u;
label_1f4128:
    // 0x1f4128: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1f4128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f412c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f412cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4130: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4134: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x1F4134u;
    SET_GPR_U32(ctx, 31, 0x1F413Cu);
    ctx->pc = 0x1F4138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4134u;
    // 0x1f4138: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x1F4134u, 0x1F413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F413Cu;
label_1f413c:
    // 0x1f413c: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x1f413cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4140: 0xc07f134  jal         func_1FC4D0
    ctx->pc = 0x1F4140u;
    SET_GPR_U32(ctx, 31, 0x1F4148u);
    ctx->pc = 0x1F4144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4140u;
    // 0x1f4144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC4D0u, 0x1F4140u, 0x1F4148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4148u;
label_1f4148:
    // 0x1f4148: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4148u;
    {
        const bool branch_taken_0x1f4148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4148u;
        // 0x1f414c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4148) {
            ctx->pc = 0x1F4154u;
            goto label_1f4154;
        }
    }
    ctx->pc = 0x1F4150u;
    // 0x1f4150: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1f4150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f4154:
    // 0x1f4154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4158: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f415c: 0xc07d484  jal         func_1F5210
    ctx->pc = 0x1F415Cu;
    SET_GPR_U32(ctx, 31, 0x1F4164u);
    ctx->pc = 0x1F4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F415Cu;
    // 0x1f4160: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5210u, 0x1F415Cu, 0x1F4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4164u;
label_1f4164:
    // 0x1f4164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4168: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f416c: 0xc07d49e  jal         func_1F5278
    ctx->pc = 0x1F416Cu;
    SET_GPR_U32(ctx, 31, 0x1F4174u);
    ctx->pc = 0x1F4170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F416Cu;
    // 0x1f4170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5278u, 0x1F416Cu, 0x1F4174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4174u;
label_1f4174:
    // 0x1f4174: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1F4174u;
    {
        const bool branch_taken_0x1f4174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4174u;
        // 0x1f4178: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4174) {
            ctx->pc = 0x1F422Cu;
            goto label_1f422c;
        }
    }
    ctx->pc = 0x1F417Cu;
label_1f417c:
    // 0x1f417c: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x1f417cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4180: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1f4180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1f4184: 0xc07f134  jal         func_1FC4D0
    ctx->pc = 0x1F4184u;
    SET_GPR_U32(ctx, 31, 0x1F418Cu);
    ctx->pc = 0x1F4188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4184u;
    // 0x1f4188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC4D0u, 0x1F4184u, 0x1F418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F418Cu;
label_1f418c:
    // 0x1f418c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f418cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4194: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4198: 0xc07d2e6  jal         func_1F4B98
    ctx->pc = 0x1F4198u;
    SET_GPR_U32(ctx, 31, 0x1F41A0u);
    ctx->pc = 0x1F419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4198u;
    // 0x1f419c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B98u, 0x1F4198u, 0x1F41A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41A0u;
label_1f41a0:
    // 0x1f41a0: 0x86260008  lh          $a2, 0x8($s1)
    ctx->pc = 0x1f41a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f41a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f41a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f41a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41ac: 0xc07d32a  jal         func_1F4CA8
    ctx->pc = 0x1F41ACu;
    SET_GPR_U32(ctx, 31, 0x1F41B4u);
    ctx->pc = 0x1F41B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41ACu;
    // 0x1f41b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CA8u, 0x1F41ACu, 0x1F41B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41B4u;
label_1f41b4:
    // 0x1f41b4: 0x8626000a  lh          $a2, 0xA($s1)
    ctx->pc = 0x1f41b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1f41b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f41b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f41bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41c0: 0xc07d3fc  jal         func_1F4FF0
    ctx->pc = 0x1F41C0u;
    SET_GPR_U32(ctx, 31, 0x1F41C8u);
    ctx->pc = 0x1F41C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41C0u;
    // 0x1f41c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF0u, 0x1F41C0u, 0x1F41C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41C8u;
label_1f41c8:
    // 0x1f41c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f41c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f41ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f41d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41d4: 0xc07d426  jal         func_1F5098
    ctx->pc = 0x1F41D4u;
    SET_GPR_U32(ctx, 31, 0x1F41DCu);
    ctx->pc = 0x1F41D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41D4u;
    // 0x1f41d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5098u, 0x1F41D4u, 0x1F41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41DCu;
label_1f41dc:
    // 0x1f41dc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1f41dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f41e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f41e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f41e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41e8: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x1F41E8u;
    SET_GPR_U32(ctx, 31, 0x1F41F0u);
    ctx->pc = 0x1F41ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41E8u;
    // 0x1f41ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x1F41E8u, 0x1F41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41F0u;
label_1f41f0:
    // 0x1f41f0: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x1f41f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f41f4: 0xc07f134  jal         func_1FC4D0
    ctx->pc = 0x1F41F4u;
    SET_GPR_U32(ctx, 31, 0x1F41FCu);
    ctx->pc = 0x1F41F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41F4u;
    // 0x1f41f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC4D0u, 0x1F41F4u, 0x1F41FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41FCu;
label_1f41fc:
    // 0x1f41fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F41FCu;
    {
        const bool branch_taken_0x1f41fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41FCu;
        // 0x1f4200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41fc) {
            ctx->pc = 0x1F4208u;
            goto label_1f4208;
        }
    }
    ctx->pc = 0x1F4204u;
    // 0x1f4204: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1f4204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f4208:
    // 0x1f4208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f420c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f420cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4210: 0xc07d484  jal         func_1F5210
    ctx->pc = 0x1F4210u;
    SET_GPR_U32(ctx, 31, 0x1F4218u);
    ctx->pc = 0x1F4214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4210u;
    // 0x1f4214: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5210u, 0x1F4210u, 0x1F4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4218u;
label_1f4218:
    // 0x1f4218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f421c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f421cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4220: 0xc07d49e  jal         func_1F5278
    ctx->pc = 0x1F4220u;
    SET_GPR_U32(ctx, 31, 0x1F4228u);
    ctx->pc = 0x1F4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4220u;
    // 0x1f4224: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5278u, 0x1F4220u, 0x1F4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4228u;
label_1f4228:
    // 0x1f4228: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f4228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f422c:
    // 0x1f422c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f422cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f4230: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f4230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4234: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f4234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4238: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f4238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f423c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f423cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4240: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4240u;
        // 0x1f4244: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4248u;
}
