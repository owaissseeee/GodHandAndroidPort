#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: r6xx_setLever__FPCc14eR6xx_Obj_Statff
// Address: 0x79b138 - 0x79b2c0
void r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79b138");
#endif

    switch (ctx->pc) {
        case 0x79b180u: goto label_79b180;
        case 0x79b1b0u: goto label_79b1b0;
        case 0x79b1f8u: goto label_79b1f8;
        case 0x79b224u: goto label_79b224;
        case 0x79b234u: goto label_79b234;
        case 0x79b244u: goto label_79b244;
        case 0x79b254u: goto label_79b254;
        case 0x79b268u: goto label_79b268;
        case 0x79b27cu: goto label_79b27c;
        case 0x79b290u: goto label_79b290;
        case 0x79b2a4u: goto label_79b2a4;
        default: break;
    }

    ctx->pc = 0x79b138u;

    // 0x79b138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79b138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79b13c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79b140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79b140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79b144: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79b144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79b148: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x79b148u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x79b14c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x79b14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b150: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x79b150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79b154: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x79b154u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x79b158: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79b158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79b15c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x79b15cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x79b160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b168: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79b168u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b16c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79B16Cu;
    {
        const bool branch_taken_0x79b16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B16Cu;
        // 0x79b170: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b16c) {
            ctx->pc = 0x79B1A8u;
            goto label_79b1a8;
        }
    }
    ctx->pc = 0x79B174u;
    // 0x79b174: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79b174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b178: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b178u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b17c: 0x0  nop
    ctx->pc = 0x79b17cu;
    // NOP
label_79b180:
    // 0x79b180: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b184: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b188: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b18c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b190: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b194: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B194u;
    {
        const bool branch_taken_0x79b194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B194u;
        // 0x79b198: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b194) {
            ctx->pc = 0x79B1A8u;
            goto label_79b1a8;
        }
    }
    ctx->pc = 0x79B19Cu;
    // 0x79b19c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b19cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b1a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B1A0u;
    {
        const bool branch_taken_0x79b1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b1a0) {
            ctx->pc = 0x79B1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B1A0u;
            // 0x79b1a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b180;
        }
    }
    ctx->pc = 0x79B1A8u;
label_79b1a8:
    // 0x79b1a8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B1A8u;
    SET_GPR_U32(ctx, 31, 0x79B1B0u);
    ctx->pc = 0x79B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1A8u;
    // 0x79b1ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B1A8u, 0x79B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1B0u;
label_79b1b0:
    // 0x79b1b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79b1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b1b4: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x79B1B4u;
    {
        const bool branch_taken_0x79b1b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b1b4) {
            ctx->pc = 0x79B1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B1B4u;
            // 0x79b1b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B2A8u;
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B1BCu;
    // 0x79b1bc: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x79b1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x79b1c0: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x79b1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x79b1c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b1c8: 0x0  nop
    ctx->pc = 0x79b1c8u;
    // NOP
    // 0x79b1cc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x79b1ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b1d0: 0x0  nop
    ctx->pc = 0x79b1d0u;
    // NOP
    // 0x79b1d4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x79B1D4u;
    {
        const bool branch_taken_0x79b1d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1D4u;
        // 0x79b1d8: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1d4) {
            ctx->pc = 0x79B1FCu;
            goto label_79b1fc;
        }
    }
    ctx->pc = 0x79B1DCu;
    // 0x79b1dc: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x79b1dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b1e0: 0x0  nop
    ctx->pc = 0x79b1e0u;
    // NOP
    // 0x79b1e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x79B1E4u;
    {
        const bool branch_taken_0x79b1e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E4u;
        // 0x79b1e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1e4) {
            ctx->pc = 0x79B1FCu;
            goto label_79b1fc;
        }
    }
    ctx->pc = 0x79B1ECu;
    // 0x79b1ec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79b1ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79b1f0: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x79B1F0u;
    SET_GPR_U32(ctx, 31, 0x79B1F8u);
    ctx->pc = 0x79B1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1F0u;
    // 0x79b1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x79B1F0u, 0x79B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1F8u;
