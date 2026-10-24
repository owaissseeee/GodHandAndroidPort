#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: r6xx_setLever__FPCc14eR6xx_Obj_Statff
// Address: 0x79a220 - 0x79a3a8
void r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79a220");
#endif

    switch (ctx->pc) {
        case 0x79a268u: goto label_79a268;
        case 0x79a298u: goto label_79a298;
        case 0x79a2e0u: goto label_79a2e0;
        case 0x79a30cu: goto label_79a30c;
        case 0x79a31cu: goto label_79a31c;
        case 0x79a32cu: goto label_79a32c;
        case 0x79a33cu: goto label_79a33c;
        case 0x79a350u: goto label_79a350;
        case 0x79a364u: goto label_79a364;
        case 0x79a378u: goto label_79a378;
        case 0x79a38cu: goto label_79a38c;
        default: break;
    }

    ctx->pc = 0x79a220u;

    // 0x79a220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a224: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a22c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79a230: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x79a230u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x79a234: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x79a234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a238: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x79a238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79a23c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x79a23cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x79a240: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a244: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x79a244u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x79a248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a24c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a250: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a254: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A254u;
    {
        const bool branch_taken_0x79a254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A254u;
        // 0x79a258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a254) {
            ctx->pc = 0x79A290u;
            goto label_79a290;
        }
    }
    ctx->pc = 0x79A25Cu;
    // 0x79a25c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79a25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a260: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a260u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a264: 0x0  nop
    ctx->pc = 0x79a264u;
    // NOP
label_79a268:
    // 0x79a268: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a26c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a270: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a274: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a278: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a27c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A27Cu;
    {
        const bool branch_taken_0x79a27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A27Cu;
        // 0x79a280: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a27c) {
            ctx->pc = 0x79A290u;
            goto label_79a290;
        }
    }
    ctx->pc = 0x79A284u;
    // 0x79a284: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a284u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a288: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A288u;
    {
        const bool branch_taken_0x79a288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a288) {
            ctx->pc = 0x79A28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A288u;
            // 0x79a28c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a268;
        }
    }
    ctx->pc = 0x79A290u;
label_79a290:
    // 0x79a290: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A290u;
    SET_GPR_U32(ctx, 31, 0x79A298u);
    ctx->pc = 0x79A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A290u;
    // 0x79a294: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A290u, 0x79A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A298u;
label_79a298:
    // 0x79a298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a29c: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x79A29Cu;
    {
        const bool branch_taken_0x79a29c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a29c) {
            ctx->pc = 0x79A2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A29Cu;
            // 0x79a2a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A390u;
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A2A4u;
    // 0x79a2a4: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x79a2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x79a2a8: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x79a2a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x79a2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a2b0: 0x0  nop
    ctx->pc = 0x79a2b0u;
    // NOP
    // 0x79a2b4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x79a2b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a2b8: 0x0  nop
    ctx->pc = 0x79a2b8u;
    // NOP
    // 0x79a2bc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x79A2BCu;
    {
        const bool branch_taken_0x79a2bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2BCu;
        // 0x79a2c0: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2bc) {
            ctx->pc = 0x79A2E4u;
            goto label_79a2e4;
        }
    }
    ctx->pc = 0x79A2C4u;
    // 0x79a2c4: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x79a2c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a2c8: 0x0  nop
    ctx->pc = 0x79a2c8u;
    // NOP
    // 0x79a2cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x79A2CCu;
    {
        const bool branch_taken_0x79a2cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2CCu;
        // 0x79a2d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2cc) {
            ctx->pc = 0x79A2E4u;
            goto label_79a2e4;
        }
    }
    ctx->pc = 0x79A2D4u;
    // 0x79a2d4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79a2d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79a2d8: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x79A2D8u;
    SET_GPR_U32(ctx, 31, 0x79A2E0u);
    ctx->pc = 0x79A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2D8u;
    // 0x79a2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x79A2D8u, 0x79A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2E0u;
