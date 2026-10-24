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

// Function: func_002F34B0
// Address: 0x2f34b0 - 0x2f3dc0
void func_002F34B0_0x2f34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F34B0_0x2f34b0");
#endif

    switch (ctx->pc) {
        case 0x2f3544u: goto label_2f3544;
        case 0x2f358cu: goto label_2f358c;
        case 0x2f35d8u: goto label_2f35d8;
        case 0x2f35fcu: goto label_2f35fc;
        case 0x2f3614u: goto label_2f3614;
        case 0x2f362cu: goto label_2f362c;
        case 0x2f3734u: goto label_2f3734;
        case 0x2f3780u: goto label_2f3780;
        case 0x2f3840u: goto label_2f3840;
        case 0x2f3878u: goto label_2f3878;
        case 0x2f3888u: goto label_2f3888;
        case 0x2f38c8u: goto label_2f38c8;
        case 0x2f3d88u: goto label_2f3d88;
        default: break;
    }

    ctx->pc = 0x2f34b0u;

    // 0x2f34b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f34b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f34b4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2f34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2f34b8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2f34b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2f34bc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f34bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2f34c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f34c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34c4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2f34c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2f34c8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2f34c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2f34cc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2f34ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2f34d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f34d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f34d4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2f34d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2f34d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f34d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f34dc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f34dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2f34e0: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x2f34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2f34e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f34e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f34e8: 0x14400228  bnez        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x2F34E8u;
    {
        const bool branch_taken_0x2f34e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34E8u;
        // 0x2f34ec: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34e8) {
            ctx->pc = 0x2F3D8Cu;
            goto label_2f3d8c;
        }
    }
    ctx->pc = 0x2F34F0u;
    // 0x2f34f0: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x2f34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x2f34f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F34F4u;
    {
        const bool branch_taken_0x2f34f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34F4u;
        // 0x2f34f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34f4) {
            ctx->pc = 0x2F351Cu;
            goto label_2f351c;
        }
    }
    ctx->pc = 0x2F34FCu;
    // 0x2f34fc: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2f34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2f3500: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f3500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f3504: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3504u;
    {
        const bool branch_taken_0x2f3504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3504u;
        // 0x2f3508: 0x311fa  dsrl        $v0, $v1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3504) {
            ctx->pc = 0x2F351Cu;
            goto label_2f351c;
        }
    }
    ctx->pc = 0x2F350Cu;
    // 0x2f350c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f350cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3510: 0x1040021f  beqz        $v0, . + 4 + (0x21F << 2)
    ctx->pc = 0x2F3510u;
    {
        const bool branch_taken_0x2f3510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3510u;
        // 0x2f3514: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3510) {
            ctx->pc = 0x2F3D90u;
            goto label_2f3d90;
        }
    }
    ctx->pc = 0x2F3518u;
    // 0x2f3518: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f3518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f351c:
    // 0x2f351c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2f351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f3520: 0x8e640120  lw          $a0, 0x120($s3)
    ctx->pc = 0x2f3520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x2f3524: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F3524u;
    {
        const bool branch_taken_0x2f3524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3524u;
        // 0x2f3528: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3524) {
            ctx->pc = 0x2F355Cu;
            goto label_2f355c;
        }
    }
    ctx->pc = 0x2F352Cu;
    // 0x2f352c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2f352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f3530: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2f3530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2f3534: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3534u;
    {
        const bool branch_taken_0x2f3534 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2f3534) {
            ctx->pc = 0x2F3538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3534u;
            // 0x2f3538: 0xae600120  sw          $zero, 0x120($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3558u;
            goto label_2f3558;
        }
    }
    ctx->pc = 0x2F353Cu;
    // 0x2f353c: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2F353Cu;
    SET_GPR_U32(ctx, 31, 0x2F3544u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2F353Cu, 0x2F3544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3544u;
label_2f3544:
    // 0x2f3544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f3544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3548: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3548u;
    {
        const bool branch_taken_0x2f3548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f3548) {
            ctx->pc = 0x2F354Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3548u;
            // 0x2f354c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F355Cu;
            goto label_2f355c;
        }
    }
    ctx->pc = 0x2F3550u;
    // 0x2f3550: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3550u;
    {
        const bool branch_taken_0x2f3550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3550u;
        // 0x2f3554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3550) {
            ctx->pc = 0x2F3560u;
            goto label_2f3560;
        }
    }
    ctx->pc = 0x2F3558u;
label_2f3558:
    // 0x2f3558: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f3558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f355c:
    // 0x2f355c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3560:
    // 0x2f3560: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F3560u;
    {
        const bool branch_taken_0x2f3560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3560) {
            ctx->pc = 0x2F3564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3560u;
            // 0x2f3564: 0x8e62011c  lw          $v0, 0x11C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F35DCu;
            goto label_2f35dc;
        }
    }
    ctx->pc = 0x2F3568u;
    // 0x2f3568: 0x8e630120  lw          $v1, 0x120($s3)
    ctx->pc = 0x2f3568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x2f356c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2f356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f3570: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3574: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F3574u;
    {
        const bool branch_taken_0x2f3574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3574u;
        // 0x2f3578: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3574) {
            ctx->pc = 0x2F35D8u;
            goto label_2f35d8;
        }
    }
    ctx->pc = 0x2F357Cu;
    // 0x2f357c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f357cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3584: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2F3584u;
    SET_GPR_U32(ctx, 31, 0x2F358Cu);
    ctx->pc = 0x2F3588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3584u;
    // 0x2f3588: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2F3584u, 0x2F358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F358Cu;
