#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: r6xx_setLever__FPCc14eR6xx_Obj_Statff
// Address: 0x799b78 - 0x799d00
void r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x799b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x799b78");
#endif

    switch (ctx->pc) {
        case 0x799bc0u: goto label_799bc0;
        case 0x799bf0u: goto label_799bf0;
        case 0x799c38u: goto label_799c38;
        case 0x799c64u: goto label_799c64;
        case 0x799c74u: goto label_799c74;
        case 0x799c84u: goto label_799c84;
        case 0x799c94u: goto label_799c94;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cbcu: goto label_799cbc;
        case 0x799cd0u: goto label_799cd0;
        case 0x799ce4u: goto label_799ce4;
        default: break;
    }

    ctx->pc = 0x799b78u;

    // 0x799b78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799b7c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799b80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799b84: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799b88: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x799b88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x799b8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x799b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b90: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x799b90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x799b94: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x799b94u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x799b98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799b9c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x799b9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x799ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799bac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x799BACu;
    {
        const bool branch_taken_0x799bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BACu;
        // 0x799bb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bac) {
            ctx->pc = 0x799BE8u;
            goto label_799be8;
        }
    }
    ctx->pc = 0x799BB4u;
    // 0x799bb4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bb8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799bbc: 0x0  nop
    ctx->pc = 0x799bbcu;
    // NOP
label_799bc0:
    // 0x799bc0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799bc4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799bc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799bcc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799bd0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799bd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799bd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799BD4u;
    {
        const bool branch_taken_0x799bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD4u;
        // 0x799bd8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd4) {
            ctx->pc = 0x799BE8u;
            goto label_799be8;
        }
    }
    ctx->pc = 0x799BDCu;
    // 0x799bdc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799be0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799BE0u;
    {
        const bool branch_taken_0x799be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799be0) {
            ctx->pc = 0x799BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BE0u;
            // 0x799be4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bc0;
        }
    }
    ctx->pc = 0x799BE8u;
label_799be8:
    // 0x799be8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799BE8u;
    SET_GPR_U32(ctx, 31, 0x799BF0u);
    ctx->pc = 0x799BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BE8u;
    // 0x799bec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799BE8u, 0x799BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF0u;
label_799bf0:
    // 0x799bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bf4: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x799BF4u;
    {
        const bool branch_taken_0x799bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799bf4) {
            ctx->pc = 0x799BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BF4u;
            // 0x799bf8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CE8u;
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799BFCu;
    // 0x799bfc: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x799c00: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x799c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x799c04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799c08: 0x0  nop
    ctx->pc = 0x799c08u;
    // NOP
    // 0x799c0c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x799c0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799c10: 0x0  nop
    ctx->pc = 0x799c10u;
    // NOP
    // 0x799c14: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x799C14u;
    {
        const bool branch_taken_0x799c14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x799C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C14u;
        // 0x799c18: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c14) {
            ctx->pc = 0x799C3Cu;
            goto label_799c3c;
        }
    }
    ctx->pc = 0x799C1Cu;
    // 0x799c1c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x799c1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799c20: 0x0  nop
    ctx->pc = 0x799c20u;
    // NOP
    // 0x799c24: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x799C24u;
    {
        const bool branch_taken_0x799c24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x799C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C24u;
        // 0x799c28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c24) {
            ctx->pc = 0x799C3Cu;
            goto label_799c3c;
        }
    }
    ctx->pc = 0x799C2Cu;
    // 0x799c2c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x799c2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x799c30: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x799C30u;
    SET_GPR_U32(ctx, 31, 0x799C38u);
    ctx->pc = 0x799C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C30u;
    // 0x799c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x799C30u, 0x799C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C38u;
label_799c38:
    // 0x799c38: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x799c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_799c3c:
    // 0x799c3c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x799C3Cu;
    {
        const bool branch_taken_0x799c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C3Cu;
        // 0x799c40: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c3c) {
            ctx->pc = 0x799CE4u;
            goto label_799ce4;
        }
    }
    ctx->pc = 0x799C44u;
    // 0x799c44: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x799c48: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x799c4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799c50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799c54: 0x800008  jr          $a0
    ctx->pc = 0x799C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799C5Cu: goto label_799c5c;
            case 0x799C6Cu: goto label_799c6c;
            case 0x799C7Cu: goto label_799c7c;
            case 0x799C8Cu: goto label_799c8c;
            case 0x799C9Cu: goto label_799c9c;
            case 0x799CB0u: goto label_799cb0;
            case 0x799CC4u: goto label_799cc4;
            case 0x799CD8u: goto label_799cd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799C5Cu;