label_79a2e0:
    // 0x79a2e0: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x79a2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a2e4:
    // 0x79a2e4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x79A2E4u;
    {
        const bool branch_taken_0x79a2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E4u;
        // 0x79a2e8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2e4) {
            ctx->pc = 0x79A38Cu;
            goto label_79a38c;
        }
    }
    ctx->pc = 0x79A2ECu;
    // 0x79a2ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x79a2f0: 0x2442a8d0  addiu       $v0, $v0, -0x5730
    ctx->pc = 0x79a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944976));
    // 0x79a2f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a2f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a2fc: 0x800008  jr          $a0
    ctx->pc = 0x79A2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A304u: goto label_79a304;
            case 0x79A314u: goto label_79a314;
            case 0x79A324u: goto label_79a324;
            case 0x79A334u: goto label_79a334;
            case 0x79A344u: goto label_79a344;
            case 0x79A358u: goto label_79a358;
            case 0x79A36Cu: goto label_79a36c;
            case 0x79A380u: goto label_79a380;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A2FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A304u;
label_79a304:
    // 0x79a304: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x79A304u;
    SET_GPR_U32(ctx, 31, 0x79A30Cu);
    ctx->pc = 0x79A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A304u;
    // 0x79a308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D48u, 0x79A304u, 0x79A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A30Cu;
label_79a30c:
    // 0x79a30c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79A30Cu;
    {
        const bool branch_taken_0x79a30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A30Cu;
        // 0x79a310: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a30c) {
            ctx->pc = 0x79A390u;
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A314u;
label_79a314:
    // 0x79a314: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x79A314u;
    SET_GPR_U32(ctx, 31, 0x79A31Cu);
    ctx->pc = 0x79A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A314u;
    // 0x79a318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x79A314u, 0x79A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A31Cu;
label_79a31c:
    // 0x79a31c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x79A31Cu;
    {
        const bool branch_taken_0x79a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A31Cu;
        // 0x79a320: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a31c) {
            ctx->pc = 0x79A390u;
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A324u;
label_79a324:
    // 0x79a324: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x79A324u;
    SET_GPR_U32(ctx, 31, 0x79A32Cu);
    ctx->pc = 0x79A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A324u;
    // 0x79a328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DA8u, 0x79A324u, 0x79A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A32Cu;
label_79a32c:
    // 0x79a32c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x79A32Cu;
    {
        const bool branch_taken_0x79a32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A32Cu;
        // 0x79a330: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a32c) {
            ctx->pc = 0x79A390u;
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A334u;
label_79a334:
    // 0x79a334: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x79A334u;
    SET_GPR_U32(ctx, 31, 0x79A33Cu);
    ctx->pc = 0x79A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A334u;
    // 0x79a338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x79A334u, 0x79A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A33Cu;
label_79a33c:
    // 0x79a33c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79A33Cu;
    {
        const bool branch_taken_0x79a33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A33Cu;
        // 0x79a340: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a33c) {
            ctx->pc = 0x79A390u;
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A344u;
label_79a344:
    // 0x79a344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a348: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79A348u;
    SET_GPR_U32(ctx, 31, 0x79A350u);
    ctx->pc = 0x79A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A348u;
    // 0x79a34c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79A348u, 0x79A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A350u;
label_79a350:
    // 0x79a350: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79A350u;
    {
        const bool branch_taken_0x79a350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A350u;
        // 0x79a354: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a350) {
            ctx->pc = 0x79A390u;
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A358u;
label_79a358:
    // 0x79a358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a35c: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79A35Cu;
    SET_GPR_U32(ctx, 31, 0x79A364u);
    ctx->pc = 0x79A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A35Cu;
    // 0x79a360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79A35Cu, 0x79A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A364u;
label_79a364:
    // 0x79a364: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79A364u;
    {
        const bool branch_taken_0x79a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A364u;
        // 0x79a368: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a364) {
            ctx->pc = 0x79A390u;
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A36Cu;
label_79a36c:
    // 0x79a36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a370: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79A370u;
    SET_GPR_U32(ctx, 31, 0x79A378u);
    ctx->pc = 0x79A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A370u;
    // 0x79a374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79A370u, 0x79A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A378u;
label_79a378:
    // 0x79a378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A378u;
    {
        const bool branch_taken_0x79a378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A378u;
        // 0x79a37c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a378) {
            ctx->pc = 0x79A390u;
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A380u;
label_79a380:
    // 0x79a380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a384: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79A384u;
    SET_GPR_U32(ctx, 31, 0x79A38Cu);
    ctx->pc = 0x79A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A384u;
    // 0x79a388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79A384u, 0x79A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A38Cu;
label_79a38c:
    // 0x79a38c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79a390:
    // 0x79a390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a398: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x79a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a39c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x79a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A0u;
        // 0x79a3a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A3A8u;
}
} // namespace gh_r606