label_2f358c:
    // 0x2f358c: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F358Cu;
    {
        const bool branch_taken_0x2f358c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F358Cu;
        // 0x2f3590: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f358c) {
            ctx->pc = 0x2F35A8u;
            goto label_2f35a8;
        }
    }
    ctx->pc = 0x2F3594u;
    // 0x2f3594: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f3594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3598: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2f3598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f359c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f359cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f35a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f35a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f35a4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f35a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f35a8:
    // 0x2f35a8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f35a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f35ac: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f35acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f35b0: 0x8e620120  lw          $v0, 0x120($s3)
    ctx->pc = 0x2f35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x2f35b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f35b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f35b8: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f35b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f35bc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f35bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f35c0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f35c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f35c4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f35c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f35c8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f35c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f35cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f35ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35d0: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2F35D0u;
    SET_GPR_U32(ctx, 31, 0x2F35D8u);
    ctx->pc = 0x2F35D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35D0u;
    // 0x2f35d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2F35D0u, 0x2F35D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35D8u;
label_2f35d8:
    // 0x2f35d8: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x2f35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_2f35dc:
    // 0x2f35dc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2f35dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2f35e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f35e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f35e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F35E4u;
    {
        const bool branch_taken_0x2f35e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35E4u;
        // 0x2f35e8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f35e4) {
            ctx->pc = 0x2F3604u;
            goto label_2f3604;
        }
    }
    ctx->pc = 0x2F35ECu;
    // 0x2f35ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f35ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35f0: 0x2445b6a0  addiu       $a1, $v0, -0x4960
    ctx->pc = 0x2f35f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948512));
    // 0x2f35f4: 0xc0bfa28  jal         func_2FE8A0
    ctx->pc = 0x2F35F4u;
    SET_GPR_U32(ctx, 31, 0x2F35FCu);
    ctx->pc = 0x2F35F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35F4u;
    // 0x2f35f8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8A0u, 0x2F35F4u, 0x2F35FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35FCu;
label_2f35fc:
    // 0x2f35fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F35FCu;
    {
        const bool branch_taken_0x2f35fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35FCu;
        // 0x2f3600: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f35fc) {
            ctx->pc = 0x2F3618u;
            goto label_2f3618;
        }
    }
    ctx->pc = 0x2F3604u;
label_2f3604:
    // 0x2f3604: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f3604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3608: 0x2445b6a0  addiu       $a1, $v0, -0x4960
    ctx->pc = 0x2f3608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948512));
    // 0x2f360c: 0xc0bf836  jal         func_2FE0D8
    ctx->pc = 0x2F360Cu;
    SET_GPR_U32(ctx, 31, 0x2F3614u);
    ctx->pc = 0x2F3610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F360Cu;
    // 0x2f3610: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D8u, 0x2F360Cu, 0x2F3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3614u;
label_2f3614:
    // 0x2f3614: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f3614u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3618:
    // 0x2f3618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f361c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F361Cu;
    {
        const bool branch_taken_0x2f361c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F361Cu;
        // 0x2f3620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f361c) {
            ctx->pc = 0x2F362Cu;
            goto label_2f362c;
        }
    }
    ctx->pc = 0x2F3624u;
    // 0x2f3624: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2F3624u;
    SET_GPR_U32(ctx, 31, 0x2F362Cu);
    ctx->pc = 0x2F3628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3624u;
    // 0x2f3628: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2F3624u, 0x2F362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F362Cu;
