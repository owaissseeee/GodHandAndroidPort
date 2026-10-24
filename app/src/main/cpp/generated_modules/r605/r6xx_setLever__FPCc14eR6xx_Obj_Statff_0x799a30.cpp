#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: r6xx_setLever__FPCc14eR6xx_Obj_Statff
// Address: 0x799a30 - 0x799bb8
void r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x799a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x799a30");
#endif

    switch (ctx->pc) {
        case 0x799a78u: goto label_799a78;
        case 0x799aa8u: goto label_799aa8;
        case 0x799af0u: goto label_799af0;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b2cu: goto label_799b2c;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b4cu: goto label_799b4c;
        case 0x799b60u: goto label_799b60;
        case 0x799b74u: goto label_799b74;
        case 0x799b88u: goto label_799b88;
        case 0x799b9cu: goto label_799b9c;
        default: break;
    }

    ctx->pc = 0x799a30u;

    // 0x799a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799a34: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799a3c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799a40: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x799a40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x799a44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x799a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a48: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x799a48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x799a4c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x799a4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x799a50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799a54: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x799a54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x799a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a60: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799a64: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x799A64u;
    {
        const bool branch_taken_0x799a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A64u;
        // 0x799a68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a64) {
            ctx->pc = 0x799AA0u;
            goto label_799aa0;
        }
    }
    ctx->pc = 0x799A6Cu;
    // 0x799a6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a70: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799a74: 0x0  nop
    ctx->pc = 0x799a74u;
    // NOP
label_799a78:
    // 0x799a78: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799a7c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799a80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799a84: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799a88: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799a88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799a8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A8Cu;
    {
        const bool branch_taken_0x799a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A8Cu;
        // 0x799a90: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a8c) {
            ctx->pc = 0x799AA0u;
            goto label_799aa0;
        }
    }
    ctx->pc = 0x799A94u;
    // 0x799a94: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799a98: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799A98u;
    {
        const bool branch_taken_0x799a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a98) {
            ctx->pc = 0x799A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A98u;
            // 0x799a9c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a78;
        }
    }
    ctx->pc = 0x799AA0u;
label_799aa0:
    // 0x799aa0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799AA0u;
    SET_GPR_U32(ctx, 31, 0x799AA8u);
    ctx->pc = 0x799AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA0u;
    // 0x799aa4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799AA0u, 0x799AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA8u;
label_799aa8:
    // 0x799aa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aac: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x799AACu;
    {
        const bool branch_taken_0x799aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799aac) {
            ctx->pc = 0x799AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799AACu;
            // 0x799ab0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BA0u;
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799AB4u;
    // 0x799ab4: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x799ab8: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x799ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x799abc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799ac0: 0x0  nop
    ctx->pc = 0x799ac0u;
    // NOP
    // 0x799ac4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x799ac4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799ac8: 0x0  nop
    ctx->pc = 0x799ac8u;
    // NOP
    // 0x799acc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x799ACCu;
    {
        const bool branch_taken_0x799acc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x799AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ACCu;
        // 0x799ad0: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799acc) {
            ctx->pc = 0x799AF4u;
            goto label_799af4;
        }
    }
    ctx->pc = 0x799AD4u;
    // 0x799ad4: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x799ad4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799ad8: 0x0  nop
    ctx->pc = 0x799ad8u;
    // NOP
    // 0x799adc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x799ADCu;
    {
        const bool branch_taken_0x799adc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x799AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ADCu;
        // 0x799ae0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799adc) {
            ctx->pc = 0x799AF4u;
            goto label_799af4;
        }
    }
    ctx->pc = 0x799AE4u;
    // 0x799ae4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x799ae4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x799ae8: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x799AE8u;
    SET_GPR_U32(ctx, 31, 0x799AF0u);
    ctx->pc = 0x799AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE8u;
    // 0x799aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x799AE8u, 0x799AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF0u;
