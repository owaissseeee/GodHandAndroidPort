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

// Function: sinf
// Address: 0x3a19f8 - 0x3a1ae8
void sinf_0x3a19f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sinf_0x3a19f8");
#endif

    switch (ctx->pc) {
        case 0x3a1a30u: goto label_3a1a30;
        case 0x3a1a5cu: goto label_3a1a5c;
        case 0x3a1aa0u: goto label_3a1aa0;
        case 0x3a1ab4u: goto label_3a1ab4;
        case 0x3a1ac8u: goto label_3a1ac8;
        case 0x3a1ad8u: goto label_3a1ad8;
        default: break;
    }

    ctx->pc = 0x3a19f8u;

    // 0x3a19f8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a19f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a19fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a19fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a1a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a1a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1a04: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a1a08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a1a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a1a0c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x3a1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x3a1a10: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3a1a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a1a14: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x3a1a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x3a1a18: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a1a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a1a1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1A1Cu;
    {
        const bool branch_taken_0x3a1a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A1Cu;
        // 0x3a1a20: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a1c) {
            ctx->pc = 0x3A1A38u;
            goto label_3a1a38;
        }
    }
    ctx->pc = 0x3A1A24u;
    // 0x3a1a24: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3a1a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a1a28: 0xc0e91ca  jal         func_3A4728
    ctx->pc = 0x3A1A28u;
    SET_GPR_U32(ctx, 31, 0x3A1A30u);
    ctx->pc = 0x3A1A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A28u;
    // 0x3a1a2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4728u, 0x3A1A28u, 0x3A1A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1A30u;
label_3a1a30:
    // 0x3a1a30: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3A1A30u;
    {
        const bool branch_taken_0x3a1a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A30u;
        // 0x3a1a34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a30) {
            ctx->pc = 0x3A1AE0u;
            goto label_3a1ae0;
        }
    }
    ctx->pc = 0x3A1A38u;
label_3a1a38:
    // 0x3a1a38: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x3a1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x3a1a3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a1a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a1a40: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a1a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a1a44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1A44u;
    {
        const bool branch_taken_0x3a1a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1a44) {
            ctx->pc = 0x3A1A54u;
            goto label_3a1a54;
        }
    }
    ctx->pc = 0x3A1A4Cu;
    // 0x3a1a4c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3A1A4Cu;
    {
        const bool branch_taken_0x3a1a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A4Cu;
        // 0x3a1a50: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a4c) {
            ctx->pc = 0x3A1ADCu;
            goto label_3a1adc;
        }
    }
    ctx->pc = 0x3A1A54u;
label_3a1a54:
    // 0x3a1a54: 0xc0e8dda  jal         func_3A3768
    ctx->pc = 0x3A1A54u;
    SET_GPR_U32(ctx, 31, 0x3A1A5Cu);
    ctx->pc = 0x3A1A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A54u;
    // 0x3a1a58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3768u, 0x3A1A54u, 0x3A1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1A5Cu;
label_3a1a5c:
    // 0x3a1a5c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3a1a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3a1a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1a64: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A1A64u;
    {
        const bool branch_taken_0x3a1a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A64u;
        // 0x3a1a68: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a64) {
            ctx->pc = 0x3A1AA8u;
            goto label_3a1aa8;
        }
    }
    ctx->pc = 0x3A1A6Cu;
    // 0x3a1a6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1A6Cu;
    {
        const bool branch_taken_0x3a1a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A6Cu;
        // 0x3a1a70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a6c) {
            ctx->pc = 0x3A1A84u;
            goto label_3a1a84;
        }
    }
    ctx->pc = 0x3A1A74u;
    // 0x3a1a74: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A1A74u;
    {
        const bool branch_taken_0x3a1a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A74u;
        // 0x3a1a78: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a74) {
            ctx->pc = 0x3A1A94u;
            goto label_3a1a94;
        }
    }
    ctx->pc = 0x3A1A7Cu;
    // 0x3a1a7c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A1A7Cu;
    {
        const bool branch_taken_0x3a1a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1a7c) {
            ctx->pc = 0x3A1AD0u;
            goto label_3a1ad0;
        }
    }
    ctx->pc = 0x3A1A84u;
label_3a1a84:
    // 0x3a1a84: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A1A84u;
    {
        const bool branch_taken_0x3a1a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A84u;
        // 0x3a1a88: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a84) {
            ctx->pc = 0x3A1ABCu;
            goto label_3a1abc;
        }
    }
    ctx->pc = 0x3A1A8Cu;
    // 0x3a1a8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A1A8Cu;
    {
        const bool branch_taken_0x3a1a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1a8c) {
            ctx->pc = 0x3A1AD0u;
            goto label_3a1ad0;
        }
    }
    ctx->pc = 0x3A1A94u;
label_3a1a94:
    // 0x3a1a94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1a98: 0xc0e91ca  jal         func_3A4728
    ctx->pc = 0x3A1A98u;
    SET_GPR_U32(ctx, 31, 0x3A1AA0u);
    ctx->pc = 0x3A1A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A98u;
    // 0x3a1a9c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4728u, 0x3A1A98u, 0x3A1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1AA0u;
label_3a1aa0:
    // 0x3a1aa0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A1AA0u;
    {
        const bool branch_taken_0x3a1aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AA0u;
        // 0x3a1aa4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1aa0) {
            ctx->pc = 0x3A1AE0u;
            goto label_3a1ae0;
        }
    }
    ctx->pc = 0x3A1AA8u;
label_3a1aa8:
    // 0x3a1aa8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x3a1aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3a1aac: 0xc0e8f20  jal         func_3A3C80
    ctx->pc = 0x3A1AACu;
    SET_GPR_U32(ctx, 31, 0x3A1AB4u);
    ctx->pc = 0x3A1AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1AACu;
    // 0x3a1ab0: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3C80u, 0x3A1AACu, 0x3A1AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1AB4u;
label_3a1ab4:
    // 0x3a1ab4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A1AB4u;
    {
        const bool branch_taken_0x3a1ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AB4u;
        // 0x3a1ab8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ab4) {
            ctx->pc = 0x3A1AE0u;
            goto label_3a1ae0;
        }
    }
    ctx->pc = 0x3A1ABCu;
label_3a1abc:
    // 0x3a1abc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a1abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1ac0: 0xc0e91ca  jal         func_3A4728
    ctx->pc = 0x3A1AC0u;
    SET_GPR_U32(ctx, 31, 0x3A1AC8u);
    ctx->pc = 0x3A1AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1AC0u;
    // 0x3a1ac4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4728u, 0x3A1AC0u, 0x3A1AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1AC8u;
label_3a1ac8:
    // 0x3a1ac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1AC8u;
    {
        const bool branch_taken_0x3a1ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AC8u;
        // 0x3a1acc: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ac8) {
            ctx->pc = 0x3A1ADCu;
            goto label_3a1adc;
        }
    }
    ctx->pc = 0x3A1AD0u;
label_3a1ad0:
    // 0x3a1ad0: 0xc0e8f20  jal         func_3A3C80
    ctx->pc = 0x3A1AD0u;
    SET_GPR_U32(ctx, 31, 0x3A1AD8u);
    ctx->pc = 0x3A1AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1AD0u;
    // 0x3a1ad4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3C80u, 0x3A1AD0u, 0x3A1AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1AD8u;
label_3a1ad8:
    // 0x3a1ad8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a1ad8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3a1adc:
    // 0x3a1adc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a1adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1ae0:
    // 0x3a1ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AE0u;
        // 0x3a1ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1AE8u;
}