label_2f362c:
    // 0x2f362c: 0x6a001d7  bltz        $s5, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x2F362Cu;
    {
        const bool branch_taken_0x2f362c = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x2F3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F362Cu;
        // 0x2f3630: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f362c) {
            ctx->pc = 0x2F3D8Cu;
            goto label_2f3d8c;
        }
    }
    ctx->pc = 0x2F3634u;
    // 0x2f3634: 0x9262024b  lbu         $v0, 0x24B($s3)
    ctx->pc = 0x2f3634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x2f3638: 0x9263024a  lbu         $v1, 0x24A($s3)
    ctx->pc = 0x2f3638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x2f363c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f363cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3640: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f3640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3644: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f3644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f3648: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f364c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F364Cu;
    {
        const bool branch_taken_0x2f364c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F364Cu;
        // 0x2f3650: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f364c) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F3654u;
    // 0x2f3654: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2f3654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2f3658: 0x2a5102a  slt         $v0, $s5, $a1
    ctx->pc = 0x2f3658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f365c: 0x144001cc  bnez        $v0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x2F365Cu;
    {
        const bool branch_taken_0x2f365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F365Cu;
        // 0x2f3660: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f365c) {
            ctx->pc = 0x2F3D90u;
            goto label_2f3d90;
        }
    }
    ctx->pc = 0x2F3664u;
    // 0x2f3664: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x2f3664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f3668: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3668u;
    {
        const bool branch_taken_0x2f3668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3668u;
        // 0x2f366c: 0x2a51023  subu        $v0, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3668) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F3670u;
    // 0x2f3670: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2f3670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2f3674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3678: 0x0  nop
    ctx->pc = 0x2f3678u;
    // NOP
    // 0x2f367c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f367cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f3680: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3684: 0x0  nop
    ctx->pc = 0x2f3684u;
    // NOP
    // 0x2f3688: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f3688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f368c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2f368cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_2f3690:
    // 0x2f3690: 0x96630276  lhu         $v1, 0x276($s3)
    ctx->pc = 0x2f3690u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 630)));
    // 0x2f3694: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x2f3694u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f3698: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F3698u;
    {
        const bool branch_taken_0x2f3698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3698u;
        // 0x2f369c: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3698) {
            ctx->pc = 0x2F36E0u;
            goto label_2f36e0;
        }
    }
    ctx->pc = 0x2F36A0u;
    // 0x2f36a0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2f36a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2f36a4: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x2f36a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2f36a8: 0x544001b8  bnel        $v0, $zero, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x2F36A8u;
    {
        const bool branch_taken_0x2f36a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f36a8) {
            ctx->pc = 0x2F36ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F36A8u;
            // 0x2f36ac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3D8Cu;
            goto label_2f3d8c;
        }
    }
    ctx->pc = 0x2F36B0u;
    // 0x2f36b0: 0xb5102a  slt         $v0, $a1, $s5
    ctx->pc = 0x2f36b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2f36b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F36B4u;
    {
        const bool branch_taken_0x2f36b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F36B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36B4u;
        // 0x2f36b8: 0x2a41023  subu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36b4) {
            ctx->pc = 0x2F36E0u;
            goto label_2f36e0;
        }
    }
    ctx->pc = 0x2F36BCu;
    // 0x2f36bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f36bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f36c0: 0x0  nop
    ctx->pc = 0x2f36c0u;
    // NOP
    // 0x2f36c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f36c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f36c8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2f36c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2f36cc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2f36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2f36d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f36d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f36d4: 0x0  nop
    ctx->pc = 0x2f36d4u;
    // NOP
    // 0x2f36d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f36d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f36dc: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2f36dcu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2f36e0:
    // 0x2f36e0: 0x9262024c  lbu         $v0, 0x24C($s3)
    ctx->pc = 0x2f36e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 588)));
    // 0x2f36e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F36E4u;
    {
        const bool branch_taken_0x2f36e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36E4u;
        // 0x2f36e8: 0x8e640120  lw          $a0, 0x120($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36e4) {
            ctx->pc = 0x2F3714u;
            goto label_2f3714;
        }
    }
    ctx->pc = 0x2F36ECu;
    // 0x2f36ec: 0x9263024d  lbu         $v1, 0x24D($s3)
    ctx->pc = 0x2f36ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 589)));
    // 0x2f36f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f36f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f36f4: 0x0  nop
    ctx->pc = 0x2f36f4u;
    // NOP
    // 0x2f36f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f36f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f36fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3704: 0x0  nop
    ctx->pc = 0x2f3704u;
    // NOP
    // 0x2f3708: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f3708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f370c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f370cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f3710: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2f3710u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2f3714:
    // 0x2f3714: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F3714u;
    {
        const bool branch_taken_0x2f3714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3714u;
        // 0x2f3718: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3714) {
            ctx->pc = 0x2F374Cu;
            goto label_2f374c;
        }
    }
    ctx->pc = 0x2F371Cu;
    // 0x2f371c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2f371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f3720: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2f3720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2f3724: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3724u;
    {
        const bool branch_taken_0x2f3724 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2f3724) {
            ctx->pc = 0x2F3728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3724u;
            // 0x2f3728: 0xae600120  sw          $zero, 0x120($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3748u;
            goto label_2f3748;
        }
    }
    ctx->pc = 0x2F372Cu;
    // 0x2f372c: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2F372Cu;
    SET_GPR_U32(ctx, 31, 0x2F3734u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2F372Cu, 0x2F3734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3734u;
label_2f3734:
    // 0x2f3734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f3734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3738: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3738u;
    {
        const bool branch_taken_0x2f3738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f3738) {
            ctx->pc = 0x2F373Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3738u;
            // 0x2f373c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F374Cu;
            goto label_2f374c;
        }
    }
    ctx->pc = 0x2F3740u;
    // 0x2f3740: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3740u;
    {
        const bool branch_taken_0x2f3740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3740u;
        // 0x2f3744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3740) {
            ctx->pc = 0x2F3750u;
            goto label_2f3750;
        }
    }
    ctx->pc = 0x2F3748u;
label_2f3748:
    // 0x2f3748: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f3748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f374c:
    // 0x2f374c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f374cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3750:
    // 0x2f3750: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3750u;
    {
        const bool branch_taken_0x2f3750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3750) {
            ctx->pc = 0x2F3778u;
            goto label_2f3778;
        }
    }
    ctx->pc = 0x2F3758u;
    // 0x2f3758: 0x8e630120  lw          $v1, 0x120($s3)
    ctx->pc = 0x2f3758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x2f375c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2f375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f3760: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f3760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f3764: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3768u;
    {
        const bool branch_taken_0x2f3768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3768) {
            ctx->pc = 0x2F3778u;
            goto label_2f3778;
        }
    }
    ctx->pc = 0x2F3770u;
    // 0x2f3770: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f3770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3774: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2f3774u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2f3778:
    // 0x2f3778: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x2F3778u;
    SET_GPR_U32(ctx, 31, 0x2F3780u);
    ctx->pc = 0x2F377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3778u;
    // 0x2f377c: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x2F3778u, 0x2F3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3780u;
