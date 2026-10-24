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

// Function: func_002F4DC8
// Address: 0x2f4dc8 - 0x2f4eb8
void func_002F4DC8_0x2f4dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F4DC8_0x2f4dc8");
#endif

    switch (ctx->pc) {
        case 0x2f4e34u: goto label_2f4e34;
        case 0x2f4e54u: goto label_2f4e54;
        default: break;
    }

    ctx->pc = 0x2f4dc8u;

    // 0x2f4dc8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f4dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2f4dcc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2f4dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2f4dd0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2f4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2f4dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f4dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4dd8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f4ddc: 0x8e0302c0  lw          $v1, 0x2C0($s0)
    ctx->pc = 0x2f4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f4de0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F4DE0u;
    {
        const bool branch_taken_0x2f4de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DE0u;
        // 0x2f4de4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4de0) {
            ctx->pc = 0x2F4E80u;
            goto label_2f4e80;
        }
    }
    ctx->pc = 0x2F4DE8u;
    // 0x2f4de8: 0x920402bf  lbu         $a0, 0x2BF($s0)
    ctx->pc = 0x2f4de8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 703)));
    // 0x2f4dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4df0: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x2f4df0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x2f4df4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x2f4df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2f4df8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4DF8u;
    {
        const bool branch_taken_0x2f4df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DF8u;
        // 0x2f4dfc: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4df8) {
            ctx->pc = 0x2F4E08u;
            goto label_2f4e08;
        }
    }
    ctx->pc = 0x2F4E00u;
    // 0x2f4e00: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2f4e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f4e04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f4e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e08:
    // 0x2f4e08: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2f4e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f4e0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4E0Cu;
    {
        const bool branch_taken_0x2f4e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E0Cu;
        // 0x2f4e10: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e0c) {
            ctx->pc = 0x2F4E24u;
            goto label_2f4e24;
        }
    }
    ctx->pc = 0x2F4E14u;
    // 0x2f4e14: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x2f4e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x2f4e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4e1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4E1Cu;
    {
        const bool branch_taken_0x2f4e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E1Cu;
        // 0x2f4e20: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e1c) {
            ctx->pc = 0x2F4E28u;
            goto label_2f4e28;
        }
    }
    ctx->pc = 0x2F4E24u;
label_2f4e24:
    // 0x2f4e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e28:
    // 0x2f4e28: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2f4e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2f4e2c: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2F4E2Cu;
    SET_GPR_U32(ctx, 31, 0x2F4E34u);
    ctx->pc = 0x2F4E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E2Cu;
    // 0x2f4e30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2F4E2Cu, 0x2F4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E34u;
label_2f4e34:
    // 0x2f4e34: 0x260202d0  addiu       $v0, $s0, 0x2D0
    ctx->pc = 0x2f4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x2f4e38: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2f4e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f4e3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f4e3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4e40: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f4e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f4e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f4e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e4c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F4E4Cu;
    SET_GPR_U32(ctx, 31, 0x2F4E54u);
    ctx->pc = 0x2F4E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E4Cu;
    // 0x2f4e50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F4E4Cu, 0x2F4E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E54u;
label_2f4e54:
    // 0x2f4e54: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2f4e54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f4e58: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f4e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f4e5c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2f4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f4e60: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F4E60u;
    {
        const bool branch_taken_0x2f4e60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E60u;
        // 0x2f4e64: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e60) {
            ctx->pc = 0x2F4EA4u;
            goto label_2f4ea4;
        }
    }
    ctx->pc = 0x2F4E68u;
    // 0x2f4e68: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2f4e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f4e6c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2f4e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4e70: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2f4e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2f4e74: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2f4e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2f4e78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F4E78u;
    {
        const bool branch_taken_0x2f4e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E78u;
        // 0x2f4e7c: 0xe6220004  swc1        $f2, 0x4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e78) {
            ctx->pc = 0x2F4EA4u;
            goto label_2f4ea4;
        }
    }
    ctx->pc = 0x2F4E80u;
label_2f4e80:
    // 0x2f4e80: 0x260202d0  addiu       $v0, $s0, 0x2D0
    ctx->pc = 0x2f4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x2f4e84: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4E84u;
    {
        const bool branch_taken_0x2f4e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4e84) {
            ctx->pc = 0x2F4E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4E84u;
            // 0x2f4e88: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4EA8u;
            goto label_2f4ea8;
        }
    }
    ctx->pc = 0x2F4E8Cu;
    // 0x2f4e8c: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f4e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4e90: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2f4e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2f4e94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f4e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4e98: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2f4e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2f4e9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f4e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4ea0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2f4ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2f4ea4:
    // 0x2f4ea4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2f4ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f4ea8:
    // 0x2f4ea8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2f4ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f4eac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f4eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f4eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EB0u;
        // 0x2f4eb4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4EB8u;
}
