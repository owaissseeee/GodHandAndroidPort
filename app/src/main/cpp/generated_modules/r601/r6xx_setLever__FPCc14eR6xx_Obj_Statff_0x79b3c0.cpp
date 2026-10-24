#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: r6xx_setLever__FPCc14eR6xx_Obj_Statff
// Address: 0x79b3c0 - 0x79b548
void r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79b3c0");
#endif

    switch (ctx->pc) {
        case 0x79b408u: goto label_79b408;
        case 0x79b438u: goto label_79b438;
        case 0x79b480u: goto label_79b480;
        case 0x79b4acu: goto label_79b4ac;
        case 0x79b4bcu: goto label_79b4bc;
        case 0x79b4ccu: goto label_79b4cc;
        case 0x79b4dcu: goto label_79b4dc;
        case 0x79b4f0u: goto label_79b4f0;
        case 0x79b504u: goto label_79b504;
        case 0x79b518u: goto label_79b518;
        case 0x79b52cu: goto label_79b52c;
        default: break;
    }

    ctx->pc = 0x79b3c0u;

    // 0x79b3c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79b3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79b3c4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79b3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79b3cc: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79b3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79b3d0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x79b3d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x79b3d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x79b3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3d8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x79b3d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79b3dc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x79b3dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x79b3e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79b3e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x79b3e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x79b3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b3ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3f0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b3f4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79B3F4u;
    {
        const bool branch_taken_0x79b3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3F4u;
        // 0x79b3f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3f4) {
            ctx->pc = 0x79B430u;
            goto label_79b430;
        }
    }
    ctx->pc = 0x79B3FCu;
    // 0x79b3fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79b3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b400: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b400u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b404: 0x0  nop
    ctx->pc = 0x79b404u;
    // NOP
label_79b408:
    // 0x79b408: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b40c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b410: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b414: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b418: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b41c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B41Cu;
    {
        const bool branch_taken_0x79b41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B41Cu;
        // 0x79b420: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b41c) {
            ctx->pc = 0x79B430u;
            goto label_79b430;
        }
    }
    ctx->pc = 0x79B424u;
    // 0x79b424: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b424u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b428: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B428u;
    {
        const bool branch_taken_0x79b428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b428) {
            ctx->pc = 0x79B42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B428u;
            // 0x79b42c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b408;
        }
    }
    ctx->pc = 0x79B430u;
label_79b430:
    // 0x79b430: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B430u;
    SET_GPR_U32(ctx, 31, 0x79B438u);
    ctx->pc = 0x79B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B430u;
    // 0x79b434: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B430u, 0x79B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B438u;
label_79b438:
    // 0x79b438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79b438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b43c: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x79B43Cu;
    {
        const bool branch_taken_0x79b43c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b43c) {
            ctx->pc = 0x79B440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B43Cu;
            // 0x79b440: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B530u;
            goto label_79b530;
        }
    }
    ctx->pc = 0x79B444u;
    // 0x79b444: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x79b444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x79b448: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x79b448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x79b44c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b450: 0x0  nop
    ctx->pc = 0x79b450u;
    // NOP
    // 0x79b454: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x79b454u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b458: 0x0  nop
    ctx->pc = 0x79b458u;
    // NOP
    // 0x79b45c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x79B45Cu;
    {
        const bool branch_taken_0x79b45c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B45Cu;
        // 0x79b460: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b45c) {
            ctx->pc = 0x79B484u;
            goto label_79b484;
        }
    }
    ctx->pc = 0x79B464u;
    // 0x79b464: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x79b464u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b468: 0x0  nop
    ctx->pc = 0x79b468u;
    // NOP
    // 0x79b46c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x79B46Cu;
    {
        const bool branch_taken_0x79b46c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B46Cu;
        // 0x79b470: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b46c) {
            ctx->pc = 0x79B484u;
            goto label_79b484;
        }
    }
    ctx->pc = 0x79B474u;
    // 0x79b474: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79b474u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79b478: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x79B478u;
    SET_GPR_U32(ctx, 31, 0x79B480u);
    ctx->pc = 0x79B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B478u;
    // 0x79b47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x79B478u, 0x79B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B480u;
label_79b480:
    // 0x79b480: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x79b480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79b484:
    // 0x79b484: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x79B484u;
    {
        const bool branch_taken_0x79b484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B484u;
        // 0x79b488: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b484) {
            ctx->pc = 0x79B52Cu;
            goto label_79b52c;
        }
    }
    ctx->pc = 0x79B48Cu;
    // 0x79b48c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x79b490: 0x2442bab0  addiu       $v0, $v0, -0x4550
    ctx->pc = 0x79b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949552));
    // 0x79b494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79b498: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b49c: 0x800008  jr          $a0
    ctx->pc = 0x79B49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79B4A4u: goto label_79b4a4;
            case 0x79B4B4u: goto label_79b4b4;
            case 0x79B4C4u: goto label_79b4c4;
            case 0x79B4D4u: goto label_79b4d4;
            case 0x79B4E4u: goto label_79b4e4;
            case 0x79B4F8u: goto label_79b4f8;
            case 0x79B50Cu: goto label_79b50c;
            case 0x79B520u: goto label_79b520;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B49Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79B4A4u;