label_2f3780:
    // 0x2f3780: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f3780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3784: 0x12400180  beqz        $s2, . + 4 + (0x180 << 2)
    ctx->pc = 0x2F3784u;
    {
        const bool branch_taken_0x2f3784 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3784u;
        // 0x2f3788: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3784) {
            ctx->pc = 0x2F3D88u;
            goto label_2f3d88;
        }
    }
    ctx->pc = 0x2F378Cu;
    // 0x2f378c: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2f378cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3790: 0x34420013  ori         $v0, $v0, 0x13
    ctx->pc = 0x2f3790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
    // 0x2f3794: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2f3794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2f3798: 0x34630013  ori         $v1, $v1, 0x13
    ctx->pc = 0x2f3798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19);
    // 0x2f379c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2f379cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2f37a0: 0x34048152  ori         $a0, $zero, 0x8152
    ctx->pc = 0x2f37a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33106);
    // 0x2f37a4: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2f37a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2f37a8: 0x34848012  ori         $a0, $a0, 0x8012
    ctx->pc = 0x2f37a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32786);
    // 0x2f37ac: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x2f37acu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x2f37b0: 0x26920010  addiu       $s2, $s4, 0x10
    ctx->pc = 0x2f37b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2f37b4: 0xfe840010  sd          $a0, 0x10($s4)
    ctx->pc = 0x2f37b4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 4));
    // 0x2f37b8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2f37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f37bc: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x2f37bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x2f37c0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2f37c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2f37c4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2f37c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2f37c8: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x2f37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2f37cc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2f37ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2f37d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F37D0u;
    {
        const bool branch_taken_0x2f37d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37D0u;
        // 0x2f37d4: 0x26920020  addiu       $s2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37d0) {
            ctx->pc = 0x2F37E8u;
            goto label_2f37e8;
        }
    }
    ctx->pc = 0x2F37D8u;
    // 0x2f37d8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2f37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2f37dc: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2f37dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2f37e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F37E0u;
    {
        const bool branch_taken_0x2f37e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37E0u;
        // 0x2f37e4: 0xfe820020  sd          $v0, 0x20($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37e0) {
            ctx->pc = 0x2F37F4u;
            goto label_2f37f4;
        }
    }
    ctx->pc = 0x2F37E8u;
label_2f37e8:
    // 0x2f37e8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2f37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2f37ec: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2f37ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2f37f0: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x2f37f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
label_2f37f4:
    // 0x2f37f4: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2f37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2f37f8: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2f37f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2f37fc: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x2f37fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x2f3800: 0x3c063a00  lui         $a2, 0x3A00
    ctx->pc = 0x2f3800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)14848 << 16));
    // 0x2f3804: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x2f3804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x2f3808: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2f3808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2f380c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f380cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3810: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x2f3810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2f3814: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f3814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3818: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x2f3818u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x2f381c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f381cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3820: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f3820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f3824: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f3828: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f382c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f382cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f3830: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2f3830u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2f3834: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3838: 0xc0c00ac  jal         func_3002B0
    ctx->pc = 0x2F3838u;
    SET_GPR_U32(ctx, 31, 0x2F3840u);
    ctx->pc = 0x2F383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3838u;
    // 0x2f383c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3002B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3002B0u, 0x2F3838u, 0x2F3840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3840u;
label_2f3840:
    // 0x2f3840: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3844: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2f3844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f3848: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x2f3848u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x2f384c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x2f384cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x2f3850: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2f3850u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2f3854: 0x261064a0  addiu       $s0, $s0, 0x64A0
    ctx->pc = 0x2f3854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25760));
    // 0x2f3858: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f3858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f385c: 0x82620101  lb          $v0, 0x101($s3)
    ctx->pc = 0x2f385cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 257)));
    // 0x2f3860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3864: 0x8e650118  lw          $a1, 0x118($s3)
    ctx->pc = 0x2f3864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x2f3868: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f386c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2f386cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f3870: 0xc0544e6  jal         func_151398
    ctx->pc = 0x2F3870u;
    SET_GPR_U32(ctx, 31, 0x2F3878u);
    ctx->pc = 0x2F3874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3870u;
    // 0x2f3874: 0x222300b  movn        $a2, $s1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x2F3870u, 0x2F3878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3878u;
label_2f3878:
    // 0x2f3878: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f3878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f387c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3880: 0xc0544da  jal         func_151368
    ctx->pc = 0x2F3880u;
    SET_GPR_U32(ctx, 31, 0x2F3888u);
    ctx->pc = 0x2F3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3880u;
    // 0x2f3884: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x2F3880u, 0x2F3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3888u;
label_2f3888:
    // 0x2f3888: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f3888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f388c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2f388cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2f3890: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x2f3890u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x2f3894: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x2f3894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x2f3898: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2f3898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2f389c: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x2f389cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2f38a0: 0x8ca476b0  lw          $a0, 0x76B0($a1)
    ctx->pc = 0x2f38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30384)));
    // 0x2f38a4: 0x24424128  addiu       $v0, $v0, 0x4128
    ctx->pc = 0x2f38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16680));
    // 0x2f38a8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f38a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f38ac: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x2f38acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2f38b0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2f38b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f38b4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f38b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f38b8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2f38b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2f38bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f38bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f38c0: 0xc0b5420  jal         func_2D5080
    ctx->pc = 0x2F38C0u;
    SET_GPR_U32(ctx, 31, 0x2F38C8u);
    ctx->pc = 0x2F38C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F38C0u;
    // 0x2f38c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5080u, 0x2F38C0u, 0x2F38C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F38C8u;
