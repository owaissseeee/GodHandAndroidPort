#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: r6xx_setLever__FPCc14eR6xx_Obj_Statff
// Address: 0x79af90 - 0x79b118
void r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79af90");
#endif

    switch (ctx->pc) {
        case 0x79afd8u: goto label_79afd8;
        case 0x79b008u: goto label_79b008;
        case 0x79b050u: goto label_79b050;
        case 0x79b07cu: goto label_79b07c;
        case 0x79b08cu: goto label_79b08c;
        case 0x79b09cu: goto label_79b09c;
        case 0x79b0acu: goto label_79b0ac;
        case 0x79b0c0u: goto label_79b0c0;
        case 0x79b0d4u: goto label_79b0d4;
        case 0x79b0e8u: goto label_79b0e8;
        case 0x79b0fcu: goto label_79b0fc;
        default: break;
    }

    ctx->pc = 0x79af90u;

    // 0x79af90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79af94: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79af94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79af98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79af98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79af9c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79af9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79afa0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x79afa0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x79afa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x79afa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afa8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x79afa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79afac: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x79afacu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x79afb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79afb4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x79afb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x79afb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79afb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79afbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79afbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afc0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79afc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79afc4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79AFC4u;
    {
        const bool branch_taken_0x79afc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFC4u;
        // 0x79afc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afc4) {
            ctx->pc = 0x79B000u;
            goto label_79b000;
        }
    }
    ctx->pc = 0x79AFCCu;
    // 0x79afcc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79afccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afd0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79afd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79afd4: 0x0  nop
    ctx->pc = 0x79afd4u;
    // NOP
label_79afd8:
    // 0x79afd8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79afdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79afdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79afe0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79afe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79afe4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79afe8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79afe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79afec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AFECu;
    {
        const bool branch_taken_0x79afec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFECu;
        // 0x79aff0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afec) {
            ctx->pc = 0x79B000u;
            goto label_79b000;
        }
    }
    ctx->pc = 0x79AFF4u;
    // 0x79aff4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79aff4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aff8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AFF8u;
    {
        const bool branch_taken_0x79aff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aff8) {
            ctx->pc = 0x79AFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AFF8u;
            // 0x79affc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79afd8;
        }
    }
    ctx->pc = 0x79B000u;
label_79b000:
    // 0x79b000: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B000u;
    SET_GPR_U32(ctx, 31, 0x79B008u);
    ctx->pc = 0x79B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B000u;
    // 0x79b004: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B000u, 0x79B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B008u;
label_79b008:
    // 0x79b008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79b008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b00c: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x79B00Cu;
    {
        const bool branch_taken_0x79b00c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b00c) {
            ctx->pc = 0x79B010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B00Cu;
            // 0x79b010: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B100u;
            goto label_79b100;
        }
    }
    ctx->pc = 0x79B014u;
    // 0x79b014: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x79b014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x79b018: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x79b018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x79b01c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b020: 0x0  nop
    ctx->pc = 0x79b020u;
    // NOP
    // 0x79b024: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x79b024u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b028: 0x0  nop
    ctx->pc = 0x79b028u;
    // NOP
    // 0x79b02c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x79B02Cu;
    {
        const bool branch_taken_0x79b02c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B02Cu;
        // 0x79b030: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b02c) {
            ctx->pc = 0x79B054u;
            goto label_79b054;
        }
    }
    ctx->pc = 0x79B034u;
    // 0x79b034: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x79b034u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b038: 0x0  nop
    ctx->pc = 0x79b038u;
    // NOP
    // 0x79b03c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x79B03Cu;
    {
        const bool branch_taken_0x79b03c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B03Cu;
        // 0x79b040: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b03c) {
            ctx->pc = 0x79B054u;
            goto label_79b054;
        }
    }
    ctx->pc = 0x79B044u;
    // 0x79b044: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79b044u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79b048: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x79B048u;
    SET_GPR_U32(ctx, 31, 0x79B050u);
    ctx->pc = 0x79B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B048u;
    // 0x79b04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x79B048u, 0x79B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B050u;
label_79b050:
    // 0x79b050: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x79b050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79b054:
    // 0x79b054: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x79B054u;
    {
        const bool branch_taken_0x79b054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B054u;
        // 0x79b058: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b054) {
            ctx->pc = 0x79B0FCu;
            goto label_79b0fc;
        }
    }
    ctx->pc = 0x79B05Cu;
    // 0x79b05c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x79b060: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x79b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
    // 0x79b064: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79b068: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b06c: 0x800008  jr          $a0
    ctx->pc = 0x79B06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79B074u: goto label_79b074;
            case 0x79B084u: goto label_79b084;
            case 0x79B094u: goto label_79b094;
            case 0x79B0A4u: goto label_79b0a4;
            case 0x79B0B4u: goto label_79b0b4;
            case 0x79B0C8u: goto label_79b0c8;
            case 0x79B0DCu: goto label_79b0dc;
            case 0x79B0F0u: goto label_79b0f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B06Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79B074u;