label_79b4a4:
    // 0x79b4a4: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x79B4A4u;
    SET_GPR_U32(ctx, 31, 0x79B4ACu);
    ctx->pc = 0x79B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4A4u;
    // 0x79b4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D48u, 0x79B4A4u, 0x79B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4ACu;
label_79b4ac:
    // 0x79b4ac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79B4ACu;
    {
        const bool branch_taken_0x79b4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4ACu;
        // 0x79b4b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4ac) {
            ctx->pc = 0x79B530u;
            goto label_79b530;
        }
    }
    ctx->pc = 0x79B4B4u;
label_79b4b4:
    // 0x79b4b4: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x79B4B4u;
    SET_GPR_U32(ctx, 31, 0x79B4BCu);
    ctx->pc = 0x79B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4B4u;
    // 0x79b4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x79B4B4u, 0x79B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4BCu;
label_79b4bc:
    // 0x79b4bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x79B4BCu;
    {
        const bool branch_taken_0x79b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4BCu;
        // 0x79b4c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4bc) {
            ctx->pc = 0x79B530u;
            goto label_79b530;
        }
    }
    ctx->pc = 0x79B4C4u;
label_79b4c4:
    // 0x79b4c4: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x79B4C4u;
    SET_GPR_U32(ctx, 31, 0x79B4CCu);
    ctx->pc = 0x79B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4C4u;
    // 0x79b4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DA8u, 0x79B4C4u, 0x79B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4CCu;
label_79b4cc:
    // 0x79b4cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x79B4CCu;
    {
        const bool branch_taken_0x79b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4CCu;
        // 0x79b4d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4cc) {
            ctx->pc = 0x79B530u;
            goto label_79b530;
        }
    }
    ctx->pc = 0x79B4D4u;
label_79b4d4:
    // 0x79b4d4: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x79B4D4u;
    SET_GPR_U32(ctx, 31, 0x79B4DCu);
    ctx->pc = 0x79B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4D4u;
    // 0x79b4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x79B4D4u, 0x79B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4DCu;
label_79b4dc:
    // 0x79b4dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79B4DCu;
    {
        const bool branch_taken_0x79b4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4DCu;
        // 0x79b4e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4dc) {
            ctx->pc = 0x79B530u;
            goto label_79b530;
        }
    }
    ctx->pc = 0x79B4E4u;
label_79b4e4:
    // 0x79b4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4e8: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79B4E8u;
    SET_GPR_U32(ctx, 31, 0x79B4F0u);
    ctx->pc = 0x79B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4E8u;
    // 0x79b4ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79B4E8u, 0x79B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4F0u;
label_79b4f0:
    // 0x79b4f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79B4F0u;
    {
        const bool branch_taken_0x79b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4F0u;
        // 0x79b4f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4f0) {
            ctx->pc = 0x79B530u;
            goto label_79b530;
        }
    }
    ctx->pc = 0x79B4F8u;
label_79b4f8:
    // 0x79b4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4fc: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79B4FCu;
    SET_GPR_U32(ctx, 31, 0x79B504u);
    ctx->pc = 0x79B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4FCu;
    // 0x79b500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79B4FCu, 0x79B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B504u;
label_79b504:
    // 0x79b504: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79B504u;
    {
        const bool branch_taken_0x79b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B504u;
        // 0x79b508: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b504) {
            ctx->pc = 0x79B530u;
            goto label_79b530;
        }
    }
    ctx->pc = 0x79B50Cu;
label_79b50c:
    // 0x79b50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b510: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79B510u;
    SET_GPR_U32(ctx, 31, 0x79B518u);
    ctx->pc = 0x79B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B510u;
    // 0x79b514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79B510u, 0x79B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B518u;
label_79b518:
    // 0x79b518: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B518u;
    {
        const bool branch_taken_0x79b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B518u;
        // 0x79b51c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b518) {
            ctx->pc = 0x79B530u;
            goto label_79b530;
        }
    }
    ctx->pc = 0x79B520u;
label_79b520:
    // 0x79b520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b524: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79B524u;
    SET_GPR_U32(ctx, 31, 0x79B52Cu);
    ctx->pc = 0x79B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B524u;
    // 0x79b528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79B524u, 0x79B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B52Cu;
label_79b52c:
    // 0x79b52c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79b52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79b530:
    // 0x79b530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79b530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b538: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x79b538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79b53c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x79b53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b540: 0x3e00008  jr          $ra
    ctx->pc = 0x79B540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B540u;
        // 0x79b544: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B548u;
}
} // namespace gh_r601