label_2f38c8:
    // 0x2f38c8: 0x92640245  lbu         $a0, 0x245($s3)
    ctx->pc = 0x2f38c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 581)));
    // 0x2f38cc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2f38ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2f38d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2f38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f38d4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F38D4u;
    {
        const bool branch_taken_0x2f38d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f38d4) {
            ctx->pc = 0x2F38D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F38D4u;
            // 0x2f38d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F38DCu;
            goto label_2f38dc;
        }
    }
    ctx->pc = 0x2F38DCu;
label_2f38dc:
    // 0x2f38dc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2f38dcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f38e0: 0x92650246  lbu         $a1, 0x246($s3)
    ctx->pc = 0x2f38e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 582)));
    // 0x2f38e4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2f38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2f38e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2f38e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f38ec: 0x0  nop
    ctx->pc = 0x2f38ecu;
    // NOP
    // 0x2f38f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2f38f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2f38f4: 0x82620244  lb          $v0, 0x244($s3)
    ctx->pc = 0x2f38f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x2f38f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f38f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f38fc: 0x0  nop
    ctx->pc = 0x2f38fcu;
    // NOP
    // 0x2f3900: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2f3900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f3904: 0x8e68011c  lw          $t0, 0x11C($s3)
    ctx->pc = 0x2f3904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2f3908: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2f3908u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2f390c: 0x3812  mflo        $a3
    ctx->pc = 0x2f390cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2f3910: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2f3910u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f3914: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f3914u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3918: 0x0  nop
    ctx->pc = 0x2f3918u;
    // NOP
    // 0x2f391c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f391cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3920: 0x460301c3  div.s       $f7, $f0, $f3
    ctx->pc = 0x2f3920u;
    ctx->f[7] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2f3924: 0x2812  mflo        $a1
    ctx->pc = 0x2f3924u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2f3928: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2f3928u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f392c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f392cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3930: 0x0  nop
    ctx->pc = 0x2f3930u;
    // NOP
    // 0x2f3934: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f3934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f3938: 0x46020a03  div.s       $f8, $f1, $f2
    ctx->pc = 0x2f3938u;
    ctx->f[8] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2f393c: 0x1012  mflo        $v0
    ctx->pc = 0x2f393cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f3940: 0x1810  mfhi        $v1
    ctx->pc = 0x2f3940u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f3944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3948: 0x0  nop
    ctx->pc = 0x2f3948u;
    // NOP
    // 0x2f394c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f394cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3950: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3954: 0x0  nop
    ctx->pc = 0x2f3954u;
    // NOP
    // 0x2f3958: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f3958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f395c: 0x46070282  mul.s       $f10, $f0, $f7
    ctx->pc = 0x2f395cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2f3960: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3960u;
    {
        const bool branch_taken_0x2f3960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3960u;
        // 0x2f3964: 0x46080a42  mul.s       $f9, $f1, $f8 (Delay Slot)
        ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3960) {
            ctx->pc = 0x2F3970u;
            goto label_2f3970;
        }
    }
    ctx->pc = 0x2F3968u;
    // 0x2f3968: 0x46075280  add.s       $f10, $f10, $f7
    ctx->pc = 0x2f3968u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[7]);
    // 0x2f396c: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x2f396cu;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_2f3970:
    // 0x2f3970: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2f3970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2f3974: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2f3974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2f3978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3978u;
    {
        const bool branch_taken_0x2f3978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3978u;
        // 0x2f397c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3978) {
            ctx->pc = 0x2F3988u;
            goto label_2f3988;
        }
    }
    ctx->pc = 0x2F3980u;
    // 0x2f3980: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x2f3980u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x2f3984: 0x46004207  neg.s       $f8, $f8
    ctx->pc = 0x2f3984u;
    ctx->f[8] = FPU_NEG_S(ctx->f[8]);