label_79b1f8:
    // 0x79b1f8: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x79b1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79b1fc:
    // 0x79b1fc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x79B1FCu;
    {
        const bool branch_taken_0x79b1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1FCu;
        // 0x79b200: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1fc) {
            ctx->pc = 0x79B2A4u;
            goto label_79b2a4;
        }
    }
    ctx->pc = 0x79B204u;
    // 0x79b204: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79b204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x79b208: 0x2442b820  addiu       $v0, $v0, -0x47E0
    ctx->pc = 0x79b208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948896));
    // 0x79b20c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79b210: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b214: 0x800008  jr          $a0
    ctx->pc = 0x79B214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79B21Cu: goto label_79b21c;
            case 0x79B22Cu: goto label_79b22c;
            case 0x79B23Cu: goto label_79b23c;
            case 0x79B24Cu: goto label_79b24c;
            case 0x79B25Cu: goto label_79b25c;
            case 0x79B270u: goto label_79b270;
            case 0x79B284u: goto label_79b284;
            case 0x79B298u: goto label_79b298;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B214u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79B21Cu;
label_79b21c:
    // 0x79b21c: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x79B21Cu;
    SET_GPR_U32(ctx, 31, 0x79B224u);
    ctx->pc = 0x79B220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B21Cu;
    // 0x79b220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D48u, 0x79B21Cu, 0x79B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B224u;
label_79b224:
    // 0x79b224: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79B224u;
    {
        const bool branch_taken_0x79b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B224u;
        // 0x79b228: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b224) {
            ctx->pc = 0x79B2A8u;
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B22Cu;
label_79b22c:
    // 0x79b22c: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x79B22Cu;
    SET_GPR_U32(ctx, 31, 0x79B234u);
    ctx->pc = 0x79B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B22Cu;
    // 0x79b230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x79B22Cu, 0x79B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B234u;
label_79b234:
    // 0x79b234: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x79B234u;
    {
        const bool branch_taken_0x79b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B234u;
        // 0x79b238: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b234) {
            ctx->pc = 0x79B2A8u;
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B23Cu;
label_79b23c:
    // 0x79b23c: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x79B23Cu;
    SET_GPR_U32(ctx, 31, 0x79B244u);
    ctx->pc = 0x79B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B23Cu;
    // 0x79b240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DA8u, 0x79B23Cu, 0x79B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B244u;
label_79b244:
    // 0x79b244: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x79B244u;
    {
        const bool branch_taken_0x79b244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B244u;
        // 0x79b248: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b244) {
            ctx->pc = 0x79B2A8u;
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B24Cu;
label_79b24c:
    // 0x79b24c: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x79B24Cu;
    SET_GPR_U32(ctx, 31, 0x79B254u);
    ctx->pc = 0x79B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B24Cu;
    // 0x79b250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x79B24Cu, 0x79B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B254u;
label_79b254:
    // 0x79b254: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79B254u;
    {
        const bool branch_taken_0x79b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B254u;
        // 0x79b258: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b254) {
            ctx->pc = 0x79B2A8u;
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B25Cu;
label_79b25c:
    // 0x79b25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b260: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79B260u;
    SET_GPR_U32(ctx, 31, 0x79B268u);
    ctx->pc = 0x79B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B260u;
    // 0x79b264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79B260u, 0x79B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B268u;
label_79b268:
    // 0x79b268: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79B268u;
    {
        const bool branch_taken_0x79b268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B268u;
        // 0x79b26c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b268) {
            ctx->pc = 0x79B2A8u;
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B270u;
label_79b270:
    // 0x79b270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b274: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79B274u;
    SET_GPR_U32(ctx, 31, 0x79B27Cu);
    ctx->pc = 0x79B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B274u;
    // 0x79b278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79B274u, 0x79B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B27Cu;
label_79b27c:
    // 0x79b27c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79B27Cu;
    {
        const bool branch_taken_0x79b27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B27Cu;
        // 0x79b280: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b27c) {
            ctx->pc = 0x79B2A8u;
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B284u;
label_79b284:
    // 0x79b284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b288: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79B288u;
    SET_GPR_U32(ctx, 31, 0x79B290u);
    ctx->pc = 0x79B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B288u;
    // 0x79b28c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79B288u, 0x79B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B290u;
label_79b290:
    // 0x79b290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B290u;
    {
        const bool branch_taken_0x79b290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B290u;
        // 0x79b294: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b290) {
            ctx->pc = 0x79B2A8u;
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B298u;
label_79b298:
    // 0x79b298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b29c: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79B29Cu;
    SET_GPR_U32(ctx, 31, 0x79B2A4u);
    ctx->pc = 0x79B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B29Cu;
    // 0x79b2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79B29Cu, 0x79B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2A4u;
label_79b2a4:
    // 0x79b2a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79b2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79b2a8:
    // 0x79b2a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79b2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b2b0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x79b2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79b2b4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x79b2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2B8u;
        // 0x79b2bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2C0u;
}
} // namespace gh_r600
