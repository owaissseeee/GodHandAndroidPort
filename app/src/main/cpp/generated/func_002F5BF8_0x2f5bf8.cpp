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

// Function: func_002F5BF8
// Address: 0x2f5bf8 - 0x2f6178
void func_002F5BF8_0x2f5bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F5BF8_0x2f5bf8");
#endif

    switch (ctx->pc) {
        case 0x2f5c30u: goto label_2f5c30;
        case 0x2f5c50u: goto label_2f5c50;
        case 0x2f5cccu: goto label_2f5ccc;
        case 0x2f5cdcu: goto label_2f5cdc;
        case 0x2f5d04u: goto label_2f5d04;
        case 0x2f5d28u: goto label_2f5d28;
        case 0x2f5d48u: goto label_2f5d48;
        case 0x2f5dacu: goto label_2f5dac;
        case 0x2f5dbcu: goto label_2f5dbc;
        case 0x2f5dd8u: goto label_2f5dd8;
        case 0x2f5e14u: goto label_2f5e14;
        case 0x2f5e68u: goto label_2f5e68;
        case 0x2f5eb4u: goto label_2f5eb4;
        case 0x2f5ff4u: goto label_2f5ff4;
        case 0x2f6058u: goto label_2f6058;
        case 0x2f60e4u: goto label_2f60e4;
        case 0x2f6124u: goto label_2f6124;
        default: break;
    }

    ctx->pc = 0x2f5bf8u;

    // 0x2f5bf8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2f5bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2f5bfc: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2f5bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2f5c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f5c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c04: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2f5c04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2f5c08: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2f5c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2f5c0c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2f5c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2f5c10: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2f5c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2f5c14: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2f5c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x2f5c18: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2f5c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x2f5c1c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2f5c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x2f5c20: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2f5c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f5c24: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x2f5c24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2f5c28: 0xc0bb0c4  jal         func_2EC310
    ctx->pc = 0x2F5C28u;
    SET_GPR_U32(ctx, 31, 0x2F5C30u);
    ctx->pc = 0x2F5C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C28u;
    // 0x2f5c2c: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC310u, 0x2F5C28u, 0x2F5C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C30u;
label_2f5c30:
    // 0x2f5c30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5c34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f5c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f5c38: 0xc6200330  lwc1        $f0, 0x330($s1)
    ctx->pc = 0x2f5c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5c3c: 0xc6210320  lwc1        $f1, 0x320($s1)
    ctx->pc = 0x2f5c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5c40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5c44: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f5c44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2f5c48: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F5C48u;
    SET_GPR_U32(ctx, 31, 0x2F5C50u);
    ctx->pc = 0x2F5C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C48u;
    // 0x2f5c4c: 0xe6200330  swc1        $f0, 0x330($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F5C48u, 0x2F5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C50u;
label_2f5c50:
    // 0x2f5c50: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x2f5c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x2f5c54: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2f5c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f5c58: 0xc6200324  lwc1        $f0, 0x324($s1)
    ctx->pc = 0x2f5c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5c5c: 0xc6210328  lwc1        $f1, 0x328($s1)
    ctx->pc = 0x2f5c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5c60: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2f5c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f5c64: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2f5c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f5c68: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2f5c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2f5c6c: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2f5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2f5c70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f5c74: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2f5c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2f5c78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5C78u;
    {
        const bool branch_taken_0x2f5c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C78u;
        // 0x2f5c7c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c78) {
            ctx->pc = 0x2F5C94u;
            goto label_2f5c94;
        }
    }
    ctx->pc = 0x2F5C80u;
    // 0x2f5c80: 0x9222011d  lbu         $v0, 0x11D($s1)
    ctx->pc = 0x2f5c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 285)));
    // 0x2f5c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f5c88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5C88u;
    {
        const bool branch_taken_0x2f5c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C88u;
        // 0x2f5c8c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c88) {
            ctx->pc = 0x2F5CACu;
            goto label_2f5cac;
        }
    }
    ctx->pc = 0x2F5C90u;
    // 0x2f5c90: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2f5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2f5c94:
    // 0x2f5c94: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2f5c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2f5c98: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2f5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2f5c9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2f5c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2f5ca0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F5CA0u;
    {
        const bool branch_taken_0x2f5ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CA0u;
        // 0x2f5ca4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ca0) {
            ctx->pc = 0x2F5CD0u;
            goto label_2f5cd0;
        }
    }
    ctx->pc = 0x2F5CA8u;
    // 0x2f5ca8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2f5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2f5cac:
    // 0x2f5cac: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2f5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2f5cb0: 0xc4401dc0  lwc1        $f0, 0x1DC0($v0)
    ctx->pc = 0x2f5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5cb4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2f5cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f5cb8: 0xc46c7a14  lwc1        $f12, 0x7A14($v1)
    ctx->pc = 0x2f5cb8u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f5cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cc4: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2F5CC4u;
    SET_GPR_U32(ctx, 31, 0x2F5CCCu);
    ctx->pc = 0x2F5CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CC4u;
    // 0x2f5cc8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2F5CC4u, 0x2F5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5CCCu;