label_79b074:
    // 0x79b074: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x79B074u;
    SET_GPR_U32(ctx, 31, 0x79B07Cu);
    ctx->pc = 0x79B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B074u;
    // 0x79b078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D48u, 0x79B074u, 0x79B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B07Cu;
label_79b07c:
    // 0x79b07c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79B07Cu;
    {
        const bool branch_taken_0x79b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B07Cu;
        // 0x79b080: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b07c) {
            ctx->pc = 0x79B100u;
            goto label_79b100;
        }
    }
    ctx->pc = 0x79B084u;
label_79b084:
    // 0x79b084: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x79B084u;
    SET_GPR_U32(ctx, 31, 0x79B08Cu);
    ctx->pc = 0x79B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B084u;
    // 0x79b088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x79B084u, 0x79B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B08Cu;
label_79b08c:
    // 0x79b08c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x79B08Cu;
    {
        const bool branch_taken_0x79b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B08Cu;
        // 0x79b090: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b08c) {
            ctx->pc = 0x79B100u;
            goto label_79b100;
        }
    }
    ctx->pc = 0x79B094u;
label_79b094:
    // 0x79b094: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x79B094u;
    SET_GPR_U32(ctx, 31, 0x79B09Cu);
    ctx->pc = 0x79B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B094u;
    // 0x79b098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DA8u, 0x79B094u, 0x79B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B09Cu;
label_79b09c:
    // 0x79b09c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x79B09Cu;
    {
        const bool branch_taken_0x79b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B09Cu;
        // 0x79b0a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b09c) {
            ctx->pc = 0x79B100u;
            goto label_79b100;
        }
    }
    ctx->pc = 0x79B0A4u;
label_79b0a4:
    // 0x79b0a4: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x79B0A4u;
    SET_GPR_U32(ctx, 31, 0x79B0ACu);
    ctx->pc = 0x79B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0A4u;
    // 0x79b0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x79B0A4u, 0x79B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0ACu;
label_79b0ac:
    // 0x79b0ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79B0ACu;
    {
        const bool branch_taken_0x79b0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0ACu;
        // 0x79b0b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0ac) {
            ctx->pc = 0x79B100u;
            goto label_79b100;
        }
    }
    ctx->pc = 0x79B0B4u;
label_79b0b4:
    // 0x79b0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0b8: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79B0B8u;
    SET_GPR_U32(ctx, 31, 0x79B0C0u);
    ctx->pc = 0x79B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0B8u;
    // 0x79b0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79B0B8u, 0x79B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0C0u;
label_79b0c0:
    // 0x79b0c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79B0C0u;
    {
        const bool branch_taken_0x79b0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0C0u;
        // 0x79b0c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0c0) {
            ctx->pc = 0x79B100u;
            goto label_79b100;
        }
    }
    ctx->pc = 0x79B0C8u;
label_79b0c8:
    // 0x79b0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0cc: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79B0CCu;
    SET_GPR_U32(ctx, 31, 0x79B0D4u);
    ctx->pc = 0x79B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0CCu;
    // 0x79b0d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79B0CCu, 0x79B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0D4u;
label_79b0d4:
    // 0x79b0d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79B0D4u;
    {
        const bool branch_taken_0x79b0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0D4u;
        // 0x79b0d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0d4) {
            ctx->pc = 0x79B100u;
            goto label_79b100;
        }
    }
    ctx->pc = 0x79B0DCu;
label_79b0dc:
    // 0x79b0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0e0: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79B0E0u;
    SET_GPR_U32(ctx, 31, 0x79B0E8u);
    ctx->pc = 0x79B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0E0u;
    // 0x79b0e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79B0E0u, 0x79B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0E8u;
label_79b0e8:
    // 0x79b0e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B0E8u;
    {
        const bool branch_taken_0x79b0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0E8u;
        // 0x79b0ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0e8) {
            ctx->pc = 0x79B100u;
            goto label_79b100;
        }
    }
    ctx->pc = 0x79B0F0u;
label_79b0f0:
    // 0x79b0f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0f4: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79B0F4u;
    SET_GPR_U32(ctx, 31, 0x79B0FCu);
    ctx->pc = 0x79B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0F4u;
    // 0x79b0f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79B0F4u, 0x79B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0FCu;
label_79b0fc:
    // 0x79b0fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79b0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79b100:
    // 0x79b100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79b100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b108: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x79b108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79b10c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x79b10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b110: 0x3e00008  jr          $ra
    ctx->pc = 0x79B110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B110u;
        // 0x79b114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B118u;
}
} // namespace gh_r607