label_799c5c:
    // 0x799c5c: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x799C5Cu;
    SET_GPR_U32(ctx, 31, 0x799C64u);
    ctx->pc = 0x799C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C5Cu;
    // 0x799c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D48u, 0x799C5Cu, 0x799C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C64u;
label_799c64:
    // 0x799c64: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x799C64u;
    {
        const bool branch_taken_0x799c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C64u;
        // 0x799c68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c64) {
            ctx->pc = 0x799CE8u;
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799C6Cu;
label_799c6c:
    // 0x799c6c: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x799C6Cu;
    SET_GPR_U32(ctx, 31, 0x799C74u);
    ctx->pc = 0x799C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C6Cu;
    // 0x799c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x799C6Cu, 0x799C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C74u;
label_799c74:
    // 0x799c74: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x799C74u;
    {
        const bool branch_taken_0x799c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C74u;
        // 0x799c78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c74) {
            ctx->pc = 0x799CE8u;
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799C7Cu;
label_799c7c:
    // 0x799c7c: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x799C7Cu;
    SET_GPR_U32(ctx, 31, 0x799C84u);
    ctx->pc = 0x799C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C7Cu;
    // 0x799c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DA8u, 0x799C7Cu, 0x799C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C84u;
label_799c84:
    // 0x799c84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x799C84u;
    {
        const bool branch_taken_0x799c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C84u;
        // 0x799c88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c84) {
            ctx->pc = 0x799CE8u;
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799C8Cu;
label_799c8c:
    // 0x799c8c: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x799C8Cu;
    SET_GPR_U32(ctx, 31, 0x799C94u);
    ctx->pc = 0x799C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C8Cu;
    // 0x799c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x799C8Cu, 0x799C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C94u;
label_799c94:
    // 0x799c94: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x799C94u;
    {
        const bool branch_taken_0x799c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C94u;
        // 0x799c98: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c94) {
            ctx->pc = 0x799CE8u;
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799C9Cu;
label_799c9c:
    // 0x799c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ca0: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799CA0u;
    SET_GPR_U32(ctx, 31, 0x799CA8u);
    ctx->pc = 0x799CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA0u;
    // 0x799ca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799CA0u, 0x799CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA8u;
label_799ca8:
    // 0x799ca8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x799CA8u;
    {
        const bool branch_taken_0x799ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA8u;
        // 0x799cac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ca8) {
            ctx->pc = 0x799CE8u;
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799CB0u;
label_799cb0:
    // 0x799cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cb4: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799CB4u;
    SET_GPR_U32(ctx, 31, 0x799CBCu);
    ctx->pc = 0x799CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CB4u;
    // 0x799cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799CB4u, 0x799CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CBCu;
label_799cbc:
    // 0x799cbc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799CBCu;
    {
        const bool branch_taken_0x799cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CBCu;
        // 0x799cc0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cbc) {
            ctx->pc = 0x799CE8u;
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799CC4u;
label_799cc4:
    // 0x799cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cc8: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x799CC8u;
    SET_GPR_U32(ctx, 31, 0x799CD0u);
    ctx->pc = 0x799CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC8u;
    // 0x799ccc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x799CC8u, 0x799CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CD0u;
label_799cd0:
    // 0x799cd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799CD0u;
    {
        const bool branch_taken_0x799cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD0u;
        // 0x799cd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cd0) {
            ctx->pc = 0x799CE8u;
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799CD8u;
label_799cd8:
    // 0x799cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cdc: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x799CDCu;
    SET_GPR_U32(ctx, 31, 0x799CE4u);
    ctx->pc = 0x799CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CDCu;
    // 0x799ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x799CDCu, 0x799CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE4u;
label_799ce4:
    // 0x799ce4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799ce8:
    // 0x799ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799cf0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x799cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799cf4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x799cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x799CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF8u;
        // 0x799cfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D00u;
}
} // namespace gh_r603