label_2f5ccc:
    // 0x2f5ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5cd0:
    // 0x2f5cd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f5cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cd4: 0xc051dca  jal         func_147728
    ctx->pc = 0x2F5CD4u;
    SET_GPR_U32(ctx, 31, 0x2F5CDCu);
    ctx->pc = 0x2F5CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CD4u;
    // 0x2f5cd8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x2F5CD4u, 0x2F5CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5CDCu;
label_2f5cdc:
    // 0x2f5cdc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2f5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2f5ce0: 0x8c62b6f0  lw          $v0, -0x4910($v1)
    ctx->pc = 0x2f5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61B6F0u));
    // 0x2f5ce4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5CE4u;
    {
        const bool branch_taken_0x2f5ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CE4u;
        // 0x2f5ce8: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ce4) {
            ctx->pc = 0x2F5CF8u;
            goto label_2f5cf8;
        }
    }
    ctx->pc = 0x2F5CECu;
    // 0x2f5cec: 0xfa40b6e0  sqc2        $vf0, -0x4920($s2)
    ctx->pc = 0x2f5cecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 4294948576), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f5cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5cf4: 0xac62b6f0  sw          $v0, -0x4910($v1)
    ctx->pc = 0x2f5cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948592), GPR_U32(ctx, 2));
label_2f5cf8:
    // 0x2f5cf8: 0xc62c0330  lwc1        $f12, 0x330($s1)
    ctx->pc = 0x2f5cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f5cfc: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2F5CFCu;
    SET_GPR_U32(ctx, 31, 0x2F5D04u);
    ctx->pc = 0x2F5D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CFCu;
    // 0x2f5d00: 0x2650b6e0  addiu       $s0, $s2, -0x4920 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2F5CFCu, 0x2F5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D04u;
label_2f5d04:
    // 0x2f5d04: 0xc621031c  lwc1        $f1, 0x31C($s1)
    ctx->pc = 0x2f5d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5d08: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2f5d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x2f5d0c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2f5d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2f5d10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f5d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f5d14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5d18: 0xe641b6e0  swc1        $f1, -0x4920($s2)
    ctx->pc = 0x2f5d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294948576), bits); }
    // 0x2f5d1c: 0xc62c0330  lwc1        $f12, 0x330($s1)
    ctx->pc = 0x2f5d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f5d20: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2F5D20u;
    SET_GPR_U32(ctx, 31, 0x2F5D28u);
    ctx->pc = 0x2F5D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D20u;
    // 0x2f5d24: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2F5D20u, 0x2F5D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D28u;
label_2f5d28:
    // 0x2f5d28: 0xc621031c  lwc1        $f1, 0x31C($s1)
    ctx->pc = 0x2f5d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d30: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f5d34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f5d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5d38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5d3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f5d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d40: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F5D40u;
    SET_GPR_U32(ctx, 31, 0x2F5D48u);
    ctx->pc = 0x2F5D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D40u;
    // 0x2f5d44: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F5D40u, 0x2F5D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D48u;
