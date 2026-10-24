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

// Function: func_0017FDA0
// Address: 0x17fda0 - 0x17ff68
void func_0017FDA0_0x17fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017FDA0_0x17fda0");
#endif

    switch (ctx->pc) {
        case 0x17fe08u: goto label_17fe08;
        case 0x17fe84u: goto label_17fe84;
        case 0x17fee0u: goto label_17fee0;
        case 0x17ff08u: goto label_17ff08;
        case 0x17ff14u: goto label_17ff14;
        default: break;
    }

    ctx->pc = 0x17fda0u;

    // 0x17fda0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17fda4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x17fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x17fda8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x17fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x17fdac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17fdacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdb0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x17fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x17fdb4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x17fdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x17fdb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17fdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17fdbc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17fdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17fdc0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x17fdc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17fdc4: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17fdc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x17fdc8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FDC8u;
    {
        const bool branch_taken_0x17fdc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDC8u;
        // 0x17fdcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdc8) {
            ctx->pc = 0x17FDE0u;
            goto label_17fde0;
        }
    }
    ctx->pc = 0x17FDD0u;
    // 0x17fdd0: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x17FDD0u;
    {
        const bool branch_taken_0x17fdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDD0u;
        // 0x17fdd4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdd0) {
            ctx->pc = 0x17FEF4u;
            goto label_17fef4;
        }
    }
    ctx->pc = 0x17FDD8u;
    // 0x17fdd8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x17FDD8u;
    {
        const bool branch_taken_0x17fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDD8u;
        // 0x17fddc: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdd8) {
            ctx->pc = 0x17FF4Cu;
            goto label_17ff4c;
        }
    }
    ctx->pc = 0x17FDE0u;
label_17fde0:
    // 0x17fde0: 0x8e230a24  lw          $v1, 0xA24($s1)
    ctx->pc = 0x17fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2596)));
    // 0x17fde4: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x17FDE4u;
    {
        const bool branch_taken_0x17fde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDE4u;
        // 0x17fde8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fde4) {
            ctx->pc = 0x17FF44u;
            goto label_17ff44;
        }
    }
    ctx->pc = 0x17FDECu;
    // 0x17fdec: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x17fdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x17fdf0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17fdf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17fdf4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17fdf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17fdf8: 0x24537ff0  addiu       $s3, $v0, 0x7FF0
    ctx->pc = 0x17fdf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
    // 0x17fdfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17fdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe00: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x17fe00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17fe04: 0x26320600  addiu       $s2, $s1, 0x600
    ctx->pc = 0x17fe04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
label_17fe08:
    // 0x17fe08: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x17fe08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17fe0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17fe0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe10: 0x6000002  bltz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FE10u;
    {
        const bool branch_taken_0x17fe10 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x17FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE10u;
        // 0x17fe14: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe10) {
            ctx->pc = 0x17FE1Cu;
            goto label_17fe1c;
        }
    }
    ctx->pc = 0x17FE18u;
    // 0x17fe18: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x17fe18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17fe1c:
    // 0x17fe1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17fe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17fe20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FE20u;
    {
        const bool branch_taken_0x17fe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE20u;
        // 0x17fe24: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe20) {
            ctx->pc = 0x17FE38u;
            goto label_17fe38;
        }
    }
    ctx->pc = 0x17FE28u;
    // 0x17fe28: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x17fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x17fe2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fe30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17FE30u;
    {
        const bool branch_taken_0x17fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE30u;
        // 0x17fe34: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe30) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FE38u;
label_17fe38:
    // 0x17fe38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17fe38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17fe3c:
    // 0x17fe3c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17FE3Cu;
    {
        const bool branch_taken_0x17fe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE3Cu;
        // 0x17fe40: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe3c) {
            ctx->pc = 0x17FE84u;
            goto label_17fe84;
        }
    }
    ctx->pc = 0x17FE44u;
    // 0x17fe44: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x17fe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17fe48: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x17fe48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17fe4c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17fe4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fe50: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17fe50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17fe54: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17fe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17fe58: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x17fe58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17fe5c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17fe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17fe60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17fe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fe64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17fe68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe6c: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x17fe6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x17fe70: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x17fe70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17fe74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17fe74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17fe78: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x17fe78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x17fe7c: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x17FE7Cu;
    SET_GPR_U32(ctx, 31, 0x17FE84u);
    ctx->pc = 0x17FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE7Cu;
    // 0x17fe80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x17FE7Cu, 0x17FE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE84u;