label_2f3988:
    // 0x2f3988: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f3988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f398c: 0xc441b7a8  lwc1        $f1, -0x4858($v0)
    ctx->pc = 0x2f398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3990: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f3990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3994: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2f3994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2f3998: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f3998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2f399c: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x2f399cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2f39a0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2f39a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2f39a4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2f39a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2f39a8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2f39a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2f39ac: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x2f39acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2f39b0: 0xc440b7a8  lwc1        $f0, -0x4858($v0)
    ctx->pc = 0x2f39b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f39b4: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x2f39b4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x2f39b8: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x2f39b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2f39bc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2f39bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f39c0: 0x6a62018f  ldl         $v0, 0x18F($s3)
    ctx->pc = 0x2f39c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f39c4: 0x6e620188  ldr         $v0, 0x188($s3)
    ctx->pc = 0x2f39c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f39c8: 0x6a630197  ldl         $v1, 0x197($s3)
    ctx->pc = 0x2f39c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f39cc: 0x6e630190  ldr         $v1, 0x190($s3)
    ctx->pc = 0x2f39ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f39d0: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2f39d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f39d4: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2f39d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f39d8: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2f39d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f39dc: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2f39dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f39e0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2f39e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f39e4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2f39e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f39e8: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2f39e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f39ec: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2f39ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2f39f0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f39f4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2f39f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2f39f8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2f39f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2f39fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2f39fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2f3a00: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2f3a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f3a04: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2f3a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f3a08: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2f3a08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f3a0c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f3a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2f3a10: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x2f3a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f3a14: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x2f3a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f3a18: 0x6ba2001f  ldl         $v0, 0x1F($sp)
    ctx->pc = 0x2f3a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f3a1c: 0x6fa20018  ldr         $v0, 0x18($sp)
    ctx->pc = 0x2f3a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f3a20: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x2f3a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3a24: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x2f3a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3a28: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x2f3a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3a2c: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x2f3a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3a30: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3a34: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f3a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3a38: 0x0  nop
    ctx->pc = 0x2f3a38u;
    // NOP
    // 0x2f3a3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3A3Cu;
    {
        const bool branch_taken_0x2f3a3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A3Cu;
        // 0x2f3a40: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a3c) {
            ctx->pc = 0x2F3A48u;
            goto label_2f3a48;
        }
    }
    ctx->pc = 0x2F3A44u;
    // 0x2f3a44: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2f3a44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f3a48:
    // 0x2f3a48: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3a4c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f3a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3a50: 0x0  nop
    ctx->pc = 0x2f3a50u;
    // NOP
    // 0x2f3a54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3A54u;
    {
        const bool branch_taken_0x2f3a54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3a54) {
            ctx->pc = 0x2F3A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3A54u;
            // 0x2f3a58: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3A5Cu;
            goto label_2f3a5c;
        }
    }
    ctx->pc = 0x2F3A5Cu;
label_2f3a5c:
    // 0x2f3a5c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f3a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3a60: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f3a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3a64: 0x0  nop
    ctx->pc = 0x2f3a64u;
    // NOP
    // 0x2f3a68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3A68u;
    {
        const bool branch_taken_0x2f3a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3a68) {
            ctx->pc = 0x2F3A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3A68u;
            // 0x2f3a6c: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3A70u;
            goto label_2f3a70;
        }
    }
    ctx->pc = 0x2F3A70u;
label_2f3a70:
    // 0x2f3a70: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2f3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3a74: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f3a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3a78: 0x0  nop
    ctx->pc = 0x2f3a78u;
    // NOP
    // 0x2f3a7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3A7Cu;
    {
        const bool branch_taken_0x2f3a7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3a7c) {
            ctx->pc = 0x2F3A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3A7Cu;
            // 0x2f3a80: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3A84u;
            goto label_2f3a84;
        }
    }
    ctx->pc = 0x2F3A84u;
label_2f3a84:
    // 0x2f3a84: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f3a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3a88: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f3a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3a8c: 0x0  nop
    ctx->pc = 0x2f3a8cu;
    // NOP
    // 0x2f3a90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3A90u;
    {
        const bool branch_taken_0x2f3a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3a90) {
            ctx->pc = 0x2F3A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3A90u;
            // 0x2f3a94: 0xe7a60000  swc1        $f6, 0x0($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3A98u;
            goto label_2f3a98;
        }
    }
    ctx->pc = 0x2F3A98u;
label_2f3a98:
    // 0x2f3a98: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f3a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3a9c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f3a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3aa0: 0x0  nop
    ctx->pc = 0x2f3aa0u;
    // NOP
    // 0x2f3aa4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3AA4u;
    {
        const bool branch_taken_0x2f3aa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3aa4) {
            ctx->pc = 0x2F3AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3AA4u;
            // 0x2f3aa8: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3AACu;
            goto label_2f3aac;
        }
    }
    ctx->pc = 0x2F3AACu;
label_2f3aac:
    // 0x2f3aac: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f3aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ab0: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f3ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3ab4: 0x0  nop
    ctx->pc = 0x2f3ab4u;
    // NOP
    // 0x2f3ab8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3AB8u;
    {
        const bool branch_taken_0x2f3ab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3ab8) {
            ctx->pc = 0x2F3ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3AB8u;
            // 0x2f3abc: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3AC0u;
            goto label_2f3ac0;
        }
    }
    ctx->pc = 0x2F3AC0u;
label_2f3ac0:
    // 0x2f3ac0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2f3ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ac4: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f3ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3ac8: 0x0  nop
    ctx->pc = 0x2f3ac8u;
    // NOP
    // 0x2f3acc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3ACCu;
    {
        const bool branch_taken_0x2f3acc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3acc) {
            ctx->pc = 0x2F3AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3ACCu;
            // 0x2f3ad0: 0xe7a6000c  swc1        $f6, 0xC($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3AD4u;
            goto label_2f3ad4;
        }
    }
    ctx->pc = 0x2F3AD4u;
