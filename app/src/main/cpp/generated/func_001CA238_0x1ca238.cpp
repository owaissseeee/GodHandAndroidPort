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

// Function: func_001CA238
// Address: 0x1ca238 - 0x1ca5c8
void func_001CA238_0x1ca238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CA238_0x1ca238");
#endif

    switch (ctx->pc) {
        case 0x1ca264u: goto label_1ca264;
        case 0x1ca2f0u: goto label_1ca2f0;
        case 0x1ca314u: goto label_1ca314;
        case 0x1ca334u: goto label_1ca334;
        case 0x1ca35cu: goto label_1ca35c;
        case 0x1ca370u: goto label_1ca370;
        case 0x1ca440u: goto label_1ca440;
        case 0x1ca47cu: goto label_1ca47c;
        case 0x1ca4a0u: goto label_1ca4a0;
        case 0x1ca4b8u: goto label_1ca4b8;
        case 0x1ca4d4u: goto label_1ca4d4;
        case 0x1ca4e0u: goto label_1ca4e0;
        case 0x1ca524u: goto label_1ca524;
        case 0x1ca544u: goto label_1ca544;
        case 0x1ca56cu: goto label_1ca56c;
        default: break;
    }

    ctx->pc = 0x1ca238u;

    // 0x1ca238: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1ca238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1ca23c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1ca23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1ca240: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1ca240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1ca244: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1ca244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1ca248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca24c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1ca24cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1ca250: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1ca250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1ca254: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1ca254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1ca258: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ca258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ca25c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CA25Cu;
    SET_GPR_U32(ctx, 31, 0x1CA264u);
    ctx->pc = 0x1CA260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA25Cu;
    // 0x1ca260: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CA25Cu, 0x1CA264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA264u;
label_1ca264:
    // 0x1ca264: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1ca264u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1ca268: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1ca268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ca26c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1ca26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca270: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ca270u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca274: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ca274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca278: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1ca278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ca27c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1ca27cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ca280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca284: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1CA284u;
    {
        const bool branch_taken_0x1ca284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA284u;
        // 0x1ca288: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca284) {
            ctx->pc = 0x1CA398u;
            goto label_1ca398;
        }
    }
    ctx->pc = 0x1CA28Cu;
    // 0x1ca28c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1ca28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ca290: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA290u;
    {
        const bool branch_taken_0x1ca290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca290) {
            ctx->pc = 0x1CA294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA290u;
            // 0x1ca294: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA2A8u;
            goto label_1ca2a8;
        }
    }
    ctx->pc = 0x1CA298u;
    // 0x1ca298: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA298u;
    {
        const bool branch_taken_0x1ca298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA298u;
        // 0x1ca29c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca298) {
            ctx->pc = 0x1CA2C0u;
            goto label_1ca2c0;
        }
    }
    ctx->pc = 0x1CA2A0u;
    // 0x1ca2a0: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x1CA2A0u;
    {
        const bool branch_taken_0x1ca2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2A0u;
        // 0x1ca2a4: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2a0) {
            ctx->pc = 0x1CA5B0u;
            goto label_1ca5b0;
        }
    }
    ctx->pc = 0x1CA2A8u;
label_1ca2a8:
    // 0x1ca2a8: 0x10620097  beq         $v1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x1CA2A8u;
    {
        const bool branch_taken_0x1ca2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2A8u;
        // 0x1ca2ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2a8) {
            ctx->pc = 0x1CA508u;
            goto label_1ca508;
        }
    }
    ctx->pc = 0x1CA2B0u;
    // 0x1ca2b0: 0x106200b3  beq         $v1, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1CA2B0u;
    {
        const bool branch_taken_0x1ca2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2B0u;
        // 0x1ca2b4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2b0) {
            ctx->pc = 0x1CA580u;
            goto label_1ca580;
        }
    }
    ctx->pc = 0x1CA2B8u;
    // 0x1ca2b8: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1CA2B8u;
    {
        const bool branch_taken_0x1ca2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2B8u;
        // 0x1ca2bc: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2b8) {
            ctx->pc = 0x1CA5B0u;
            goto label_1ca5b0;
        }
    }
    ctx->pc = 0x1CA2C0u;