label_17fe84:
    // 0x17fe84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17fe84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17fe88: 0x26520160  addiu       $s2, $s2, 0x160
    ctx->pc = 0x17fe88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x17fe8c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x17fe8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17fe90: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x17FE90u;
    {
        const bool branch_taken_0x17fe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE90u;
        // 0x17fe94: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe90) {
            ctx->pc = 0x17FE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fe08;
        }
    }
    ctx->pc = 0x17FE98u;
    // 0x17fe98: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x17fe98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17fe9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fea0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17fea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17fea4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FEA4u;
    {
        const bool branch_taken_0x17fea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEA4u;
        // 0x17fea8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fea4) {
            ctx->pc = 0x17FEB8u;
            goto label_17feb8;
        }
    }
    ctx->pc = 0x17FEACu;
    // 0x17feac: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x17feacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x17feb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17FEB0u;
    {
        const bool branch_taken_0x17feb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEB0u;
        // 0x17feb4: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17feb0) {
            ctx->pc = 0x17FEBCu;
            goto label_17febc;
        }
    }
    ctx->pc = 0x17FEB8u;
label_17feb8:
    // 0x17feb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17feb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17febc:
    // 0x17febc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17febcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17fec0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17fec4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x17fec8: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x17fec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x17fecc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17feccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fed0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17fed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fed4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17fed4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fed8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x17FED8u;
    SET_GPR_U32(ctx, 31, 0x17FEE0u);
    ctx->pc = 0x17FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FED8u;
    // 0x17fedc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x17FED8u, 0x17FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEE0u;
label_17fee0:
    // 0x17fee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fee4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17fee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fee8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x17fee8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x17feec: 0xa2230a28  sb          $v1, 0xA28($s1)
    ctx->pc = 0x17feecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2600), (uint8_t)GPR_U32(ctx, 3));
    // 0x17fef0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17fef0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17fef4:
    // 0x17fef4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17fef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fef8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17fef8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fefc: 0x26300600  addiu       $s0, $s1, 0x600
    ctx->pc = 0x17fefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x17ff00: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x17ff00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ff04: 0x0  nop
    ctx->pc = 0x17ff04u;
    // NOP
label_17ff08:
    // 0x17ff08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ff08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff0c: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x17FF0Cu;
    SET_GPR_U32(ctx, 31, 0x17FF14u);
    ctx->pc = 0x17FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF0Cu;
    // 0x17ff10: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x17FF0Cu, 0x17FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF14u;
label_17ff14:
    // 0x17ff14: 0x26100160  addiu       $s0, $s0, 0x160
    ctx->pc = 0x17ff14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x17ff18: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17FF18u;
    {
        const bool branch_taken_0x17ff18 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x17FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF18u;
        // 0x17ff1c: 0x282980b  movn        $s3, $s4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff18) {
            ctx->pc = 0x17FF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff08;
        }
    }
    ctx->pc = 0x17FF20u;
    // 0x17ff20: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x17FF20u;
    {
        const bool branch_taken_0x17ff20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF20u;
        // 0x17ff24: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff20) {
            ctx->pc = 0x17FF48u;
            goto label_17ff48;
        }
    }
    ctx->pc = 0x17FF28u;
    // 0x17ff28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ff2c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17ff2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ff30: 0xae220a24  sw          $v0, 0xA24($s1)
    ctx->pc = 0x17ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2596), GPR_U32(ctx, 2));
    // 0x17ff34: 0xa2200a28  sb          $zero, 0xA28($s1)
    ctx->pc = 0x17ff34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2600), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ff38: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x17ff38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ff3c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17ff3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ff40: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17ff40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_17ff44:
    // 0x17ff44: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x17ff44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17ff48:
    // 0x17ff48: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x17ff48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17ff4c:
    // 0x17ff4c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x17ff4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ff50: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x17ff50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ff54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17ff54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ff58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17ff58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ff5c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x17ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ff60: 0x3e00008  jr          $ra
    ctx->pc = 0x17FF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF60u;
        // 0x17ff64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FF68u;
}