label_2f5d48:
    // 0x2f5d48: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x2f5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x2f5d4c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f5d4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5d50: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f5d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5d54: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2f5d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2f5d58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f5d5c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2f5d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2f5d60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5D60u;
    {
        const bool branch_taken_0x2f5d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D60u;
        // 0x2f5d64: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d60) {
            ctx->pc = 0x2F5D7Cu;
            goto label_2f5d7c;
        }
    }
    ctx->pc = 0x2F5D68u;
    // 0x2f5d68: 0x9222011d  lbu         $v0, 0x11D($s1)
    ctx->pc = 0x2f5d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 285)));
    // 0x2f5d6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f5d70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5D70u;
    {
        const bool branch_taken_0x2f5d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D70u;
        // 0x2f5d74: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d70) {
            ctx->pc = 0x2F5D90u;
            goto label_2f5d90;
        }
    }
    ctx->pc = 0x2F5D78u;
    // 0x2f5d78: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2f5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2f5d7c:
    // 0x2f5d7c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2f5d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2f5d80: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2f5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2f5d84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2f5d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2f5d88: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5D88u;
    {
        const bool branch_taken_0x2f5d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D88u;
        // 0x2f5d8c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d88) {
            ctx->pc = 0x2F5DACu;
            goto label_2f5dac;
        }
    }
    ctx->pc = 0x2F5D90u;
label_2f5d90:
    // 0x2f5d90: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2f5d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2f5d94: 0xc4401dc0  lwc1        $f0, 0x1DC0($v0)
    ctx->pc = 0x2f5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5d98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f5d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f5d9c: 0xc46c7a14  lwc1        $f12, 0x7A14($v1)
    ctx->pc = 0x2f5d9cu;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f5da0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f5da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5da4: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2F5DA4u;
    SET_GPR_U32(ctx, 31, 0x2F5DACu);
    ctx->pc = 0x2F5DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DA4u;
    // 0x2f5da8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2F5DA4u, 0x2F5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DACu;
label_2f5dac:
    // 0x2f5dac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f5dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f5db0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f5db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5db4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F5DB4u;
    SET_GPR_U32(ctx, 31, 0x2F5DBCu);
    ctx->pc = 0x2F5DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DB4u;
    // 0x2f5db8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F5DB4u, 0x2F5DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DBCu;
label_2f5dbc:
    // 0x2f5dbc: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2f5dbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2f5dc0: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x2f5dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f5dc4: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F5DC4u;
    {
        const bool branch_taken_0x2f5dc4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2F5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DC4u;
        // 0x2f5dc8: 0x27b40060  addiu       $s4, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dc4) {
            ctx->pc = 0x2F5E3Cu;
            goto label_2f5e3c;
        }
    }
    ctx->pc = 0x2F5DCCu;
    // 0x2f5dcc: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2f5dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5dd0: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x2f5dd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5dd4: 0x8e2302bc  lw          $v1, 0x2BC($s1)
    ctx->pc = 0x2f5dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_2f5dd8:
    // 0x2f5dd8: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x2f5dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2f5ddc: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x2f5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2f5de0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f5de0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5de4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2f5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2f5de8: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2f5de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f5dec: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f5decu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5df0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2f5df0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5df4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f5df4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5df8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f5df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5dfc: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2f5dfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f5e00: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f5e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5e04: 0xc62c0314  lwc1        $f12, 0x314($s1)
    ctx->pc = 0x2f5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f5e08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e0c: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2F5E0Cu;
    SET_GPR_U32(ctx, 31, 0x2F5E14u);
    ctx->pc = 0x2F5E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E0Cu;
    // 0x2f5e10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2F5E0Cu, 0x2F5E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E14u;