label_1ca2c0:
    // 0x1ca2c0: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1ca2c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1ca2c4: 0x2402037e  addiu       $v0, $zero, 0x37E
    ctx->pc = 0x1ca2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 894));
    // 0x1ca2c8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA2C8u;
    {
        const bool branch_taken_0x1ca2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2C8u;
        // 0x1ca2cc: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2c8) {
            ctx->pc = 0x1CA2F8u;
            goto label_1ca2f8;
        }
    }
    ctx->pc = 0x1CA2D0u;
    // 0x1ca2d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1ca2d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca2d4: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x1ca2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1ca2d8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1ca2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ca2dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ca2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2e4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1ca2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca2e8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CA2E8u;
    SET_GPR_U32(ctx, 31, 0x1CA2F0u);
    ctx->pc = 0x1CA2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2E8u;
    // 0x1ca2ec: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CA2E8u, 0x1CA2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2F0u;
label_1ca2f0:
    // 0x1ca2f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA2F0u;
    {
        const bool branch_taken_0x1ca2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2F0u;
        // 0x1ca2f4: 0xc62d0640  lwc1        $f13, 0x640($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2f0) {
            ctx->pc = 0x1CA338u;
            goto label_1ca338;
        }
    }
    ctx->pc = 0x1CA2F8u;
label_1ca2f8:
    // 0x1ca2f8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1ca2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca2fc: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1ca2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1ca300: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ca300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca308: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca30c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CA30Cu;
    SET_GPR_U32(ctx, 31, 0x1CA314u);
    ctx->pc = 0x1CA310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA30Cu;
    // 0x1ca310: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CA30Cu, 0x1CA314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA314u;
label_1ca314:
    // 0x1ca314: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1ca314u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca318: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1ca318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1ca31c: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x1ca31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1ca320: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ca320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca328: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1ca328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca32c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CA32Cu;
    SET_GPR_U32(ctx, 31, 0x1CA334u);
    ctx->pc = 0x1CA330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA32Cu;
    // 0x1ca330: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CA32Cu, 0x1CA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA334u;
label_1ca334:
    // 0x1ca334: 0xc62d0640  lwc1        $f13, 0x640($s1)
    ctx->pc = 0x1ca334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ca338:
    // 0x1ca338: 0xc6200648  lwc1        $f0, 0x648($s1)
    ctx->pc = 0x1ca338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca33c: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x1ca33cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1ca340: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1ca340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1ca344: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x1ca344u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1ca348: 0x0  nop
    ctx->pc = 0x1ca348u;
    // NOP
    // 0x1ca34c: 0x0  nop
    ctx->pc = 0x1ca34cu;
    // NOP
    // 0x1ca350: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1ca350u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x1ca354: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CA354u;
    SET_GPR_U32(ctx, 31, 0x1CA35Cu);
    ctx->pc = 0x1CA358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA354u;
    // 0x1ca358: 0xc62c0644  lwc1        $f12, 0x644($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CA354u, 0x1CA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA35Cu;
label_1ca35c:
    // 0x1ca35c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ca35cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ca360: 0xc62c0640  lwc1        $f12, 0x640($s1)
    ctx->pc = 0x1ca360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca364: 0xc62d0648  lwc1        $f13, 0x648($s1)
    ctx->pc = 0x1ca364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca368: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CA368u;
    SET_GPR_U32(ctx, 31, 0x1CA370u);
    ctx->pc = 0x1CA36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA368u;
    // 0x1ca36c: 0xe6200100  swc1        $f0, 0x100($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CA368u, 0x1CA370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA370u;
label_1ca370:
    // 0x1ca370: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1ca370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ca374: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ca374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca378: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1ca378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1ca37c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca380: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca384: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1ca384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1ca388: 0xe6210660  swc1        $f1, 0x660($s1)
    ctx->pc = 0x1ca388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
    // 0x1ca38c: 0xa2230531  sb          $v1, 0x531($s1)
    ctx->pc = 0x1ca38cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca390: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1ca390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca394: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1ca394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