label_2f3ad4:
    // 0x2f3ad4: 0x8e650114  lw          $a1, 0x114($s3)
    ctx->pc = 0x2f3ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x2f3ad8: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F3AD8u;
    {
        const bool branch_taken_0x2f3ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AD8u;
        // 0x2f3adc: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ad8) {
            ctx->pc = 0x2F3B54u;
            goto label_2f3b54;
        }
    }
    ctx->pc = 0x2F3AE0u;
    // 0x2f3ae0: 0x9262011c  lbu         $v0, 0x11C($s3)
    ctx->pc = 0x2f3ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2f3ae4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2f3ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2f3ae8: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F3AE8u;
    {
        const bool branch_taken_0x2f3ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3ae8) {
            ctx->pc = 0x2F3AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3AE8u;
            // 0x2f3aec: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3B58u;
            goto label_2f3b58;
        }
    }
    ctx->pc = 0x2F3AF0u;
    // 0x2f3af0: 0x90a202b6  lbu         $v0, 0x2B6($a1)
    ctx->pc = 0x2f3af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 694)));
    // 0x2f3af4: 0x90a302b7  lbu         $v1, 0x2B7($a1)
    ctx->pc = 0x2f3af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 695)));
    // 0x2f3af8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2f3af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2f3afc: 0x0  nop
    ctx->pc = 0x2f3afcu;
    // NOP
    // 0x2f3b00: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2f3b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2f3b04: 0x90a402bc  lbu         $a0, 0x2BC($a1)
    ctx->pc = 0x2f3b04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 700)));
    // 0x2f3b08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f3b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f3b0c: 0x0  nop
    ctx->pc = 0x2f3b0cu;
    // NOP
    // 0x2f3b10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2f3b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f3b14: 0xc4a0024c  lwc1        $f0, 0x24C($a1)
    ctx->pc = 0x2f3b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3b18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f3b18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3b1c: 0x0  nop
    ctx->pc = 0x2f3b1cu;
    // NOP
    // 0x2f3b20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f3b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f3b24: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2f3b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3b28: 0x0  nop
    ctx->pc = 0x2f3b28u;
    // NOP
    // 0x2f3b2c: 0x0  nop
    ctx->pc = 0x2f3b2cu;
    // NOP
    // 0x2f3b30: 0x46062103  div.s       $f4, $f4, $f6
    ctx->pc = 0x2f3b30u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[6]);
    // 0x2f3b34: 0x46061083  div.s       $f2, $f2, $f6
    ctx->pc = 0x2f3b34u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[6]);
    // 0x2f3b38: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x2f3b38u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[6]);
    // 0x2f3b3c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2f3b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2f3b40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f3b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f3b44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f3b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f3b48: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2f3b48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2f3b4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3B4Cu;
    {
        const bool branch_taken_0x2f3b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B4Cu;
        // 0x2f3b50: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b4c) {
            ctx->pc = 0x2F3B5Cu;
            goto label_2f3b5c;
        }
    }
    ctx->pc = 0x2F3B54u;