label_2f5e14:
    // 0x2f5e14: 0x8e2202f0  lw          $v0, 0x2F0($s1)
    ctx->pc = 0x2f5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x2f5e18: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2f5e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f5e1c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2f5e1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5e20: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2f5e20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f5e24: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f5e24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5e28: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2f5e28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5e2c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2f5e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2f5e30: 0x5e40ffe9  bgtzl       $s2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2F5E30u;
    {
        const bool branch_taken_0x2f5e30 = (GPR_S64(ctx, 18) > 0);
        if (branch_taken_0x2f5e30) {
            ctx->pc = 0x2F5E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E30u;
            // 0x2f5e34: 0x8e2302bc  lw          $v1, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5dd8;
        }
    }
    ctx->pc = 0x2F5E38u;
    // 0x2f5e38: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2f5e38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
label_2f5e3c:
    // 0x2f5e3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f5e40: 0x18400078  blez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x2F5E40u;
    {
        const bool branch_taken_0x2f5e40 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2F5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E40u;
        // 0x2f5e44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e40) {
            ctx->pc = 0x2F6024u;
            goto label_2f6024;
        }
    }
    ctx->pc = 0x2F5E48u;
    // 0x2f5e48: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f5e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f5e4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f5e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f5e50: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2f5e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2f5e54: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x2f5e54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5e58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f5e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f5e5c: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x2f5e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2f5e60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f5e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e64: 0x0  nop
    ctx->pc = 0x2f5e64u;
    // NOP
label_2f5e68:
    // 0x2f5e68: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2f5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2f5e6c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2f5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f5e70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f5e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f5e78: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2f5e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f5e7c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f5e7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5e80: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2f5e80u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5e84: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f5e84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5e88: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f5e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5e8c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2f5e8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f5e90: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f5e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5e94: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2f5e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f5e98: 0xc6200310  lwc1        $f0, 0x310($s1)
    ctx->pc = 0x2f5e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5e9c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2f5e9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f5ea0: 0x0  nop
    ctx->pc = 0x2f5ea0u;
    // NOP
    // 0x2f5ea4: 0x45030050  bc1tl       . + 4 + (0x50 << 2)
    ctx->pc = 0x2F5EA4u;
    {
        const bool branch_taken_0x2f5ea4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5ea4) {
            ctx->pc = 0x2F5EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5EA4u;
            // 0x2f5ea8: 0xc62c0314  lwc1        $f12, 0x314($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5FE8u;
            goto label_2f5fe8;
        }
    }
    ctx->pc = 0x2F5EACu;
    // 0x2f5eac: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x2F5EACu;
    SET_GPR_U32(ctx, 31, 0x2F5EB4u);
    ctx->pc = 0x2F5EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5EACu;
    // 0x2f5eb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x2F5EACu, 0x2F5EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5EB4u;