label_1ca398:
    // 0x1ca398: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ca398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ca39c: 0x26240640  addiu       $a0, $s1, 0x640
    ctx->pc = 0x1ca39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1ca3a0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1ca3a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca3a4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1ca3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca3a8: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1ca3a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca3ac: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1ca3acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ca3b0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ca3b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ca3b4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ca3b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ca3b8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1ca3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca3bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ca3bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca3c0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ca3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca3c4: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1ca3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca3c8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1ca3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ca3cc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ca3ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca3d0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ca3d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca3d4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ca3d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ca3d8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ca3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ca3dc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1ca3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca3e0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ca3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ca3e4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA3E4u;
    {
        const bool branch_taken_0x1ca3e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3E4u;
        // 0x1ca3e8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3e4) {
            ctx->pc = 0x1CA404u;
            goto label_1ca404;
        }
    }
    ctx->pc = 0x1CA3ECu;
    // 0x1ca3ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ca3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca3f0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ca3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ca3f4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ca3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca3f8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1ca3f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1ca3fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ca3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca400: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1ca400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1ca404:
    // 0x1ca404: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1ca404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ca408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca40c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ca40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ca410: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ca410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ca414: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ca414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ca418: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ca418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca41c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ca41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ca420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca424: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1ca424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1ca428: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1ca428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca42c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ca42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1ca430: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1ca430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1ca434: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca434u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca438: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CA438u;
    SET_GPR_U32(ctx, 31, 0x1CA440u);
    ctx->pc = 0x1CA43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA438u;
    // 0x1ca43c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CA438u, 0x1CA440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA440u;
label_1ca440:
    // 0x1ca440: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CA440u;
    {
        const bool branch_taken_0x1ca440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca440) {
            ctx->pc = 0x1CA444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA440u;
            // 0x1ca444: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA474u;
            goto label_1ca474;
        }
    }
    ctx->pc = 0x1CA448u;
    // 0x1ca448: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1ca448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca44c: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA44Cu;
    {
        const bool branch_taken_0x1ca44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1CA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA44Cu;
        // 0x1ca450: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca44c) {
            ctx->pc = 0x1CA468u;
            goto label_1ca468;
        }
    }
    ctx->pc = 0x1CA454u;
    // 0x1ca454: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ca454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ca458: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ca458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca45c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1ca45cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ca460: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ca460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca464: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ca464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ca468:
    // 0x1ca468: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ca468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca46c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1ca46cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca470: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1ca470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
label_1ca474:
    // 0x1ca474: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CA474u;
    SET_GPR_U32(ctx, 31, 0x1CA47Cu);
    ctx->pc = 0x1CA478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA474u;
    // 0x1ca478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CA474u, 0x1CA47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA47Cu;
label_1ca47c:
    // 0x1ca47c: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1ca47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1ca480: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1ca480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1ca484: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ca484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca488: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca48c: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1ca48cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ca490: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1ca490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1ca494: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1ca494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1ca498: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CA498u;
    SET_GPR_U32(ctx, 31, 0x1CA4A0u);
    ctx->pc = 0x1CA49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA498u;
    // 0x1ca49c: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CA498u, 0x1CA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4A0u;
label_1ca4a0:
    // 0x1ca4a0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ca4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1ca4a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ca4a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ca4a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ca4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca4ac: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1ca4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1ca4b0: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CA4B0u;
    SET_GPR_U32(ctx, 31, 0x1CA4B8u);
    ctx->pc = 0x1CA4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4B0u;
    // 0x1ca4b4: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CA4B0u, 0x1CA4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4B8u;
label_1ca4b8:
    // 0x1ca4b8: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1ca4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1ca4bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ca4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca4c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ca4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c4: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x1ca4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ca4c8: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1ca4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1ca4cc: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CA4CCu;
    SET_GPR_U32(ctx, 31, 0x1CA4D4u);
    ctx->pc = 0x1CA4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4CCu;
    // 0x1ca4d0: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CA4CCu, 0x1CA4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4D4u;