label_799af0:
    // 0x799af0: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x799af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_799af4:
    // 0x799af4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x799AF4u;
    {
        const bool branch_taken_0x799af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF4u;
        // 0x799af8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af4) {
            ctx->pc = 0x799B9Cu;
            goto label_799b9c;
        }
    }
    ctx->pc = 0x799AFCu;
    // 0x799afc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x799b00: 0x2442a0c0  addiu       $v0, $v0, -0x5F40
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942912));
    // 0x799b04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799b08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799b0c: 0x800008  jr          $a0
    ctx->pc = 0x799B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799B14u: goto label_799b14;
            case 0x799B24u: goto label_799b24;
            case 0x799B34u: goto label_799b34;
            case 0x799B44u: goto label_799b44;
            case 0x799B54u: goto label_799b54;
            case 0x799B68u: goto label_799b68;
            case 0x799B7Cu: goto label_799b7c;
            case 0x799B90u: goto label_799b90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799B14u;
label_799b14:
    // 0x799b14: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x799B14u;
    SET_GPR_U32(ctx, 31, 0x799B1Cu);
    ctx->pc = 0x799B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B14u;
    // 0x799b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D48u, 0x799B14u, 0x799B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B1Cu;
label_799b1c:
    // 0x799b1c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x799B1Cu;
    {
        const bool branch_taken_0x799b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B1Cu;
        // 0x799b20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b1c) {
            ctx->pc = 0x799BA0u;
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799B24u;
label_799b24:
    // 0x799b24: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x799B24u;
    SET_GPR_U32(ctx, 31, 0x799B2Cu);
    ctx->pc = 0x799B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B24u;
    // 0x799b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x799B24u, 0x799B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B2Cu;
label_799b2c:
    // 0x799b2c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x799B2Cu;
    {
        const bool branch_taken_0x799b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b2c) {
            ctx->pc = 0x799BA0u;
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799B34u;
label_799b34:
    // 0x799b34: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x799B34u;
    SET_GPR_U32(ctx, 31, 0x799B3Cu);
    ctx->pc = 0x799B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B34u;
    // 0x799b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DA8u, 0x799B34u, 0x799B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B3Cu;
label_799b3c:
    // 0x799b3c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x799B3Cu;
    {
        const bool branch_taken_0x799b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B3Cu;
        // 0x799b40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b3c) {
            ctx->pc = 0x799BA0u;
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799B44u;
label_799b44:
    // 0x799b44: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x799B44u;
    SET_GPR_U32(ctx, 31, 0x799B4Cu);
    ctx->pc = 0x799B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B44u;
    // 0x799b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x799B44u, 0x799B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B4Cu;
label_799b4c:
    // 0x799b4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x799B4Cu;
    {
        const bool branch_taken_0x799b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B4Cu;
        // 0x799b50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b4c) {
            ctx->pc = 0x799BA0u;
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799B54u;
label_799b54:
    // 0x799b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b58: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799B58u;
    SET_GPR_U32(ctx, 31, 0x799B60u);
    ctx->pc = 0x799B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B58u;
    // 0x799b5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799B58u, 0x799B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x799B60u;
    {
        const bool branch_taken_0x799b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B60u;
        // 0x799b64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b60) {
            ctx->pc = 0x799BA0u;
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799B68u;
label_799b68:
    // 0x799b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b6c: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799B6Cu;
    SET_GPR_U32(ctx, 31, 0x799B74u);
    ctx->pc = 0x799B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B6Cu;
    // 0x799b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799B6Cu, 0x799B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B74u;
label_799b74:
    // 0x799b74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799B74u;
    {
        const bool branch_taken_0x799b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B74u;
        // 0x799b78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b74) {
            ctx->pc = 0x799BA0u;
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799B7Cu;
label_799b7c:
    // 0x799b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b80: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x799B80u;
    SET_GPR_U32(ctx, 31, 0x799B88u);
    ctx->pc = 0x799B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B80u;
    // 0x799b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x799B80u, 0x799B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B88u;
label_799b88:
    // 0x799b88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799B88u;
    {
        const bool branch_taken_0x799b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B88u;
        // 0x799b8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b88) {
            ctx->pc = 0x799BA0u;
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799B90u;
label_799b90:
    // 0x799b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b94: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x799B94u;
    SET_GPR_U32(ctx, 31, 0x799B9Cu);
    ctx->pc = 0x799B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B94u;
    // 0x799b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x799B94u, 0x799B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B9Cu;
label_799b9c:
    // 0x799b9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799ba0:
    // 0x799ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799ba8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x799ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799bac: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x799bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x799BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB0u;
        // 0x799bb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BB8u;
}
} // namespace gh_r605