label_2f5eb4:
    // 0x2f5eb4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2f5eb4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2f5eb8: 0xc6200310  lwc1        $f0, 0x310($s1)
    ctx->pc = 0x2f5eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5ebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f5ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f5ec0: 0x0  nop
    ctx->pc = 0x2f5ec0u;
    // NOP
    // 0x2f5ec4: 0x45020048  bc1fl       . + 4 + (0x48 << 2)
    ctx->pc = 0x2F5EC4u;
    {
        const bool branch_taken_0x2f5ec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5ec4) {
            ctx->pc = 0x2F5EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5EC4u;
            // 0x2f5ec8: 0xc62c0314  lwc1        $f12, 0x314($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5FE8u;
            goto label_2f5fe8;
        }
    }
    ctx->pc = 0x2F5ECCu;
    // 0x2f5ecc: 0x0  nop
    ctx->pc = 0x2f5eccu;
    // NOP
    // 0x2f5ed0: 0x0  nop
    ctx->pc = 0x2f5ed0u;
    // NOP
    // 0x2f5ed4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f5ed4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f5ed8: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f5ed8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f5edc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f5edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f5ee0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f5ee0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f5ee4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f5ee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5ee8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f5ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5eec: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2f5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2f5ef0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2f5ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f5ef4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f5ef8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f5ef8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5efc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f5efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5f00: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f5f00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f5f04: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x2f5f04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f5f08: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f5f08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5f0c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f5f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5f10: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f5f10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f5f14: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f5f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5f18: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2f5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2f5f1c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2f5f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f5f20: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5F20u;
    {
        const bool branch_taken_0x2f5f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F20u;
        // 0x2f5f24: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f20) {
            ctx->pc = 0x2F5F3Cu;
            goto label_2f5f3c;
        }
    }
    ctx->pc = 0x2F5F28u;
    // 0x2f5f28: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2f5f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2f5f2c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2f5f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5f30: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2f5f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f5f34: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2f5f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5f38: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2f5f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2f5f3c:
    // 0x2f5f3c: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2f5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2f5f40: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2f5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f5f44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f5f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5f48: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f5f4c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2f5f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f5f50: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f5f50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5f54: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2f5f54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5f58: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f5f58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5f5c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f5f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5f60: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f5f60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f5f64: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f5f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5f68: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2f5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5f6c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2f5f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5f70: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2f5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5f74: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2f5f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f5f78: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2f5f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f5f7c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f5f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f5f80: 0xc6200314  lwc1        $f0, 0x314($s1)
    ctx->pc = 0x2f5f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5f84: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2f5f84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f5f88: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2f5f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5f8c: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2f5f8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f5f90: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f5f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f5f94: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f5f94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f5f98: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f5f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5f9c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2f5f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5fa0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2f5fa0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f5fa4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f5fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5fa8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f5fa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f5fac: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2f5facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5fb0: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2f5fb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f5fb4: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x2f5fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f5fb8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f5fb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f5fbc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f5fbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5fc0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2f5fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5fc4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2f5fc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f5fc8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f5fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5fcc: 0x8e2202f0  lw          $v0, 0x2F0($s1)
    ctx->pc = 0x2f5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x2f5fd0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f5fd4: 0xd8440010  lqc2        $vf4, 0x10($v0)
    ctx->pc = 0x2f5fd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f5fd8: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x2f5fd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5fdc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f5fdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5fe0: 0xf8440010  sqc2        $vf4, 0x10($v0)
    ctx->pc = 0x2f5fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5fe4: 0xc62c0314  lwc1        $f12, 0x314($s1)
    ctx->pc = 0x2f5fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f5fe8:
    // 0x2f5fe8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f5fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5fec: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2F5FECu;
    SET_GPR_U32(ctx, 31, 0x2F5FF4u);
    ctx->pc = 0x2F5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FECu;
    // 0x2f5ff0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2F5FECu, 0x2F5FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FF4u;
label_2f5ff4:
    // 0x2f5ff4: 0x8e2202f0  lw          $v0, 0x2F0($s1)
    ctx->pc = 0x2f5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x2f5ff8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f5ffc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f5ffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6000: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2f6000u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f6004: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f6004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f6008: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f6008u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f600c: 0x82230249  lb          $v1, 0x249($s1)
    ctx->pc = 0x2f600cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2f6010: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f6010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f6014: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f6014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f6018: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2f6018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f601c: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2F601Cu;
    {
        const bool branch_taken_0x2f601c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F601Cu;
        // 0x2f6020: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f601c) {
            ctx->pc = 0x2F5E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5e68;
        }
    }
    ctx->pc = 0x2F6024u;
label_2f6024:
    // 0x2f6024: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2f6024u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2f6028: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f6028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f602c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2f602cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f6030: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F6030u;
    {
        const bool branch_taken_0x2f6030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6030u;
        // 0x2f6034: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6030) {
            ctx->pc = 0x2F6118u;
            goto label_2f6118;
        }
    }
    ctx->pc = 0x2F6038u;
    // 0x2f6038: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x2f6038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
    // 0x2f603c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2f603cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2f6040: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f6040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f6044: 0x2456b6e0  addiu       $s6, $v0, -0x4920
    ctx->pc = 0x2f6044u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2f6048: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x2f6048u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f604c: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2f604cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f6050: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x2f6050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6054: 0x0  nop
    ctx->pc = 0x2f6054u;
    // NOP