label_1ca4d4:
    // 0x1ca4d4: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1ca4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca4d8: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1CA4D8u;
    SET_GPR_U32(ctx, 31, 0x1CA4E0u);
    ctx->pc = 0x1CA4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4D8u;
    // 0x1ca4dc: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1CA4D8u, 0x1CA4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4E0u;
label_1ca4e0:
    // 0x1ca4e0: 0xc6200660  lwc1        $f0, 0x660($s1)
    ctx->pc = 0x1ca4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca4e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ca4e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca4e8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1ca4e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1ca4ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ca4ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca4f0: 0x0  nop
    ctx->pc = 0x1ca4f0u;
    // NOP
    // 0x1ca4f4: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x1CA4F4u;
    {
        const bool branch_taken_0x1ca4f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4F4u;
        // 0x1ca4f8: 0xe6200660  swc1        $f0, 0x660($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4f4) {
            ctx->pc = 0x1CA5A8u;
            goto label_1ca5a8;
        }
    }
    ctx->pc = 0x1CA4FCu;
    // 0x1ca4fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ca4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca500: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1CA500u;
    {
        const bool branch_taken_0x1ca500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA500u;
        // 0x1ca504: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca500) {
            ctx->pc = 0x1CA5A8u;
            goto label_1ca5a8;
        }
    }
    ctx->pc = 0x1CA508u;
label_1ca508:
    // 0x1ca508: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1ca508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1ca50c: 0x240203ae  addiu       $v0, $zero, 0x3AE
    ctx->pc = 0x1ca50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 942));
    // 0x1ca510: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA510u;
    {
        const bool branch_taken_0x1ca510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA510u;
        // 0x1ca514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca510) {
            ctx->pc = 0x1CA524u;
            goto label_1ca524;
        }
    }
    ctx->pc = 0x1CA518u;
    // 0x1ca518: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ca518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca51c: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1CA51Cu;
    SET_GPR_U32(ctx, 31, 0x1CA524u);
    ctx->pc = 0x1CA520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA51Cu;
    // 0x1ca520: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1CA51Cu, 0x1CA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA524u;
label_1ca524:
    // 0x1ca524: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1ca524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ca528: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1ca528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1ca52c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ca52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca530: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ca530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca534: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1ca534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1ca538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca53c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1CA53Cu;
    SET_GPR_U32(ctx, 31, 0x1CA544u);
    ctx->pc = 0x1CA540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA53Cu;
    // 0x1ca540: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1CA53Cu, 0x1CA544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA544u;
label_1ca544:
    // 0x1ca544: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ca544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ca548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca54c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ca54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ca550: 0x24060101  addiu       $a2, $zero, 0x101
    ctx->pc = 0x1ca550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1ca554: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ca554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca558: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca55c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca55cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca560: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca560u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca564: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CA564u;
    SET_GPR_U32(ctx, 31, 0x1CA56Cu);
    ctx->pc = 0x1CA568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA564u;
    // 0x1ca568: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CA564u, 0x1CA56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA56Cu;
label_1ca56c:
    // 0x1ca56c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1ca56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ca570: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1ca570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ca574: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x1ca574u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ca578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ca578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ca57c: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x1ca57cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_1ca580:
    // 0x1ca580: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x1ca580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x1ca584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ca584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ca588: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1ca588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ca58c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA58Cu;
    {
        const bool branch_taken_0x1ca58c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1CA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA58Cu;
        // 0x1ca590: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca58c) {
            ctx->pc = 0x1CA5A8u;
            goto label_1ca5a8;
        }
    }
    ctx->pc = 0x1CA594u;
    // 0x1ca594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca598: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1ca598u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca59c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x1ca59cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca5a0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1ca5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca5a4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1ca5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ca5a8:
    // 0x1ca5a8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1ca5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ca5ac: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1ca5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1ca5b0:
    // 0x1ca5b0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1ca5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca5b4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1ca5b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca5b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ca5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ca5bc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1ca5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5C0u;
        // 0x1ca5c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA5C8u;
}