label_2f3b54:
    // 0x2f3b54: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f3b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2f3b58:
    // 0x2f3b58: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2f3b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f3b5c:
    // 0x2f3b5c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2f3b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3b60: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2f3b60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3b64: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2f3b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3b68: 0x26cbb6a0  addiu       $t3, $s6, -0x4960
    ctx->pc = 0x2f3b68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948512));
    // 0x2f3b6c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f3b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3b70: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3b70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f3b74: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2f3b74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f3b78: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2f3b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3b7c: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3b7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f3b80: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x2f3b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x2f3b84: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f3b88: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2f3b88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f3b8c: 0x9cc5b7a8  lwu         $a1, -0x4858($a2)
    ctx->pc = 0x2f3b8cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4294948776)));
    // 0x2f3b90: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f3b90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f3b94: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2f3b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f3b98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3b9c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2f3b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2f3ba0: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x2f3ba0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2f3ba4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f3ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f3ba8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x2f3ba8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x2f3bac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2f3bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2f3bb0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f3bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f3bb4: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x2f3bb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x2f3bb8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x2f3bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2f3bbc: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x2f3bbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x2f3bc0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2f3bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f3bc4: 0x1452825  or          $a1, $t2, $a1
    ctx->pc = 0x2f3bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x2f3bc8: 0x240d0005  addiu       $t5, $zero, 0x5
    ctx->pc = 0x2f3bc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f3bcc: 0xfe450000  sd          $a1, 0x0($s2)
    ctx->pc = 0x2f3bccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 5));
    // 0x2f3bd0: 0x24c9b7a8  addiu       $t1, $a2, -0x4858
    ctx->pc = 0x2f3bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948776));
    // 0x2f3bd4: 0x46075080  add.s       $f2, $f10, $f7
    ctx->pc = 0x2f3bd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[7]);
    // 0x2f3bd8: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x2f3bd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3bdc: 0xc4c0b7a8  lwc1        $f0, -0x4858($a2)
    ctx->pc = 0x2f3bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3be0: 0x460848c0  add.s       $f3, $f9, $f8
    ctx->pc = 0x2f3be0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x2f3be4: 0xfe4e0008  sd          $t6, 0x8($s2)
    ctx->pc = 0x2f3be4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 14));
    // 0x2f3be8: 0x3c103a00  lui         $s0, 0x3A00
    ctx->pc = 0x2f3be8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)14848 << 16));
    // 0x2f3bec: 0x361000f8  ori         $s0, $s0, 0xF8
    ctx->pc = 0x2f3becu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)248);
    // 0x2f3bf0: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2f3bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f3bf4: 0x240f004e  addiu       $t7, $zero, 0x4E
    ctx->pc = 0x2f3bf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2f3bf8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3bfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f3bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c00: 0x8d670004  lw          $a3, 0x4($t3)
    ctx->pc = 0x2f3c00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2f3c04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f3c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c08: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x2f3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2f3c0c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f3c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c10: 0x8ec3b6a0  lw          $v1, -0x4960($s6)
    ctx->pc = 0x2f3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948512)));
    // 0x2f3c14: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2f3c14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2f3c18: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2f3c18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2f3c1c: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x2f3c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x2f3c20: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2f3c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2f3c24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f3c28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f3c2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c30: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x2f3c30u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x2f3c34: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3c38: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x2f3c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3c3c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f3c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f3c40: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2f3c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2f3c44: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x2f3c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3c48: 0xfe4c0008  sd          $t4, 0x8($s2)
    ctx->pc = 0x2f3c48u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 12));
    // 0x2f3c4c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2f3c4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2f3c50: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2f3c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f3c54: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3c58: 0x9d220004  lwu         $v0, 0x4($t1)
    ctx->pc = 0x2f3c58u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2f3c5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f3c60: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x2f3c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x2f3c64: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2f3c64u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2f3c68: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x2f3c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3c6c: 0xfe4e0008  sd          $t6, 0x8($s2)
    ctx->pc = 0x2f3c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 14));
    // 0x2f3c70: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2f3c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f3c74: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3c74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3c78: 0x8d680014  lw          $t0, 0x14($t3)
    ctx->pc = 0x2f3c78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x2f3c7c: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x2f3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x2f3c80: 0x8d630010  lw          $v1, 0x10($t3)
    ctx->pc = 0x2f3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2f3c84: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2f3c84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2f3c88: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2f3c88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2f3c8c: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x2f3c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x2f3c90: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2f3c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2f3c94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f3c98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f3c9c: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x2f3c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x2f3ca0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3ca4: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x2f3ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ca8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2f3ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2f3cac: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2f3cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2f3cb0: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x2f3cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3cb4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2f3cb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2f3cb8: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2f3cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f3cbc: 0xfe4c0008  sd          $t4, 0x8($s2)
    ctx->pc = 0x2f3cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 12));
    // 0x2f3cc0: 0x9d220008  lwu         $v0, 0x8($t1)
    ctx->pc = 0x2f3cc0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2f3cc4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3cc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f3ccc: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x2f3cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x2f3cd0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2f3cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2f3cd4: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x2f3cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3cd8: 0xfe4e0008  sd          $t6, 0x8($s2)
    ctx->pc = 0x2f3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 14));
    // 0x2f3cdc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2f3cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f3ce0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3ce4: 0x8d680024  lw          $t0, 0x24($t3)
    ctx->pc = 0x2f3ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
    // 0x2f3ce8: 0x8d620028  lw          $v0, 0x28($t3)
    ctx->pc = 0x2f3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x2f3cec: 0x8d630020  lw          $v1, 0x20($t3)
    ctx->pc = 0x2f3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x2f3cf0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2f3cf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2f3cf4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2f3cf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2f3cf8: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x2f3cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x2f3cfc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2f3cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2f3d00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f3d04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f3d08: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x2f3d08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x2f3d0c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3d10: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x2f3d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3d14: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2f3d14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f3d18: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2f3d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2f3d1c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x2f3d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3d20: 0xfe4c0008  sd          $t4, 0x8($s2)
    ctx->pc = 0x2f3d20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 12));
    // 0x2f3d24: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2f3d24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2f3d28: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x2f3d28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f3d2c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3d30: 0x9d22000c  lwu         $v0, 0xC($t1)
    ctx->pc = 0x2f3d30u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2f3d34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f3d38: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x2f3d38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x2f3d3c: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x2f3d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x2f3d40: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x2f3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3d44: 0xfe4e0008  sd          $t6, 0x8($s2)
    ctx->pc = 0x2f3d44u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 14));
    // 0x2f3d48: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2f3d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f3d4c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3d50: 0x8d680038  lw          $t0, 0x38($t3)
    ctx->pc = 0x2f3d50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x2f3d54: 0x8d630034  lw          $v1, 0x34($t3)
    ctx->pc = 0x2f3d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 52)));
    // 0x2f3d58: 0x8d620030  lw          $v0, 0x30($t3)
    ctx->pc = 0x2f3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x2f3d5c: 0x8413b  dsra        $t0, $t0, 4
    ctx->pc = 0x2f3d5cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> 4);
    // 0x2f3d60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2f3d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2f3d64: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2f3d64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f3d68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f3d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f3d6c: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x2f3d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x2f3d70: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2f3d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2f3d74: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2f3d74u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2f3d78: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f3d78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f3d7c: 0xfe4f0008  sd          $t7, 0x8($s2)
    ctx->pc = 0x2f3d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 15));
    // 0x2f3d80: 0xc0bfdd2  jal         func_2FF748
    ctx->pc = 0x2F3D80u;
    SET_GPR_U32(ctx, 31, 0x2F3D88u);
    ctx->pc = 0x2F3D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D80u;
    // 0x2f3d84: 0xfe500000  sd          $s0, 0x0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF748u, 0x2F3D80u, 0x2F3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D88u;
label_2f3d88:
    // 0x2f3d88: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f3d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f3d8c:
    // 0x2f3d8c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2f3d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f3d90:
    // 0x2f3d90: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2f3d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f3d94: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2f3d94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f3d98: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2f3d98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f3d9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f3d9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3da0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2f3da0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3da4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f3da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3da8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f3da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f3dac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DACu;
        // 0x2f3db0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3DB4u;
    // 0x2f3db4: 0x0  nop
    ctx->pc = 0x2f3db4u;
    // NOP
    // 0x2f3db8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2f3db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f3dbc: 0x0  nop
    ctx->pc = 0x2f3dbcu;
    // NOP
    ctx->pc = 0x2f3dc0u;
}