label_2f6058:
    // 0x2f6058: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2f6058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2f605c: 0x80430197  lb          $v1, 0x197($v0)
    ctx->pc = 0x2f605cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 407)));
    // 0x2f6060: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F6060u;
    {
        const bool branch_taken_0x2f6060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6060) {
            ctx->pc = 0x2F6064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6060u;
            // 0x2f6064: 0x8e2202f0  lw          $v0, 0x2F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F60BCu;
            goto label_2f60bc;
        }
    }
    ctx->pc = 0x2F6068u;
    // 0x2f6068: 0x9222032c  lbu         $v0, 0x32C($s1)
    ctx->pc = 0x2f6068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x2f606c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2f606cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f6070: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F6070u;
    {
        const bool branch_taken_0x2f6070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6070) {
            ctx->pc = 0x2F6074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6070u;
            // 0x2f6074: 0x8e2202f0  lw          $v0, 0x2F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F60BCu;
            goto label_2f60bc;
        }
    }
    ctx->pc = 0x2F6078u;
    // 0x2f6078: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2f6078u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f607c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6080: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f6080u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f6084: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x2f6084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f6088: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f6088u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f608c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f608cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f6090: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f6090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6094: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2f6094u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f6098: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f6098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f609c: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2f609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2f60a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f60a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f60a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f60a8: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x2f60a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f60ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f60acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f60b0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f60b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f60b4: 0x4614ad42  mul.s       $f21, $f21, $f20
    ctx->pc = 0x2f60b4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x2f60b8: 0x8e2202f0  lw          $v0, 0x2F0($s1)
    ctx->pc = 0x2f60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
label_2f60bc:
    // 0x2f60bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f60c0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f60c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f60c4: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2f60c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f60c8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f60c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f60cc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f60ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f60d0: 0x8e2402f0  lw          $a0, 0x2F0($s1)
    ctx->pc = 0x2f60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x2f60d4: 0xc62c0318  lwc1        $f12, 0x318($s1)
    ctx->pc = 0x2f60d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f60d8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2f60d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2f60dc: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2F60DCu;
    SET_GPR_U32(ctx, 31, 0x2F60E4u);
    ctx->pc = 0x2F60E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F60DCu;
    // 0x2f60e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2F60DCu, 0x2F60E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60E4u;
label_2f60e4:
    // 0x2f60e4: 0x8e2302bc  lw          $v1, 0x2BC($s1)
    ctx->pc = 0x2f60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2f60e8: 0x8e2202f0  lw          $v0, 0x2F0($s1)
    ctx->pc = 0x2f60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x2f60ec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2f60ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2f60f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f60f4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f60f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f60f8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2f60f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f60fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f60fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f6100: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f6100u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6104: 0x82240249  lb          $a0, 0x249($s1)
    ctx->pc = 0x2f6104u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2f6108: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f6108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f610c: 0x244202a  slt         $a0, $s2, $a0
    ctx->pc = 0x2f610cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f6110: 0x1480ffd1  bnez        $a0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2F6110u;
    {
        const bool branch_taken_0x2f6110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6110u;
        // 0x2f6114: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6110) {
            ctx->pc = 0x2F6058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6058;
        }
    }
    ctx->pc = 0x2F6118u;
label_2f6118:
    // 0x2f6118: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f6118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f611c: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F611Cu;
    SET_GPR_U32(ctx, 31, 0x2F6124u);
    ctx->pc = 0x2F6120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F611Cu;
    // 0x2f6120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F611Cu, 0x2F6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6124u;
label_2f6124:
    // 0x2f6124: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2f6124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2f6128: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6128u;
    {
        const bool branch_taken_0x2f6128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2F612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6128u;
        // 0x2f612c: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6128) {
            ctx->pc = 0x2F6144u;
            goto label_2f6144;
        }
    }
    ctx->pc = 0x2F6130u;
    // 0x2f6130: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f6130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f6134: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2f6134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6138: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f6138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f613c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6140: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f6140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f6144:
    // 0x2f6144: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2f6144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2f6148: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2f6148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2f614c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2f614cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2f6150: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2f6150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f6154: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2f6154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f6158: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2f6158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f615c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2f615cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f6160: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2f6160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f6164: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x2f6164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f6168: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2f6168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f616c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2f616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f6170: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6170u;
        // 0x2f6174: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6178u;
}
